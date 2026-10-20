#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_005D[4096] = {
    1, 0, 2, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 8, 0, 9, 0, 0, 10,
    0, 0, 0, 0, 0, 11, 0, 12, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 15, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 18, 0,
    0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 21, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 24, 0, 0, 25, 0, 0, 0, 0, 0, 26, 27,
    0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0,
    0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 0,
    0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0,
    44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0,
    0, 0, 0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 55,
    0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0,
    0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0,
    69, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 76, 0, 0, 0, 77,
    0, 0, 0, 0, 0, 78, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 82, 0, 83, 0, 0, 0, 0, 0, 84, 0, 85, 0, 86,
    0, 0, 0, 0, 0, 87, 0, 88, 0, 89, 0, 0, 0, 0, 0, 90, 0, 91, 0, 92, 0, 0, 0, 0, 0, 93, 0, 94, 0, 95, 0, 0,
    0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0,
    0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0,
    109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 114, 0, 0, 0, 0, 0, 115, 0, 116, 0, 0, 0, 117, 0,
    0, 0, 0, 0, 118, 0, 119, 0, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 125, 0,
    0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 128, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 137, 0, 0, 0,
    0, 0, 138, 0, 139, 0, 140, 0, 0, 0, 0, 0, 141, 0, 142, 0, 143, 0, 0, 0, 0, 0, 144, 0, 145, 0, 146, 0, 0, 0, 0, 0,
    147, 0, 148, 0, 149, 0, 0, 0, 0, 0, 150, 0, 151, 0, 152, 0, 0, 0, 0, 0, 153, 0, 154, 0, 155, 0, 0, 0, 0, 0, 156, 0,
    157, 0, 158, 0, 0, 0, 0, 0, 159, 0, 160, 0, 161, 0, 0, 0, 0, 0, 162, 0, 163, 0, 164, 0, 0, 0, 0, 0, 165, 0, 166, 0,
    167, 0, 0, 0, 0, 0, 168, 0, 169, 0, 170, 0, 0, 0, 0, 0, 171, 0, 172, 0, 173, 0, 0, 0, 0, 0, 174, 0, 175, 0, 176, 0,
    0, 0, 0, 0, 177, 0, 178, 0, 179, 0, 0, 0, 0, 0, 180, 0, 181, 0, 182, 0, 0, 0, 0, 0, 0, 183, 0, 184, 0, 185, 0, 0,
    0, 0, 0, 0, 186, 0, 187, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 190, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 193, 0, 194, 0,
    0, 0, 0, 0, 0, 195, 0, 196, 0, 197, 0, 0, 0, 0, 0, 0, 198, 0, 199, 0, 200, 0, 0, 0, 0, 0, 201, 0, 202, 0, 203, 0,
    0, 0, 0, 0, 204, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 208, 0,
    0, 0, 0, 0, 0, 209, 0, 210, 0, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 213, 0, 214, 0, 0, 0, 0, 0, 215, 0, 216, 0, 217,
    0, 0, 0, 0, 0, 218, 0, 219, 0, 220, 0, 0, 0, 0, 0, 221, 0, 222, 0, 223, 0, 0, 0, 0, 0, 224, 0, 225, 0, 226, 0, 0,
    0, 0, 0, 227, 0, 228, 0, 229, 0, 0, 0, 0, 0, 230, 0, 231, 0, 232, 0, 0, 0, 0, 0, 233, 0, 234, 0, 235, 0, 0, 0, 0,
    0, 236, 0, 237, 0, 238, 0, 0, 0, 0, 0, 239, 0, 240, 0, 241, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 0,
    251, 0, 0, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0,
    259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0,
    265, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 270, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0,
    0, 0, 0, 274, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0,
    0, 279, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 284,
    0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    291, 0, 292, 0, 0, 0, 0, 0, 293, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 297, 0, 0, 298, 0,
    0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 300, 0, 0, 301, 0, 0, 0, 302, 0, 0, 0, 0, 0, 303, 0, 0, 304, 0, 0, 305, 0, 0,
    0, 0, 0, 306, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 0, 0, 309, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 0, 0, 312, 0, 0,
    313, 0, 0, 0, 314, 0, 0, 0, 0, 0, 315, 0, 0, 316, 0, 317, 0, 0, 0, 0, 0, 318, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0,
    0, 0, 321, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 0, 0, 324, 0, 0, 325, 0, 0, 0, 326, 0, 0, 0, 0, 0, 327, 0, 0, 328,
    0, 0, 0, 329, 0, 0, 0, 0, 0, 330, 0, 0, 331, 0, 332, 0, 0, 0, 0, 0, 333, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    337, 0, 338, 0, 0, 0, 0, 0, 339, 0, 340, 0, 0, 0, 341, 0, 0, 0, 0, 0, 342, 0, 343, 0, 0, 0, 344, 0, 0, 0, 0, 0,
    345, 0, 346, 0, 0, 0, 347, 0, 0, 0, 0, 0, 348, 0, 349, 0, 0, 0, 350, 0, 0, 0, 0, 0, 351, 0, 352, 0, 353, 0, 0, 0,
    0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 358, 0, 0, 0, 359, 0, 0, 0, 0,
    0, 360, 0, 0, 0, 361, 0, 0, 0, 0, 0, 362, 0, 0, 0, 363, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 368, 0,
    0, 0, 0, 0, 369, 0, 370, 0, 0, 0, 371, 0, 0, 0, 0, 0, 372, 0, 373, 0, 374, 0, 0, 0, 0, 0, 375, 0, 376, 0, 377, 0,
    0, 0, 0, 0, 378, 0, 379, 0, 380, 0, 0, 0, 0, 0, 381, 0, 382, 0, 383, 0, 0, 0, 0, 0, 384, 0, 385, 0, 386, 0, 0, 0,
    0, 0, 387, 0, 388, 0, 389, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 394, 0, 0, 0,
    395, 0, 0, 0, 0, 0, 396, 0, 0, 0, 397, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0,
    402, 0, 0, 0, 403, 0, 0, 0, 0, 0, 404, 0, 0, 0, 405, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0,
    0, 0, 0, 0, 410, 0, 0, 0, 411, 0, 0, 0, 0, 0, 412, 0, 0, 0, 413, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0,
    415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    417, 0, 418, 0, 0, 0, 0, 0, 419, 0, 420, 0, 421, 0, 0, 0, 0, 0, 422, 0, 423, 0, 424, 0, 0, 0, 0, 0, 425, 0, 426, 0,
    0, 0, 427, 0, 0, 0, 0, 0, 428, 0, 429, 0, 0, 0, 430, 0, 0, 0, 0, 0, 431, 0, 432, 0, 0, 0, 433, 0, 0, 0, 0, 0,
    434, 0, 435, 0, 0, 0, 436, 0, 0, 0, 0, 0, 437, 0, 438, 0, 0, 0, 439, 0, 0, 0, 0, 0, 440, 0, 441, 0, 0, 0, 442, 0,
    0, 0, 0, 0, 443, 0, 444, 0, 0, 0, 445, 0, 0, 0, 0, 0, 446, 0, 447, 0, 0, 0, 448, 0, 0, 0, 0, 0, 449, 0, 450, 0,
    0, 0, 451, 0, 0, 0, 0, 0, 452, 0, 453, 0, 0, 0, 454, 0, 0, 0, 0, 0, 455, 0, 456, 0, 457, 0, 0, 0, 0, 0, 458, 0,
    459, 0, 0, 0, 460, 0, 0, 0, 0, 0, 461, 0, 462, 0, 0, 0, 463, 0, 0, 0, 0, 0, 464, 0, 465, 0, 0, 0, 466, 0, 0, 0,
    0, 0, 467, 0, 468, 0, 0, 0, 469, 0, 0, 0, 0, 0, 470, 0, 471, 0, 0, 0, 472, 0, 0, 0, 0, 0, 473, 0, 474, 0, 0, 0,
    475, 0, 0, 0, 0, 0, 476, 0, 477, 0, 0, 0, 478, 0, 0, 0, 0, 0, 479, 0, 480, 0, 0, 0, 481, 0, 0, 0, 0, 0, 482, 0,
    483, 0, 0, 0, 484, 0, 0, 0, 0, 0, 485, 0, 486, 0, 0, 0, 487, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    489, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 491, 0, 0, 0, 0, 0, 492, 0, 0, 0, 493, 0, 0, 0, 0, 0, 494, 0, 0, 0, 495, 0, 0, 0, 0, 0, 496, 0, 0, 0,
    0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 500, 0, 0, 0, 501, 0, 0, 0, 0, 0, 502, 0, 0, 0, 503, 0, 0,
    0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 510,
    0, 0, 0, 511, 0, 0, 0, 0, 0, 512, 0, 0, 0, 513, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 517, 0, 518, 0,
    0, 0, 0, 0, 519, 0, 520, 0, 521, 0, 0, 0, 0, 0, 522, 0, 523, 0, 524, 0, 0, 0, 0, 0, 525, 0, 526, 0, 527, 0, 0, 0,
    0, 0, 528, 0, 529, 0, 530, 0, 0, 0, 0, 0, 531, 0, 532, 0, 533, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    535, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0, 0, 539, 0, 0, 0, 540, 0, 0, 0, 0, 0, 541,
    0, 0, 0, 542, 0, 0, 0, 0, 0, 543, 0, 0, 0, 544, 0, 0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 0, 0, 0, 546, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 548, 0, 0, 0, 0, 0, 549, 0, 0, 0, 0, 0, 550, 0, 0, 0, 0, 0, 551, 0, 0, 0, 0, 0, 552, 0,
    0, 0, 0, 0, 553, 0, 0, 0, 0, 0, 554, 0, 0, 0, 0, 0, 555, 0, 0, 0, 0, 0, 556, 0, 0, 0, 0, 0, 557, 0, 0, 0,
    0, 0, 0, 0, 558, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 559, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 560, 0, 0, 0, 0, 0, 561, 0, 0, 0, 562, 0, 0, 0, 0, 0, 563, 0, 0, 0, 564, 0, 0, 0, 0, 0,
    565, 0, 0, 0, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 567, 0, 0, 0, 0, 0, 0, 568, 0, 0,
    0, 0, 0, 569, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 0, 571, 0, 0, 0, 0, 0, 572, 0, 0, 573, 0, 574, 0, 0, 0, 0,
    0, 575, 0, 0, 576, 0, 577, 0, 0, 0, 0, 0, 578, 0, 0, 579, 0, 580, 0, 0, 0, 0, 0, 581, 0, 0, 582, 0, 583, 0, 0, 0,
    0, 0, 584, 0, 0, 585, 0, 586, 0, 0, 0, 0, 0, 587, 0, 0, 588, 0, 589, 0, 0, 0, 0, 0, 590, 0, 0, 591, 0, 592, 0, 0,
    0, 0, 0, 593, 0, 0, 594, 0, 595, 0, 0, 0, 0, 0, 596, 0, 0, 597, 0, 598, 0, 0, 0, 0, 0, 599, 0, 0, 600, 0, 601, 0,
    0, 0, 0, 0, 602, 0, 0, 603, 0, 604, 0, 0, 0, 0, 0, 605, 0, 0, 0, 0, 0, 0, 0, 0, 606, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 607, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 608, 0, 0, 0, 0, 0,
    609, 0, 0, 0, 610, 0, 0, 0, 0, 0, 611, 0, 0, 0, 612, 0, 0, 0, 0, 0, 613, 0, 0, 0, 0, 0, 0, 0, 614, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 615, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 616, 0, 0, 0, 0, 0, 617, 0, 0, 0, 618, 0, 0, 0, 0, 0, 619, 0, 0, 0, 620, 0, 0, 0, 0,
    0, 621, 0, 0, 0, 622, 0, 0, 0, 0, 0, 623, 0, 0, 0, 624, 0, 0, 0, 0, 0, 625, 0, 0, 0, 626, 0, 0, 0, 0, 0, 627,
    0, 0, 0, 0, 0, 0, 0, 0, 628, 0, 0, 0, 0, 629, 0, 0, 630, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 631, 0, 0, 0, 632, 0,
    0, 0, 633, 0, 0, 0, 634, 0, 0, 0, 635, 0, 0, 0, 636, 0, 0, 0, 637, 0, 0, 0, 638, 0, 0, 0, 639, 0, 0, 0, 640, 0,
    0, 0, 641, 0, 0, 0, 642, 0, 0, 0, 643, 0, 0, 0, 644, 0, 0, 0, 645, 0, 0, 0, 646, 0, 0, 0, 647, 0, 0, 0, 648, 0,
    0, 0, 649, 0, 0, 0, 650, 0, 0, 0, 651, 0, 0, 0, 652, 0, 0, 0, 653, 0, 0, 0, 654, 0, 0, 0, 655, 0, 0, 0, 656, 0,
    0, 0, 657, 0, 0, 0, 658, 0, 0, 0, 659, 0, 0, 0, 660, 0, 0, 0, 661, 0, 0, 0, 662, 0, 0, 0, 663, 0, 0, 0, 664, 0,
    0, 0, 665, 0, 0, 0, 666, 0, 0, 0, 667, 0, 0, 0, 668, 0, 0, 0, 669, 0, 0, 0, 670, 0, 0, 0, 671, 0, 0, 0, 672, 0,
    0, 0, 673, 0, 0, 0, 674, 0, 0, 0, 675, 0, 0, 0, 676, 0, 0, 0, 0, 0, 677, 0, 0, 0, 0, 0, 678, 0, 0, 0, 0, 0,
    0, 0, 0, 679, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 680, 0, 681, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 682, 0, 0, 0, 0, 0, 0, 683, 0, 0, 0,
    0, 684, 0, 0, 0, 0, 685, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 686, 0, 687, 0, 0, 0, 0, 0, 0, 0,
};

void unit_005D(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00274000;
    case 2u: goto L_00274008;
    case 3u: goto L_00274010;
    case 4u: goto L_00274020;
    case 5u: goto L_00274038;
    case 6u: goto L_00274040;
    case 7u: goto L_00274050;
    case 8u: goto L_00274068;
    case 9u: goto L_00274070;
    case 10u: goto L_0027407C;
    case 11u: goto L_00274094;
    case 12u: goto L_0027409C;
    case 13u: goto L_002740A8;
    case 14u: goto L_002740C0;
    case 15u: goto L_002740C8;
    case 16u: goto L_002740D8;
    case 17u: goto L_002740F0;
    case 18u: goto L_002740F8;
    case 19u: goto L_00274108;
    case 20u: goto L_00274120;
    case 21u: goto L_00274128;
    case 22u: goto L_00274134;
    case 23u: goto L_0027414C;
    case 24u: goto L_00274154;
    case 25u: goto L_00274160;
    case 26u: goto L_00274178;
    case 27u: goto L_0027417C;
    case 28u: goto L_002741A0;
    case 29u: goto L_002741DC;
    case 30u: goto L_002741F0;
    case 31u: goto L_002742CC;
    case 32u: goto L_002742E4;
    case 33u: goto L_002742F8;
    case 34u: goto L_00274310;
    case 35u: goto L_00274328;
    case 36u: goto L_00274340;
    case 37u: goto L_00274358;
    case 38u: goto L_00274370;
    case 39u: goto L_00274388;
    case 40u: goto L_002743A0;
    case 41u: goto L_002743B8;
    case 42u: goto L_002743D0;
    case 43u: goto L_002743E8;
    case 44u: goto L_00274400;
    case 45u: goto L_00274418;
    case 46u: goto L_00274430;
    case 47u: goto L_00274448;
    case 48u: goto L_00274460;
    case 49u: goto L_00274478;
    case 50u: goto L_00274490;
    case 51u: goto L_002744A4;
    case 52u: goto L_002744BC;
    case 53u: goto L_002744D0;
    case 54u: goto L_002744E8;
    case 55u: goto L_002744FC;
    case 56u: goto L_00274514;
    case 57u: goto L_00274530;
    case 58u: goto L_0027456C;
    case 59u: goto L_002745B0;
    case 60u: goto L_002745C8;
    case 61u: goto L_002745DC;
    case 62u: goto L_002745F4;
    case 63u: goto L_00274610;
    case 64u: goto L_0027464C;
    case 65u: goto L_002746A0;
    case 66u: goto L_002746B8;
    case 67u: goto L_002746D0;
    case 68u: goto L_002746E8;
    case 69u: goto L_00274700;
    case 70u: goto L_00274718;
    case 71u: goto L_00274740;
    case 72u: goto L_0027477C;
    case 73u: goto L_002747C0;
    case 74u: goto L_002747CC;
    case 75u: goto L_002747E4;
    case 76u: goto L_002747EC;
    case 77u: goto L_002747FC;
    case 78u: goto L_00274814;
    case 79u: goto L_0027481C;
    case 80u: goto L_0027482C;
    case 81u: goto L_00274844;
    case 82u: goto L_0027484C;
    case 83u: goto L_00274854;
    case 84u: goto L_0027486C;
    case 85u: goto L_00274874;
    case 86u: goto L_0027487C;
    case 87u: goto L_00274894;
    case 88u: goto L_0027489C;
    case 89u: goto L_002748A4;
    case 90u: goto L_002748BC;
    case 91u: goto L_002748C4;
    case 92u: goto L_002748CC;
    case 93u: goto L_002748E4;
    case 94u: goto L_002748EC;
    case 95u: goto L_002748F4;
    case 96u: goto L_0027490C;
    case 97u: goto L_00274930;
    case 98u: goto L_0027496C;
    case 99u: goto L_002749BC;
    case 100u: goto L_002749D4;
    case 101u: goto L_002749EC;
    case 102u: goto L_00274A04;
    case 103u: goto L_00274A1C;
    case 104u: goto L_00274A34;
    case 105u: goto L_00274A50;
    case 106u: goto L_00274A8C;
    case 107u: goto L_00274AD0;
    case 108u: goto L_00274AE8;
    case 109u: goto L_00274B00;
    case 110u: goto L_00274B18;
    case 111u: goto L_00274B40;
    case 112u: goto L_00274B7C;
    case 113u: goto L_00274BC0;
    case 114u: goto L_00274BC8;
    case 115u: goto L_00274BE0;
    case 116u: goto L_00274BE8;
    case 117u: goto L_00274BF8;
    case 118u: goto L_00274C10;
    case 119u: goto L_00274C18;
    case 120u: goto L_00274C28;
    case 121u: goto L_00274C40;
    case 122u: goto L_00274C48;
    case 123u: goto L_00274C58;
    case 124u: goto L_00274C70;
    case 125u: goto L_00274C78;
    case 126u: goto L_00274C88;
    case 127u: goto L_00274CA0;
    case 128u: goto L_00274CA8;
    case 129u: goto L_00274CB0;
    case 130u: goto L_00274CE0;
    case 131u: goto L_00274CF8;
    case 132u: goto L_00274D20;
    case 133u: goto L_00274D54;
    case 134u: goto L_00274D68;
    case 135u: goto L_00274D7C;
    case 136u: goto L_00274DE8;
    case 137u: goto L_00274DF0;
    case 138u: goto L_00274E08;
    case 139u: goto L_00274E10;
    case 140u: goto L_00274E18;
    case 141u: goto L_00274E30;
    case 142u: goto L_00274E38;
    case 143u: goto L_00274E40;
    case 144u: goto L_00274E58;
    case 145u: goto L_00274E60;
    case 146u: goto L_00274E68;
    case 147u: goto L_00274E80;
    case 148u: goto L_00274E88;
    case 149u: goto L_00274E90;
    case 150u: goto L_00274EA8;
    case 151u: goto L_00274EB0;
    case 152u: goto L_00274EB8;
    case 153u: goto L_00274ED0;
    case 154u: goto L_00274ED8;
    case 155u: goto L_00274EE0;
    case 156u: goto L_00274EF8;
    case 157u: goto L_00274F00;
    case 158u: goto L_00274F08;
    case 159u: goto L_00274F20;
    case 160u: goto L_00274F28;
    case 161u: goto L_00274F30;
    case 162u: goto L_00274F48;
    case 163u: goto L_00274F50;
    case 164u: goto L_00274F58;
    case 165u: goto L_00274F70;
    case 166u: goto L_00274F78;
    case 167u: goto L_00274F80;
    case 168u: goto L_00274F98;
    case 169u: goto L_00274FA0;
    case 170u: goto L_00274FA8;
    case 171u: goto L_00274FC0;
    case 172u: goto L_00274FC8;
    case 173u: goto L_00274FD0;
    case 174u: goto L_00274FE8;
    case 175u: goto L_00274FF0;
    case 176u: goto L_00274FF8;
    case 177u: goto L_00275010;
    case 178u: goto L_00275018;
    case 179u: goto L_00275020;
    case 180u: goto L_00275038;
    case 181u: goto L_00275040;
    case 182u: goto L_00275048;
    case 183u: goto L_00275064;
    case 184u: goto L_0027506C;
    case 185u: goto L_00275074;
    case 186u: goto L_00275090;
    case 187u: goto L_00275098;
    case 188u: goto L_002750A0;
    case 189u: goto L_002750BC;
    case 190u: goto L_002750C4;
    case 191u: goto L_002750CC;
    case 192u: goto L_002750E8;
    case 193u: goto L_002750F0;
    case 194u: goto L_002750F8;
    case 195u: goto L_00275114;
    case 196u: goto L_0027511C;
    case 197u: goto L_00275124;
    case 198u: goto L_00275140;
    case 199u: goto L_00275148;
    case 200u: goto L_00275150;
    case 201u: goto L_00275168;
    case 202u: goto L_00275170;
    case 203u: goto L_00275178;
    case 204u: goto L_00275190;
    case 205u: goto L_00275198;
    case 206u: goto L_002751A8;
    case 207u: goto L_002751E0;
    case 208u: goto L_002751F8;
    case 209u: goto L_00275214;
    case 210u: goto L_0027521C;
    case 211u: goto L_0027522C;
    case 212u: goto L_00275244;
    case 213u: goto L_0027524C;
    case 214u: goto L_00275254;
    case 215u: goto L_0027526C;
    case 216u: goto L_00275274;
    case 217u: goto L_0027527C;
    case 218u: goto L_00275294;
    case 219u: goto L_0027529C;
    case 220u: goto L_002752A4;
    case 221u: goto L_002752BC;
    case 222u: goto L_002752C4;
    case 223u: goto L_002752CC;
    case 224u: goto L_002752E4;
    case 225u: goto L_002752EC;
    case 226u: goto L_002752F4;
    case 227u: goto L_0027530C;
    case 228u: goto L_00275314;
    case 229u: goto L_0027531C;
    case 230u: goto L_00275334;
    case 231u: goto L_0027533C;
    case 232u: goto L_00275344;
    case 233u: goto L_0027535C;
    case 234u: goto L_00275364;
    case 235u: goto L_0027536C;
    case 236u: goto L_00275384;
    case 237u: goto L_0027538C;
    case 238u: goto L_00275394;
    case 239u: goto L_002753AC;
    case 240u: goto L_002753B4;
    case 241u: goto L_002753BC;
    case 242u: goto L_002753D4;
    case 243u: goto L_002753F0;
    case 244u: goto L_00275424;
    case 245u: goto L_00275488;
    case 246u: goto L_002754A0;
    case 247u: goto L_002754B0;
    case 248u: goto L_002754C8;
    case 249u: goto L_002754D8;
    case 250u: goto L_002754F0;
    case 251u: goto L_00275500;
    case 252u: goto L_00275518;
    case 253u: goto L_00275528;
    case 254u: goto L_00275540;
    case 255u: goto L_00275560;
    case 256u: goto L_0027559C;
    case 257u: goto L_002755D0;
    case 258u: goto L_002755E4;
    case 259u: goto L_00275600;
    case 260u: goto L_0027563C;
    case 261u: goto L_002756A0;
    case 262u: goto L_002756B8;
    case 263u: goto L_002756D0;
    case 264u: goto L_002756E8;
    case 265u: goto L_00275700;
    case 266u: goto L_00275718;
    case 267u: goto L_00275730;
    case 268u: goto L_00275748;
    case 269u: goto L_00275760;
    case 270u: goto L_00275778;
    case 271u: goto L_002757A0;
    case 272u: goto L_002757DC;
    case 273u: goto L_00275874;
    case 274u: goto L_0027588C;
    case 275u: goto L_002758A4;
    case 276u: goto L_002758BC;
    case 277u: goto L_002758D4;
    case 278u: goto L_002758EC;
    case 279u: goto L_00275904;
    case 280u: goto L_0027591C;
    case 281u: goto L_00275934;
    case 282u: goto L_0027594C;
    case 283u: goto L_00275964;
    case 284u: goto L_0027597C;
    case 285u: goto L_00275990;
    case 286u: goto L_002759A8;
    case 287u: goto L_002759C0;
    case 288u: goto L_002759D8;
    case 289u: goto L_00275A00;
    case 290u: goto L_00275A3C;
    case 291u: goto L_00275A80;
    case 292u: goto L_00275A88;
    case 293u: goto L_00275AA0;
    case 294u: goto L_00275AAC;
    case 295u: goto L_00275ABC;
    case 296u: goto L_00275AD4;
    case 297u: goto L_00275AEC;
    case 298u: goto L_00275AF8;
    case 299u: goto L_00275B10;
    case 300u: goto L_00275B28;
    case 301u: goto L_00275B34;
    case 302u: goto L_00275B44;
    case 303u: goto L_00275B5C;
    case 304u: goto L_00275B68;
    case 305u: goto L_00275B74;
    case 306u: goto L_00275B8C;
    case 307u: goto L_00275B98;
    case 308u: goto L_00275BA8;
    case 309u: goto L_00275BC0;
    case 310u: goto L_00275BCC;
    case 311u: goto L_00275BDC;
    case 312u: goto L_00275BF4;
    case 313u: goto L_00275C00;
    case 314u: goto L_00275C10;
    case 315u: goto L_00275C28;
    case 316u: goto L_00275C34;
    case 317u: goto L_00275C3C;
    case 318u: goto L_00275C54;
    case 319u: goto L_00275C60;
    case 320u: goto L_00275C70;
    case 321u: goto L_00275C88;
    case 322u: goto L_00275C94;
    case 323u: goto L_00275CA4;
    case 324u: goto L_00275CBC;
    case 325u: goto L_00275CC8;
    case 326u: goto L_00275CD8;
    case 327u: goto L_00275CF0;
    case 328u: goto L_00275CFC;
    case 329u: goto L_00275D0C;
    case 330u: goto L_00275D24;
    case 331u: goto L_00275D30;
    case 332u: goto L_00275D38;
    case 333u: goto L_00275D50;
    case 334u: goto L_00275D54;
    case 335u: goto L_00275D80;
    case 336u: goto L_00275DBC;
    case 337u: goto L_00275E00;
    case 338u: goto L_00275E08;
    case 339u: goto L_00275E20;
    case 340u: goto L_00275E28;
    case 341u: goto L_00275E38;
    case 342u: goto L_00275E50;
    case 343u: goto L_00275E58;
    case 344u: goto L_00275E68;
    case 345u: goto L_00275E80;
    case 346u: goto L_00275E88;
    case 347u: goto L_00275E98;
    case 348u: goto L_00275EB0;
    case 349u: goto L_00275EB8;
    case 350u: goto L_00275EC8;
    case 351u: goto L_00275EE0;
    case 352u: goto L_00275EE8;
    case 353u: goto L_00275EF0;
    case 354u: goto L_00275F08;
    case 355u: goto L_00275F30;
    case 356u: goto L_00275F6C;
    case 357u: goto L_00275FC4;
    case 358u: goto L_00275FDC;
    case 359u: goto L_00275FEC;
    case 360u: goto L_00276004;
    case 361u: goto L_00276014;
    case 362u: goto L_0027602C;
    case 363u: goto L_0027603C;
    case 364u: goto L_00276054;
    case 365u: goto L_00276070;
    case 366u: goto L_002760AC;
    case 367u: goto L_002760F0;
    case 368u: goto L_002760F8;
    case 369u: goto L_00276110;
    case 370u: goto L_00276118;
    case 371u: goto L_00276128;
    case 372u: goto L_00276140;
    case 373u: goto L_00276148;
    case 374u: goto L_00276150;
    case 375u: goto L_00276168;
    case 376u: goto L_00276170;
    case 377u: goto L_00276178;
    case 378u: goto L_00276190;
    case 379u: goto L_00276198;
    case 380u: goto L_002761A0;
    case 381u: goto L_002761B8;
    case 382u: goto L_002761C0;
    case 383u: goto L_002761C8;
    case 384u: goto L_002761E0;
    case 385u: goto L_002761E8;
    case 386u: goto L_002761F0;
    case 387u: goto L_00276208;
    case 388u: goto L_00276210;
    case 389u: goto L_00276218;
    case 390u: goto L_00276230;
    case 391u: goto L_00276250;
    case 392u: goto L_0027628C;
    case 393u: goto L_002762D8;
    case 394u: goto L_002762F0;
    case 395u: goto L_00276300;
    case 396u: goto L_00276318;
    case 397u: goto L_00276328;
    case 398u: goto L_00276340;
    case 399u: goto L_00276360;
    case 400u: goto L_0027639C;
    case 401u: goto L_002763E8;
    case 402u: goto L_00276400;
    case 403u: goto L_00276410;
    case 404u: goto L_00276428;
    case 405u: goto L_00276438;
    case 406u: goto L_00276450;
    case 407u: goto L_00276470;
    case 408u: goto L_002764AC;
    case 409u: goto L_002764F8;
    case 410u: goto L_00276510;
    case 411u: goto L_00276520;
    case 412u: goto L_00276538;
    case 413u: goto L_00276548;
    case 414u: goto L_00276560;
    case 415u: goto L_00276580;
    case 416u: goto L_002765BC;
    case 417u: goto L_00276600;
    case 418u: goto L_00276608;
    case 419u: goto L_00276620;
    case 420u: goto L_00276628;
    case 421u: goto L_00276630;
    case 422u: goto L_00276648;
    case 423u: goto L_00276650;
    case 424u: goto L_00276658;
    case 425u: goto L_00276670;
    case 426u: goto L_00276678;
    case 427u: goto L_00276688;
    case 428u: goto L_002766A0;
    case 429u: goto L_002766A8;
    case 430u: goto L_002766B8;
    case 431u: goto L_002766D0;
    case 432u: goto L_002766D8;
    case 433u: goto L_002766E8;
    case 434u: goto L_00276700;
    case 435u: goto L_00276708;
    case 436u: goto L_00276718;
    case 437u: goto L_00276730;
    case 438u: goto L_00276738;
    case 439u: goto L_00276748;
    case 440u: goto L_00276760;
    case 441u: goto L_00276768;
    case 442u: goto L_00276778;
    case 443u: goto L_00276790;
    case 444u: goto L_00276798;
    case 445u: goto L_002767A8;
    case 446u: goto L_002767C0;
    case 447u: goto L_002767C8;
    case 448u: goto L_002767D8;
    case 449u: goto L_002767F0;
    case 450u: goto L_002767F8;
    case 451u: goto L_00276808;
    case 452u: goto L_00276820;
    case 453u: goto L_00276828;
    case 454u: goto L_00276838;
    case 455u: goto L_00276850;
    case 456u: goto L_00276858;
    case 457u: goto L_00276860;
    case 458u: goto L_00276878;
    case 459u: goto L_00276880;
    case 460u: goto L_00276890;
    case 461u: goto L_002768A8;
    case 462u: goto L_002768B0;
    case 463u: goto L_002768C0;
    case 464u: goto L_002768D8;
    case 465u: goto L_002768E0;
    case 466u: goto L_002768F0;
    case 467u: goto L_00276908;
    case 468u: goto L_00276910;
    case 469u: goto L_00276920;
    case 470u: goto L_00276938;
    case 471u: goto L_00276940;
    case 472u: goto L_00276950;
    case 473u: goto L_00276968;
    case 474u: goto L_00276970;
    case 475u: goto L_00276980;
    case 476u: goto L_00276998;
    case 477u: goto L_002769A0;
    case 478u: goto L_002769B0;
    case 479u: goto L_002769C8;
    case 480u: goto L_002769D0;
    case 481u: goto L_002769E0;
    case 482u: goto L_002769F8;
    case 483u: goto L_00276A00;
    case 484u: goto L_00276A10;
    case 485u: goto L_00276A28;
    case 486u: goto L_00276A30;
    case 487u: goto L_00276A40;
    case 488u: goto L_00276A58;
    case 489u: goto L_00276A80;
    case 490u: goto L_00276ABC;
    case 491u: goto L_00276B08;
    case 492u: goto L_00276B20;
    case 493u: goto L_00276B30;
    case 494u: goto L_00276B48;
    case 495u: goto L_00276B58;
    case 496u: goto L_00276B70;
    case 497u: goto L_00276B90;
    case 498u: goto L_00276BCC;
    case 499u: goto L_00276C24;
    case 500u: goto L_00276C3C;
    case 501u: goto L_00276C4C;
    case 502u: goto L_00276C64;
    case 503u: goto L_00276C74;
    case 504u: goto L_00276C8C;
    case 505u: goto L_00276CB0;
    case 506u: goto L_00276CEC;
    case 507u: goto L_00276D38;
    case 508u: goto L_00276D50;
    case 509u: goto L_00276D64;
    case 510u: goto L_00276D7C;
    case 511u: goto L_00276D8C;
    case 512u: goto L_00276DA4;
    case 513u: goto L_00276DB4;
    case 514u: goto L_00276DCC;
    case 515u: goto L_00276DF0;
    case 516u: goto L_00276E2C;
    case 517u: goto L_00276E70;
    case 518u: goto L_00276E78;
    case 519u: goto L_00276E90;
    case 520u: goto L_00276E98;
    case 521u: goto L_00276EA0;
    case 522u: goto L_00276EB8;
    case 523u: goto L_00276EC0;
    case 524u: goto L_00276EC8;
    case 525u: goto L_00276EE0;
    case 526u: goto L_00276EE8;
    case 527u: goto L_00276EF0;
    case 528u: goto L_00276F08;
    case 529u: goto L_00276F10;
    case 530u: goto L_00276F18;
    case 531u: goto L_00276F30;
    case 532u: goto L_00276F38;
    case 533u: goto L_00276F40;
    case 534u: goto L_00276F58;
    case 535u: goto L_00276F80;
    case 536u: goto L_00276FBC;
    case 537u: goto L_00276FD0;
    case 538u: goto L_0027703C;
    case 539u: goto L_00277054;
    case 540u: goto L_00277064;
    case 541u: goto L_0027707C;
    case 542u: goto L_0027708C;
    case 543u: goto L_002770A4;
    case 544u: goto L_002770B4;
    case 545u: goto L_002770CC;
    case 546u: goto L_002770F0;
    case 547u: goto L_0027712C;
    case 548u: goto L_00277198;
    case 549u: goto L_002771B0;
    case 550u: goto L_002771C8;
    case 551u: goto L_002771E0;
    case 552u: goto L_002771F8;
    case 553u: goto L_00277210;
    case 554u: goto L_00277228;
    case 555u: goto L_00277240;
    case 556u: goto L_00277258;
    case 557u: goto L_00277270;
    case 558u: goto L_00277290;
    case 559u: goto L_002772CC;
    case 560u: goto L_00277318;
    case 561u: goto L_00277330;
    case 562u: goto L_00277340;
    case 563u: goto L_00277358;
    case 564u: goto L_00277368;
    case 565u: goto L_00277380;
    case 566u: goto L_002773A0;
    case 567u: goto L_002773D8;
    case 568u: goto L_002773F4;
    case 569u: goto L_0027740C;
    case 570u: goto L_00277438;
    case 571u: goto L_00277440;
    case 572u: goto L_00277458;
    case 573u: goto L_00277464;
    case 574u: goto L_0027746C;
    case 575u: goto L_00277484;
    case 576u: goto L_00277490;
    case 577u: goto L_00277498;
    case 578u: goto L_002774B0;
    case 579u: goto L_002774BC;
    case 580u: goto L_002774C4;
    case 581u: goto L_002774DC;
    case 582u: goto L_002774E8;
    case 583u: goto L_002774F0;
    case 584u: goto L_00277508;
    case 585u: goto L_00277514;
    case 586u: goto L_0027751C;
    case 587u: goto L_00277534;
    case 588u: goto L_00277540;
    case 589u: goto L_00277548;
    case 590u: goto L_00277560;
    case 591u: goto L_0027756C;
    case 592u: goto L_00277574;
    case 593u: goto L_0027758C;
    case 594u: goto L_00277598;
    case 595u: goto L_002775A0;
    case 596u: goto L_002775B8;
    case 597u: goto L_002775C4;
    case 598u: goto L_002775CC;
    case 599u: goto L_002775E4;
    case 600u: goto L_002775F0;
    case 601u: goto L_002775F8;
    case 602u: goto L_00277610;
    case 603u: goto L_0027761C;
    case 604u: goto L_00277624;
    case 605u: goto L_0027763C;
    case 606u: goto L_00277660;
    case 607u: goto L_0027769C;
    case 608u: goto L_002776E8;
    case 609u: goto L_00277700;
    case 610u: goto L_00277710;
    case 611u: goto L_00277728;
    case 612u: goto L_00277738;
    case 613u: goto L_00277750;
    case 614u: goto L_00277770;
    case 615u: goto L_002777AC;
    case 616u: goto L_0027781C;
    case 617u: goto L_00277834;
    case 618u: goto L_00277844;
    case 619u: goto L_0027785C;
    case 620u: goto L_0027786C;
    case 621u: goto L_00277884;
    case 622u: goto L_00277894;
    case 623u: goto L_002778AC;
    case 624u: goto L_002778BC;
    case 625u: goto L_002778D4;
    case 626u: goto L_002778E4;
    case 627u: goto L_002778FC;
    case 628u: goto L_00277920;
    case 629u: goto L_00277934;
    case 630u: goto L_00277940;
    case 631u: goto L_00277B68;
    case 632u: goto L_00277B78;
    case 633u: goto L_00277B88;
    case 634u: goto L_00277B98;
    case 635u: goto L_00277BA8;
    case 636u: goto L_00277BB8;
    case 637u: goto L_00277BC8;
    case 638u: goto L_00277BD8;
    case 639u: goto L_00277BE8;
    case 640u: goto L_00277BF8;
    case 641u: goto L_00277C08;
    case 642u: goto L_00277C18;
    case 643u: goto L_00277C28;
    case 644u: goto L_00277C38;
    case 645u: goto L_00277C48;
    case 646u: goto L_00277C58;
    case 647u: goto L_00277C68;
    case 648u: goto L_00277C78;
    case 649u: goto L_00277C88;
    case 650u: goto L_00277C98;
    case 651u: goto L_00277CA8;
    case 652u: goto L_00277CB8;
    case 653u: goto L_00277CC8;
    case 654u: goto L_00277CD8;
    case 655u: goto L_00277CE8;
    case 656u: goto L_00277CF8;
    case 657u: goto L_00277D08;
    case 658u: goto L_00277D18;
    case 659u: goto L_00277D28;
    case 660u: goto L_00277D38;
    case 661u: goto L_00277D48;
    case 662u: goto L_00277D58;
    case 663u: goto L_00277D68;
    case 664u: goto L_00277D78;
    case 665u: goto L_00277D88;
    case 666u: goto L_00277D98;
    case 667u: goto L_00277DA8;
    case 668u: goto L_00277DB8;
    case 669u: goto L_00277DC8;
    case 670u: goto L_00277DD8;
    case 671u: goto L_00277DE8;
    case 672u: goto L_00277DF8;
    case 673u: goto L_00277E08;
    case 674u: goto L_00277E18;
    case 675u: goto L_00277E28;
    case 676u: goto L_00277E38;
    case 677u: goto L_00277E50;
    case 678u: goto L_00277E68;
    case 679u: goto L_00277E8C;
    case 680u: goto L_00277EEC;
    case 681u: goto L_00277EF4;
    case 682u: goto L_00277F54;
    case 683u: goto L_00277F70;
    case 684u: goto L_00277F84;
    case 685u: goto L_00277F98;
    case 686u: goto L_00277FD8;
    case 687u: goto L_00277FE0;
    default: bad_entry(c, 0x00274000u); return;
    }
L_00274000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274008u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 206u, depth + 1u); else { c.pc = 0x00281650u; return; } if (c.pc != 0x00274008u) [[unlikely]] return; }
L_00274008:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00274178; } }
L_00274010:
    set32(c.r[2], 0u + 24576u);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274020u); st16((c.r[29].w[0] + 186u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00274020u) [[unlikely]] return; }
L_00274020:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00274178; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274038u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 206u, depth + 1u); else { c.pc = 0x00281650u; return; } if (c.pc != 0x00274038u) [[unlikely]] return; }
L_00274038:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00274178; } }
L_00274040:
    c.r[2].d[0] = 0ull | 49152ull;
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274050u); st16((c.r[29].w[0] + 186u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00274050u) [[unlikely]] return; }
L_00274050:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00274178; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274068u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 206u, depth + 1u); else { c.pc = 0x00281650u; return; } if (c.pc != 0x00274068u) [[unlikely]] return; }
L_00274068:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00274178; } }
L_00274070:
    set32(c.r[4], 0u + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027407Cu); st16((c.r[29].w[0] + 186u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027407Cu) [[unlikely]] return; }
L_0027407C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00274178; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274094u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 107u, depth + 1u); else { c.pc = 0x00285140u; return; } if (c.pc != 0x00274094u) [[unlikely]] return; }
L_00274094:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00274178; } }
L_0027409C:
    set32(c.r[4], 0u + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002740A8u); st16((c.r[29].w[0] + 186u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002740A8u) [[unlikely]] return; }
L_002740A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00274178; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002740C0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 268u, depth + 1u); else { c.pc = 0x00281EF0u; return; } if (c.pc != 0x002740C0u) [[unlikely]] return; }
L_002740C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00274178; } }
L_002740C8:
    set32(c.r[2], 0u + 16384u);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002740D8u); st16((c.r[29].w[0] + 186u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002740D8u) [[unlikely]] return; }
L_002740D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00274178; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002740F0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 268u, depth + 1u); else { c.pc = 0x00281EF0u; return; } if (c.pc != 0x002740F0u) [[unlikely]] return; }
L_002740F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00274178; } }
L_002740F8:
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274108u); st16((c.r[29].w[0] + 186u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00274108u) [[unlikely]] return; }
L_00274108:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00274178; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274120u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 268u, depth + 1u); else { c.pc = 0x00281EF0u; return; } if (c.pc != 0x00274120u) [[unlikely]] return; }
L_00274120:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00274178; } }
L_00274128:
    set32(c.r[4], 0u + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274134u); st16((c.r[29].w[0] + 186u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00274134u) [[unlikely]] return; }
L_00274134:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00274178; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027414Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 206u, depth + 1u); else { c.pc = 0x00281650u; return; } if (c.pc != 0x0027414Cu) [[unlikely]] return; }
L_0027414C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00274178; } }
L_00274154:
    set32(c.r[4], 0u + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274160u); st16((c.r[16].w[0] + 42u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00274160u) [[unlikely]] return; }
L_00274160:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00274178; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274178u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 260u, depth + 1u); else { c.pc = 0x00281DD0u; return; } if (c.pc != 0x00274178u) [[unlikely]] return; }
L_00274178:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0027417C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_002741A0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    set32(c.r[6], 0u + 48u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[19].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[16], c.r[29].w[0] + 128u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002741DCu); set32(c.r[5], c.r[5].w[0] - 25856u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x002741DCu) [[unlikely]] return; }
L_002741DC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[5].w[0] - 25808u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002741F0u); set32(c.r[6], 0u + 48u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x002741F0u) [[unlikely]] return; }
L_002741F0:
    c.r[6].d[0] = ld8((c.r[17].w[0]));
    set32(c.r[8], c.r[29].w[0] + 120u);
    c.r[5].d[0] = ld8((c.r[17].w[0] + 1u));
    set32(c.r[7], c.r[29].w[0] + 168u);
    c.r[4].d[0] = c.r[19].d[0] & 65535ull;
    set32(c.r[3], 0u + 4867u);
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[8].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[6].d[0] = ld8((c.r[17].w[0]));
    c.r[5].d[0] = ld8((c.r[17].w[0] + 1u));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 14;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_002744F0; } }
    set32(c.r[3], 0u + 4866u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002744C4; } }
    set32(c.r[3], 0u + 4865u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00274498; } }
    set32(c.r[3], 0u + 4617u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00274468; } }
    set32(c.r[3], 0u + 4616u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00274438; } }
    set32(c.r[3], 0u + 4615u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00274408; } }
    set32(c.r[3], 0u + 4614u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002743D8; } }
    set32(c.r[3], 0u + 4613u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002743A8; } }
    set32(c.r[3], 0u + 4612u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00274378; } }
    set32(c.r[3], 0u + 4611u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00274348; } }
    set32(c.r[3], 0u + 4610u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00274318; } }
    set32(c.r[3], 0u + 4618u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002742EC; } }
    set32(c.r[3], 0u + 4609u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002742C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00274518; } }
L_002742C0:
    set32(c.r[4], 0u + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002742CCu); st16((c.r[29].w[0] + 170u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002742CCu) [[unlikely]] return; }
L_002742CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00274514; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002742E4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 220u, depth + 1u); else { c.pc = 0x00281860u; return; } if (c.pc != 0x002742E4u) [[unlikely]] return; }
L_002742E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00274514; } }
L_002742EC:
    set32(c.r[4], 0u + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002742F8u); st16((c.r[29].w[0] + 170u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002742F8u) [[unlikely]] return; }
L_002742F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00274514; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274310u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 228u, depth + 1u); else { c.pc = 0x00281980u; return; } if (c.pc != 0x00274310u) [[unlikely]] return; }
L_00274310:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00274514; } }
L_00274318:
    set32(c.r[2], 0u + 4096u);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274328u); st16((c.r[29].w[0] + 170u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00274328u) [[unlikely]] return; }
L_00274328:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00274514; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274340u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 220u, depth + 1u); else { c.pc = 0x00281860u; return; } if (c.pc != 0x00274340u) [[unlikely]] return; }
L_00274340:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00274514; } }
L_00274348:
    set32(c.r[2], 0u + 16384u);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274358u); st16((c.r[29].w[0] + 170u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00274358u) [[unlikely]] return; }
L_00274358:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00274514; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274370u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 220u, depth + 1u); else { c.pc = 0x00281860u; return; } if (c.pc != 0x00274370u) [[unlikely]] return; }
L_00274370:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00274514; } }
L_00274378:
    set32(c.r[2], 0u + 8192u);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274388u); st16((c.r[29].w[0] + 170u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00274388u) [[unlikely]] return; }
L_00274388:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00274514; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002743A0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 220u, depth + 1u); else { c.pc = 0x00281860u; return; } if (c.pc != 0x002743A0u) [[unlikely]] return; }
L_002743A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00274514; } }
L_002743A8:
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002743B8u); st16((c.r[29].w[0] + 170u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002743B8u) [[unlikely]] return; }
L_002743B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00274514; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002743D0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 220u, depth + 1u); else { c.pc = 0x00281860u; return; } if (c.pc != 0x002743D0u) [[unlikely]] return; }
L_002743D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00274514; } }
L_002743D8:
    set32(c.r[2], 0u + 12288u);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002743E8u); st16((c.r[29].w[0] + 170u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002743E8u) [[unlikely]] return; }
L_002743E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00274514; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274400u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 220u, depth + 1u); else { c.pc = 0x00281860u; return; } if (c.pc != 0x00274400u) [[unlikely]] return; }
L_00274400:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00274514; } }
L_00274408:
    c.r[2].d[0] = 0ull | 36864ull;
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274418u); st16((c.r[29].w[0] + 170u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00274418u) [[unlikely]] return; }
L_00274418:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00274514; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274430u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 220u, depth + 1u); else { c.pc = 0x00281860u; return; } if (c.pc != 0x00274430u) [[unlikely]] return; }
L_00274430:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00274514; } }
L_00274438:
    set32(c.r[2], 0u + 24576u);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274448u); st16((c.r[29].w[0] + 170u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00274448u) [[unlikely]] return; }
L_00274448:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00274514; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274460u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 220u, depth + 1u); else { c.pc = 0x00281860u; return; } if (c.pc != 0x00274460u) [[unlikely]] return; }
L_00274460:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00274514; } }
L_00274468:
    c.r[2].d[0] = 0ull | 49152ull;
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274478u); st16((c.r[29].w[0] + 170u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00274478u) [[unlikely]] return; }
L_00274478:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00274514; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274490u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 220u, depth + 1u); else { c.pc = 0x00281860u; return; } if (c.pc != 0x00274490u) [[unlikely]] return; }
L_00274490:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00274514; } }
L_00274498:
    set32(c.r[4], 0u + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002744A4u); st16((c.r[29].w[0] + 170u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002744A4u) [[unlikely]] return; }
L_002744A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00274514; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002744BCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 220u, depth + 1u); else { c.pc = 0x00281860u; return; } if (c.pc != 0x002744BCu) [[unlikely]] return; }
L_002744BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00274514; } }
L_002744C4:
    set32(c.r[4], 0u + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002744D0u); st16((c.r[29].w[0] + 170u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002744D0u) [[unlikely]] return; }
L_002744D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00274514; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002744E8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 232u, depth + 1u); else { c.pc = 0x00281A10u; return; } if (c.pc != 0x002744E8u) [[unlikely]] return; }
L_002744E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00274514; } }
L_002744F0:
    set32(c.r[4], 0u + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002744FCu); st16((c.r[29].w[0] + 170u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002744FCu) [[unlikely]] return; }
L_002744FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00274514; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274514u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 244u, depth + 1u); else { c.pc = 0x00281BB0u; return; } if (c.pc != 0x00274514u) [[unlikely]] return; }
L_00274514:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00274518:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00274530:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[6], 0u + 48u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[19].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[16], c.r[29].w[0] + 80u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027456Cu); set32(c.r[5], c.r[5].w[0] - 25856u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0027456Cu) [[unlikely]] return; }
L_0027456C:
    c.r[6].d[0] = ld8((c.r[17].w[0]));
    set32(c.r[7], c.r[29].w[0] + 120u);
    c.r[5].d[0] = ld8((c.r[17].w[0] + 1u));
    c.r[4].d[0] = c.r[19].d[0] & 65535ull;
    set32(c.r[3], 0u + 6402u);
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_002745D0; } }
    set32(c.r[3], 0u + 6401u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002745A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_002745F8; } }
L_002745A4:
    set32(c.r[4], 0u + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002745B0u); st16((c.r[29].w[0] + 122u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002745B0u) [[unlikely]] return; }
L_002745B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002745F4; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002745C8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 212u, depth + 1u); else { c.pc = 0x00281740u; return; } if (c.pc != 0x002745C8u) [[unlikely]] return; }
L_002745C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002745F4; } }
L_002745D0:
    set32(c.r[4], 0u + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002745DCu); st16((c.r[29].w[0] + 122u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002745DCu) [[unlikely]] return; }
L_002745DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002745F4; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002745F4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 216u, depth + 1u); else { c.pc = 0x002817D0u; return; } if (c.pc != 0x002745F4u) [[unlikely]] return; }
L_002745F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_002745F8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00274610:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[6], 0u + 48u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[19].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[16], c.r[29].w[0] + 80u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027464Cu); set32(c.r[5], c.r[5].w[0] - 25856u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0027464Cu) [[unlikely]] return; }
L_0027464C:
    c.r[6].d[0] = ld8((c.r[17].w[0]));
    set32(c.r[7], c.r[29].w[0] + 120u);
    c.r[5].d[0] = ld8((c.r[17].w[0] + 1u));
    c.r[4].d[0] = c.r[19].d[0] & 65535ull;
    set32(c.r[3], 0u + 8963u);
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_002746F0; } }
    set32(c.r[3], 0u + 8962u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002746C0; } }
    set32(c.r[3], 0u + 8961u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00274690; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0027471C; } }
L_00274690:
    set32(c.r[2], 0u + 4096u);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002746A0u); st16((c.r[16].w[0] + 42u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002746A0u) [[unlikely]] return; }
L_002746A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00274718; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002746B8u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 335u, depth + 1u); else { c.pc = 0x00282830u; return; } if (c.pc != 0x002746B8u) [[unlikely]] return; }
L_002746B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00274718; } }
L_002746C0:
    set32(c.r[2], 0u + 4096u);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002746D0u); st16((c.r[16].w[0] + 42u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002746D0u) [[unlikely]] return; }
L_002746D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00274718; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002746E8u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 335u, depth + 1u); else { c.pc = 0x00282830u; return; } if (c.pc != 0x002746E8u) [[unlikely]] return; }
L_002746E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00274718; } }
L_002746F0:
    set32(c.r[2], 0u + 16384u);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274700u); st16((c.r[16].w[0] + 42u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00274700u) [[unlikely]] return; }
L_00274700:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00274718; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274718u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 335u, depth + 1u); else { c.pc = 0x00282830u; return; } if (c.pc != 0x00274718u) [[unlikely]] return; }
L_00274718:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0027471C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00274740:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[6], 0u + 48u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[19].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[16], c.r[29].w[0] + 80u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027477Cu); set32(c.r[5], c.r[5].w[0] - 25856u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0027477Cu) [[unlikely]] return; }
L_0027477C:
    c.r[5].d[0] = ld8((c.r[17].w[0]));
    c.r[2].d[0] = c.r[19].d[0] & 65535ull;
    c.r[4].d[0] = ld8((c.r[17].w[0] + 1u));
    set32(c.r[3], c.r[2].w[0] - 9217u);
    set32(c.r[6], c.r[29].w[0] + 120u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0027490C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 32512u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00274000u < 16384u) { entry = entries_005D[(t - 0x00274000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002747C0:
    set32(c.r[4], 0u + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002747CCu); st32((c.r[16].w[0] + 44u), 0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002747CCu) [[unlikely]] return; }
L_002747CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027490C; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002747E4u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 341u, depth + 1u); else { c.pc = 0x00282910u; return; } if (c.pc != 0x002747E4u) [[unlikely]] return; }
L_002747E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00274910; } }
L_002747EC:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002747FCu); st32((c.r[16].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002747FCu) [[unlikely]] return; }
L_002747FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027490C; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274814u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 341u, depth + 1u); else { c.pc = 0x00282910u; return; } if (c.pc != 0x00274814u) [[unlikely]] return; }
L_00274814:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027490C; } }
L_0027481C:
    set32(c.r[2], 0u + 2u);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027482Cu); st32((c.r[16].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027482Cu) [[unlikely]] return; }
L_0027482C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027490C; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274844u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 341u, depth + 1u); else { c.pc = 0x00282910u; return; } if (c.pc != 0x00274844u) [[unlikely]] return; }
L_00274844:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027490C; } }
L_0027484C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274854u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00274854u) [[unlikely]] return; }
L_00274854:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027490C; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027486Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 247u, depth + 1u); else { c.pc = 0x0027E420u; return; } if (c.pc != 0x0027486Cu) [[unlikely]] return; }
L_0027486C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027490C; } }
L_00274874:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027487Cu); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027487Cu) [[unlikely]] return; }
L_0027487C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027490C; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274894u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 247u, depth + 1u); else { c.pc = 0x0027E420u; return; } if (c.pc != 0x00274894u) [[unlikely]] return; }
L_00274894:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027490C; } }
L_0027489C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002748A4u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002748A4u) [[unlikely]] return; }
L_002748A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027490C; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002748BCu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 247u, depth + 1u); else { c.pc = 0x0027E420u; return; } if (c.pc != 0x002748BCu) [[unlikely]] return; }
L_002748BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027490C; } }
L_002748C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002748CCu); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002748CCu) [[unlikely]] return; }
L_002748CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027490C; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002748E4u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 247u, depth + 1u); else { c.pc = 0x0027E420u; return; } if (c.pc != 0x002748E4u) [[unlikely]] return; }
L_002748E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027490C; } }
L_002748EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002748F4u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002748F4u) [[unlikely]] return; }
L_002748F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027490C; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027490Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 256u, depth + 1u); else { c.pc = 0x0027E580u; return; } if (c.pc != 0x0027490Cu) [[unlikely]] return; }
L_0027490C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00274910:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00274930:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[6], 0u + 48u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[19].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[16], c.r[29].w[0] + 80u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027496Cu); set32(c.r[5], c.r[5].w[0] - 25856u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0027496Cu) [[unlikely]] return; }
L_0027496C:
    c.r[6].d[0] = ld8((c.r[17].w[0]));
    set32(c.r[7], c.r[29].w[0] + 120u);
    c.r[5].d[0] = ld8((c.r[17].w[0] + 1u));
    c.r[4].d[0] = c.r[19].d[0] & 65535ull;
    set32(c.r[3], 0u + 2307u);
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_00274A0C; } }
    set32(c.r[3], 0u + 2306u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002749DC; } }
    set32(c.r[3], 0u + 2305u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002749B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00274A38; } }
L_002749B0:
    set32(c.r[4], 0u + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002749BCu); st16((c.r[16].w[0] + 42u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002749BCu) [[unlikely]] return; }
L_002749BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00274A34; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002749D4u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 206u, depth + 1u); else { c.pc = 0x00281650u; return; } if (c.pc != 0x002749D4u) [[unlikely]] return; }
L_002749D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00274A34; } }
L_002749DC:
    set32(c.r[2], 0u + 8192u);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002749ECu); st16((c.r[16].w[0] + 42u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002749ECu) [[unlikely]] return; }
L_002749EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00274A34; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274A04u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 206u, depth + 1u); else { c.pc = 0x00281650u; return; } if (c.pc != 0x00274A04u) [[unlikely]] return; }
L_00274A04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00274A34; } }
L_00274A0C:
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274A1Cu); st16((c.r[16].w[0] + 42u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00274A1Cu) [[unlikely]] return; }
L_00274A1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00274A34; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274A34u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 206u, depth + 1u); else { c.pc = 0x00281650u; return; } if (c.pc != 0x00274A34u) [[unlikely]] return; }
L_00274A34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00274A38:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00274A50:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[6], 0u + 48u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[19].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[16], c.r[29].w[0] + 80u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274A8Cu); set32(c.r[5], c.r[5].w[0] - 25712u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x00274A8Cu) [[unlikely]] return; }
L_00274A8C:
    c.r[6].d[0] = ld8((c.r[17].w[0]));
    set32(c.r[7], c.r[29].w[0] + 120u);
    c.r[5].d[0] = ld8((c.r[17].w[0] + 1u));
    c.r[4].d[0] = c.r[19].d[0] & 65535ull;
    set32(c.r[3], 0u + 5634u);
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_00274AF0; } }
    set32(c.r[3], 0u + 5633u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00274AC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00274B1C; } }
L_00274AC4:
    set32(c.r[4], 0u + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274AD0u); st16((c.r[29].w[0] + 122u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00274AD0u) [[unlikely]] return; }
L_00274AD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00274B18; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274AE8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 282u, depth + 1u); else { c.pc = 0x002820F0u; return; } if (c.pc != 0x00274AE8u) [[unlikely]] return; }
L_00274AE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00274B18; } }
L_00274AF0:
    set32(c.r[2], 0u + 8192u);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274B00u); st16((c.r[29].w[0] + 122u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00274B00u) [[unlikely]] return; }
L_00274B00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00274B18; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274B18u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 282u, depth + 1u); else { c.pc = 0x002820F0u; return; } if (c.pc != 0x00274B18u) [[unlikely]] return; }
L_00274B18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00274B1C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00274B40:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[6], 0u + 48u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[19].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[16], c.r[29].w[0] + 80u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274B7Cu); set32(c.r[5], c.r[5].w[0] - 26336u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x00274B7Cu) [[unlikely]] return; }
L_00274B7C:
    c.r[5].d[0] = ld8((c.r[17].w[0]));
    c.r[2].d[0] = c.r[19].d[0] & 65535ull;
    c.r[4].d[0] = ld8((c.r[17].w[0] + 1u));
    set32(c.r[3], c.r[2].w[0] - 2817u);
    set32(c.r[6], c.r[29].w[0] + 120u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00274CF8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 32480u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00274000u < 16384u) { entry = entries_005D[(t - 0x00274000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00274BC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274BC8u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00274BC8u) [[unlikely]] return; }
L_00274BC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00274CF8; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274BE0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 120u, depth + 1u); else { c.pc = 0x002790C0u; return; } if (c.pc != 0x00274BE0u) [[unlikely]] return; }
L_00274BE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00274CFC; } }
L_00274BE8:
    set32(c.r[2], 0u + 4096u);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274BF8u); st16((c.r[29].w[0] + 122u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00274BF8u) [[unlikely]] return; }
L_00274BF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00274CF8; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274C10u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 120u, depth + 1u); else { c.pc = 0x002790C0u; return; } if (c.pc != 0x00274C10u) [[unlikely]] return; }
L_00274C10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00274CF8; } }
L_00274C18:
    set32(c.r[2], 0u + 16384u);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274C28u); st16((c.r[29].w[0] + 122u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00274C28u) [[unlikely]] return; }
L_00274C28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00274CF8; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274C40u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 120u, depth + 1u); else { c.pc = 0x002790C0u; return; } if (c.pc != 0x00274C40u) [[unlikely]] return; }
L_00274C40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00274CF8; } }
L_00274C48:
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274C58u); st16((c.r[29].w[0] + 122u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00274C58u) [[unlikely]] return; }
L_00274C58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00274CF8; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274C70u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 120u, depth + 1u); else { c.pc = 0x002790C0u; return; } if (c.pc != 0x00274C70u) [[unlikely]] return; }
L_00274C70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00274CF8; } }
L_00274C78:
    set32(c.r[2], 0u + 8192u);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274C88u); st16((c.r[29].w[0] + 122u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00274C88u) [[unlikely]] return; }
L_00274C88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00274CF8; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274CA0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 120u, depth + 1u); else { c.pc = 0x002790C0u; return; } if (c.pc != 0x00274CA0u) [[unlikely]] return; }
L_00274CA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00274CF8; } }
L_00274CA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274CB0u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126B58u; return; } if (c.pc != 0x00274CB0u) [[unlikely]] return; }
L_00274CB0:
    set32(c.r[4], 0u + 5u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    mmi::div(c, 0, c.r[2].w[0], c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] - 20640u);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[4], 0u + 64u);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274CE0u); st16((c.r[29].w[0] + 122u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00274CE0u) [[unlikely]] return; }
L_00274CE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00274CF8; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274CF8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 120u, depth + 1u); else { c.pc = 0x002790C0u; return; } if (c.pc != 0x00274CF8u) [[unlikely]] return; }
L_00274CF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00274CFC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00274D20:
    set32(c.r[29], c.r[29].w[0] - 304u);
    set32(c.r[6], 0u + 48u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[18].d[0] = ld16((c.r[5].w[0]));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274D54u); set32(c.r[5], c.r[5].w[0] - 26336u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x00274D54u) [[unlikely]] return; }
L_00274D54:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[5].w[0] - 26240u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274D68u); set32(c.r[6], 0u + 48u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x00274D68u) [[unlikely]] return; }
L_00274D68:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[5].w[0] - 26192u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274D7Cu); set32(c.r[6], 0u + 48u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x00274D7Cu) [[unlikely]] return; }
L_00274D7C:
    c.r[5].d[0] = ld8((c.r[16].w[0]));
    c.r[2].d[0] = c.r[18].d[0] & 65535ull;
    c.r[4].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[3], c.r[2].w[0] - 257u);
    set32(c.r[8], c.r[29].w[0] + 280u);
    set32(c.r[7], c.r[29].w[0] + 232u);
    set32(c.r[6], c.r[29].w[0] + 184u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(47ll) ? 1ull : 0ull;
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[8].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 1u));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 1u));
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 20;
    { const bool t = c.r[1].d[0] == 0ull; st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_002753D4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 32448u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00274000u < 16384u) { entry = entries_005D[(t - 0x00274000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00274DE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274DF0u); set32(c.r[4], 0u + 72u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00274DF0u) [[unlikely]] return; }
L_00274DF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002753D4; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274E08u); set32(c.r[6], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_005F(c, 118u, depth + 1u); else { c.pc = 0x0027D200u; return; } if (c.pc != 0x00274E08u) [[unlikely]] return; }
L_00274E08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_002753D8; } }
L_00274E10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274E18u); set32(c.r[4], 0u + 72u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00274E18u) [[unlikely]] return; }
L_00274E18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002753D4; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274E30u); set32(c.r[6], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_005F(c, 210u, depth + 1u); else { c.pc = 0x0027DF30u; return; } if (c.pc != 0x00274E30u) [[unlikely]] return; }
L_00274E30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002753D4; } }
L_00274E38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274E40u); set32(c.r[4], 0u + 72u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00274E40u) [[unlikely]] return; }
L_00274E40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002753D4; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274E58u); set32(c.r[6], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_005F(c, 135u, depth + 1u); else { c.pc = 0x0027D400u; return; } if (c.pc != 0x00274E58u) [[unlikely]] return; }
L_00274E58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002753D4; } }
L_00274E60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274E68u); set32(c.r[4], 0u + 72u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00274E68u) [[unlikely]] return; }
L_00274E68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002753D4; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274E80u); set32(c.r[6], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_005F(c, 141u, depth + 1u); else { c.pc = 0x0027D4E0u; return; } if (c.pc != 0x00274E80u) [[unlikely]] return; }
L_00274E80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002753D4; } }
L_00274E88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274E90u); set32(c.r[4], 0u + 72u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00274E90u) [[unlikely]] return; }
L_00274E90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002753D4; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274EA8u); set32(c.r[6], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_005F(c, 148u, depth + 1u); else { c.pc = 0x0027D5D0u; return; } if (c.pc != 0x00274EA8u) [[unlikely]] return; }
L_00274EA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002753D4; } }
L_00274EB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274EB8u); set32(c.r[4], 0u + 72u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00274EB8u) [[unlikely]] return; }
L_00274EB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002753D4; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274ED0u); set32(c.r[6], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_005F(c, 155u, depth + 1u); else { c.pc = 0x0027D6C0u; return; } if (c.pc != 0x00274ED0u) [[unlikely]] return; }
L_00274ED0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002753D4; } }
L_00274ED8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274EE0u); set32(c.r[4], 0u + 72u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00274EE0u) [[unlikely]] return; }
L_00274EE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002753D4; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274EF8u); set32(c.r[6], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_005F(c, 163u, depth + 1u); else { c.pc = 0x0027D7C0u; return; } if (c.pc != 0x00274EF8u) [[unlikely]] return; }
L_00274EF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002753D4; } }
L_00274F00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274F08u); set32(c.r[4], 0u + 72u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00274F08u) [[unlikely]] return; }
L_00274F08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002753D4; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274F20u); set32(c.r[6], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_005F(c, 170u, depth + 1u); else { c.pc = 0x0027D8B0u; return; } if (c.pc != 0x00274F20u) [[unlikely]] return; }
L_00274F20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002753D4; } }
L_00274F28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274F30u); set32(c.r[4], 0u + 72u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00274F30u) [[unlikely]] return; }
L_00274F30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002753D4; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274F48u); set32(c.r[6], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_005F(c, 175u, depth + 1u); else { c.pc = 0x0027D980u; return; } if (c.pc != 0x00274F48u) [[unlikely]] return; }
L_00274F48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002753D4; } }
L_00274F50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274F58u); set32(c.r[4], 0u + 72u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00274F58u) [[unlikely]] return; }
L_00274F58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002753D4; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274F70u); set32(c.r[6], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_005F(c, 180u, depth + 1u); else { c.pc = 0x0027DA50u; return; } if (c.pc != 0x00274F70u) [[unlikely]] return; }
L_00274F70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002753D4; } }
L_00274F78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274F80u); set32(c.r[4], 0u + 72u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00274F80u) [[unlikely]] return; }
L_00274F80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002753D4; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274F98u); set32(c.r[6], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_005F(c, 185u, depth + 1u); else { c.pc = 0x0027DB20u; return; } if (c.pc != 0x00274F98u) [[unlikely]] return; }
L_00274F98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002753D4; } }
L_00274FA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274FA8u); set32(c.r[4], 0u + 72u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00274FA8u) [[unlikely]] return; }
L_00274FA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002753D4; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274FC0u); set32(c.r[6], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_005F(c, 190u, depth + 1u); else { c.pc = 0x0027DBF0u; return; } if (c.pc != 0x00274FC0u) [[unlikely]] return; }
L_00274FC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002753D4; } }
L_00274FC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274FD0u); set32(c.r[4], 0u + 72u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00274FD0u) [[unlikely]] return; }
L_00274FD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002753D4; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274FE8u); set32(c.r[6], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_005F(c, 195u, depth + 1u); else { c.pc = 0x0027DCC0u; return; } if (c.pc != 0x00274FE8u) [[unlikely]] return; }
L_00274FE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002753D4; } }
L_00274FF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274FF8u); set32(c.r[4], 0u + 72u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00274FF8u) [[unlikely]] return; }
L_00274FF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002753D4; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275010u); set32(c.r[6], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_005F(c, 200u, depth + 1u); else { c.pc = 0x0027DD90u; return; } if (c.pc != 0x00275010u) [[unlikely]] return; }
L_00275010:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002753D4; } }
L_00275018:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275020u); set32(c.r[4], 0u + 72u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00275020u) [[unlikely]] return; }
L_00275020:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002753D4; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275038u); set32(c.r[6], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_005F(c, 205u, depth + 1u); else { c.pc = 0x0027DE60u; return; } if (c.pc != 0x00275038u) [[unlikely]] return; }
L_00275038:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002753D4; } }
L_00275040:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275048u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00275048u) [[unlikely]] return; }
L_00275048:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002753D4; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 6u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275064u); set32(c.r[7], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_005E(c, 40u, depth + 1u); else { c.pc = 0x00278540u; return; } if (c.pc != 0x00275064u) [[unlikely]] return; }
L_00275064:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002753D4; } }
L_0027506C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275074u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00275074u) [[unlikely]] return; }
L_00275074:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002753D4; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 18u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275090u); set32(c.r[7], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_005E(c, 40u, depth + 1u); else { c.pc = 0x00278540u; return; } if (c.pc != 0x00275090u) [[unlikely]] return; }
L_00275090:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002753D4; } }
L_00275098:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002750A0u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002750A0u) [[unlikely]] return; }
L_002750A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002753D4; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 30u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002750BCu); set32(c.r[7], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_005E(c, 40u, depth + 1u); else { c.pc = 0x00278540u; return; } if (c.pc != 0x002750BCu) [[unlikely]] return; }
L_002750BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002753D4; } }
L_002750C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002750CCu); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002750CCu) [[unlikely]] return; }
L_002750CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002753D4; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 60u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002750E8u); set32(c.r[7], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_005E(c, 40u, depth + 1u); else { c.pc = 0x00278540u; return; } if (c.pc != 0x002750E8u) [[unlikely]] return; }
L_002750E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002753D4; } }
L_002750F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002750F8u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002750F8u) [[unlikely]] return; }
L_002750F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002753D4; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 90u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275114u); set32(c.r[7], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_005E(c, 40u, depth + 1u); else { c.pc = 0x00278540u; return; } if (c.pc != 0x00275114u) [[unlikely]] return; }
L_00275114:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002753D4; } }
L_0027511C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275124u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00275124u) [[unlikely]] return; }
L_00275124:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002753D4; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 240u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275140u); set32(c.r[7], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_005E(c, 40u, depth + 1u); else { c.pc = 0x00278540u; return; } if (c.pc != 0x00275140u) [[unlikely]] return; }
L_00275140:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002753D4; } }
L_00275148:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275150u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00275150u) [[unlikely]] return; }
L_00275150:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002753D4; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275168u); set32(c.r[6], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_005E(c, 32u, depth + 1u); else { c.pc = 0x00278440u; return; } if (c.pc != 0x00275168u) [[unlikely]] return; }
L_00275168:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002753D4; } }
L_00275170:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275178u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00275178u) [[unlikely]] return; }
L_00275178:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002753D4; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275190u); set32(c.r[6], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_005E(c, 36u, depth + 1u); else { c.pc = 0x002784C0u; return; } if (c.pc != 0x00275190u) [[unlikely]] return; }
L_00275190:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002753D4; } }
L_00275198:
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[4], 0u + 10u);
    set32(c.r[6], c.r[2].w[0] + 440u);
    c.budget -= 4;
L_002751A8:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002751A8u | kUnwind; return; } goto L_002751A8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 132u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 10497u);  if (t) { goto L_00275204; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002751E0u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002751E0u) [[unlikely]] return; }
L_002751E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002753D4; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002751F8u); set32(c.r[6], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_005E(c, 44u, depth + 1u); else { c.pc = 0x002785D0u; return; } if (c.pc != 0x002751F8u) [[unlikely]] return; }
L_002751F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002753D4; } }
    set32(c.r[2], 0u + 10497u);
    c.budget -= 1;
L_00275204:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st16((c.r[29].w[0] + 300u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275214u); set32(c.r[5], c.r[29].w[0] + 300u);  if (depth < kMaxDepth) unit_005D(c, 630u, depth + 1u); else { c.pc = 0x00277940u; return; } if (c.pc != 0x00275214u) [[unlikely]] return; }
L_00275214:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002753D4; } }
L_0027521C:
    set32(c.r[2], 0u + 90u);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027522Cu); st16((c.r[29].w[0] + 242u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027522Cu) [[unlikely]] return; }
L_0027522C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002753D4; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275244u); set32(c.r[6], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_005E(c, 96u, depth + 1u); else { c.pc = 0x00278D70u; return; } if (c.pc != 0x00275244u) [[unlikely]] return; }
L_00275244:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002753D4; } }
L_0027524C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275254u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00275254u) [[unlikely]] return; }
L_00275254:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002753D4; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027526Cu); set32(c.r[6], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_005E(c, 100u, depth + 1u); else { c.pc = 0x00278DF0u; return; } if (c.pc != 0x0027526Cu) [[unlikely]] return; }
L_0027526C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002753D4; } }
L_00275274:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027527Cu); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027527Cu) [[unlikely]] return; }
L_0027527C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002753D4; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275294u); set32(c.r[6], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_005E(c, 57u, depth + 1u); else { c.pc = 0x00278800u; return; } if (c.pc != 0x00275294u) [[unlikely]] return; }
L_00275294:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002753D4; } }
L_0027529C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002752A4u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002752A4u) [[unlikely]] return; }
L_002752A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002753D4; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002752BCu); set32(c.r[6], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_005E(c, 50u, depth + 1u); else { c.pc = 0x002786C0u; return; } if (c.pc != 0x002752BCu) [[unlikely]] return; }
L_002752BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002753D4; } }
L_002752C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002752CCu); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002752CCu) [[unlikely]] return; }
L_002752CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002753D4; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002752E4u); set32(c.r[6], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_005E(c, 61u, depth + 1u); else { c.pc = 0x00278880u; return; } if (c.pc != 0x002752E4u) [[unlikely]] return; }
L_002752E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002753D4; } }
L_002752EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002752F4u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002752F4u) [[unlikely]] return; }
L_002752F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002753D4; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027530Cu); set32(c.r[6], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_005E(c, 70u, depth + 1u); else { c.pc = 0x002789B0u; return; } if (c.pc != 0x0027530Cu) [[unlikely]] return; }
L_0027530C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002753D4; } }
L_00275314:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027531Cu); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027531Cu) [[unlikely]] return; }
L_0027531C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002753D4; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275334u); set32(c.r[6], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_005E(c, 76u, depth + 1u); else { c.pc = 0x00278A90u; return; } if (c.pc != 0x00275334u) [[unlikely]] return; }
L_00275334:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002753D4; } }
L_0027533C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275344u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00275344u) [[unlikely]] return; }
L_00275344:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002753D4; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027535Cu); set32(c.r[6], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_005E(c, 82u, depth + 1u); else { c.pc = 0x00278B70u; return; } if (c.pc != 0x0027535Cu) [[unlikely]] return; }
L_0027535C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002753D4; } }
L_00275364:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027536Cu); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027536Cu) [[unlikely]] return; }
L_0027536C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002753D4; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275384u); set32(c.r[6], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_005E(c, 90u, depth + 1u); else { c.pc = 0x00278CA0u; return; } if (c.pc != 0x00275384u) [[unlikely]] return; }
L_00275384:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002753D4; } }
L_0027538C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275394u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00275394u) [[unlikely]] return; }
L_00275394:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002753D4; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002753ACu); set32(c.r[6], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_005E(c, 104u, depth + 1u); else { c.pc = 0x00278E80u; return; } if (c.pc != 0x002753ACu) [[unlikely]] return; }
L_002753AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002753D4; } }
L_002753B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002753BCu); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002753BCu) [[unlikely]] return; }
L_002753BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002753D4; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002753D4u); set32(c.r[6], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_005E(c, 112u, depth + 1u); else { c.pc = 0x00278FA0u; return; } if (c.pc != 0x002753D4u) [[unlikely]] return; }
L_002753D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002753D8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 304u);  c.pc = t; return; }
L_002753F0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[6], 0u + 48u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = ld16((c.r[5].w[0]));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275424u); set32(c.r[5], c.r[5].w[0] - 25904u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x00275424u) [[unlikely]] return; }
L_00275424:
    c.r[6].d[0] = ld8((c.r[18].w[0]));
    set32(c.r[7], c.r[29].w[0] + 104u);
    c.r[5].d[0] = ld8((c.r[18].w[0] + 1u));
    c.r[4].d[0] = c.r[17].d[0] & 65535ull;
    set32(c.r[3], 0u + 4101u);
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_00275520; } }
    set32(c.r[3], 0u + 4100u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002754F8; } }
    set32(c.r[3], 0u + 4099u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002754D0; } }
    set32(c.r[3], 0u + 4098u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002754A8; } }
    set32(c.r[3], 0u + 4097u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00275480; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00275544; } }
L_00275480:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275488u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00275488u) [[unlikely]] return; }
L_00275488:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00275540; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002754A0u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_005E(c, 198u, depth + 1u); else { c.pc = 0x00279C40u; return; } if (c.pc != 0x002754A0u) [[unlikely]] return; }
L_002754A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00275540; } }
L_002754A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002754B0u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002754B0u) [[unlikely]] return; }
L_002754B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00275540; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002754C8u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_005E(c, 190u, depth + 1u); else { c.pc = 0x00279B40u; return; } if (c.pc != 0x002754C8u) [[unlikely]] return; }
L_002754C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00275540; } }
L_002754D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002754D8u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002754D8u) [[unlikely]] return; }
L_002754D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00275540; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002754F0u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_005E(c, 186u, depth + 1u); else { c.pc = 0x00279AB0u; return; } if (c.pc != 0x002754F0u) [[unlikely]] return; }
L_002754F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00275540; } }
L_002754F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275500u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00275500u) [[unlikely]] return; }
L_00275500:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00275540; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275518u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_005E(c, 194u, depth + 1u); else { c.pc = 0x00279BC0u; return; } if (c.pc != 0x00275518u) [[unlikely]] return; }
L_00275518:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00275540; } }
L_00275520:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275528u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00275528u) [[unlikely]] return; }
L_00275528:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00275540; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275540u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_005E(c, 202u, depth + 1u); else { c.pc = 0x00279CC0u; return; } if (c.pc != 0x00275540u) [[unlikely]] return; }
L_00275540:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00275544:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00275560:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[6], 0u + 48u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[19].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[16], c.r[29].w[0] + 80u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027559Cu); set32(c.r[5], c.r[5].w[0] - 25088u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0027559Cu) [[unlikely]] return; }
L_0027559C:
    c.r[6].d[0] = ld8((c.r[17].w[0]));
    set32(c.r[7], c.r[29].w[0] + 120u);
    c.r[5].d[0] = ld8((c.r[17].w[0] + 1u));
    c.r[4].d[0] = c.r[19].d[0] & 65535ull;
    set32(c.r[3], 0u + 3841u);
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_002755C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_002755E8; } }
L_002755C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002755D0u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002755D0u) [[unlikely]] return; }
L_002755D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002755E4; } }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002755E4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 176u, depth + 1u); else { c.pc = 0x00279920u; return; } if (c.pc != 0x002755E4u) [[unlikely]] return; }
L_002755E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_002755E8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00275600:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[6], 0u + 48u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[19].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[16], c.r[29].w[0] + 80u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027563Cu); set32(c.r[5], c.r[5].w[0] - 25760u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0027563Cu) [[unlikely]] return; }
L_0027563C:
    c.r[6].d[0] = ld8((c.r[17].w[0]));
    set32(c.r[7], c.r[29].w[0] + 120u);
    c.r[5].d[0] = ld8((c.r[17].w[0] + 1u));
    c.r[4].d[0] = c.r[19].d[0] & 65535ull;
    set32(c.r[3], 0u + 4357u);
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_00275750; } }
    set32(c.r[3], 0u + 4356u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00275720; } }
    set32(c.r[3], 0u + 4355u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002756F0; } }
    set32(c.r[3], 0u + 4354u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002756C0; } }
    set32(c.r[3], 0u + 4353u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00275698; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0027577C; } }
L_00275698:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002756A0u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002756A0u) [[unlikely]] return; }
L_002756A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00275778; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002756B8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 329u, depth + 1u); else { c.pc = 0x00282750u; return; } if (c.pc != 0x002756B8u) [[unlikely]] return; }
L_002756B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00275778; } }
L_002756C0:
    set32(c.r[2], 0u + 4096u);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002756D0u); st16((c.r[29].w[0] + 122u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002756D0u) [[unlikely]] return; }
L_002756D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00275778; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002756E8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 329u, depth + 1u); else { c.pc = 0x00282750u; return; } if (c.pc != 0x002756E8u) [[unlikely]] return; }
L_002756E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00275778; } }
L_002756F0:
    set32(c.r[2], 0u + 16384u);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275700u); st16((c.r[29].w[0] + 122u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00275700u) [[unlikely]] return; }
L_00275700:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00275778; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275718u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 329u, depth + 1u); else { c.pc = 0x00282750u; return; } if (c.pc != 0x00275718u) [[unlikely]] return; }
L_00275718:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00275778; } }
L_00275720:
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275730u); st16((c.r[29].w[0] + 122u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00275730u) [[unlikely]] return; }
L_00275730:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00275778; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275748u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 329u, depth + 1u); else { c.pc = 0x00282750u; return; } if (c.pc != 0x00275748u) [[unlikely]] return; }
L_00275748:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00275778; } }
L_00275750:
    set32(c.r[2], 0u + 8192u);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275760u); st16((c.r[29].w[0] + 122u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00275760u) [[unlikely]] return; }
L_00275760:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00275778; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275778u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 329u, depth + 1u); else { c.pc = 0x00282750u; return; } if (c.pc != 0x00275778u) [[unlikely]] return; }
L_00275778:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0027577C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002757A0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[6], 0u + 48u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[19].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[16], c.r[29].w[0] + 80u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002757DCu); set32(c.r[5], c.r[5].w[0] - 26288u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x002757DCu) [[unlikely]] return; }
L_002757DC:
    c.r[6].d[0] = ld8((c.r[17].w[0]));
    set32(c.r[7], c.r[29].w[0] + 120u);
    c.r[5].d[0] = ld8((c.r[17].w[0] + 1u));
    c.r[4].d[0] = c.r[19].d[0] & 65535ull;
    set32(c.r[3], 0u + 9748u);
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_002759D8; } }
    set32(c.r[3], 0u + 9736u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002759B0; } }
    set32(c.r[3], 0u + 9735u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00275984; } }
    set32(c.r[3], 0u + 9734u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00275954; } }
    set32(c.r[3], 0u + 9733u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00275924; } }
    set32(c.r[3], 0u + 9732u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002758F4; } }
    set32(c.r[3], 0u + 9731u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002758C4; } }
    set32(c.r[3], 0u + 9730u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00275894; } }
    set32(c.r[3], 0u + 9729u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00275868; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_002759DC; } }
L_00275868:
    st32((c.r[16].w[0] + 44u), c.r[3].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275874u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00275874u) [[unlikely]] return; }
L_00275874:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002759D8; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027588Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 18u, depth + 1u); else { c.pc = 0x0027C1F0u; return; } if (c.pc != 0x0027588Cu) [[unlikely]] return; }
L_0027588C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002759D8; } }
L_00275894:
    set32(c.r[2], 0u + 38u);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002758A4u); st32((c.r[16].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002758A4u) [[unlikely]] return; }
L_002758A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002759D8; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002758BCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 18u, depth + 1u); else { c.pc = 0x0027C1F0u; return; } if (c.pc != 0x002758BCu) [[unlikely]] return; }
L_002758BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002759D8; } }
L_002758C4:
    set32(c.r[2], 0u + 37u);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002758D4u); st32((c.r[16].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002758D4u) [[unlikely]] return; }
L_002758D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002759D8; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002758ECu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 18u, depth + 1u); else { c.pc = 0x0027C1F0u; return; } if (c.pc != 0x002758ECu) [[unlikely]] return; }
L_002758EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002759D8; } }
L_002758F4:
    set32(c.r[2], 0u + 37u);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275904u); st32((c.r[16].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00275904u) [[unlikely]] return; }
L_00275904:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002759D8; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027591Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 18u, depth + 1u); else { c.pc = 0x0027C1F0u; return; } if (c.pc != 0x0027591Cu) [[unlikely]] return; }
L_0027591C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002759D8; } }
L_00275924:
    set32(c.r[2], 0u + 37u);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275934u); st32((c.r[16].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00275934u) [[unlikely]] return; }
L_00275934:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002759D8; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027594Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 18u, depth + 1u); else { c.pc = 0x0027C1F0u; return; } if (c.pc != 0x0027594Cu) [[unlikely]] return; }
L_0027594C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002759D8; } }
L_00275954:
    set32(c.r[2], 0u + 37u);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275964u); st32((c.r[16].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00275964u) [[unlikely]] return; }
L_00275964:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002759D8; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027597Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 18u, depth + 1u); else { c.pc = 0x0027C1F0u; return; } if (c.pc != 0x0027597Cu) [[unlikely]] return; }
L_0027597C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002759D8; } }
L_00275984:
    st32((c.r[16].w[0] + 44u), c.r[3].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275990u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00275990u) [[unlikely]] return; }
L_00275990:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002759D8; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002759A8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 18u, depth + 1u); else { c.pc = 0x0027C1F0u; return; } if (c.pc != 0x002759A8u) [[unlikely]] return; }
L_002759A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002759D8; } }
L_002759B0:
    set32(c.r[2], 0u + 47u);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002759C0u); st32((c.r[16].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002759C0u) [[unlikely]] return; }
L_002759C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002759D8; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002759D8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 18u, depth + 1u); else { c.pc = 0x0027C1F0u; return; } if (c.pc != 0x002759D8u) [[unlikely]] return; }
L_002759D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_002759DC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00275A00:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[6], 0u + 48u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[29].w[0] + 80u);
    c.r[19].d[0] = ld16((c.r[5].w[0]));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275A3Cu); set32(c.r[5], c.r[5].w[0] - 26288u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x00275A3Cu) [[unlikely]] return; }
L_00275A3C:
    c.r[4].d[0] = ld8((c.r[16].w[0]));
    c.r[2].d[0] = c.r[19].d[0] & 65535ull;
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[5], c.r[29].w[0] + 120u);
    set32(c.r[2], c.r[2].w[0] - 5121u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00275D54; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 32256u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00274000u < 16384u) { entry = entries_005D[(t - 0x00274000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00275A80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275A88u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00275A88u) [[unlikely]] return; }
L_00275A88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00275AA4; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275AA0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 1u, depth + 1u); else { c.pc = 0x0027C000u; return; } if (c.pc != 0x00275AA0u) [[unlikely]] return; }
L_00275AA0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00275AA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00275D58; } }
L_00275AAC:
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275ABCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 316u, depth + 1u); else { c.pc = 0x00263E10u; return; } if (c.pc != 0x00275ABCu) [[unlikely]] return; }
L_00275ABC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00275D54; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275AD4u); st32((c.r[17].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00275AD4u) [[unlikely]] return; }
L_00275AD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00275AF0; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275AECu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 10u, depth + 1u); else { c.pc = 0x0027C100u; return; } if (c.pc != 0x00275AECu) [[unlikely]] return; }
L_00275AEC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00275AF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00275D54; } }
L_00275AF8:
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[4], 0u + 64u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 368u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275B10u); st32((c.r[17].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00275B10u) [[unlikely]] return; }
L_00275B10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00275B2C; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275B28u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 107u, depth + 1u); else { c.pc = 0x0027D040u; return; } if (c.pc != 0x00275B28u) [[unlikely]] return; }
L_00275B28:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00275B2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00275D54; } }
L_00275B34:
    set32(c.r[2], 0u + 2u);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275B44u); st32((c.r[17].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00275B44u) [[unlikely]] return; }
L_00275B44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00275B60; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275B5Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 107u, depth + 1u); else { c.pc = 0x0027D040u; return; } if (c.pc != 0x00275B5Cu) [[unlikely]] return; }
L_00275B5C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00275B60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00275D54; } }
L_00275B68:
    set32(c.r[4], 0u + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275B74u); st32((c.r[17].w[0] + 44u), 0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00275B74u) [[unlikely]] return; }
L_00275B74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00275B90; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275B8Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 107u, depth + 1u); else { c.pc = 0x0027D040u; return; } if (c.pc != 0x00275B8Cu) [[unlikely]] return; }
L_00275B8C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00275B90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00275D54; } }
L_00275B98:
    set32(c.r[2], 0u + 3u);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275BA8u); st32((c.r[17].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00275BA8u) [[unlikely]] return; }
L_00275BA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00275BC4; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275BC0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 107u, depth + 1u); else { c.pc = 0x0027D040u; return; } if (c.pc != 0x00275BC0u) [[unlikely]] return; }
L_00275BC0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00275BC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00275D54; } }
L_00275BCC:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275BDCu); st32((c.r[17].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00275BDCu) [[unlikely]] return; }
L_00275BDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00275BF8; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275BF4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 107u, depth + 1u); else { c.pc = 0x0027D040u; return; } if (c.pc != 0x00275BF4u) [[unlikely]] return; }
L_00275BF4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00275BF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00275D54; } }
L_00275C00:
    set32(c.r[2], 0u + 11u);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275C10u); st32((c.r[17].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00275C10u) [[unlikely]] return; }
L_00275C10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00275C2C; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275C28u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 10u, depth + 1u); else { c.pc = 0x0027C100u; return; } if (c.pc != 0x00275C28u) [[unlikely]] return; }
L_00275C28:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00275C2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00275D54; } }
L_00275C34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275C3Cu); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00275C3Cu) [[unlikely]] return; }
L_00275C3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00275C58; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275C54u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 93u, depth + 1u); else { c.pc = 0x0027CDD0u; return; } if (c.pc != 0x00275C54u) [[unlikely]] return; }
L_00275C54:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00275C58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00275D54; } }
L_00275C60:
    set32(c.r[2], 0u + 5u);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275C70u); st32((c.r[17].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00275C70u) [[unlikely]] return; }
L_00275C70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00275C8C; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275C88u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 10u, depth + 1u); else { c.pc = 0x0027C100u; return; } if (c.pc != 0x00275C88u) [[unlikely]] return; }
L_00275C88:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00275C8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00275D54; } }
L_00275C94:
    set32(c.r[2], 0u + 52u);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275CA4u); st32((c.r[17].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00275CA4u) [[unlikely]] return; }
L_00275CA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00275CC0; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275CBCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 10u, depth + 1u); else { c.pc = 0x0027C100u; return; } if (c.pc != 0x00275CBCu) [[unlikely]] return; }
L_00275CBC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00275CC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00275D54; } }
L_00275CC8:
    set32(c.r[2], 0u + 35u);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275CD8u); st32((c.r[17].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00275CD8u) [[unlikely]] return; }
L_00275CD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00275CF4; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275CF0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 10u, depth + 1u); else { c.pc = 0x0027C100u; return; } if (c.pc != 0x00275CF0u) [[unlikely]] return; }
L_00275CF0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00275CF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00275D54; } }
L_00275CFC:
    set32(c.r[2], 0u + 5135u);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275D0Cu); st32((c.r[17].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00275D0Cu) [[unlikely]] return; }
L_00275D0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00275D28; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275D24u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 18u, depth + 1u); else { c.pc = 0x0027C1F0u; return; } if (c.pc != 0x00275D24u) [[unlikely]] return; }
L_00275D24:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00275D28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00275D54; } }
L_00275D30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275D38u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00275D38u) [[unlikely]] return; }
L_00275D38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00275D54; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275D50u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 265u, depth + 1u); else { c.pc = 0x0027E6D0u; return; } if (c.pc != 0x00275D50u) [[unlikely]] return; }
L_00275D50:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00275D54:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00275D58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00275D80:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[6], 0u + 48u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[19].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[16], c.r[29].w[0] + 80u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275DBCu); set32(c.r[5], c.r[5].w[0] - 25760u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x00275DBCu) [[unlikely]] return; }
L_00275DBC:
    c.r[5].d[0] = ld8((c.r[17].w[0]));
    c.r[2].d[0] = c.r[19].d[0] & 65535ull;
    c.r[4].d[0] = ld8((c.r[17].w[0] + 1u));
    set32(c.r[3], c.r[2].w[0] - 7937u);
    set32(c.r[6], c.r[29].w[0] + 120u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00275F08; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 32192u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00274000u < 16384u) { entry = entries_005D[(t - 0x00274000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00275E00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275E08u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00275E08u) [[unlikely]] return; }
L_00275E08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00275F08; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275E20u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 274u, depth + 1u); else { c.pc = 0x00281FE0u; return; } if (c.pc != 0x00275E20u) [[unlikely]] return; }
L_00275E20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00275F0C; } }
L_00275E28:
    set32(c.r[2], 0u + 4096u);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275E38u); st16((c.r[29].w[0] + 122u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00275E38u) [[unlikely]] return; }
L_00275E38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00275F08; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275E50u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 274u, depth + 1u); else { c.pc = 0x00281FE0u; return; } if (c.pc != 0x00275E50u) [[unlikely]] return; }
L_00275E50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00275F08; } }
L_00275E58:
    set32(c.r[2], 0u + 16384u);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275E68u); st16((c.r[29].w[0] + 122u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00275E68u) [[unlikely]] return; }
L_00275E68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00275F08; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275E80u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 274u, depth + 1u); else { c.pc = 0x00281FE0u; return; } if (c.pc != 0x00275E80u) [[unlikely]] return; }
L_00275E80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00275F08; } }
L_00275E88:
    set32(c.r[2], 0u + 8192u);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275E98u); st16((c.r[29].w[0] + 122u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00275E98u) [[unlikely]] return; }
L_00275E98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00275F08; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275EB0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 274u, depth + 1u); else { c.pc = 0x00281FE0u; return; } if (c.pc != 0x00275EB0u) [[unlikely]] return; }
L_00275EB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00275F08; } }
L_00275EB8:
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275EC8u); st16((c.r[29].w[0] + 122u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00275EC8u) [[unlikely]] return; }
L_00275EC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00275F08; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275EE0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 274u, depth + 1u); else { c.pc = 0x00281FE0u; return; } if (c.pc != 0x00275EE0u) [[unlikely]] return; }
L_00275EE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00275F08; } }
L_00275EE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275EF0u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00275EF0u) [[unlikely]] return; }
L_00275EF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00275F08; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275F08u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 278u, depth + 1u); else { c.pc = 0x00282070u; return; } if (c.pc != 0x00275F08u) [[unlikely]] return; }
L_00275F08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00275F0C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00275F30:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[6], 0u + 48u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[19].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[16], c.r[29].w[0] + 80u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275F6Cu); set32(c.r[5], c.r[5].w[0] - 25760u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x00275F6Cu) [[unlikely]] return; }
L_00275F6C:
    c.r[6].d[0] = ld8((c.r[17].w[0]));
    set32(c.r[7], c.r[29].w[0] + 120u);
    c.r[5].d[0] = ld8((c.r[17].w[0] + 1u));
    c.r[4].d[0] = c.r[19].d[0] & 65535ull;
    set32(c.r[3], 0u + 8708u);
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_00276034; } }
    set32(c.r[3], 0u + 8707u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0027600C; } }
    set32(c.r[3], 0u + 8706u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00275FE4; } }
    set32(c.r[3], 0u + 8705u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00275FBC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00276058; } }
L_00275FBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275FC4u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00275FC4u) [[unlikely]] return; }
L_00275FC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00276054; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275FDCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 78u, depth + 1u); else { c.pc = 0x0027CB70u; return; } if (c.pc != 0x00275FDCu) [[unlikely]] return; }
L_00275FDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00276054; } }
L_00275FE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275FECu); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00275FECu) [[unlikely]] return; }
L_00275FEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00276054; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276004u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 101u, depth + 1u); else { c.pc = 0x0027CF20u; return; } if (c.pc != 0x00276004u) [[unlikely]] return; }
L_00276004:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00276054; } }
L_0027600C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276014u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00276014u) [[unlikely]] return; }
L_00276014:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00276054; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027602Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 83u, depth + 1u); else { c.pc = 0x0027CC20u; return; } if (c.pc != 0x0027602Cu) [[unlikely]] return; }
L_0027602C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00276054; } }
L_00276034:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027603Cu); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027603Cu) [[unlikely]] return; }
L_0027603C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00276054; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276054u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 87u, depth + 1u); else { c.pc = 0x0027CCC0u; return; } if (c.pc != 0x00276054u) [[unlikely]] return; }
L_00276054:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00276058:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00276070:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[6], 0u + 48u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[19].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[16], c.r[29].w[0] + 80u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002760ACu); set32(c.r[5], c.r[5].w[0] - 26288u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x002760ACu) [[unlikely]] return; }
L_002760AC:
    c.r[5].d[0] = ld8((c.r[17].w[0]));
    c.r[2].d[0] = c.r[19].d[0] & 65535ull;
    c.r[4].d[0] = ld8((c.r[17].w[0] + 1u));
    set32(c.r[3], c.r[2].w[0] - 11009u);
    set32(c.r[6], c.r[29].w[0] + 120u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00276230; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 32160u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00274000u < 16384u) { entry = entries_005D[(t - 0x00274000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002760F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002760F8u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002760F8u) [[unlikely]] return; }
L_002760F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00276230; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276110u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 62u, depth + 1u); else { c.pc = 0x0027C970u; return; } if (c.pc != 0x00276110u) [[unlikely]] return; }
L_00276110:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00276234; } }
L_00276118:
    set32(c.r[2], 0u + 11u);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276128u); st32((c.r[16].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00276128u) [[unlikely]] return; }
L_00276128:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00276230; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276140u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 10u, depth + 1u); else { c.pc = 0x0027C100u; return; } if (c.pc != 0x00276140u) [[unlikely]] return; }
L_00276140:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00276230; } }
L_00276148:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276150u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00276150u) [[unlikely]] return; }
L_00276150:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00276230; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276168u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 44u, depth + 1u); else { c.pc = 0x0027C6A0u; return; } if (c.pc != 0x00276168u) [[unlikely]] return; }
L_00276168:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00276230; } }
L_00276170:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276178u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00276178u) [[unlikely]] return; }
L_00276178:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00276230; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276190u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 66u, depth + 1u); else { c.pc = 0x0027C9F0u; return; } if (c.pc != 0x00276190u) [[unlikely]] return; }
L_00276190:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00276230; } }
L_00276198:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002761A0u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002761A0u) [[unlikely]] return; }
L_002761A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00276230; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002761B8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 70u, depth + 1u); else { c.pc = 0x0027CA70u; return; } if (c.pc != 0x002761B8u) [[unlikely]] return; }
L_002761B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00276230; } }
L_002761C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002761C8u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002761C8u) [[unlikely]] return; }
L_002761C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00276230; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002761E0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 74u, depth + 1u); else { c.pc = 0x0027CAF0u; return; } if (c.pc != 0x002761E0u) [[unlikely]] return; }
L_002761E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00276230; } }
L_002761E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002761F0u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002761F0u) [[unlikely]] return; }
L_002761F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00276230; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276208u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 56u, depth + 1u); else { c.pc = 0x0027C880u; return; } if (c.pc != 0x00276208u) [[unlikely]] return; }
L_00276208:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00276230; } }
L_00276210:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276218u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00276218u) [[unlikely]] return; }
L_00276218:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00276230; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276230u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 36u, depth + 1u); else { c.pc = 0x0027C540u; return; } if (c.pc != 0x00276230u) [[unlikely]] return; }
L_00276230:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00276234:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00276250:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[6], 0u + 48u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[19].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[16], c.r[29].w[0] + 80u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027628Cu); set32(c.r[5], c.r[5].w[0] - 25760u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0027628Cu) [[unlikely]] return; }
L_0027628C:
    c.r[6].d[0] = ld8((c.r[17].w[0]));
    set32(c.r[7], c.r[29].w[0] + 120u);
    c.r[5].d[0] = ld8((c.r[17].w[0] + 1u));
    c.r[4].d[0] = c.r[19].d[0] & 65535ull;
    set32(c.r[3], 0u + 10243u);
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_00276320; } }
    set32(c.r[3], 0u + 10242u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002762F8; } }
    set32(c.r[3], 0u + 10241u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002762D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00276344; } }
L_002762D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002762D8u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002762D8u) [[unlikely]] return; }
L_002762D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00276340; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002762F0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 411u, depth + 1u); else { c.pc = 0x00283340u; return; } if (c.pc != 0x002762F0u) [[unlikely]] return; }
L_002762F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00276340; } }
L_002762F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276300u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00276300u) [[unlikely]] return; }
L_00276300:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00276340; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276318u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 411u, depth + 1u); else { c.pc = 0x00283340u; return; } if (c.pc != 0x00276318u) [[unlikely]] return; }
L_00276318:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00276340; } }
L_00276320:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276328u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00276328u) [[unlikely]] return; }
L_00276328:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00276340; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276340u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 411u, depth + 1u); else { c.pc = 0x00283340u; return; } if (c.pc != 0x00276340u) [[unlikely]] return; }
L_00276340:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00276344:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00276360:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[6], 0u + 48u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[19].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[16], c.r[29].w[0] + 80u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027639Cu); set32(c.r[5], c.r[5].w[0] - 26288u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0027639Cu) [[unlikely]] return; }
L_0027639C:
    c.r[6].d[0] = ld8((c.r[17].w[0]));
    set32(c.r[7], c.r[29].w[0] + 120u);
    c.r[5].d[0] = ld8((c.r[17].w[0] + 1u));
    c.r[4].d[0] = c.r[19].d[0] & 65535ull;
    set32(c.r[3], 0u + 10755u);
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_00276430; } }
    set32(c.r[3], 0u + 10754u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00276408; } }
    set32(c.r[3], 0u + 10753u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002763E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00276454; } }
L_002763E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002763E8u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002763E8u) [[unlikely]] return; }
L_002763E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00276450; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276400u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005D(c, 677u, depth + 1u); else { c.pc = 0x00277E50u; return; } if (c.pc != 0x00276400u) [[unlikely]] return; }
L_00276400:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00276450; } }
L_00276408:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276410u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00276410u) [[unlikely]] return; }
L_00276410:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00276450; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276428u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 18u, depth + 1u); else { c.pc = 0x00278260u; return; } if (c.pc != 0x00276428u) [[unlikely]] return; }
L_00276428:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00276450; } }
L_00276430:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276438u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00276438u) [[unlikely]] return; }
L_00276438:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00276450; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276450u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 25u, depth + 1u); else { c.pc = 0x00278350u; return; } if (c.pc != 0x00276450u) [[unlikely]] return; }
L_00276450:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00276454:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00276470:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[6], 0u + 48u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[19].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[16], c.r[29].w[0] + 80u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002764ACu); set32(c.r[5], c.r[5].w[0] - 26288u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x002764ACu) [[unlikely]] return; }
L_002764AC:
    c.r[6].d[0] = ld8((c.r[17].w[0]));
    set32(c.r[7], c.r[29].w[0] + 120u);
    c.r[5].d[0] = ld8((c.r[17].w[0] + 1u));
    c.r[4].d[0] = c.r[19].d[0] & 65535ull;
    set32(c.r[3], 0u + 11523u);
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_00276540; } }
    set32(c.r[3], 0u + 11522u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00276518; } }
    set32(c.r[3], 0u + 11521u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002764F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00276564; } }
L_002764F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002764F8u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002764F8u) [[unlikely]] return; }
L_002764F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00276560; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276510u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005D(c, 683u, depth + 1u); else { c.pc = 0x00277F70u; return; } if (c.pc != 0x00276510u) [[unlikely]] return; }
L_00276510:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00276560; } }
L_00276518:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276520u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00276520u) [[unlikely]] return; }
L_00276520:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00276560; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276538u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 14u, depth + 1u); else { c.pc = 0x002781D0u; return; } if (c.pc != 0x00276538u) [[unlikely]] return; }
L_00276538:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00276560; } }
L_00276540:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276548u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00276548u) [[unlikely]] return; }
L_00276548:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00276560; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276560u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 6u, depth + 1u); else { c.pc = 0x00278080u; return; } if (c.pc != 0x00276560u) [[unlikely]] return; }
L_00276560:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00276564:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00276580:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[6], 0u + 48u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[19].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[16], c.r[29].w[0] + 80u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002765BCu); set32(c.r[5], c.r[5].w[0] - 25760u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x002765BCu) [[unlikely]] return; }
L_002765BC:
    c.r[5].d[0] = ld8((c.r[17].w[0]));
    c.r[2].d[0] = c.r[19].d[0] & 65535ull;
    c.r[4].d[0] = ld8((c.r[17].w[0] + 1u));
    set32(c.r[3], c.r[2].w[0] - 3073u);
    set32(c.r[6], c.r[29].w[0] + 120u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(25ll) ? 1ull : 0ull;
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00276A58; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 32112u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00274000u < 16384u) { entry = entries_005D[(t - 0x00274000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00276600:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276608u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00276608u) [[unlikely]] return; }
L_00276608:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00276A58; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276620u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0065(c, 433u, depth + 1u); else { c.pc = 0x00297910u; return; } if (c.pc != 0x00276620u) [[unlikely]] return; }
L_00276620:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00276A5C; } }
L_00276628:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276630u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00276630u) [[unlikely]] return; }
L_00276630:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00276A58; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276648u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0065(c, 441u, depth + 1u); else { c.pc = 0x00297A50u; return; } if (c.pc != 0x00276648u) [[unlikely]] return; }
L_00276648:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00276A58; } }
L_00276650:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276658u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00276658u) [[unlikely]] return; }
L_00276658:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00276A58; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276670u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0065(c, 451u, depth + 1u); else { c.pc = 0x00297BE0u; return; } if (c.pc != 0x00276670u) [[unlikely]] return; }
L_00276670:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00276A58; } }
L_00276678:
    set32(c.r[2], 0u + 4096u);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276688u); st16((c.r[29].w[0] + 122u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00276688u) [[unlikely]] return; }
L_00276688:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00276A58; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002766A0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0065(c, 441u, depth + 1u); else { c.pc = 0x00297A50u; return; } if (c.pc != 0x002766A0u) [[unlikely]] return; }
L_002766A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00276A58; } }
L_002766A8:
    set32(c.r[2], 0u + 16384u);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002766B8u); st16((c.r[29].w[0] + 122u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002766B8u) [[unlikely]] return; }
L_002766B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00276A58; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002766D0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0065(c, 441u, depth + 1u); else { c.pc = 0x00297A50u; return; } if (c.pc != 0x002766D0u) [[unlikely]] return; }
L_002766D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00276A58; } }
L_002766D8:
    set32(c.r[2], 0u + 8192u);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002766E8u); st16((c.r[29].w[0] + 122u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002766E8u) [[unlikely]] return; }
L_002766E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00276A58; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276700u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0065(c, 441u, depth + 1u); else { c.pc = 0x00297A50u; return; } if (c.pc != 0x00276700u) [[unlikely]] return; }
L_00276700:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00276A58; } }
L_00276708:
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276718u); st16((c.r[29].w[0] + 122u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00276718u) [[unlikely]] return; }
L_00276718:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00276A58; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276730u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0065(c, 441u, depth + 1u); else { c.pc = 0x00297A50u; return; } if (c.pc != 0x00276730u) [[unlikely]] return; }
L_00276730:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00276A58; } }
L_00276738:
    set32(c.r[2], 0u + 12288u);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276748u); st16((c.r[29].w[0] + 122u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00276748u) [[unlikely]] return; }
L_00276748:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00276A58; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276760u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0065(c, 441u, depth + 1u); else { c.pc = 0x00297A50u; return; } if (c.pc != 0x00276760u) [[unlikely]] return; }
L_00276760:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00276A58; } }
L_00276768:
    set32(c.r[2], 0u + 24576u);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276778u); st16((c.r[29].w[0] + 122u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00276778u) [[unlikely]] return; }
L_00276778:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00276A58; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276790u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0065(c, 441u, depth + 1u); else { c.pc = 0x00297A50u; return; } if (c.pc != 0x00276790u) [[unlikely]] return; }
L_00276790:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00276A58; } }
L_00276798:
    set32(c.r[2], 0u + 4096u);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002767A8u); st16((c.r[29].w[0] + 122u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002767A8u) [[unlikely]] return; }
L_002767A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00276A58; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002767C0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0065(c, 461u, depth + 1u); else { c.pc = 0x00297D60u; return; } if (c.pc != 0x002767C0u) [[unlikely]] return; }
L_002767C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00276A58; } }
L_002767C8:
    set32(c.r[2], 0u + 16384u);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002767D8u); st16((c.r[29].w[0] + 122u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002767D8u) [[unlikely]] return; }
L_002767D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00276A58; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002767F0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0065(c, 461u, depth + 1u); else { c.pc = 0x00297D60u; return; } if (c.pc != 0x002767F0u) [[unlikely]] return; }
L_002767F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00276A58; } }
L_002767F8:
    set32(c.r[2], 0u + 8192u);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276808u); st16((c.r[29].w[0] + 122u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00276808u) [[unlikely]] return; }
L_00276808:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00276A58; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276820u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0065(c, 461u, depth + 1u); else { c.pc = 0x00297D60u; return; } if (c.pc != 0x00276820u) [[unlikely]] return; }
L_00276820:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00276A58; } }
L_00276828:
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276838u); st16((c.r[29].w[0] + 122u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00276838u) [[unlikely]] return; }
L_00276838:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00276A58; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276850u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0065(c, 461u, depth + 1u); else { c.pc = 0x00297D60u; return; } if (c.pc != 0x00276850u) [[unlikely]] return; }
L_00276850:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00276A58; } }
L_00276858:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276860u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00276860u) [[unlikely]] return; }
L_00276860:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00276A58; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276878u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0065(c, 471u, depth + 1u); else { c.pc = 0x00297EF0u; return; } if (c.pc != 0x00276878u) [[unlikely]] return; }
L_00276878:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00276A58; } }
L_00276880:
    set32(c.r[2], 0u + 4096u);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276890u); st16((c.r[29].w[0] + 122u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00276890u) [[unlikely]] return; }
L_00276890:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00276A58; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002768A8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0065(c, 433u, depth + 1u); else { c.pc = 0x00297910u; return; } if (c.pc != 0x002768A8u) [[unlikely]] return; }
L_002768A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00276A58; } }
L_002768B0:
    set32(c.r[2], 0u + 16384u);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002768C0u); st16((c.r[29].w[0] + 122u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002768C0u) [[unlikely]] return; }
L_002768C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00276A58; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002768D8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0065(c, 433u, depth + 1u); else { c.pc = 0x00297910u; return; } if (c.pc != 0x002768D8u) [[unlikely]] return; }
L_002768D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00276A58; } }
L_002768E0:
    set32(c.r[2], 0u + 8192u);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002768F0u); st16((c.r[29].w[0] + 122u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002768F0u) [[unlikely]] return; }
L_002768F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00276A58; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276908u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0065(c, 433u, depth + 1u); else { c.pc = 0x00297910u; return; } if (c.pc != 0x00276908u) [[unlikely]] return; }
L_00276908:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00276A58; } }
L_00276910:
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276920u); st16((c.r[29].w[0] + 122u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00276920u) [[unlikely]] return; }
L_00276920:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00276A58; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276938u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0065(c, 433u, depth + 1u); else { c.pc = 0x00297910u; return; } if (c.pc != 0x00276938u) [[unlikely]] return; }
L_00276938:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00276A58; } }
L_00276940:
    set32(c.r[2], 0u + 12288u);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276950u); st16((c.r[29].w[0] + 122u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00276950u) [[unlikely]] return; }
L_00276950:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00276A58; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276968u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0065(c, 433u, depth + 1u); else { c.pc = 0x00297910u; return; } if (c.pc != 0x00276968u) [[unlikely]] return; }
L_00276968:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00276A58; } }
L_00276970:
    set32(c.r[2], 0u + 24576u);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276980u); st16((c.r[29].w[0] + 122u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00276980u) [[unlikely]] return; }
L_00276980:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00276A58; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276998u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0065(c, 433u, depth + 1u); else { c.pc = 0x00297910u; return; } if (c.pc != 0x00276998u) [[unlikely]] return; }
L_00276998:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00276A58; } }
L_002769A0:
    set32(c.r[2], 0u + 4096u);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002769B0u); st16((c.r[29].w[0] + 122u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002769B0u) [[unlikely]] return; }
L_002769B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00276A58; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002769C8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0066(c, 4u, depth + 1u); else { c.pc = 0x00298030u; return; } if (c.pc != 0x002769C8u) [[unlikely]] return; }
L_002769C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00276A58; } }
L_002769D0:
    set32(c.r[2], 0u + 16384u);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002769E0u); st16((c.r[29].w[0] + 122u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002769E0u) [[unlikely]] return; }
L_002769E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00276A58; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002769F8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0066(c, 4u, depth + 1u); else { c.pc = 0x00298030u; return; } if (c.pc != 0x002769F8u) [[unlikely]] return; }
L_002769F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00276A58; } }
L_00276A00:
    set32(c.r[2], 0u + 8192u);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276A10u); st16((c.r[29].w[0] + 122u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00276A10u) [[unlikely]] return; }
L_00276A10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00276A58; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276A28u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0066(c, 4u, depth + 1u); else { c.pc = 0x00298030u; return; } if (c.pc != 0x00276A28u) [[unlikely]] return; }
L_00276A28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00276A58; } }
L_00276A30:
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276A40u); st16((c.r[29].w[0] + 122u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00276A40u) [[unlikely]] return; }
L_00276A40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00276A58; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276A58u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0066(c, 4u, depth + 1u); else { c.pc = 0x00298030u; return; } if (c.pc != 0x00276A58u) [[unlikely]] return; }
L_00276A58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00276A5C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00276A80:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[6], 0u + 48u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[19].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[16], c.r[29].w[0] + 80u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276ABCu); set32(c.r[5], c.r[5].w[0] - 25904u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x00276ABCu) [[unlikely]] return; }
L_00276ABC:
    c.r[6].d[0] = ld8((c.r[17].w[0]));
    set32(c.r[7], c.r[29].w[0] + 120u);
    c.r[5].d[0] = ld8((c.r[17].w[0] + 1u));
    c.r[4].d[0] = c.r[19].d[0] & 65535ull;
    set32(c.r[3], 0u + 2051u);
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_00276B50; } }
    set32(c.r[3], 0u + 2050u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00276B28; } }
    set32(c.r[3], 0u + 2049u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00276B00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00276B74; } }
L_00276B00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276B08u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00276B08u) [[unlikely]] return; }
L_00276B08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00276B70; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276B20u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 206u, depth + 1u); else { c.pc = 0x00279D40u; return; } if (c.pc != 0x00276B20u) [[unlikely]] return; }
L_00276B20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00276B70; } }
L_00276B28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276B30u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00276B30u) [[unlikely]] return; }
L_00276B30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00276B70; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276B48u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 220u, depth + 1u); else { c.pc = 0x00279F20u; return; } if (c.pc != 0x00276B48u) [[unlikely]] return; }
L_00276B48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00276B70; } }
L_00276B50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276B58u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00276B58u) [[unlikely]] return; }
L_00276B58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00276B70; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276B70u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 212u, depth + 1u); else { c.pc = 0x00279E10u; return; } if (c.pc != 0x00276B70u) [[unlikely]] return; }
L_00276B70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00276B74:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00276B90:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[6], 0u + 48u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[19].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[16], c.r[29].w[0] + 80u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276BCCu); set32(c.r[5], c.r[5].w[0] - 26384u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x00276BCCu) [[unlikely]] return; }
L_00276BCC:
    c.r[6].d[0] = ld8((c.r[17].w[0]));
    set32(c.r[7], c.r[29].w[0] + 120u);
    c.r[5].d[0] = ld8((c.r[17].w[0] + 1u));
    c.r[4].d[0] = c.r[19].d[0] & 65535ull;
    set32(c.r[3], 0u + 5892u);
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_00276C8C; } }
    set32(c.r[3], 0u + 5891u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00276C6C; } }
    set32(c.r[3], 0u + 5890u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00276C44; } }
    set32(c.r[3], 0u + 5889u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00276C1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00276C90; } }
L_00276C1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276C24u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00276C24u) [[unlikely]] return; }
L_00276C24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00276C8C; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276C3Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 226u, depth + 1u); else { c.pc = 0x00279FF0u; return; } if (c.pc != 0x00276C3Cu) [[unlikely]] return; }
L_00276C3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00276C8C; } }
L_00276C44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276C4Cu); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00276C4Cu) [[unlikely]] return; }
L_00276C4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00276C8C; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276C64u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 234u, depth + 1u); else { c.pc = 0x0027A140u; return; } if (c.pc != 0x00276C64u) [[unlikely]] return; }
L_00276C64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00276C8C; } }
L_00276C6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276C74u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00276C74u) [[unlikely]] return; }
L_00276C74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00276C8C; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276C8Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 240u, depth + 1u); else { c.pc = 0x0027A240u; return; } if (c.pc != 0x00276C8Cu) [[unlikely]] return; }
L_00276C8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00276C90:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00276CB0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[6], 0u + 48u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[19].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[16], c.r[29].w[0] + 80u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276CECu); set32(c.r[5], c.r[5].w[0] - 26096u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x00276CECu) [[unlikely]] return; }
L_00276CEC:
    c.r[6].d[0] = ld8((c.r[17].w[0]));
    set32(c.r[7], c.r[29].w[0] + 120u);
    c.r[5].d[0] = ld8((c.r[17].w[0] + 1u));
    c.r[4].d[0] = c.r[19].d[0] & 65535ull;
    set32(c.r[3], 0u + 3587u);
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_00276DAC; } }
    set32(c.r[3], 0u + 3586u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00276D84; } }
    set32(c.r[3], 0u + 3585u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00276D30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00276DCC; } }
L_00276D30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276D38u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00276D38u) [[unlikely]] return; }
L_00276D38:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 20u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 64u);  if (t) { goto L_00276D5C; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276D50u); set32(c.r[5], 0u + 10498u);  if (depth < kMaxDepth) unit_005D(c, 628u, depth + 1u); else { c.pc = 0x00277920u; return; } if (c.pc != 0x00276D50u) [[unlikely]] return; }
L_00276D50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00276DD0; } }
    set32(c.r[4], 0u + 64u);
    c.budget -= 1;
L_00276D5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276D64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00276D64u) [[unlikely]] return; }
L_00276D64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00276DCC; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276D7Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 250u, depth + 1u); else { c.pc = 0x0027A390u; return; } if (c.pc != 0x00276D7Cu) [[unlikely]] return; }
L_00276D7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00276DCC; } }
L_00276D84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276D8Cu); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00276D8Cu) [[unlikely]] return; }
L_00276D8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00276DCC; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276DA4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 244u, depth + 1u); else { c.pc = 0x0027A2C0u; return; } if (c.pc != 0x00276DA4u) [[unlikely]] return; }
L_00276DA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00276DCC; } }
L_00276DAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276DB4u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00276DB4u) [[unlikely]] return; }
L_00276DB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00276DCC; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276DCCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 258u, depth + 1u); else { c.pc = 0x0027A4D0u; return; } if (c.pc != 0x00276DCCu) [[unlikely]] return; }
L_00276DCC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00276DD0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00276DF0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[6], 0u + 48u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[19].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[16], c.r[29].w[0] + 80u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276E2Cu); set32(c.r[5], c.r[5].w[0] - 25952u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x00276E2Cu) [[unlikely]] return; }
L_00276E2C:
    c.r[5].d[0] = ld8((c.r[17].w[0]));
    c.r[2].d[0] = c.r[19].d[0] & 65535ull;
    c.r[4].d[0] = ld8((c.r[17].w[0] + 1u));
    set32(c.r[3], c.r[2].w[0] - 23553u);
    set32(c.r[6], c.r[29].w[0] + 120u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00276F58; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 32000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00274000u < 16384u) { entry = entries_005D[(t - 0x00274000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00276E70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276E78u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00276E78u) [[unlikely]] return; }
L_00276E78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00276F58; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276E90u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 264u, depth + 1u); else { c.pc = 0x0027A5A0u; return; } if (c.pc != 0x00276E90u) [[unlikely]] return; }
L_00276E90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00276F5C; } }
L_00276E98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276EA0u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00276EA0u) [[unlikely]] return; }
L_00276EA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00276F58; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276EB8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 258u, depth + 1u); else { c.pc = 0x0027A4D0u; return; } if (c.pc != 0x00276EB8u) [[unlikely]] return; }
L_00276EB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00276F58; } }
L_00276EC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276EC8u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00276EC8u) [[unlikely]] return; }
L_00276EC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00276F58; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276EE0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 347u, depth + 1u); else { c.pc = 0x0027B1F0u; return; } if (c.pc != 0x00276EE0u) [[unlikely]] return; }
L_00276EE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00276F58; } }
L_00276EE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276EF0u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00276EF0u) [[unlikely]] return; }
L_00276EF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00276F58; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276F08u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 270u, depth + 1u); else { c.pc = 0x0027A670u; return; } if (c.pc != 0x00276F08u) [[unlikely]] return; }
L_00276F08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00276F58; } }
L_00276F10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276F18u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00276F18u) [[unlikely]] return; }
L_00276F18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00276F58; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276F30u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 278u, depth + 1u); else { c.pc = 0x0027A780u; return; } if (c.pc != 0x00276F30u) [[unlikely]] return; }
L_00276F30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00276F58; } }
L_00276F38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276F40u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00276F40u) [[unlikely]] return; }
L_00276F40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00276F58; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276F58u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 264u, depth + 1u); else { c.pc = 0x00281E60u; return; } if (c.pc != 0x00276F58u) [[unlikely]] return; }
L_00276F58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00276F5C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00276F80:
    set32(c.r[29], c.r[29].w[0] - 176u);
    set32(c.r[6], 0u + 48u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[19].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[16], c.r[29].w[0] + 128u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276FBCu); set32(c.r[5], c.r[5].w[0] - 25328u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x00276FBCu) [[unlikely]] return; }
L_00276FBC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[5].w[0] - 25280u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276FD0u); set32(c.r[6], 0u + 48u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x00276FD0u) [[unlikely]] return; }
L_00276FD0:
    c.r[6].d[0] = ld8((c.r[17].w[0]));
    set32(c.r[8], c.r[29].w[0] + 168u);
    c.r[5].d[0] = ld8((c.r[17].w[0] + 1u));
    set32(c.r[7], c.r[29].w[0] + 120u);
    c.r[4].d[0] = c.r[19].d[0] & 65535ull;
    set32(c.r[3], 0u + 23045u);
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[8].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[6].d[0] = ld8((c.r[17].w[0]));
    c.r[5].d[0] = ld8((c.r[17].w[0] + 1u));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 14;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_002770AC; } }
    set32(c.r[3], 0u + 23044u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00277084; } }
    set32(c.r[3], 0u + 23043u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0027705C; } }
    set32(c.r[3], 0u + 23042u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00277034; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_002770D0; } }
L_00277034:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027703Cu); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027703Cu) [[unlikely]] return; }
L_0027703C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002770CC; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277054u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 114u, depth + 1u); else { c.pc = 0x002851F0u; return; } if (c.pc != 0x00277054u) [[unlikely]] return; }
L_00277054:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002770CC; } }
L_0027705C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277064u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00277064u) [[unlikely]] return; }
L_00277064:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002770CC; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027707Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 114u, depth + 1u); else { c.pc = 0x002851F0u; return; } if (c.pc != 0x0027707Cu) [[unlikely]] return; }
L_0027707C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002770CC; } }
L_00277084:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027708Cu); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027708Cu) [[unlikely]] return; }
L_0027708C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002770CC; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002770A4u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0061(c, 120u, depth + 1u); else { c.pc = 0x002852C0u; return; } if (c.pc != 0x002770A4u) [[unlikely]] return; }
L_002770A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002770CC; } }
L_002770AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002770B4u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002770B4u) [[unlikely]] return; }
L_002770B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002770CC; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002770CCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 124u, depth + 1u); else { c.pc = 0x00285340u; return; } if (c.pc != 0x002770CCu) [[unlikely]] return; }
L_002770CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_002770D0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_002770F0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[6], 0u + 48u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[19].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[16], c.r[29].w[0] + 80u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027712Cu); set32(c.r[5], c.r[5].w[0] - 25232u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0027712Cu) [[unlikely]] return; }
L_0027712C:
    c.r[6].d[0] = ld8((c.r[17].w[0]));
    set32(c.r[7], c.r[29].w[0] + 120u);
    c.r[5].d[0] = ld8((c.r[17].w[0] + 1u));
    c.r[4].d[0] = c.r[19].d[0] & 65535ull;
    set32(c.r[3], 0u + 23301u);
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_00277248; } }
    set32(c.r[3], 0u + 23300u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00277218; } }
    set32(c.r[3], 0u + 23299u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002771E8; } }
    set32(c.r[3], 0u + 23298u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002771B8; } }
    set32(c.r[3], 0u + 23297u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00277188; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00277274; } }
L_00277188:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277198u); st32((c.r[16].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00277198u) [[unlikely]] return; }
L_00277198:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00277270; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002771B0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 162u, depth + 1u); else { c.pc = 0x00285860u; return; } if (c.pc != 0x002771B0u) [[unlikely]] return; }
L_002771B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00277270; } }
L_002771B8:
    set32(c.r[2], 0u + 4u);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002771C8u); st32((c.r[16].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002771C8u) [[unlikely]] return; }
L_002771C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00277270; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002771E0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 162u, depth + 1u); else { c.pc = 0x00285860u; return; } if (c.pc != 0x002771E0u) [[unlikely]] return; }
L_002771E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00277270; } }
L_002771E8:
    set32(c.r[2], 0u + 3u);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002771F8u); st32((c.r[16].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002771F8u) [[unlikely]] return; }
L_002771F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00277270; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277210u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 162u, depth + 1u); else { c.pc = 0x00285860u; return; } if (c.pc != 0x00277210u) [[unlikely]] return; }
L_00277210:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00277270; } }
L_00277218:
    set32(c.r[2], 0u + 5u);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277228u); st32((c.r[16].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00277228u) [[unlikely]] return; }
L_00277228:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00277270; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277240u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 162u, depth + 1u); else { c.pc = 0x00285860u; return; } if (c.pc != 0x00277240u) [[unlikely]] return; }
L_00277240:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00277270; } }
L_00277248:
    set32(c.r[2], 0u + 6u);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277258u); st32((c.r[16].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00277258u) [[unlikely]] return; }
L_00277258:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00277270; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277270u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 162u, depth + 1u); else { c.pc = 0x00285860u; return; } if (c.pc != 0x00277270u) [[unlikely]] return; }
L_00277270:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00277274:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00277290:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[6], 0u + 48u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[19].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[16], c.r[29].w[0] + 80u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002772CCu); set32(c.r[5], c.r[5].w[0] - 26096u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x002772CCu) [[unlikely]] return; }
L_002772CC:
    c.r[6].d[0] = ld8((c.r[17].w[0]));
    set32(c.r[7], c.r[29].w[0] + 120u);
    c.r[5].d[0] = ld8((c.r[17].w[0] + 1u));
    c.r[4].d[0] = c.r[19].d[0] & 65535ull;
    set32(c.r[3], 0u + 3331u);
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_00277360; } }
    set32(c.r[3], 0u + 3330u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00277338; } }
    set32(c.r[3], 0u + 3329u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00277310; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00277384; } }
L_00277310:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277318u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00277318u) [[unlikely]] return; }
L_00277318:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00277380; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277330u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 341u, depth + 1u); else { c.pc = 0x0027B100u; return; } if (c.pc != 0x00277330u) [[unlikely]] return; }
L_00277330:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00277380; } }
L_00277338:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277340u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00277340u) [[unlikely]] return; }
L_00277340:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00277380; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277358u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 334u, depth + 1u); else { c.pc = 0x0027B000u; return; } if (c.pc != 0x00277358u) [[unlikely]] return; }
L_00277358:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00277380; } }
L_00277360:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277368u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00277368u) [[unlikely]] return; }
L_00277368:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00277380; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277380u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 341u, depth + 1u); else { c.pc = 0x0027B100u; return; } if (c.pc != 0x00277380u) [[unlikely]] return; }
L_00277380:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00277384:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002773A0:
    set32(c.r[29], c.r[29].w[0] - 224u);
    set32(c.r[6], 0u + 48u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[17], c.r[29].w[0] + 176u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 25040u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002773D8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x002773D8u) [[unlikely]] return; }
L_002773D8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[5].w[0] - 25136u);
    set32(c.r[6], 0u + 48u);
    st16((c.r[29].w[0] + 216u), static_cast<std::uint16_t>(c.r[19].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002773F4u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x002773F4u) [[unlikely]] return; }
L_002773F4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[5].w[0] - 24992u);
    set32(c.r[6], 0u + 48u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027740Cu); st16((c.r[29].w[0] + 168u), static_cast<std::uint16_t>(c.r[19].w[0]));  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0027740Cu) [[unlikely]] return; }
L_0027740C:
    c.r[2].d[0] = c.r[19].d[0] & 65535ull;
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(12ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; st16((c.r[29].w[0] + 120u), static_cast<std::uint16_t>(c.r[19].w[0]));  if (t) { goto L_00277640; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 31968u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00274000u < 16384u) { entry = entries_005D[(t - 0x00274000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00277438:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277440u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00277440u) [[unlikely]] return; }
L_00277440:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027745C; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277458u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 368u, depth + 1u); else { c.pc = 0x0027B4F0u; return; } if (c.pc != 0x00277458u) [[unlikely]] return; }
L_00277458:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0027745C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00277644; } }
L_00277464:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027746Cu); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027746Cu) [[unlikely]] return; }
L_0027746C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00277488; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277484u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_005E(c, 378u, depth + 1u); else { c.pc = 0x0027B650u; return; } if (c.pc != 0x00277484u) [[unlikely]] return; }
L_00277484:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00277488:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00277640; } }
L_00277490:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277498u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00277498u) [[unlikely]] return; }
L_00277498:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002774B4; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002774B0u); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_005E(c, 388u, depth + 1u); else { c.pc = 0x0027B7B0u; return; } if (c.pc != 0x002774B0u) [[unlikely]] return; }
L_002774B0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002774B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00277640; } }
L_002774BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002774C4u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002774C4u) [[unlikely]] return; }
L_002774C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002774E0; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002774DCu); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_005E(c, 393u, depth + 1u); else { c.pc = 0x0027B850u; return; } if (c.pc != 0x002774DCu) [[unlikely]] return; }
L_002774DC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002774E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00277640; } }
L_002774E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002774F0u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002774F0u) [[unlikely]] return; }
L_002774F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027750C; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277508u); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_005E(c, 401u, depth + 1u); else { c.pc = 0x0027B960u; return; } if (c.pc != 0x00277508u) [[unlikely]] return; }
L_00277508:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0027750C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00277640; } }
L_00277514:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027751Cu); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027751Cu) [[unlikely]] return; }
L_0027751C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00277538; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277534u); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_005E(c, 406u, depth + 1u); else { c.pc = 0x0027BA00u; return; } if (c.pc != 0x00277534u) [[unlikely]] return; }
L_00277534:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00277538:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00277640; } }
L_00277540:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277548u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00277548u) [[unlikely]] return; }
L_00277548:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00277564; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277560u); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_005E(c, 419u, depth + 1u); else { c.pc = 0x0027BD60u; return; } if (c.pc != 0x00277560u) [[unlikely]] return; }
L_00277560:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00277564:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00277640; } }
L_0027756C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277574u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00277574u) [[unlikely]] return; }
L_00277574:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00277590; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027758Cu); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_005E(c, 428u, depth + 1u); else { c.pc = 0x0027BEA0u; return; } if (c.pc != 0x0027758Cu) [[unlikely]] return; }
L_0027758C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00277590:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00277640; } }
L_00277598:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002775A0u); set32(c.r[4], 0u + 72u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002775A0u) [[unlikely]] return; }
L_002775A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002775BC; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002775B8u); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_005F(c, 217u, depth + 1u); else { c.pc = 0x0027E020u; return; } if (c.pc != 0x002775B8u) [[unlikely]] return; }
L_002775B8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002775BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00277640; } }
L_002775C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002775CCu); set32(c.r[4], 0u + 72u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002775CCu) [[unlikely]] return; }
L_002775CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002775E8; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002775E4u); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_005F(c, 222u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x002775E4u) [[unlikely]] return; }
L_002775E4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002775E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00277640; } }
L_002775F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002775F8u); set32(c.r[4], 0u + 72u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002775F8u) [[unlikely]] return; }
L_002775F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00277614; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277610u); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_005F(c, 238u, depth + 1u); else { c.pc = 0x0027E2D0u; return; } if (c.pc != 0x00277610u) [[unlikely]] return; }
L_00277610:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00277614:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00277640; } }
L_0027761C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277624u); set32(c.r[4], 0u + 72u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00277624u) [[unlikely]] return; }
L_00277624:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00277640; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027763Cu); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_005E(c, 364u, depth + 1u); else { c.pc = 0x0027B470u; return; } if (c.pc != 0x0027763Cu) [[unlikely]] return; }
L_0027763C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00277640:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00277644:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_00277660:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[6], 0u + 48u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[19].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[16], c.r[29].w[0] + 80u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027769Cu); set32(c.r[5], c.r[5].w[0] - 26048u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0027769Cu) [[unlikely]] return; }
L_0027769C:
    c.r[6].d[0] = ld8((c.r[17].w[0]));
    set32(c.r[7], c.r[29].w[0] + 120u);
    c.r[5].d[0] = ld8((c.r[17].w[0] + 1u));
    c.r[4].d[0] = c.r[19].d[0] & 65535ull;
    set32(c.r[3], 0u + 11779u);
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_00277730; } }
    set32(c.r[3], 0u + 11778u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00277708; } }
    set32(c.r[3], 0u + 11777u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002776E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00277754; } }
L_002776E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002776E8u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002776E8u) [[unlikely]] return; }
L_002776E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00277750; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277700u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0066(c, 12u, depth + 1u); else { c.pc = 0x00298170u; return; } if (c.pc != 0x00277700u) [[unlikely]] return; }
L_00277700:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00277750; } }
L_00277708:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277710u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00277710u) [[unlikely]] return; }
L_00277710:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00277750; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277728u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0066(c, 15u, depth + 1u); else { c.pc = 0x002981F0u; return; } if (c.pc != 0x00277728u) [[unlikely]] return; }
L_00277728:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00277750; } }
L_00277730:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277738u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00277738u) [[unlikely]] return; }
L_00277738:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00277750; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277750u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0066(c, 18u, depth + 1u); else { c.pc = 0x00298280u; return; } if (c.pc != 0x00277750u) [[unlikely]] return; }
L_00277750:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00277754:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00277770:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[6], 0u + 48u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[19].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[16], c.r[29].w[0] + 80u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002777ACu); set32(c.r[5], c.r[5].w[0] - 26048u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x002777ACu) [[unlikely]] return; }
L_002777AC:
    c.r[6].d[0] = ld8((c.r[17].w[0]));
    set32(c.r[7], c.r[29].w[0] + 120u);
    c.r[5].d[0] = ld8((c.r[17].w[0] + 1u));
    c.r[4].d[0] = c.r[19].d[0] & 65535ull;
    set32(c.r[3], 0u + 11265u);
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_002778DC; } }
    set32(c.r[3], 0u + 23812u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002778B4; } }
    set32(c.r[3], 0u + 23813u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0027788C; } }
    set32(c.r[3], 0u + 23811u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00277864; } }
    set32(c.r[3], 0u + 23810u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0027783C; } }
    set32(c.r[3], 0u + 23809u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00277814; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00277900; } }
L_00277814:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027781Cu); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027781Cu) [[unlikely]] return; }
L_0027781C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002778FC; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277834u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 180u, depth + 1u); else { c.pc = 0x002799A0u; return; } if (c.pc != 0x00277834u) [[unlikely]] return; }
L_00277834:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002778FC; } }
L_0027783C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277844u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00277844u) [[unlikely]] return; }
L_00277844:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002778FC; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027785Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 286u, depth + 1u); else { c.pc = 0x0027A8A0u; return; } if (c.pc != 0x0027785Cu) [[unlikely]] return; }
L_0027785C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002778FC; } }
L_00277864:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027786Cu); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027786Cu) [[unlikely]] return; }
L_0027786C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002778FC; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277884u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 306u, depth + 1u); else { c.pc = 0x0027AB80u; return; } if (c.pc != 0x00277884u) [[unlikely]] return; }
L_00277884:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002778FC; } }
L_0027788C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277894u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00277894u) [[unlikely]] return; }
L_00277894:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002778FC; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002778ACu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 317u, depth + 1u); else { c.pc = 0x0027AD30u; return; } if (c.pc != 0x002778ACu) [[unlikely]] return; }
L_002778AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002778FC; } }
L_002778B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002778BCu); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002778BCu) [[unlikely]] return; }
L_002778BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002778FC; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002778D4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 323u, depth + 1u); else { c.pc = 0x0027AE40u; return; } if (c.pc != 0x002778D4u) [[unlikely]] return; }
L_002778D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002778FC; } }
L_002778DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002778E4u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002778E4u) [[unlikely]] return; }
L_002778E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002778FC; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002778FCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 353u, depth + 1u); else { c.pc = 0x0027B2C0u; return; } if (c.pc != 0x002778FCu) [[unlikely]] return; }
L_002778FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00277900:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00277920:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st16((c.r[29].w[0] + 28u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277934u); set32(c.r[5], c.r[29].w[0] + 28u);  if (depth < kMaxDepth) unit_005D(c, 630u, depth + 1u); else { c.pc = 0x00277940u; return; } if (c.pc != 0x00277934u) [[unlikely]] return; }
L_00277934:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00277940:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[6], 0u + 11776u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = ld8((c.r[5].w[0] + 1u));
    set32(c.r[2], c.r[2].w[0] << 8);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[6].d[0]; c.r[3].d[0] = ld16((c.r[5].w[0]));  if (t) { goto L_00277E30; } }
    set32(c.r[6], 0u + 11264u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[6].d[0]; set32(c.r[6], 0u + 23808u);  if (t) { goto L_00277E20; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { goto L_00277E10; } }
    set32(c.r[6], 0u + 23552u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[6].d[0]; set32(c.r[6], 0u + 10496u);  if (t) { goto L_00277E00; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { goto L_00277DF0; } }
    set32(c.r[6], 0u + 11520u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[6].d[0]; set32(c.r[6], 0u + 10752u);  if (t) { goto L_00277DE0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { goto L_00277DD0; } }
    set32(c.r[6], 0u + 10240u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[6].d[0]; set32(c.r[6], 0u + 23296u);  if (t) { goto L_00277DC0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { goto L_00277DB0; } }
    set32(c.r[6], 0u + 23040u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[6].d[0]; set32(c.r[6], 0u + 11008u);  if (t) { goto L_00277DA0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { goto L_00277D90; } }
    set32(c.r[6], 0u + 9728u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[6].d[0]; set32(c.r[6], 0u + 8704u);  if (t) { goto L_00277D80; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { goto L_00277D70; } }
    set32(c.r[6], 0u + 7936u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[6].d[0]; set32(c.r[6], 0u + 5888u);  if (t) { goto L_00277D60; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { goto L_00277D50; } }
    set32(c.r[6], 0u + 5632u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[6].d[0]; set32(c.r[6], 0u + 5376u);  if (t) { goto L_00277D40; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { goto L_00277D30; } }
    set32(c.r[6], 0u + 5120u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[6].d[0]; set32(c.r[6], 0u + 4864u);  if (t) { goto L_00277D20; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { goto L_00277D10; } }
    set32(c.r[6], 0u + 4608u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[6].d[0]; set32(c.r[6], 0u + 6656u);  if (t) { goto L_00277D00; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { goto L_00277CF0; } }
    set32(c.r[6], 0u + 6400u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[6].d[0]; set32(c.r[6], 0u + 4352u);  if (t) { goto L_00277CE0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { goto L_00277CD0; } }
    set32(c.r[6], 0u + 4096u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[6].d[0]; set32(c.r[6], 0u + 3840u);  if (t) { goto L_00277CC0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { goto L_00277CB0; } }
    set32(c.r[6], 0u + 3584u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[6].d[0]; set32(c.r[6], 0u + 3328u);  if (t) { goto L_00277CA0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { goto L_00277C90; } }
    set32(c.r[6], 0u + 3072u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[6].d[0]; set32(c.r[6], 0u + 2816u);  if (t) { goto L_00277C80; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { goto L_00277C70; } }
    set32(c.r[6], 0u + 12032u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[6].d[0]; set32(c.r[6], 0u + 2560u);  if (t) { goto L_00277C60; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { goto L_00277C50; } }
    set32(c.r[6], 0u + 9984u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[6].d[0]; set32(c.r[6], 0u + 9216u);  if (t) { goto L_00277C40; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { goto L_00277C30; } }
    set32(c.r[6], 0u + 8960u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[6].d[0]; set32(c.r[6], 0u + 2304u);  if (t) { goto L_00277C20; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { goto L_00277C10; } }
    set32(c.r[6], 0u + 2048u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[6].d[0]; set32(c.r[6], 0u + 1792u);  if (t) { goto L_00277C00; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { goto L_00277BF0; } }
    set32(c.r[6], 0u + 6912u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[6].d[0]; set32(c.r[6], 0u + 7168u);  if (t) { goto L_00277BE0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { goto L_00277BD0; } }
    set32(c.r[6], 0u + 1536u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[6].d[0]; set32(c.r[6], 0u + 7424u);  if (t) { goto L_00277BC0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { goto L_00277BB0; } }
    set32(c.r[6], 0u + 1280u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[6].d[0]; set32(c.r[6], 0u + 1024u);  if (t) { goto L_00277BA0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { goto L_00277B90; } }
    set32(c.r[6], 0u + 768u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[6].d[0]; set32(c.r[6], 0u + 512u);  if (t) { goto L_00277B80; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { goto L_00277B70; } }
    set32(c.r[6], 0u + 256u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[6].d[0]; c.r[6].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_00277B28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00277E38; } }
L_00277B28:
    c.r[2].d[0] = c.r[6].sd[0] < 265ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = ld16((c.r[4].w[0] + 144u));  if (t) { goto L_00277B60; } }
    c.r[1].d[0] = c.r[6].sd[0] < 273ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00277B60; } }
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < 265ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 273ll ? 1ull : 0ull;  if (t) { goto L_00277B60; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00277B60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00277E3C; } }
L_00277B60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277B68u);  if (depth < kMaxDepth) unit_005D(c, 132u, depth + 1u); else { c.pc = 0x00274D20u; return; } if (c.pc != 0x00277B68u) [[unlikely]] return; }
L_00277B68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00277E38; } }
L_00277B70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277B78u);  if (depth < kMaxDepth) unit_005C(c, 148u, depth + 1u); else { c.pc = 0x00272610u; return; } if (c.pc != 0x00277B78u) [[unlikely]] return; }
L_00277B78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00277E38; } }
L_00277B80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277B88u);  if (depth < kMaxDepth) unit_005C(c, 389u, depth + 1u); else { c.pc = 0x00273D90u; return; } if (c.pc != 0x00277B88u) [[unlikely]] return; }
L_00277B88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00277E38; } }
L_00277B90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277B98u);  if (depth < kMaxDepth) unit_005C(c, 177u, depth + 1u); else { c.pc = 0x00272870u; return; } if (c.pc != 0x00277B98u) [[unlikely]] return; }
L_00277B98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00277E38; } }
L_00277BA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277BA8u);  if (depth < kMaxDepth) unit_005C(c, 338u, depth + 1u); else { c.pc = 0x00273920u; return; } if (c.pc != 0x00277BA8u) [[unlikely]] return; }
L_00277BA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00277E38; } }
L_00277BB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277BB8u);  if (depth < kMaxDepth) unit_005C(c, 276u, depth + 1u); else { c.pc = 0x00273120u; return; } if (c.pc != 0x00277BB8u) [[unlikely]] return; }
L_00277BB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00277E38; } }
L_00277BC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277BC8u);  if (depth < kMaxDepth) unit_005C(c, 299u, depth + 1u); else { c.pc = 0x00273410u; return; } if (c.pc != 0x00277BC8u) [[unlikely]] return; }
L_00277BC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00277E38; } }
L_00277BD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277BD8u);  if (depth < kMaxDepth) unit_005C(c, 299u, depth + 1u); else { c.pc = 0x00273410u; return; } if (c.pc != 0x00277BD8u) [[unlikely]] return; }
L_00277BD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00277E38; } }
L_00277BE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277BE8u);  if (depth < kMaxDepth) unit_005C(c, 332u, depth + 1u); else { c.pc = 0x00273830u; return; } if (c.pc != 0x00277BE8u) [[unlikely]] return; }
L_00277BE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00277E38; } }
L_00277BF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277BF8u);  if (depth < kMaxDepth) unit_005C(c, 276u, depth + 1u); else { c.pc = 0x00273120u; return; } if (c.pc != 0x00277BF8u) [[unlikely]] return; }
L_00277BF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00277E38; } }
L_00277C00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277C08u);  if (depth < kMaxDepth) unit_005D(c, 489u, depth + 1u); else { c.pc = 0x00276A80u; return; } if (c.pc != 0x00277C08u) [[unlikely]] return; }
L_00277C08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00277E38; } }
L_00277C10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277C18u);  if (depth < kMaxDepth) unit_005D(c, 97u, depth + 1u); else { c.pc = 0x00274930u; return; } if (c.pc != 0x00277C18u) [[unlikely]] return; }
L_00277C18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00277E38; } }
L_00277C20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277C28u);  if (depth < kMaxDepth) unit_005D(c, 63u, depth + 1u); else { c.pc = 0x00274610u; return; } if (c.pc != 0x00277C28u) [[unlikely]] return; }
L_00277C28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00277E38; } }
L_00277C30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277C38u);  if (depth < kMaxDepth) unit_005D(c, 71u, depth + 1u); else { c.pc = 0x00274740u; return; } if (c.pc != 0x00277C38u) [[unlikely]] return; }
L_00277C38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00277E38; } }
L_00277C40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277C48u);  if (depth < kMaxDepth) unit_005C(c, 268u, depth + 1u); else { c.pc = 0x00273010u; return; } if (c.pc != 0x00277C48u) [[unlikely]] return; }
L_00277C48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00277E38; } }
L_00277C50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277C58u);  if (depth < kMaxDepth) unit_005C(c, 242u, depth + 1u); else { c.pc = 0x00272D10u; return; } if (c.pc != 0x00277C58u) [[unlikely]] return; }
L_00277C58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00277E38; } }
L_00277C60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277C68u);  if (depth < kMaxDepth) unit_005C(c, 242u, depth + 1u); else { c.pc = 0x00272D10u; return; } if (c.pc != 0x00277C68u) [[unlikely]] return; }
L_00277C68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00277E38; } }
L_00277C70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277C78u);  if (depth < kMaxDepth) unit_005D(c, 111u, depth + 1u); else { c.pc = 0x00274B40u; return; } if (c.pc != 0x00277C78u) [[unlikely]] return; }
L_00277C78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00277E38; } }
L_00277C80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277C88u);  if (depth < kMaxDepth) unit_005D(c, 415u, depth + 1u); else { c.pc = 0x00276580u; return; } if (c.pc != 0x00277C88u) [[unlikely]] return; }
L_00277C88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00277E38; } }
L_00277C90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277C98u);  if (depth < kMaxDepth) unit_005D(c, 558u, depth + 1u); else { c.pc = 0x00277290u; return; } if (c.pc != 0x00277C98u) [[unlikely]] return; }
L_00277C98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00277E38; } }
L_00277CA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277CA8u);  if (depth < kMaxDepth) unit_005D(c, 505u, depth + 1u); else { c.pc = 0x00276CB0u; return; } if (c.pc != 0x00277CA8u) [[unlikely]] return; }
L_00277CA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00277E38; } }
L_00277CB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277CB8u);  if (depth < kMaxDepth) unit_005D(c, 255u, depth + 1u); else { c.pc = 0x00275560u; return; } if (c.pc != 0x00277CB8u) [[unlikely]] return; }
L_00277CB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00277E38; } }
L_00277CC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277CC8u);  if (depth < kMaxDepth) unit_005D(c, 243u, depth + 1u); else { c.pc = 0x002753F0u; return; } if (c.pc != 0x00277CC8u) [[unlikely]] return; }
L_00277CC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00277E38; } }
L_00277CD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277CD8u);  if (depth < kMaxDepth) unit_005D(c, 259u, depth + 1u); else { c.pc = 0x00275600u; return; } if (c.pc != 0x00277CD8u) [[unlikely]] return; }
L_00277CD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00277E38; } }
L_00277CE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277CE8u);  if (depth < kMaxDepth) unit_005D(c, 57u, depth + 1u); else { c.pc = 0x00274530u; return; } if (c.pc != 0x00277CE8u) [[unlikely]] return; }
L_00277CE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00277E38; } }
L_00277CF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277CF8u);  if (depth < kMaxDepth) unit_005C(c, 222u, depth + 1u); else { c.pc = 0x00272B60u; return; } if (c.pc != 0x00277CF8u) [[unlikely]] return; }
L_00277CF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00277E38; } }
L_00277D00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277D08u);  if (depth < kMaxDepth) unit_005D(c, 28u, depth + 1u); else { c.pc = 0x002741A0u; return; } if (c.pc != 0x00277D08u) [[unlikely]] return; }
L_00277D08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00277E38; } }
L_00277D10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277D18u);  if (depth < kMaxDepth) unit_005D(c, 28u, depth + 1u); else { c.pc = 0x002741A0u; return; } if (c.pc != 0x00277D18u) [[unlikely]] return; }
L_00277D18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00277E38; } }
L_00277D20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277D28u);  if (depth < kMaxDepth) unit_005D(c, 289u, depth + 1u); else { c.pc = 0x00275A00u; return; } if (c.pc != 0x00277D28u) [[unlikely]] return; }
L_00277D28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00277E38; } }
L_00277D30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277D38u);  if (depth < kMaxDepth) unit_005C(c, 358u, depth + 1u); else { c.pc = 0x00273AD0u; return; } if (c.pc != 0x00277D38u) [[unlikely]] return; }
L_00277D38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00277E38; } }
L_00277D40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277D48u);  if (depth < kMaxDepth) unit_005D(c, 105u, depth + 1u); else { c.pc = 0x00274A50u; return; } if (c.pc != 0x00277D48u) [[unlikely]] return; }
L_00277D48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00277E38; } }
L_00277D50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277D58u);  if (depth < kMaxDepth) unit_005D(c, 497u, depth + 1u); else { c.pc = 0x00276B90u; return; } if (c.pc != 0x00277D58u) [[unlikely]] return; }
L_00277D58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00277E38; } }
L_00277D60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277D68u);  if (depth < kMaxDepth) unit_005D(c, 335u, depth + 1u); else { c.pc = 0x00275D80u; return; } if (c.pc != 0x00277D68u) [[unlikely]] return; }
L_00277D68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00277E38; } }
L_00277D70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277D78u);  if (depth < kMaxDepth) unit_005D(c, 355u, depth + 1u); else { c.pc = 0x00275F30u; return; } if (c.pc != 0x00277D78u) [[unlikely]] return; }
L_00277D78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00277E38; } }
L_00277D80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277D88u);  if (depth < kMaxDepth) unit_005D(c, 271u, depth + 1u); else { c.pc = 0x002757A0u; return; } if (c.pc != 0x00277D88u) [[unlikely]] return; }
L_00277D88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00277E38; } }
L_00277D90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277D98u);  if (depth < kMaxDepth) unit_005D(c, 365u, depth + 1u); else { c.pc = 0x00276070u; return; } if (c.pc != 0x00277D98u) [[unlikely]] return; }
L_00277D98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00277E38; } }
L_00277DA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277DA8u);  if (depth < kMaxDepth) unit_005D(c, 535u, depth + 1u); else { c.pc = 0x00276F80u; return; } if (c.pc != 0x00277DA8u) [[unlikely]] return; }
L_00277DA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00277E38; } }
L_00277DB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277DB8u);  if (depth < kMaxDepth) unit_005D(c, 546u, depth + 1u); else { c.pc = 0x002770F0u; return; } if (c.pc != 0x00277DB8u) [[unlikely]] return; }
L_00277DB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00277E38; } }
L_00277DC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277DC8u);  if (depth < kMaxDepth) unit_005D(c, 391u, depth + 1u); else { c.pc = 0x00276250u; return; } if (c.pc != 0x00277DC8u) [[unlikely]] return; }
L_00277DC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00277E38; } }
L_00277DD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277DD8u);  if (depth < kMaxDepth) unit_005D(c, 399u, depth + 1u); else { c.pc = 0x00276360u; return; } if (c.pc != 0x00277DD8u) [[unlikely]] return; }
L_00277DD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00277E38; } }
L_00277DE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277DE8u);  if (depth < kMaxDepth) unit_005D(c, 407u, depth + 1u); else { c.pc = 0x00276470u; return; } if (c.pc != 0x00277DE8u) [[unlikely]] return; }
L_00277DE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00277E38; } }
L_00277DF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277DF8u);  if (depth < kMaxDepth) unit_005C(c, 141u, depth + 1u); else { c.pc = 0x002724F0u; return; } if (c.pc != 0x00277DF8u) [[unlikely]] return; }
L_00277DF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00277E38; } }
L_00277E00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277E08u);  if (depth < kMaxDepth) unit_005D(c, 515u, depth + 1u); else { c.pc = 0x00276DF0u; return; } if (c.pc != 0x00277E08u) [[unlikely]] return; }
L_00277E08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00277E38; } }
L_00277E10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277E18u);  if (depth < kMaxDepth) unit_005D(c, 614u, depth + 1u); else { c.pc = 0x00277770u; return; } if (c.pc != 0x00277E18u) [[unlikely]] return; }
L_00277E18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00277E38; } }
L_00277E20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277E28u);  if (depth < kMaxDepth) unit_005D(c, 614u, depth + 1u); else { c.pc = 0x00277770u; return; } if (c.pc != 0x00277E28u) [[unlikely]] return; }
L_00277E28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00277E38; } }
L_00277E30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277E38u);  if (depth < kMaxDepth) unit_005D(c, 606u, depth + 1u); else { c.pc = 0x00277660u; return; } if (c.pc != 0x00277E38u) [[unlikely]] return; }
L_00277E38:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00277E3C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00277E50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277E68u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x00277E68u) [[unlikely]] return; }
L_00277E68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 768u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277E8Cu); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00277E8Cu) [[unlikely]] return; }
L_00277E8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00277EE4; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 368u));
    set32(c.r[3], c.r[3].w[0] + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; c.r[5].d[0] = c.r[3].d[0] & 3ull;  if (t) { goto L_00277EB0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00277EB0; } }
    set32(c.r[5], c.r[5].w[0] - 4u);
    c.budget -= 1;
L_00277EB0:
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 4288u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[5].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 13;
L_00277EE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277EECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00277EECu) [[unlikely]] return; }
L_00277EEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277EF4u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00277EF4u) [[unlikely]] return; }
L_00277EF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00277F4C; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 368u));
    set32(c.r[3], c.r[3].w[0] + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; c.r[5].d[0] = c.r[3].d[0] & 3ull;  if (t) { goto L_00277F18; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00277F18; } }
    set32(c.r[5], c.r[5].w[0] - 4u);
    c.budget -= 1;
L_00277F18:
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 4224u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[5].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 13;
L_00277F4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277F54u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00277F54u) [[unlikely]] return; }
L_00277F54:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00277F70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277F84u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x00277F84u) [[unlikely]] return; }
L_00277F84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], 0u + 20u);
    set32(c.r[2], c.r[2].w[0] + 752u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277F98u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00277F98u) [[unlikely]] return; }
L_00277F98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00277FD0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 4928u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_00277FD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277FD8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00277FD8u) [[unlikely]] return; }
L_00277FD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277FE0u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00277FE0u) [[unlikely]] return; }
L_00277FE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_005E(c, 2u, depth); } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 4896u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    c.budget -= 6;
    [[clang::musttail]] return unit_005E(c, 1u, depth);
}

}
