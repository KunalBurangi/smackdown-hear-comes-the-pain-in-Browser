#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_006E[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0,
    15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 17, 0, 0, 18, 0, 19, 0, 20, 0, 0, 21,
    0, 22, 0, 23, 0, 0, 24, 0, 25, 0, 26, 0, 0, 27, 0, 28, 0, 29, 0, 0, 30, 0, 31, 0, 32, 0, 0, 33, 0, 34, 0, 35,
    0, 0, 36, 0, 37, 0, 38, 0, 0, 39, 0, 40, 0, 41, 0, 0, 42, 0, 43, 0, 44, 0, 0, 45, 0, 46, 0, 47, 0, 0, 48, 0,
    49, 0, 50, 0, 0, 51, 0, 52, 0, 53, 0, 0, 54, 0, 0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 57, 0, 0, 58, 0, 0, 0, 59, 0, 0, 60, 0, 0, 0, 61, 0, 0, 62, 0, 0, 63, 0, 0, 0, 0, 0, 0, 64,
    0, 0, 0, 65, 0, 0, 66, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0,
    0, 70, 0, 71, 0, 72, 0, 73, 0, 74, 0, 75, 0, 76, 0, 77, 0, 78, 0, 79, 0, 80, 0, 81, 82, 0, 0, 0, 83, 0, 0, 0,
    0, 0, 0, 0, 0, 84, 0, 85, 0, 86, 0, 87, 0, 88, 0, 89, 90, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0,
    93, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 98,
    0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0,
    101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0,
    111, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0,
    0, 0, 114, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 119, 0, 120,
    0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0,
    0, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 133, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0,
    0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0,
    143, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 152, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0,
    156, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0,
    0, 0, 0, 162, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0,
    0, 0, 169, 0, 0, 0, 0, 170, 0, 171, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 174, 0, 0, 175, 0, 0, 0,
    0, 176, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0,
    0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 187, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0,
    0, 0, 193, 0, 0, 194, 0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 198,
    0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 207, 0,
    0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 211, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 217, 0, 218, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0,
    0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0,
    230, 0, 0, 0, 231, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 234, 0, 235, 0, 0, 236, 0, 237, 0, 0, 0,
    0, 238, 0, 0, 0, 239, 0, 0, 240, 0, 0, 0, 0, 0, 0, 241, 0, 0, 242, 0, 0, 0, 0, 0, 243, 0, 0, 244, 0, 0, 0, 0,
    0, 245, 0, 0, 246, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 250, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0,
    252, 0, 253, 0, 0, 0, 0, 254, 0, 0, 255, 0, 0, 0, 0, 0, 0, 256, 0, 0, 257, 0, 0, 0, 0, 0, 258, 0, 0, 259, 0, 0,
    0, 0, 0, 0, 260, 0, 0, 261, 0, 0, 0, 0, 0, 262, 0, 0, 263, 0, 0, 0, 0, 0, 264, 0, 0, 265, 0, 0, 0, 0, 0, 266,
    0, 0, 267, 0, 0, 0, 0, 0, 268, 0, 0, 269, 0, 0, 0, 0, 0, 0, 270, 0, 0, 271, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0,
    273, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0,
    0, 279, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 281, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 284, 0, 0, 0,
    0, 0, 0, 285, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0,
    288, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 291,
    0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    295, 0, 0, 0, 0, 296, 0, 0, 0, 0, 297, 0, 298, 0, 0, 0, 299, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 304, 0, 0,
    305, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 308, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0,
    317, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    321, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 323, 0, 324, 0, 0, 325, 0, 0, 326, 0, 0, 0, 327, 0, 0, 328, 0, 0, 0, 329, 0,
    0, 0, 330, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 333, 0, 334, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 338, 0, 0,
    0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 343, 0,
    0, 344, 0, 0, 0, 0, 0, 0, 345, 0, 0, 346, 0, 0, 347, 0, 348, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 350, 0, 0, 0,
    0, 351, 0, 352, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0,
    0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 358, 0, 0, 0, 0, 359, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 0,
    362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0,
    365, 0, 0, 0, 366, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 369, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 371,
    0, 0, 0, 0, 372, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 375, 0, 0, 0, 0, 376, 0, 0, 0, 0, 377, 0,
    378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    387, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0,
    392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 399,
    0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0,
    0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0,
    0, 0, 413, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 416, 0, 0, 0, 417, 0, 0, 0, 418, 0, 0, 0,
    419, 0, 0, 0, 420, 0, 0, 0, 421, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 424, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 426, 0, 0, 427, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 437,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 441, 0, 0, 0,
    442, 0, 0, 0, 443, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445,
    0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0,
    448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455,
    0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 459, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 470,
    0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 475, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 482,
    0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 491, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 495,
    0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 0, 503,
    0, 0, 0, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_006E(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002B8000;
    case 2u: goto L_002B8010;
    case 3u: goto L_002B8020;
    case 4u: goto L_002B8030;
    case 5u: goto L_002B8040;
    case 6u: goto L_002B8050;
    case 7u: goto L_002B8090;
    case 8u: goto L_002B80B0;
    case 9u: goto L_002B80C0;
    case 10u: goto L_002B80DC;
    case 11u: goto L_002B8118;
    case 12u: goto L_002B8150;
    case 13u: goto L_002B8160;
    case 14u: goto L_002B8170;
    case 15u: goto L_002B8180;
    case 16u: goto L_002B81CC;
    case 17u: goto L_002B81D4;
    case 18u: goto L_002B81E0;
    case 19u: goto L_002B81E8;
    case 20u: goto L_002B81F0;
    case 21u: goto L_002B81FC;
    case 22u: goto L_002B8204;
    case 23u: goto L_002B820C;
    case 24u: goto L_002B8218;
    case 25u: goto L_002B8220;
    case 26u: goto L_002B8228;
    case 27u: goto L_002B8234;
    case 28u: goto L_002B823C;
    case 29u: goto L_002B8244;
    case 30u: goto L_002B8250;
    case 31u: goto L_002B8258;
    case 32u: goto L_002B8260;
    case 33u: goto L_002B826C;
    case 34u: goto L_002B8274;
    case 35u: goto L_002B827C;
    case 36u: goto L_002B8288;
    case 37u: goto L_002B8290;
    case 38u: goto L_002B8298;
    case 39u: goto L_002B82A4;
    case 40u: goto L_002B82AC;
    case 41u: goto L_002B82B4;
    case 42u: goto L_002B82C0;
    case 43u: goto L_002B82C8;
    case 44u: goto L_002B82D0;
    case 45u: goto L_002B82DC;
    case 46u: goto L_002B82E4;
    case 47u: goto L_002B82EC;
    case 48u: goto L_002B82F8;
    case 49u: goto L_002B8300;
    case 50u: goto L_002B8308;
    case 51u: goto L_002B8314;
    case 52u: goto L_002B831C;
    case 53u: goto L_002B8324;
    case 54u: goto L_002B8330;
    case 55u: goto L_002B833C;
    case 56u: goto L_002B8358;
    case 57u: goto L_002B8390;
    case 58u: goto L_002B839C;
    case 59u: goto L_002B83AC;
    case 60u: goto L_002B83B8;
    case 61u: goto L_002B83C8;
    case 62u: goto L_002B83D4;
    case 63u: goto L_002B83E0;
    case 64u: goto L_002B83FC;
    case 65u: goto L_002B840C;
    case 66u: goto L_002B8418;
    case 67u: goto L_002B8424;
    case 68u: goto L_002B8440;
    case 69u: goto L_002B8460;
    case 70u: goto L_002B8484;
    case 71u: goto L_002B848C;
    case 72u: goto L_002B8494;
    case 73u: goto L_002B849C;
    case 74u: goto L_002B84A4;
    case 75u: goto L_002B84AC;
    case 76u: goto L_002B84B4;
    case 77u: goto L_002B84BC;
    case 78u: goto L_002B84C4;
    case 79u: goto L_002B84CC;
    case 80u: goto L_002B84D4;
    case 81u: goto L_002B84DC;
    case 82u: goto L_002B84E0;
    case 83u: goto L_002B84F0;
    case 84u: goto L_002B8514;
    case 85u: goto L_002B851C;
    case 86u: goto L_002B8524;
    case 87u: goto L_002B852C;
    case 88u: goto L_002B8534;
    case 89u: goto L_002B853C;
    case 90u: goto L_002B8540;
    case 91u: goto L_002B8550;
    case 92u: goto L_002B8670;
    case 93u: goto L_002B8680;
    case 94u: goto L_002B8690;
    case 95u: goto L_002B86C0;
    case 96u: goto L_002B86D0;
    case 97u: goto L_002B86F8;
    case 98u: goto L_002B86FC;
    case 99u: goto L_002B8710;
    case 100u: goto L_002B8770;
    case 101u: goto L_002B8780;
    case 102u: goto L_002B8790;
    case 103u: goto L_002B87A8;
    case 104u: goto L_002B8808;
    case 105u: goto L_002B8850;
    case 106u: goto L_002B8860;
    case 107u: goto L_002B88A0;
    case 108u: goto L_002B88B8;
    case 109u: goto L_002B88C8;
    case 110u: goto L_002B88E0;
    case 111u: goto L_002B8900;
    case 112u: goto L_002B891C;
    case 113u: goto L_002B89F0;
    case 114u: goto L_002B8A08;
    case 115u: goto L_002B8A20;
    case 116u: goto L_002B8A40;
    case 117u: goto L_002B8A58;
    case 118u: goto L_002B8A6C;
    case 119u: goto L_002B8A74;
    case 120u: goto L_002B8A7C;
    case 121u: goto L_002B8A94;
    case 122u: goto L_002B8AAC;
    case 123u: goto L_002B8AC4;
    case 124u: goto L_002B8AD4;
    case 125u: goto L_002B8AF0;
    case 126u: goto L_002B8B44;
    case 127u: goto L_002B8B54;
    case 128u: goto L_002B8B6C;
    case 129u: goto L_002B8B90;
    case 130u: goto L_002B8BA0;
    case 131u: goto L_002B8BC4;
    case 132u: goto L_002B8BDC;
    case 133u: goto L_002B8BE4;
    case 134u: goto L_002B8C0C;
    case 135u: goto L_002B8C30;
    case 136u: goto L_002B8C38;
    case 137u: goto L_002B8C50;
    case 138u: goto L_002B8C78;
    case 139u: goto L_002B8C84;
    case 140u: goto L_002B8CBC;
    case 141u: goto L_002B8CD0;
    case 142u: goto L_002B8CF8;
    case 143u: goto L_002B8D00;
    case 144u: goto L_002B8D0C;
    case 145u: goto L_002B8D30;
    case 146u: goto L_002B8D7C;
    case 147u: goto L_002B8DA8;
    case 148u: goto L_002B8DD8;
    case 149u: goto L_002B8E08;
    case 150u: goto L_002B8E38;
    case 151u: goto L_002B8E68;
    case 152u: goto L_002B8E74;
    case 153u: goto L_002B8EA4;
    case 154u: goto L_002B8ED4;
    case 155u: goto L_002B8EF4;
    case 156u: goto L_002B8F00;
    case 157u: goto L_002B8F18;
    case 158u: goto L_002B8F40;
    case 159u: goto L_002B8F50;
    case 160u: goto L_002B8F60;
    case 161u: goto L_002B8F78;
    case 162u: goto L_002B8F8C;
    case 163u: goto L_002B8F94;
    case 164u: goto L_002B8FA8;
    case 165u: goto L_002B8FC0;
    case 166u: goto L_002B8FD0;
    case 167u: goto L_002B8FE0;
    case 168u: goto L_002B8FF4;
    case 169u: goto L_002B9008;
    case 170u: goto L_002B901C;
    case 171u: goto L_002B9024;
    case 172u: goto L_002B9040;
    case 173u: goto L_002B9050;
    case 174u: goto L_002B9064;
    case 175u: goto L_002B9070;
    case 176u: goto L_002B9084;
    case 177u: goto L_002B90A4;
    case 178u: goto L_002B90C4;
    case 179u: goto L_002B90E4;
    case 180u: goto L_002B90F8;
    case 181u: goto L_002B9110;
    case 182u: goto L_002B9138;
    case 183u: goto L_002B9148;
    case 184u: goto L_002B91A4;
    case 185u: goto L_002B91B8;
    case 186u: goto L_002B91D8;
    case 187u: goto L_002B91F4;
    case 188u: goto L_002B926C;
    case 189u: goto L_002B9294;
    case 190u: goto L_002B92B4;
    case 191u: goto L_002B92D4;
    case 192u: goto L_002B92F4;
    case 193u: goto L_002B9308;
    case 194u: goto L_002B9314;
    case 195u: goto L_002B931C;
    case 196u: goto L_002B933C;
    case 197u: goto L_002B935C;
    case 198u: goto L_002B937C;
    case 199u: goto L_002B9388;
    case 200u: goto L_002B93A4;
    case 201u: goto L_002B93B4;
    case 202u: goto L_002B93CC;
    case 203u: goto L_002B9408;
    case 204u: goto L_002B9438;
    case 205u: goto L_002B945C;
    case 206u: goto L_002B9470;
    case 207u: goto L_002B9478;
    case 208u: goto L_002B9498;
    case 209u: goto L_002B94B8;
    case 210u: goto L_002B94D8;
    case 211u: goto L_002B94F8;
    case 212u: goto L_002B9524;
    case 213u: goto L_002B9530;
    case 214u: goto L_002B9540;
    case 215u: goto L_002B9558;
    case 216u: goto L_002B9594;
    case 217u: goto L_002B95B0;
    case 218u: goto L_002B95B8;
    case 219u: goto L_002B95C4;
    case 220u: goto L_002B95E4;
    case 221u: goto L_002B9604;
    case 222u: goto L_002B961C;
    case 223u: goto L_002B9644;
    case 224u: goto L_002B9664;
    case 225u: goto L_002B9678;
    case 226u: goto L_002B96A0;
    case 227u: goto L_002B96C0;
    case 228u: goto L_002B96D4;
    case 229u: goto L_002B96F0;
    case 230u: goto L_002B9700;
    case 231u: goto L_002B9710;
    case 232u: goto L_002B9728;
    case 233u: goto L_002B9740;
    case 234u: goto L_002B9754;
    case 235u: goto L_002B975C;
    case 236u: goto L_002B9768;
    case 237u: goto L_002B9770;
    case 238u: goto L_002B9784;
    case 239u: goto L_002B9794;
    case 240u: goto L_002B97A0;
    case 241u: goto L_002B97BC;
    case 242u: goto L_002B97C8;
    case 243u: goto L_002B97E0;
    case 244u: goto L_002B97EC;
    case 245u: goto L_002B9804;
    case 246u: goto L_002B9810;
    case 247u: goto L_002B981C;
    case 248u: goto L_002B982C;
    case 249u: goto L_002B9840;
    case 250u: goto L_002B984C;
    case 251u: goto L_002B9868;
    case 252u: goto L_002B9880;
    case 253u: goto L_002B9888;
    case 254u: goto L_002B989C;
    case 255u: goto L_002B98A8;
    case 256u: goto L_002B98C4;
    case 257u: goto L_002B98D0;
    case 258u: goto L_002B98E8;
    case 259u: goto L_002B98F4;
    case 260u: goto L_002B9910;
    case 261u: goto L_002B991C;
    case 262u: goto L_002B9934;
    case 263u: goto L_002B9940;
    case 264u: goto L_002B9958;
    case 265u: goto L_002B9964;
    case 266u: goto L_002B997C;
    case 267u: goto L_002B9988;
    case 268u: goto L_002B99A0;
    case 269u: goto L_002B99AC;
    case 270u: goto L_002B99C8;
    case 271u: goto L_002B99D4;
    case 272u: goto L_002B99EC;
    case 273u: goto L_002B9A00;
    case 274u: goto L_002B9A20;
    case 275u: goto L_002B9A34;
    case 276u: goto L_002B9A4C;
    case 277u: goto L_002B9A60;
    case 278u: goto L_002B9A70;
    case 279u: goto L_002B9A84;
    case 280u: goto L_002B9A9C;
    case 281u: goto L_002B9AB0;
    case 282u: goto L_002B9AC4;
    case 283u: goto L_002B9ADC;
    case 284u: goto L_002B9AF0;
    case 285u: goto L_002B9B0C;
    case 286u: goto L_002B9B20;
    case 287u: goto L_002B9B60;
    case 288u: goto L_002B9B80;
    case 289u: goto L_002B9B9C;
    case 290u: goto L_002B9BE0;
    case 291u: goto L_002B9BFC;
    case 292u: goto L_002B9C18;
    case 293u: goto L_002B9C38;
    case 294u: goto L_002B9C4C;
    case 295u: goto L_002B9C80;
    case 296u: goto L_002B9C94;
    case 297u: goto L_002B9CA8;
    case 298u: goto L_002B9CB0;
    case 299u: goto L_002B9CC0;
    case 300u: goto L_002B9CCC;
    case 301u: goto L_002B9CF0;
    case 302u: goto L_002B9D2C;
    case 303u: goto L_002B9D5C;
    case 304u: goto L_002B9D74;
    case 305u: goto L_002B9D80;
    case 306u: goto L_002B9D9C;
    case 307u: goto L_002B9DCC;
    case 308u: goto L_002B9DD4;
    case 309u: goto L_002B9DE8;
    case 310u: goto L_002B9E20;
    case 311u: goto L_002B9E80;
    case 312u: goto L_002B9EB0;
    case 313u: goto L_002B9EE0;
    case 314u: goto L_002B9F10;
    case 315u: goto L_002B9F40;
    case 316u: goto L_002B9F70;
    case 317u: goto L_002B9F80;
    case 318u: goto L_002B9F98;
    case 319u: goto L_002B9FB0;
    case 320u: goto L_002B9FC4;
    case 321u: goto L_002BA000;
    case 322u: goto L_002BA018;
    case 323u: goto L_002BA02C;
    case 324u: goto L_002BA034;
    case 325u: goto L_002BA040;
    case 326u: goto L_002BA04C;
    case 327u: goto L_002BA05C;
    case 328u: goto L_002BA068;
    case 329u: goto L_002BA078;
    case 330u: goto L_002BA088;
    case 331u: goto L_002BA098;
    case 332u: goto L_002BA0CC;
    case 333u: goto L_002BA110;
    case 334u: goto L_002BA118;
    case 335u: goto L_002BA124;
    case 336u: goto L_002BA148;
    case 337u: goto L_002BA164;
    case 338u: goto L_002BA174;
    case 339u: goto L_002BA188;
    case 340u: goto L_002BA1AC;
    case 341u: goto L_002BA1C8;
    case 342u: goto L_002BA1DC;
    case 343u: goto L_002BA1F8;
    case 344u: goto L_002BA204;
    case 345u: goto L_002BA220;
    case 346u: goto L_002BA22C;
    case 347u: goto L_002BA238;
    case 348u: goto L_002BA240;
    case 349u: goto L_002BA260;
    case 350u: goto L_002BA270;
    case 351u: goto L_002BA284;
    case 352u: goto L_002BA28C;
    case 353u: goto L_002BA2A0;
    case 354u: goto L_002BA2C0;
    case 355u: goto L_002BA2F4;
    case 356u: goto L_002BA30C;
    case 357u: goto L_002BA32C;
    case 358u: goto L_002BA33C;
    case 359u: goto L_002BA350;
    case 360u: goto L_002BA360;
    case 361u: goto L_002BA370;
    case 362u: goto L_002BA380;
    case 363u: goto L_002BA3A8;
    case 364u: goto L_002BA3E4;
    case 365u: goto L_002BA400;
    case 366u: goto L_002BA410;
    case 367u: goto L_002BA424;
    case 368u: goto L_002BA43C;
    case 369u: goto L_002BA450;
    case 370u: goto L_002BA464;
    case 371u: goto L_002BA47C;
    case 372u: goto L_002BA490;
    case 373u: goto L_002BA4A4;
    case 374u: goto L_002BA4BC;
    case 375u: goto L_002BA4D0;
    case 376u: goto L_002BA4E4;
    case 377u: goto L_002BA4F8;
    case 378u: goto L_002BA500;
    case 379u: goto L_002BA534;
    case 380u: goto L_002BA540;
    case 381u: goto L_002BA560;
    case 382u: goto L_002BA590;
    case 383u: goto L_002BA5D4;
    case 384u: goto L_002BA600;
    case 385u: goto L_002BA62C;
    case 386u: goto L_002BA658;
    case 387u: goto L_002BA680;
    case 388u: goto L_002BA690;
    case 389u: goto L_002BA6C0;
    case 390u: goto L_002BA6D0;
    case 391u: goto L_002BA6F0;
    case 392u: goto L_002BA700;
    case 393u: goto L_002BA72C;
    case 394u: goto L_002BA754;
    case 395u: goto L_002BA77C;
    case 396u: goto L_002BA7A4;
    case 397u: goto L_002BA7D0;
    case 398u: goto L_002BA7F0;
    case 399u: goto L_002BA7FC;
    case 400u: goto L_002BA810;
    case 401u: goto L_002BA854;
    case 402u: goto L_002BA870;
    case 403u: goto L_002BA8A8;
    case 404u: goto L_002BA8D0;
    case 405u: goto L_002BA8F8;
    case 406u: goto L_002BA918;
    case 407u: goto L_002BA92C;
    case 408u: goto L_002BA94C;
    case 409u: goto L_002BA960;
    case 410u: goto L_002BA998;
    case 411u: goto L_002BA9C0;
    case 412u: goto L_002BA9E8;
    case 413u: goto L_002BAA08;
    case 414u: goto L_002BAA1C;
    case 415u: goto L_002BAA3C;
    case 416u: goto L_002BAA50;
    case 417u: goto L_002BAA60;
    case 418u: goto L_002BAA70;
    case 419u: goto L_002BAA80;
    case 420u: goto L_002BAA90;
    case 421u: goto L_002BAAA0;
    case 422u: goto L_002BAAB0;
    case 423u: goto L_002BAAE4;
    case 424u: goto L_002BAAF0;
    case 425u: goto L_002BABD0;
    case 426u: goto L_002BAC10;
    case 427u: goto L_002BAC1C;
    case 428u: goto L_002BAC34;
    case 429u: goto L_002BAC50;
    case 430u: goto L_002BACAC;
    case 431u: goto L_002BAD44;
    case 432u: goto L_002BAD8C;
    case 433u: goto L_002BAE20;
    case 434u: goto L_002BAED0;
    case 435u: goto L_002BAF28;
    case 436u: goto L_002BAF60;
    case 437u: goto L_002BAF7C;
    case 438u: goto L_002BB048;
    case 439u: goto L_002BB08C;
    case 440u: goto L_002BB160;
    case 441u: goto L_002BB170;
    case 442u: goto L_002BB180;
    case 443u: goto L_002BB190;
    case 444u: goto L_002BB1A0;
    case 445u: goto L_002BB1FC;
    case 446u: goto L_002BB210;
    case 447u: goto L_002BB26C;
    case 448u: goto L_002BB280;
    case 449u: goto L_002BB2D0;
    case 450u: goto L_002BB320;
    case 451u: goto L_002BB350;
    case 452u: goto L_002BB370;
    case 453u: goto L_002BB3A4;
    case 454u: goto L_002BB440;
    case 455u: goto L_002BB47C;
    case 456u: goto L_002BB494;
    case 457u: goto L_002BB4B0;
    case 458u: goto L_002BB560;
    case 459u: goto L_002BB570;
    case 460u: goto L_002BB65C;
    case 461u: goto L_002BB750;
    case 462u: goto L_002BB7A4;
    case 463u: goto L_002BB810;
    case 464u: goto L_002BB838;
    case 465u: goto L_002BB860;
    case 466u: goto L_002BB948;
    case 467u: goto L_002BB970;
    case 468u: goto L_002BB9A8;
    case 469u: goto L_002BB9D8;
    case 470u: goto L_002BB9FC;
    case 471u: goto L_002BBA08;
    case 472u: goto L_002BBA74;
    case 473u: goto L_002BBAA0;
    case 474u: goto L_002BBAC4;
    case 475u: goto L_002BBAD4;
    case 476u: goto L_002BBAE0;
    case 477u: goto L_002BBB18;
    case 478u: goto L_002BBB38;
    case 479u: goto L_002BBB50;
    case 480u: goto L_002BBBA0;
    case 481u: goto L_002BBBD0;
    case 482u: goto L_002BBBFC;
    case 483u: goto L_002BBC10;
    case 484u: goto L_002BBC40;
    case 485u: goto L_002BBC60;
    case 486u: goto L_002BBCA0;
    case 487u: goto L_002BBCD4;
    case 488u: goto L_002BBCE0;
    case 489u: goto L_002BBD18;
    case 490u: goto L_002BBD3C;
    case 491u: goto L_002BBD44;
    case 492u: goto L_002BBD54;
    case 493u: goto L_002BBD90;
    case 494u: goto L_002BBDD0;
    case 495u: goto L_002BBDFC;
    case 496u: goto L_002BBE18;
    case 497u: goto L_002BBE30;
    case 498u: goto L_002BBE50;
    case 499u: goto L_002BBE60;
    case 500u: goto L_002BBE90;
    case 501u: goto L_002BBECC;
    case 502u: goto L_002BBED4;
    case 503u: goto L_002BBEFC;
    case 504u: goto L_002BBF20;
    case 505u: goto L_002BBF84;
    case 506u: goto L_002BBFB0;
    case 507u: goto L_002BBFDC;
    default: bad_entry(c, 0x002B8000u); return;
    }
L_002B8000:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.budget -= 3;
    { set32(c.r[8], c.r[8].w[0] - 16336u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B7DF0u | kUnwind; return; } [[clang::musttail]] return unit_006D(c, 403u, depth); }
L_002B8010:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.budget -= 3;
    { set32(c.r[8], c.r[8].w[0] - 16320u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B7DF0u | kUnwind; return; } [[clang::musttail]] return unit_006D(c, 403u, depth); }
L_002B8020:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.budget -= 3;
    { set32(c.r[8], c.r[8].w[0] - 16304u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B7DF0u | kUnwind; return; } [[clang::musttail]] return unit_006D(c, 403u, depth); }
L_002B8030:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.budget -= 3;
    { set32(c.r[8], c.r[8].w[0] - 16288u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B7DF0u | kUnwind; return; } [[clang::musttail]] return unit_006D(c, 403u, depth); }
L_002B8040:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld8((c.r[4].w[0] + 17u));  c.pc = t; return; }
L_002B8050:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8090u); set32(c.r[4], 0u + 472u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x002B8090u) [[unlikely]] return; }
L_002B8090:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B80B0u); set32(c.r[8], c.r[8].w[0] - 16272u);  if (depth < kMaxDepth) unit_006D(c, 403u, depth + 1u); else { c.pc = 0x002B7DF0u; return; } if (c.pc != 0x002B80B0u) [[unlikely]] return; }
L_002B80B0:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002B80FC; } }
L_002B80C0:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[18].w[0] << 2);  if (t) { goto L_002B8108; } }
    c.r[4].d[0] = c.r[21].d[0] & 65535ull;
    set32(c.r[16], c.r[19].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = ld16((c.r[16].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B80DCu); set32(c.r[6], 0u + 25500u);  if (depth < kMaxDepth) unit_001C(c, 285u, depth + 1u); else { c.pc = 0x00173260u; return; } if (c.pc != 0x002B80DCu) [[unlikely]] return; }
L_002B80DC:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B80F8; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[22].w[0]), c.r[2].w[0]);
    set32(c.r[22], c.r[22].w[0] + 4u);
    c.budget -= 4;
L_002B80F8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002B80FC:
    c.r[2].d[0] = c.r[18].d[0] < c.r[23].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[17].d[0] < c.r[20].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B80C0u | kUnwind; return; } goto L_002B80C0; } }
L_002B8108:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002B811C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8118u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x002B8118u) [[unlikely]] return; }
L_002B8118:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002B811C:
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
L_002B8150:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] + 264u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012FD60u | kUnwind; return; } [[clang::musttail]] return unit_000B(c, 461u, depth); }
L_002B8160:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] + 420u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012FD60u | kUnwind; return; } [[clang::musttail]] return unit_000B(c, 461u, depth); }
L_002B8170:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_008D(c, 239u, depth); }
L_002B8180:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 5u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B8360; } }
    c.r[1].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_002B831C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 27888u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002B8000u < 16384u) { entry = entries_006E[(t - 0x002B8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002B81CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B81D4u); set32(c.r[4], 0u + 303u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002B81D4u) [[unlikely]] return; }
L_002B81D4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B81E0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x002B81E0u) [[unlikely]] return; }
L_002B81E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_002B8444; } }
L_002B81E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B81F0u); set32(c.r[4], 0u + 288u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002B81F0u) [[unlikely]] return; }
L_002B81F0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B81FCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x002B81FCu) [[unlikely]] return; }
L_002B81FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B8440; } }
L_002B8204:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B820Cu); set32(c.r[4], 0u + 289u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002B820Cu) [[unlikely]] return; }
L_002B820C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8218u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x002B8218u) [[unlikely]] return; }
L_002B8218:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B8440; } }
L_002B8220:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8228u); set32(c.r[4], 0u + 290u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002B8228u) [[unlikely]] return; }
L_002B8228:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8234u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x002B8234u) [[unlikely]] return; }
L_002B8234:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B8440; } }
L_002B823C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8244u); set32(c.r[4], 0u + 291u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002B8244u) [[unlikely]] return; }
L_002B8244:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8250u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x002B8250u) [[unlikely]] return; }
L_002B8250:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B8440; } }
L_002B8258:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8260u); set32(c.r[4], 0u + 295u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002B8260u) [[unlikely]] return; }
L_002B8260:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B826Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x002B826Cu) [[unlikely]] return; }
L_002B826C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B8440; } }
L_002B8274:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B827Cu); set32(c.r[4], 0u + 292u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002B827Cu) [[unlikely]] return; }
L_002B827C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8288u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x002B8288u) [[unlikely]] return; }
L_002B8288:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B8440; } }
L_002B8290:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8298u); set32(c.r[4], 0u + 283u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002B8298u) [[unlikely]] return; }
L_002B8298:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B82A4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x002B82A4u) [[unlikely]] return; }
L_002B82A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B8440; } }
L_002B82AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B82B4u); set32(c.r[4], 0u + 284u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002B82B4u) [[unlikely]] return; }
L_002B82B4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B82C0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x002B82C0u) [[unlikely]] return; }
L_002B82C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B8440; } }
L_002B82C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B82D0u); set32(c.r[4], 0u + 285u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002B82D0u) [[unlikely]] return; }
L_002B82D0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B82DCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x002B82DCu) [[unlikely]] return; }
L_002B82DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B8440; } }
L_002B82E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B82ECu); set32(c.r[4], 0u + 286u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002B82ECu) [[unlikely]] return; }
L_002B82EC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B82F8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x002B82F8u) [[unlikely]] return; }
L_002B82F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B8440; } }
L_002B8300:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8308u); set32(c.r[4], 0u + 287u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002B8308u) [[unlikely]] return; }
L_002B8308:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8314u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x002B8314u) [[unlikely]] return; }
L_002B8314:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B8440; } }
L_002B831C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8324u);  if (depth < kMaxDepth) unit_006E(c, 69u, depth + 1u); else { c.pc = 0x002B8460u; return; } if (c.pc != 0x002B8324u) [[unlikely]] return; }
L_002B8324:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8330u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 83u, depth + 1u); else { c.pc = 0x002B84F0u; return; } if (c.pc != 0x002B8330u) [[unlikely]] return; }
L_002B8330:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B833Cu); set32(c.r[4], 0u + 356u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002B833Cu) [[unlikely]] return; }
L_002B833C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 27912u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8358u); c.r[8].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x002B8358u) [[unlikely]] return; }
L_002B8358:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B8440; } }
L_002B8360:
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_002B8404; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 294u);  if (t) { goto L_002B83A4; } }
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 293u);  if (t) { goto L_002B8388; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_002B83C0; } }
L_002B8388:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8390u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002B8390u) [[unlikely]] return; }
L_002B8390:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B839Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x002B839Cu) [[unlikely]] return; }
L_002B839C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B8440; } }
L_002B83A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B83ACu);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002B83ACu) [[unlikely]] return; }
L_002B83AC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B83B8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x002B83B8u) [[unlikely]] return; }
L_002B83B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B8440; } }
L_002B83C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B83C8u);  if (depth < kMaxDepth) unit_006E(c, 69u, depth + 1u); else { c.pc = 0x002B8460u; return; } if (c.pc != 0x002B83C8u) [[unlikely]] return; }
L_002B83C8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B83D4u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 83u, depth + 1u); else { c.pc = 0x002B84F0u; return; } if (c.pc != 0x002B83D4u) [[unlikely]] return; }
L_002B83D4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B83E0u); set32(c.r[4], 0u + 356u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002B83E0u) [[unlikely]] return; }
L_002B83E0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 27912u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B83FCu); c.r[8].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x002B83FCu) [[unlikely]] return; }
L_002B83FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B8440; } }
L_002B8404:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B840Cu);  if (depth < kMaxDepth) unit_006E(c, 69u, depth + 1u); else { c.pc = 0x002B8460u; return; } if (c.pc != 0x002B840Cu) [[unlikely]] return; }
L_002B840C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8418u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 83u, depth + 1u); else { c.pc = 0x002B84F0u; return; } if (c.pc != 0x002B8418u) [[unlikely]] return; }
L_002B8418:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8424u); set32(c.r[4], 0u + 356u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002B8424u) [[unlikely]] return; }
L_002B8424:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 27912u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8440u); c.r[8].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x002B8440u) [[unlikely]] return; }
L_002B8440:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002B8444:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002B8460:
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_002B84E0; } }
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 27824u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002B8000u < 16384u) { entry = entries_006E[(t - 0x002B8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002B8484:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 340u);  if (t) { goto L_002B84E0; } }
L_002B848C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 341u);  if (t) { goto L_002B84E0; } }
L_002B8494:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 342u);  if (t) { goto L_002B84E0; } }
L_002B849C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 343u);  if (t) { goto L_002B84E0; } }
L_002B84A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 344u);  if (t) { goto L_002B84E0; } }
L_002B84AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 345u);  if (t) { goto L_002B84E0; } }
L_002B84B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 346u);  if (t) { goto L_002B84E0; } }
L_002B84BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 347u);  if (t) { goto L_002B84E0; } }
L_002B84C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 348u);  if (t) { goto L_002B84E0; } }
L_002B84CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 349u);  if (t) { goto L_002B84E0; } }
L_002B84D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 350u);  if (t) { goto L_002B84E0; } }
L_002B84DC:
    set32(c.r[4], 0u + 351u);
    c.budget -= 1;
L_002B84E0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012FD60u | kUnwind; return; } [[clang::musttail]] return unit_000B(c, 461u, depth); }
L_002B84F0:
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_002B8540; } }
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 27760u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002B8000u < 16384u) { entry = entries_006E[(t - 0x002B8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002B8514:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 352u);  if (t) { goto L_002B8540; } }
L_002B851C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 353u);  if (t) { goto L_002B8540; } }
L_002B8524:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 354u);  if (t) { goto L_002B8540; } }
L_002B852C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 355u);  if (t) { goto L_002B8540; } }
L_002B8534:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 708u);  if (t) { goto L_002B8540; } }
L_002B853C:
    set32(c.r[4], 0u + 709u);
    c.budget -= 1;
L_002B8540:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012FD60u | kUnwind; return; } [[clang::musttail]] return unit_000B(c, 461u, depth); }
L_002B8550:
    set32(c.r[2], 0u + 34u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 6u);  if (t) { goto L_002B8658; } }
    set32(c.r[2], 0u + 33u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 32u);  if (t) { goto L_002B8654; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002B8654; } }
    set32(c.r[2], 0u + 62u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_002B864C; } }
    set32(c.r[2], 0u + 49u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 48u);  if (t) { goto L_002B8648; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002B8648; } }
    set32(c.r[2], 0u + 29u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 22u);  if (t) { goto L_002B8648; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002B863C; } }
    set32(c.r[2], 0u + 82u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002B8640; } }
    set32(c.r[2], 0u + 64u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 63u);  if (t) { goto L_002B863C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002B863C; } }
    set32(c.r[2], 0u + 61u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 51u);  if (t) { goto L_002B863C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002B863C; } }
    set32(c.r[2], 0u + 50u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 47u);  if (t) { goto L_002B863C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002B863C; } }
    set32(c.r[2], 0u + 31u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 30u);  if (t) { goto L_002B863C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002B863C; } }
    set32(c.r[2], 0u + 28u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 27u);  if (t) { goto L_002B863C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002B863C; } }
    set32(c.r[2], 0u + 26u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 25u);  if (t) { goto L_002B863C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002B863C; } }
    set32(c.r[2], 0u + 13u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002B863C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002B8668; } }
L_002B863C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002B8640:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B8668; } }
L_002B8648:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_002B864C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B8668; } }
L_002B8654:
    set32(c.r[2], 0u + 6u);
    c.budget -= 1;
L_002B8658:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002B8668; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002B8668; } }
L_002B8668:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B8670:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8680u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x002B8680u) [[unlikely]] return; }
L_002B8680:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 346u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B8690:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002B86AC; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_002B86AC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B86AC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B86C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B86D0u);  if (depth < kMaxDepth) unit_000C(c, 51u, depth + 1u); else { c.pc = 0x00130510u; return; } if (c.pc != 0x002B86D0u) [[unlikely]] return; }
L_002B86D0:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(23ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002B86FC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 27728u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002B8000u < 16384u) { entry = entries_006E[(t - 0x002B8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002B86F8:
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002B86FC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B8710:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_002B8760; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_002B875C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002B8750; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002B8754; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002B8750; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002B8760; } }
L_002B8750:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002B8754:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B8760; } }
L_002B875C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_002B8760:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B8770:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8780u);  if (depth < kMaxDepth) unit_008D(c, 238u, depth + 1u); else { c.pc = 0x00336B70u; return; } if (c.pc != 0x002B8780u) [[unlikely]] return; }
L_002B8780:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 22u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B8790:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - 17120u);  if (t) { goto L_002B87BC; } }
L_002B87A8:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[6].sd[0] < 96ll ? 1ull : 0ull;  if (t) { goto L_002B87CC; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_002B87BC:
    c.r[2].d[0] = c.r[6].sd[0] < 96ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[6].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B87A8u | kUnwind; return; } goto L_002B87A8; } }
    c.r[2].d[0] = c.r[6].sd[0] < 96ll ? 1ull : 0ull;
    c.budget -= 1;
L_002B87CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 21u);  if (t) { goto L_002B87DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002B8844; } }
L_002B87DC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002B87F0; } }
    set32(c.r[2], 0u + 22u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[5].d[0] & 255ull;  if (t) { goto L_002B87F8; } }
L_002B87F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002B8844; } }
L_002B87F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].d[0] = c.r[4].sd[0] < 86ll ? 1ull : 0ull;  if (t) { goto L_002B8810; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8808u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 108u, depth + 1u); else { c.pc = 0x0012D050u; return; } if (c.pc != 0x002B8808u) [[unlikely]] return; }
L_002B8808:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_002B8848; } }
L_002B8810:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] << 3);  if (t) { goto L_002B8820; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002B8844; } }
L_002B8820:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[4], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] - 4810u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 9;
L_002B8844:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002B8848:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B8850:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - 17120u);  if (t) { goto L_002B8874; } }
L_002B8860:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[5].sd[0] < 96ll ? 1ull : 0ull;  if (t) { goto L_002B8884; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_002B8874:
    c.r[2].d[0] = c.r[5].sd[0] < 96ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[5].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B8860u | kUnwind; return; } goto L_002B8860; } }
    c.r[2].d[0] = c.r[5].sd[0] < 96ll ? 1ull : 0ull;
    c.budget -= 1;
L_002B8884:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002B8890; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B8890:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B88A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B88B8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x002B88B8u) [[unlikely]] return; }
L_002B88B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B88C8u); c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25575u)));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x002B88C8u) [[unlikely]] return; }
L_002B88C8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25573u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B88E0u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 15u, depth + 1u); else { c.pc = 0x002B8180u; return; } if (c.pc != 0x002B88E0u) [[unlikely]] return; }
L_002B88E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B8900:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B891Cu); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0020(c, 143u, depth + 1u); else { c.pc = 0x00181D30u; return; } if (c.pc != 0x002B891Cu) [[unlikely]] return; }
L_002B891C:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 6u);  if (t) { goto L_002B897C; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_002B8970; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_002B8964; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_002B8988; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_002B8988; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002B8988; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_002B8964:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B8988; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_002B8970:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B8988; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 1;
L_002B897C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B8988; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B8988:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B89D8; } }
    c.r[3].d[0] = ld8((c.r[29].w[0] + 50u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B89A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_002B89C8; } }
L_002B89A4:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 51u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B89B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 7u);  if (t) { goto L_002B89C8; } }
L_002B89B8:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 41u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B89C8; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 1;
L_002B89C8:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 48u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B89D8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B89D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002B89F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 50u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8A08u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x002B8A08u) [[unlikely]] return; }
L_002B8A08:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B8A20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8A40u); set32(c.r[5], 0u + 27u);  if (depth < kMaxDepth) unit_0010(c, 29u, depth + 1u); else { c.pc = 0x00140690u; return; } if (c.pc != 0x002B8A40u) [[unlikely]] return; }
L_002B8A40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 9056u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 16u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8A58u); st32((c.r[17].w[0] + 20u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x002B8A58u) [[unlikely]] return; }
L_002B8A58:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8A6Cu); st32((c.r[29].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002B8A6Cu) [[unlikely]] return; }
L_002B8A6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8A74u);  if (depth < kMaxDepth) unit_006D(c, 216u, depth + 1u); else { c.pc = 0x002B6270u; return; } if (c.pc != 0x002B8A74u) [[unlikely]] return; }
L_002B8A74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8A7Cu);  if (depth < kMaxDepth) unit_006D(c, 225u, depth + 1u); else { c.pc = 0x002B6350u; return; } if (c.pc != 0x002B8A7Cu) [[unlikely]] return; }
L_002B8A7C:
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], 0u + 118u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 108u);  if (t) { goto L_002B8AA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8A94u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x002B8A94u) [[unlikely]] return; }
L_002B8A94:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[16], ld32((c.r[1].w[0] - 25584u)));
    set32(c.r[4], 0u + 108u);
    c.budget -= 4;
L_002B8AA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8AACu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002B8AACu) [[unlikely]] return; }
L_002B8AAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B8AC4; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8AC4u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 137u, depth + 1u); else { c.pc = 0x002B8C50u; return; } if (c.pc != 0x002B8AC4u) [[unlikely]] return; }
L_002B8AC4:
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[16].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8AD4u); set32(c.r[4], ld32((c.r[29].w[0] + 60u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002B8AD4u) [[unlikely]] return; }
L_002B8AD4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002B8AF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002B8B6C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 9056u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B8B48; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B8B44; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B8B44; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8B44u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B8B44u) [[unlikely]] return; }
L_002B8B44:
    st32((c.r[17].w[0] + 16u), 0u);
    c.budget -= 1;
L_002B8B48:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8B54u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 31u, depth + 1u); else { c.pc = 0x00140700u; return; } if (c.pc != 0x002B8B54u) [[unlikely]] return; }
L_002B8B54:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002B8B70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8B6Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002B8B6Cu) [[unlikely]] return; }
L_002B8B6C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002B8B70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B8B90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B8BA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8BC4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B8BC4u) [[unlikely]] return; }
L_002B8BC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_002B8C38; } }
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8BDCu); st32((c.r[29].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002B8BDCu) [[unlikely]] return; }
L_002B8BDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8BE4u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002B8BE4u) [[unlikely]] return; }
L_002B8BE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B8C0C; } }
    set32(c.r[9], ld32((c.r[16].w[0] + 20u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8C0Cu); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0085(c, 278u, depth + 1u); else { c.pc = 0x003167A0u; return; } if (c.pc != 0x002B8C0Cu) [[unlikely]] return; }
L_002B8C0C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002B8C30; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002B8C30; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8C30u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B8C30u) [[unlikely]] return; }
L_002B8C30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8C38u); set32(c.r[4], ld32((c.r[29].w[0] + 44u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002B8C38u) [[unlikely]] return; }
L_002B8C38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B8C50:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8C78u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_000B(c, 298u, depth + 1u); else { c.pc = 0x0012E440u; return; } if (c.pc != 0x002B8C78u) [[unlikely]] return; }
L_002B8C78:
    set32(c.r[4], c.r[16].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8C84u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x002B8C84u) [[unlikely]] return; }
L_002B8C84:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 8944u);
    set32(c.r[2], c.r[2].w[0] + 9032u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 40u), 0u);
    st32((c.r[16].w[0] + 92u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 100u), 0u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8CBCu); st32((c.r[16].w[0] + 104u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x002B8CBCu) [[unlikely]] return; }
L_002B8CBC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8CD0u); st32((c.r[29].w[0] + 76u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002B8CD0u) [[unlikely]] return; }
L_002B8CD0:
    set32(c.r[2], 0u + 15939u);
    set32(c.r[3], 0u + 15812u);
    st16((c.r[29].w[0] + 74u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x73720000u);
    st16((c.r[29].w[0] + 72u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] - 27632u);
    set32(c.r[5], c.r[29].w[0] + 72u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8CF8u); c.r[6].d[0] = c.r[2].d[0] | 25955ull;  if (depth < kMaxDepth) unit_0087(c, 54u, depth + 1u); else { c.pc = 0x0031C5D0u; return; } if (c.pc != 0x002B8CF8u) [[unlikely]] return; }
L_002B8CF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8D00u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0053(c, 59u, depth + 1u); else { c.pc = 0x0024C560u; return; } if (c.pc != 0x002B8D00u) [[unlikely]] return; }
L_002B8D00:
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8D0Cu); set32(c.r[4], ld32((c.r[29].w[0] + 76u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002B8D0Cu) [[unlikely]] return; }
L_002B8D0C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002B8D30:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002B8F18; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 8944u);
    set32(c.r[3], c.r[3].w[0] + 9032u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x73720000u);
    st32((c.r[18].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8D7Cu); c.r[4].d[0] = c.r[2].d[0] | 25955ull;  if (depth < kMaxDepth) unit_0087(c, 60u, depth + 1u); else { c.pc = 0x0031C670u; return; } if (c.pc != 0x002B8D7Cu) [[unlikely]] return; }
L_002B8D7C:
    set32(c.r[4], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B8DAC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B8DA8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B8DA8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8DA8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B8DA8u) [[unlikely]] return; }
L_002B8DA8:
    st32((c.r[18].w[0] + 44u), 0u);
    c.budget -= 1;
L_002B8DAC:
    set32(c.r[4], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B8DDC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B8DD8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B8DD8; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8DD8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B8DD8u) [[unlikely]] return; }
L_002B8DD8:
    st32((c.r[18].w[0] + 32u), 0u);
    c.budget -= 1;
L_002B8DDC:
    set32(c.r[4], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B8E0C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B8E08; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B8E08; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8E08u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B8E08u) [[unlikely]] return; }
L_002B8E08:
    st32((c.r[18].w[0] + 36u), 0u);
    c.budget -= 1;
L_002B8E0C:
    set32(c.r[4], ld32((c.r[18].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B8E3C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B8E38; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B8E38; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8E38u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B8E38u) [[unlikely]] return; }
L_002B8E38:
    st32((c.r[18].w[0] + 40u), 0u);
    c.budget -= 1;
L_002B8E3C:
    set32(c.r[4], ld32((c.r[18].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002B8E70; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B8E68; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B8E68; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8E68u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B8E68u) [[unlikely]] return; }
L_002B8E68:
    st32((c.r[18].w[0] + 48u), 0u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002B8E70:
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 1;
L_002B8E74:
    set32(c.r[20], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 52u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[20].w[0] + 52u);  if (t) { goto L_002B8EA8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B8EA4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B8EA4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8EA4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B8EA4u) [[unlikely]] return; }
L_002B8EA4:
    st32((c.r[19].w[0]), 0u);
    c.budget -= 1;
L_002B8EA8:
    set32(c.r[4], ld32((c.r[20].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[20].w[0] + 72u);  if (t) { goto L_002B8ED8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B8ED4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B8ED4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8ED4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B8ED4u) [[unlikely]] return; }
L_002B8ED4:
    st32((c.r[19].w[0]), 0u);
    c.budget -= 1;
L_002B8ED8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B8E74u | kUnwind; return; } goto L_002B8E74; } }
    set32(c.r[4], c.r[18].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8EF4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x002B8EF4u) [[unlikely]] return; }
L_002B8EF4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8F00u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 300u, depth + 1u); else { c.pc = 0x0012E490u; return; } if (c.pc != 0x002B8F00u) [[unlikely]] return; }
L_002B8F00:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002B8F1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8F18u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002B8F18u) [[unlikely]] return; }
L_002B8F18:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002B8F1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002B8F40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B8F50:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E600u | kUnwind; return; } [[clang::musttail]] return unit_000B(c, 319u, depth); }
L_002B8F60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8F78u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x002B8F78u) [[unlikely]] return; }
L_002B8F78:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8F8Cu); st32((c.r[29].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002B8F8Cu) [[unlikely]] return; }
L_002B8F8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8F94u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 318u, depth + 1u); else { c.pc = 0x0012E5E0u; return; } if (c.pc != 0x002B8F94u) [[unlikely]] return; }
L_002B8F94:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8FA8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002A(c, 139u, depth + 1u); else { c.pc = 0x001A95F0u; return; } if (c.pc != 0x002B8FA8u) [[unlikely]] return; }
L_002B8FA8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], 0u + 10000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[16], c.r[2].w[0] + 624u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8FC0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x002B8FC0u) [[unlikely]] return; }
L_002B8FC0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8FD0u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x002B8FD0u) [[unlikely]] return; }
L_002B8FD0:
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8FE0u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x002B8FE0u) [[unlikely]] return; }
L_002B8FE0:
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8FF4u); set32(c.r[5], 0u + 49u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B8FF4u) [[unlikely]] return; }
L_002B8FF4:
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9008u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B9008u) [[unlikely]] return; }
L_002B9008:
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 172u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B901Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B901Cu) [[unlikely]] return; }
L_002B901C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9024u); set32(c.r[4], ld32((c.r[29].w[0] + 60u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002B9024u) [[unlikely]] return; }
L_002B9024:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002B9040:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E610u | kUnwind; return; } [[clang::musttail]] return unit_000B(c, 320u, depth); }
L_002B9050:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9064u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 321u, depth + 1u); else { c.pc = 0x0012E630u; return; } if (c.pc != 0x002B9064u) [[unlikely]] return; }
L_002B9064:
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9070u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 362u, depth + 1u); else { c.pc = 0x002BA380u; return; } if (c.pc != 0x002B9070u) [[unlikely]] return; }
L_002B9070:
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9084u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B9084u) [[unlikely]] return; }
L_002B9084:
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B90A4u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B90A4u) [[unlikely]] return; }
L_002B90A4:
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B90C4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B90C4u) [[unlikely]] return; }
L_002B90C4:
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 180u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B90E4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B90E4u) [[unlikely]] return; }
L_002B90E4:
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B90F8u); set32(c.r[5], 0u + 50u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B90F8u) [[unlikely]] return; }
L_002B90F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B9110:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B9140; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9138u);  if (depth < kMaxDepth) unit_000B(c, 304u, depth + 1u); else { c.pc = 0x0012E500u; return; } if (c.pc != 0x002B9138u) [[unlikely]] return; }
L_002B9138:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_002B96D8; } }
L_002B9140:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9148u); set32(c.r[4], ld32((c.r[18].w[0] + 48u)));  if (depth < kMaxDepth) unit_006E(c, 387u, depth + 1u); else { c.pc = 0x002BA680u; return; } if (c.pc != 0x002B9148u) [[unlikely]] return; }
L_002B9148:
    set32(c.r[3], ld32((c.r[18].w[0] + 100u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] - c.r[17].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B91F8; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[1].d[0] = c.r[2].sd[0] < -3ll ? 1ull : 0ull;  if (t) { goto L_002B9170; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_002B9170; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B9170:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002B9188; } }
    c.r[2].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002B9188; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_002B9188:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B91A4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B91A4u) [[unlikely]] return; }
L_002B91A4:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002B91B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B91B8u);  if (depth < kMaxDepth) unit_006E(c, 290u, depth + 1u); else { c.pc = 0x002B9BE0u; return; } if (c.pc != 0x002B91B8u) [[unlikely]] return; }
L_002B91B8:
    set32(c.r[2], ld32((c.r[18].w[0] + 100u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B91D8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B91D8u) [[unlikely]] return; }
L_002B91D8:
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B91F4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B91F4u) [[unlikely]] return; }
L_002B91F4:
    st32((c.r[18].w[0] + 100u), c.r[17].w[0]);
    c.budget -= 1;
L_002B91F8:
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002B9538; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002B93AC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B9224; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002B96CC; } }
L_002B9224:
    set32(c.r[2], ld32((c.r[18].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 68u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_002B9394; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002B9244; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B96C8; } }
L_002B9244:
    set32(c.r[4], ld32((c.r[18].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[2], c.r[4].w[0] << 2);  if (t) { goto L_002B9344; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002B9274; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 92u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B926Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 341u, depth + 1u); else { c.pc = 0x002B7720u; return; } if (c.pc != 0x002B926Cu) [[unlikely]] return; }
L_002B926C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B9328; } }
L_002B9274:
    set32(c.r[2], ld32((c.r[18].w[0] + 100u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 180u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9294u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B9294u) [[unlikely]] return; }
L_002B9294:
    set32(c.r[2], ld32((c.r[18].w[0] + 100u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 196u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B92B4u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B92B4u) [[unlikely]] return; }
L_002B92B4:
    set32(c.r[2], ld32((c.r[18].w[0] + 100u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B92D4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B92D4u) [[unlikely]] return; }
L_002B92D4:
    set32(c.r[2], ld32((c.r[18].w[0] + 100u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 172u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B92F4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B92F4u) [[unlikely]] return; }
L_002B92F4:
    set32(c.r[4], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9308u); set32(c.r[5], 0u + 53u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B9308u) [[unlikely]] return; }
L_002B9308:
    set32(c.r[4], ld32((c.r[18].w[0] + 48u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9314u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 362u, depth + 1u); else { c.pc = 0x002BA380u; return; } if (c.pc != 0x002B9314u) [[unlikely]] return; }
L_002B9314:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B931Cu); set32(c.r[4], ld32((c.r[18].w[0] + 48u)));  if (depth < kMaxDepth) unit_006E(c, 409u, depth + 1u); else { c.pc = 0x002BA960u; return; } if (c.pc != 0x002B931Cu) [[unlikely]] return; }
L_002B931C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 96u), c.r[2].w[0]);  if (t) { goto L_002B96C8; } }
L_002B9328:
    set32(c.r[4], ld32((c.r[18].w[0] + 48u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B933Cu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B933Cu) [[unlikely]] return; }
L_002B933C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B96C8; } }
L_002B9344:
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 192u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B935Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B935Cu) [[unlikely]] return; }
L_002B935C:
    set32(c.r[2], ld32((c.r[18].w[0] + 100u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B937Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B937Cu) [[unlikely]] return; }
L_002B937C:
    set32(c.r[4], ld32((c.r[18].w[0] + 48u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9388u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 362u, depth + 1u); else { c.pc = 0x002BA380u; return; } if (c.pc != 0x002B9388u) [[unlikely]] return; }
L_002B9388:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 96u), c.r[2].w[0]);  if (t) { goto L_002B96C8; } }
L_002B9394:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B93A4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B93A4u) [[unlikely]] return; }
L_002B93A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B96C8; } }
L_002B93AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;  if (t) { goto L_002B93E0; } }
L_002B93B4:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B93CCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B93CCu) [[unlikely]] return; }
L_002B93CC:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B96D4; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 2;
L_002B93E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B93B4u | kUnwind; return; } goto L_002B93B4; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 100u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 168u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9408u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B9408u) [[unlikely]] return; }
L_002B9408:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_002B9504; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002B9424; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B96C8; } }
L_002B9424:
    set32(c.r[2], ld32((c.r[18].w[0] + 100u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9438u); set32(c.r[4], ld32((c.r[2].w[0] + 52u)));  if (depth < kMaxDepth) unit_0071(c, 64u, depth + 1u); else { c.pc = 0x002C4E30u; return; } if (c.pc != 0x002B9438u) [[unlikely]] return; }
L_002B9438:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 100u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 196u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B945Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B945Cu) [[unlikely]] return; }
L_002B945C:
    set32(c.r[4], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9470u); set32(c.r[5], 0u + 53u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B9470u) [[unlikely]] return; }
L_002B9470:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9478u); set32(c.r[4], ld32((c.r[18].w[0] + 48u)));  if (depth < kMaxDepth) unit_006E(c, 409u, depth + 1u); else { c.pc = 0x002BA960u; return; } if (c.pc != 0x002B9478u) [[unlikely]] return; }
L_002B9478:
    set32(c.r[2], ld32((c.r[18].w[0] + 100u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9498u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B9498u) [[unlikely]] return; }
L_002B9498:
    set32(c.r[2], ld32((c.r[18].w[0] + 100u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 180u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B94B8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B94B8u) [[unlikely]] return; }
L_002B94B8:
    set32(c.r[2], ld32((c.r[18].w[0] + 100u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B94D8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B94D8u) [[unlikely]] return; }
L_002B94D8:
    set32(c.r[2], ld32((c.r[18].w[0] + 100u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 172u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B94F8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B94F8u) [[unlikely]] return; }
L_002B94F8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 96u), c.r[2].w[0]);  if (t) { goto L_002B96C8; } }
L_002B9504:
    set32(c.r[2], ld32((c.r[18].w[0] + 100u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9524u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B9524u) [[unlikely]] return; }
L_002B9524:
    set32(c.r[4], ld32((c.r[18].w[0] + 48u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9530u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_006E(c, 362u, depth + 1u); else { c.pc = 0x002BA380u; return; } if (c.pc != 0x002B9530u) [[unlikely]] return; }
L_002B9530:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 96u), 0u);  if (t) { goto L_002B96C8; } }
L_002B9538:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;  if (t) { goto L_002B956C; } }
L_002B9540:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9558u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B9558u) [[unlikely]] return; }
L_002B9558:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B96D4; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 2;
L_002B956C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B9540u | kUnwind; return; } goto L_002B9540; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 100u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 168u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9594u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B9594u) [[unlikely]] return; }
L_002B9594:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B96C8; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B95B0u); set32(c.r[5], 0u + 54u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B95B0u) [[unlikely]] return; }
L_002B95B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B95B8u); set32(c.r[4], ld32((c.r[18].w[0] + 48u)));  if (depth < kMaxDepth) unit_006E(c, 388u, depth + 1u); else { c.pc = 0x002BA690u; return; } if (c.pc != 0x002B95B8u) [[unlikely]] return; }
L_002B95B8:
    set32(c.r[5], ld32((c.r[18].w[0] + 100u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B95C4u); set32(c.r[4], ld32((c.r[18].w[0] + 48u)));  if (depth < kMaxDepth) unit_006E(c, 353u, depth + 1u); else { c.pc = 0x002BA2A0u; return; } if (c.pc != 0x002B95C4u) [[unlikely]] return; }
L_002B95C4:
    set32(c.r[2], ld32((c.r[18].w[0] + 100u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 172u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B95E4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B95E4u) [[unlikely]] return; }
L_002B95E4:
    set32(c.r[2], ld32((c.r[18].w[0] + 100u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 180u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9604u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B9604u) [[unlikely]] return; }
L_002B9604:
    set32(c.r[2], ld32((c.r[18].w[0] + 100u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_002B966C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B961Cu); set32(c.r[4], ld32((c.r[18].w[0] + 48u)));  if (depth < kMaxDepth) unit_006E(c, 362u, depth + 1u); else { c.pc = 0x002BA380u; return; } if (c.pc != 0x002B961Cu) [[unlikely]] return; }
L_002B961C:
    set32(c.r[2], ld32((c.r[18].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B9664; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9644u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B9644u) [[unlikely]] return; }
L_002B9644:
    set32(c.r[2], ld32((c.r[18].w[0] + 100u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9664u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B9664u) [[unlikely]] return; }
L_002B9664:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 96u), 0u);  if (t) { goto L_002B96C8; } }
L_002B966C:
    set32(c.r[4], ld32((c.r[18].w[0] + 48u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9678u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 362u, depth + 1u); else { c.pc = 0x002BA380u; return; } if (c.pc != 0x002B9678u) [[unlikely]] return; }
L_002B9678:
    set32(c.r[2], ld32((c.r[18].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B96C0; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B96A0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B96A0u) [[unlikely]] return; }
L_002B96A0:
    set32(c.r[2], ld32((c.r[18].w[0] + 100u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B96C0u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B96C0u) [[unlikely]] return; }
L_002B96C0:
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 2;
L_002B96C8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002B96CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B96D4u);  if (depth < kMaxDepth) unit_000B(c, 304u, depth + 1u); else { c.pc = 0x0012E500u; return; } if (c.pc != 0x002B96D4u) [[unlikely]] return; }
L_002B96D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002B96D8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002B96F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 44u)));  c.pc = t; return; }
L_002B9700:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 68u), c.r[5].w[0]);  c.pc = t; return; }
L_002B9710:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9728u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 295u, depth + 1u); else { c.pc = 0x002B9C80u; return; } if (c.pc != 0x002B9728u) [[unlikely]] return; }
L_002B9728:
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002B9A00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9740u);  if (depth < kMaxDepth) unit_0053(c, 78u, depth + 1u); else { c.pc = 0x0024C7C0u; return; } if (c.pc != 0x002B9740u) [[unlikely]] return; }
L_002B9740:
    set32(c.r[7], ld32((c.r[16].w[0] + 92u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9754u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0053(c, 87u, depth + 1u); else { c.pc = 0x0024C8E0u; return; } if (c.pc != 0x002B9754u) [[unlikely]] return; }
L_002B9754:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B975Cu);  if (depth < kMaxDepth) unit_0053(c, 78u, depth + 1u); else { c.pc = 0x0024C7C0u; return; } if (c.pc != 0x002B975Cu) [[unlikely]] return; }
L_002B975C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9768u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0053(c, 90u, depth + 1u); else { c.pc = 0x0024C940u; return; } if (c.pc != 0x002B9768u) [[unlikely]] return; }
L_002B9768:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9770u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002B9770u) [[unlikely]] return; }
L_002B9770:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002B97A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9784u);  if (depth < kMaxDepth) unit_0053(c, 78u, depth + 1u); else { c.pc = 0x0024C7C0u; return; } if (c.pc != 0x002B9784u) [[unlikely]] return; }
L_002B9784:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9794u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0053(c, 93u, depth + 1u); else { c.pc = 0x0024C9A0u; return; } if (c.pc != 0x002B9794u) [[unlikely]] return; }
L_002B9794:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B97A0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x002B97A0u) [[unlikely]] return; }
L_002B97A0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002B97A4:
    st32((c.r[16].w[0] + 32u), c.r[17].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[5], 0u + 12u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B97BCu); set32(c.r[4], c.r[2].w[0] + 624u);  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x002B97BCu) [[unlikely]] return; }
L_002B97BC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B97C8u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002B97C8u) [[unlikely]] return; }
L_002B97C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B97E0; } }
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[5].d[0] = ld64((c.r[3].w[0] + 48u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B97E0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x002B97E0u) [[unlikely]] return; }
L_002B97E0:
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B97ECu); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002B97ECu) [[unlikely]] return; }
L_002B97EC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[4], 0u + 160u);  if (t) { goto L_002B9824; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x73720000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9804u); c.r[4].d[0] = c.r[2].d[0] | 25955ull;  if (depth < kMaxDepth) unit_0087(c, 63u, depth + 1u); else { c.pc = 0x0031C6B0u; return; } if (c.pc != 0x002B9804u) [[unlikely]] return; }
L_002B9804:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9810u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0087(c, 68u, depth + 1u); else { c.pc = 0x0031C750u; return; } if (c.pc != 0x002B9810u) [[unlikely]] return; }
L_002B9810:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B981Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x002B981Cu) [[unlikely]] return; }
L_002B981C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 160u);
    c.budget -= 2;
L_002B9824:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B982Cu); st32((c.r[16].w[0] + 40u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002B982Cu) [[unlikely]] return; }
L_002B982C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002B9840; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9840u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_002A(c, 287u, depth + 1u); else { c.pc = 0x001AB200u; return; } if (c.pc != 0x002B9840u) [[unlikely]] return; }
L_002B9840:
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B984Cu); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002B984Cu) [[unlikely]] return; }
L_002B984C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B9868; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9868u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 301u, depth + 1u); else { c.pc = 0x002B9CF0u; return; } if (c.pc != 0x002B9868u) [[unlikely]] return; }
L_002B9868:
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9880u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B9880u) [[unlikely]] return; }
L_002B9880:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9888u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002B9888u) [[unlikely]] return; }
L_002B9888:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B989C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 92u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B989Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 250u, depth + 1u); else { c.pc = 0x002CA340u; return; } if (c.pc != 0x002B989Cu) [[unlikely]] return; }
L_002B989C:
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B98A8u); set32(c.r[4], 0u + 1568u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002B98A8u) [[unlikely]] return; }
L_002B98A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B98C4; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B98C4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0071(c, 84u, depth + 1u); else { c.pc = 0x002C5010u; return; } if (c.pc != 0x002B98C4u) [[unlikely]] return; }
L_002B98C4:
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B98D0u); set32(c.r[4], 0u + 992u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002B98D0u) [[unlikely]] return; }
L_002B98D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B98E8; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 92u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B98E8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0071(c, 283u, depth + 1u); else { c.pc = 0x002C6920u; return; } if (c.pc != 0x002B98E8u) [[unlikely]] return; }
L_002B98E8:
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B98F4u); set32(c.r[4], 0u + 1136u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002B98F4u) [[unlikely]] return; }
L_002B98F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B9910; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9910u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0071(c, 372u, depth + 1u); else { c.pc = 0x002C75A0u; return; } if (c.pc != 0x002B9910u) [[unlikely]] return; }
L_002B9910:
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B991Cu); set32(c.r[4], 0u + 988u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002B991Cu) [[unlikely]] return; }
L_002B991C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B9934; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 92u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9934u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 40u, depth + 1u); else { c.pc = 0x002C8610u; return; } if (c.pc != 0x002B9934u) [[unlikely]] return; }
L_002B9934:
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9940u); set32(c.r[4], 0u + 2488u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002B9940u) [[unlikely]] return; }
L_002B9940:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B9958; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 92u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9958u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007A(c, 264u, depth + 1u); else { c.pc = 0x002EA360u; return; } if (c.pc != 0x002B9958u) [[unlikely]] return; }
L_002B9958:
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9964u); set32(c.r[4], 0u + 3920u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002B9964u) [[unlikely]] return; }
L_002B9964:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B997C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 92u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B997Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0079(c, 260u, depth + 1u); else { c.pc = 0x002E6B90u; return; } if (c.pc != 0x002B997Cu) [[unlikely]] return; }
L_002B997C:
    st32((c.r[16].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9988u); set32(c.r[4], 0u + 4128u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002B9988u) [[unlikely]] return; }
L_002B9988:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B99A0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 92u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B99A0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0079(c, 394u, depth + 1u); else { c.pc = 0x002E78E0u; return; } if (c.pc != 0x002B99A0u) [[unlikely]] return; }
L_002B99A0:
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B99ACu); set32(c.r[4], 0u + 3856u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002B99ACu) [[unlikely]] return; }
L_002B99AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B99C8; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B99C8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007A(c, 22u, depth + 1u); else { c.pc = 0x002E8240u; return; } if (c.pc != 0x002B99C8u) [[unlikely]] return; }
L_002B99C8:
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B99D4u); set32(c.r[4], 0u + 2736u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002B99D4u) [[unlikely]] return; }
L_002B99D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B99EC; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 92u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B99ECu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007A(c, 148u, depth + 1u); else { c.pc = 0x002E9250u; return; } if (c.pc != 0x002B99ECu) [[unlikely]] return; }
L_002B99EC:
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9A00u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B9A00u) [[unlikely]] return; }
L_002B9A00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B9A20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9A34u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 284u, depth + 1u); else { c.pc = 0x002B9AF0u; return; } if (c.pc != 0x002B9A34u) [[unlikely]] return; }
L_002B9A34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B9A4C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9A4Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B9A4Cu) [[unlikely]] return; }
L_002B9A4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B9A60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B9A70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9A84u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 284u, depth + 1u); else { c.pc = 0x002B9AF0u; return; } if (c.pc != 0x002B9A84u) [[unlikely]] return; }
L_002B9A84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B9A9C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9A9Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B9A9Cu) [[unlikely]] return; }
L_002B9A9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B9AB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9AC4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 284u, depth + 1u); else { c.pc = 0x002B9AF0u; return; } if (c.pc != 0x002B9AC4u) [[unlikely]] return; }
L_002B9AC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B9ADC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9ADCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B9ADCu) [[unlikely]] return; }
L_002B9ADC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B9AF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9B0Cu); set32(c.r[4], ld32((c.r[4].w[0] + 48u)));  if (depth < kMaxDepth) unit_006E(c, 381u, depth + 1u); else { c.pc = 0x002BA560u; return; } if (c.pc != 0x002B9B0Cu) [[unlikely]] return; }
L_002B9B0C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9B20u); c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_006E(c, 287u, depth + 1u); else { c.pc = 0x002B9B60u; return; } if (c.pc != 0x002B9B20u) [[unlikely]] return; }
L_002B9B20:
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    c.r[4].d[0] = c.r[16].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = ld8((c.r[3].w[0] + 137u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B9B60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 8;
L_002B9B80:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9B9Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B9B9Cu) [[unlikely]] return; }
L_002B9B9C:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[18].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B9B80u | kUnwind; return; } goto L_002B9B80; } }
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002B9BE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 7;
L_002B9BFC:
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9C18u); set32(c.r[16], c.r[2].w[0] + 52u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B9C18u) [[unlikely]] return; }
L_002B9C18:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B9C4C; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 180u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9C38u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B9C38u) [[unlikely]] return; }
L_002B9C38:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 188u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9C4Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B9C4Cu) [[unlikely]] return; }
L_002B9C4C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B9BFCu | kUnwind; return; } goto L_002B9BFC; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002B9C80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9C94u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002A(c, 135u, depth + 1u); else { c.pc = 0x001A9560u; return; } if (c.pc != 0x002B9C94u) [[unlikely]] return; }
L_002B9C94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B9CD8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x73720000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9CA8u); c.r[4].d[0] = c.r[2].d[0] | 25955ull;  if (depth < kMaxDepth) unit_0087(c, 63u, depth + 1u); else { c.pc = 0x0031C6B0u; return; } if (c.pc != 0x002B9CA8u) [[unlikely]] return; }
L_002B9CA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9CB0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 65u, depth + 1u); else { c.pc = 0x0031C700u; return; } if (c.pc != 0x002B9CB0u) [[unlikely]] return; }
L_002B9CB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B9CD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9CC0u);  if (depth < kMaxDepth) unit_0053(c, 78u, depth + 1u); else { c.pc = 0x0024C7C0u; return; } if (c.pc != 0x002B9CC0u) [[unlikely]] return; }
L_002B9CC0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9CCCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0053(c, 82u, depth + 1u); else { c.pc = 0x0024C840u; return; } if (c.pc != 0x002B9CCCu) [[unlikely]] return; }
L_002B9CCC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B9CD8; } }
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002B9CD8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B9CF0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 15696u);
    set32(c.r[6], 0u + 5u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9D2Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 12u, depth + 1u); else { c.pc = 0x001300B0u; return; } if (c.pc != 0x002B9D2Cu) [[unlikely]] return; }
L_002B9D2C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 8784u);
    set32(c.r[2], c.r[2].w[0] + 8872u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[4], 0u + 120u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 64u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 72u), c.r[18].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9D5Cu); st32((c.r[16].w[0] + 76u), c.r[19].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002B9D5Cu) [[unlikely]] return; }
L_002B9D5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_002B9D74; } }
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9D74u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 488u, depth + 1u); else { c.pc = 0x002BBCE0u; return; } if (c.pc != 0x002B9D74u) [[unlikely]] return; }
L_002B9D74:
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9D80u); set32(c.r[4], 0u + 208u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002B9D80u) [[unlikely]] return; }
L_002B9D80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { goto L_002B9D9C; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 12u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9D9Cu); set32(c.r[7], c.r[7].w[0] - 15792u);  if (depth < kMaxDepth) unit_006E(c, 452u, depth + 1u); else { c.pc = 0x002BB370u; return; } if (c.pc != 0x002B9D9Cu) [[unlikely]] return; }
L_002B9D9C:
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    c.f[12] = 0u;
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[3], 0u + 3u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 192u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9DCCu); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B9DCCu) [[unlikely]] return; }
L_002B9DCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9DD4u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002B9DD4u) [[unlikely]] return; }
L_002B9DD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_002B9DE8; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9DE8u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 287u, depth + 1u); else { c.pc = 0x001AB200u; return; } if (c.pc != 0x002B9DE8u) [[unlikely]] return; }
L_002B9DE8:
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002B9E20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002B9F98; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 8784u);
    set32(c.r[2], c.r[2].w[0] + 8872u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B9E84; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B9E80; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B9E80; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9E80u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B9E80u) [[unlikely]] return; }
L_002B9E80:
    st32((c.r[17].w[0] + 40u), 0u);
    c.budget -= 1;
L_002B9E84:
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B9EB4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B9EB0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B9EB0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9EB0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B9EB0u) [[unlikely]] return; }
L_002B9EB0:
    st32((c.r[17].w[0] + 44u), 0u);
    c.budget -= 1;
L_002B9EB4:
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B9EE4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B9EE0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B9EE0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9EE0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B9EE0u) [[unlikely]] return; }
L_002B9EE0:
    st32((c.r[17].w[0] + 48u), 0u);
    c.budget -= 1;
L_002B9EE4:
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B9F14; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B9F10; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B9F10; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9F10u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B9F10u) [[unlikely]] return; }
L_002B9F10:
    st32((c.r[17].w[0] + 52u), 0u);
    c.budget -= 1;
L_002B9F14:
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B9F44; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B9F40; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B9F40; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9F40u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B9F40u) [[unlikely]] return; }
L_002B9F40:
    st32((c.r[17].w[0] + 56u), 0u);
    c.budget -= 1;
L_002B9F44:
    set32(c.r[4], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B9F74; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B9F70; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B9F70; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9F70u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B9F70u) [[unlikely]] return; }
L_002B9F70:
    st32((c.r[17].w[0] + 60u), 0u);
    c.budget -= 1;
L_002B9F74:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9F80u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 15u, depth + 1u); else { c.pc = 0x00130130u; return; } if (c.pc != 0x002B9F80u) [[unlikely]] return; }
L_002B9F80:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002B9F9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9F98u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002B9F98u) [[unlikely]] return; }
L_002B9F98:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002B9F9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B9FB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9FC4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 24u, depth + 1u); else { c.pc = 0x00130260u; return; } if (c.pc != 0x002B9FC4u) [[unlikely]] return; }
L_002B9FC4:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 64u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B9FDC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 36u), 0u);  if (t) { goto L_002B9FE8; } }
L_002B9FDC:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[4], 0u + 1u);
    st32((c.r[3].w[0] + 36u), c.r[4].w[0]);
    c.budget -= 3;
L_002B9FE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BA000:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA018u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x002BA018u) [[unlikely]] return; }
L_002BA018:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA02Cu); st32((c.r[29].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002BA02Cu) [[unlikely]] return; }
L_002BA02C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA034u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 25u, depth + 1u); else { c.pc = 0x00130270u; return; } if (c.pc != 0x002BA034u) [[unlikely]] return; }
L_002BA034:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x73720000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA040u); c.r[4].d[0] = c.r[2].d[0] | 25955ull;  if (depth < kMaxDepth) unit_0087(c, 63u, depth + 1u); else { c.pc = 0x0031C6B0u; return; } if (c.pc != 0x002BA040u) [[unlikely]] return; }
L_002BA040:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA04Cu); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_0087(c, 71u, depth + 1u); else { c.pc = 0x0031C7A0u; return; } if (c.pc != 0x002BA04Cu) [[unlikely]] return; }
L_002BA04C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x73720000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA05Cu); c.r[4].d[0] = c.r[2].d[0] | 25955ull;  if (depth < kMaxDepth) unit_0087(c, 63u, depth + 1u); else { c.pc = 0x0031C6B0u; return; } if (c.pc != 0x002BA05Cu) [[unlikely]] return; }
L_002BA05C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA068u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 70u, depth + 1u); else { c.pc = 0x0031C790u; return; } if (c.pc != 0x002BA068u) [[unlikely]] return; }
L_002BA068:
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA078u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x002BA078u) [[unlikely]] return; }
L_002BA078:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA088u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BA088u) [[unlikely]] return; }
L_002BA088:
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA098u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_006E(c, 481u, depth + 1u); else { c.pc = 0x002BBBD0u; return; } if (c.pc != 0x002BA098u) [[unlikely]] return; }
L_002BA098:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.f[2] = ld32((c.r[1].w[0] - 16256u));
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.f[1] = ld32((c.r[1].w[0] - 16252u));
    c.f[12] = fp::cvt_s_w(c.f[2]);
    set32(c.r[25], ld32((c.r[25].w[0] + 72u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.f[0] = ld32((c.r[1].w[0] - 16248u));
    c.f[13] = fp::cvt_s_w(c.f[1]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA0CCu); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BA0CCu) [[unlikely]] return; }
L_002BA0CC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.f[4] = ld32((c.r[1].w[0] - 16224u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.f[3] = ld32((c.r[1].w[0] - 16220u));
    c.f[12] = fp::cvt_s_w(c.f[4]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.f[2] = ld32((c.r[1].w[0] - 16216u));
    c.f[13] = fp::cvt_s_w(c.f[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.f[1] = ld32((c.r[1].w[0] - 16212u));
    c.f[14] = fp::cvt_s_w(c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.f[0] = ld32((c.r[1].w[0] - 16208u));
    c.f[15] = fp::cvt_s_w(c.f[1]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA110u); c.f[16] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_006E(c, 504u, depth + 1u); else { c.pc = 0x002BBF20u; return; } if (c.pc != 0x002BA110u) [[unlikely]] return; }
L_002BA110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA118u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002BA118u) [[unlikely]] return; }
L_002BA118:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA124u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 3u, depth + 1u); else { c.pc = 0x002BC040u; return; } if (c.pc != 0x002BA124u) [[unlikely]] return; }
L_002BA124:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.f[1] = ld32((c.r[1].w[0] - 16236u));
    set32(c.r[4], 0u + 208u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.f[0] = ld32((c.r[1].w[0] - 16240u));
    st32((c.r[2].w[0] + 52u), c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA148u); st32((c.r[2].w[0] + 56u), c.f[1]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002BA148u) [[unlikely]] return; }
L_002BA148:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_002BA164; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA164u); set32(c.r[7], c.r[7].w[0] - 16192u);  if (depth < kMaxDepth) unit_006E(c, 452u, depth + 1u); else { c.pc = 0x002BB370u; return; } if (c.pc != 0x002BA164u) [[unlikely]] return; }
L_002BA164:
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA174u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x002BA174u) [[unlikely]] return; }
L_002BA174:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 24312u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA188u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 103u, depth + 1u); else { c.pc = 0x0012CE50u; return; } if (c.pc != 0x002BA188u) [[unlikely]] return; }
L_002BA188:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 24320u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24320u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 208u);  if (t) { goto L_002BA1D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA1ACu); set32(c.r[4], 0u + 208u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002BA1ACu) [[unlikely]] return; }
L_002BA1AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_002BA1C8; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA1C8u); set32(c.r[7], c.r[7].w[0] - 15904u);  if (depth < kMaxDepth) unit_006E(c, 452u, depth + 1u); else { c.pc = 0x002BB370u; return; } if (c.pc != 0x002BA1C8u) [[unlikely]] return; }
L_002BA1C8:
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 48u), 0u);  if (t) { goto L_002BA224; } }
L_002BA1D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA1DCu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002BA1DCu) [[unlikely]] return; }
L_002BA1DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_002BA1F8; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA1F8u); set32(c.r[7], c.r[7].w[0] - 16096u);  if (depth < kMaxDepth) unit_006E(c, 452u, depth + 1u); else { c.pc = 0x002BB370u; return; } if (c.pc != 0x002BA1F8u) [[unlikely]] return; }
L_002BA1F8:
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA204u); set32(c.r[4], 0u + 208u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002BA204u) [[unlikely]] return; }
L_002BA204:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_002BA220; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA220u); set32(c.r[7], c.r[7].w[0] - 16000u);  if (depth < kMaxDepth) unit_006E(c, 452u, depth + 1u); else { c.pc = 0x002BB370u; return; } if (c.pc != 0x002BA220u) [[unlikely]] return; }
L_002BA220:
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 1;
L_002BA224:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA22Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 388u, depth + 1u); else { c.pc = 0x002BA690u; return; } if (c.pc != 0x002BA22Cu) [[unlikely]] return; }
L_002BA22C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA238u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_006E(c, 362u, depth + 1u); else { c.pc = 0x002BA380u; return; } if (c.pc != 0x002BA238u) [[unlikely]] return; }
L_002BA238:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA240u); set32(c.r[4], ld32((c.r[29].w[0] + 60u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002BA240u) [[unlikely]] return; }
L_002BA240:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002BA260:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00130280u | kUnwind; return; } [[clang::musttail]] return unit_000C(c, 26u, depth); }
L_002BA270:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA284u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 27u, depth + 1u); else { c.pc = 0x00130290u; return; } if (c.pc != 0x002BA284u) [[unlikely]] return; }
L_002BA284:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA28Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 402u, depth + 1u); else { c.pc = 0x002BA870u; return; } if (c.pc != 0x002BA28Cu) [[unlikely]] return; }
L_002BA28C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BA2A0:
    set32(c.r[4], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x002B8000u < 16384u) { entry = entries_006E[(t - 0x002B8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002BA2C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    set32(c.r[16], ld32((c.r[5].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 180u)));
    c.budget -= 9;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002BA33C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA2F4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 341u, depth + 1u); else { c.pc = 0x002B7720u; return; } if (c.pc != 0x002BA2F4u) [[unlikely]] return; }
L_002BA2F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 4u);  if (t) { goto L_002BA32C; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[3].d[0]; set32(c.r[4], 0u + 5u);  if (t) { goto L_002BA314; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA30Cu);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x002BA30Cu) [[unlikely]] return; }
L_002BA30C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 60u)));  if (t) { goto L_002BA330; } }
L_002BA314:
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 180u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[4], 0u + 2u);  if (t) { goto L_002BA32C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA32Cu);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x002BA32Cu) [[unlikely]] return; }
L_002BA32C:
    set32(c.r[4], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 1;
L_002BA330:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA33Cu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_006E(c, 481u, depth + 1u); else { c.pc = 0x002BBBD0u; return; } if (c.pc != 0x002BA33Cu) [[unlikely]] return; }
L_002BA33C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002BA350:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 68u), c.r[3].w[0]);  c.pc = t; return; }
L_002BA360:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 68u), c.r[3].w[0]);  c.pc = t; return; }
L_002BA370:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x001302B0u | kUnwind; return; } [[clang::musttail]] return unit_000C(c, 29u, depth); }
L_002BA380:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002BA3A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA3A8u);  if (depth < kMaxDepth) unit_006E(c, 483u, depth + 1u); else { c.pc = 0x002BBC10u; return; } if (c.pc != 0x002BA3A8u) [[unlikely]] return; }
L_002BA3A8:
    st8((c.r[17].w[0] + 64u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 64u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BA3C4; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 36u), 0u);  if (t) { goto L_002BA3E4; } }
L_002BA3C4:
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA3E4u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_006E(c, 481u, depth + 1u); else { c.pc = 0x002BBBD0u; return; } if (c.pc != 0x002BA3E4u) [[unlikely]] return; }
L_002BA3E4:
    st32((c.r[17].w[0] + 68u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002BA400:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BA410:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA424u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 381u, depth + 1u); else { c.pc = 0x002BA560u; return; } if (c.pc != 0x002BA424u) [[unlikely]] return; }
L_002BA424:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BA43C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA43Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BA43Cu) [[unlikely]] return; }
L_002BA43C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BA450:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA464u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 381u, depth + 1u); else { c.pc = 0x002BA560u; return; } if (c.pc != 0x002BA464u) [[unlikely]] return; }
L_002BA464:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BA47C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA47Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BA47Cu) [[unlikely]] return; }
L_002BA47C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BA490:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA4A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 381u, depth + 1u); else { c.pc = 0x002BA560u; return; } if (c.pc != 0x002BA4A4u) [[unlikely]] return; }
L_002BA4A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BA4BC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA4BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BA4BCu) [[unlikely]] return; }
L_002BA4BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BA4D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA4E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x002BA4E4u) [[unlikely]] return; }
L_002BA4E4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA4F8u); st32((c.r[29].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002BA4F8u) [[unlikely]] return; }
L_002BA4F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA500u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002BA500u) [[unlikely]] return; }
L_002BA500:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BA534; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_002BA514; } }
    set32(c.r[16], c.r[16].w[0] + 20u);
    c.budget -= 1;
L_002BA514:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[8].w[0] - 15696u);
    set32(c.r[9], 0u + 5u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA534u); c.r[10].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 371u, depth + 1u); else { c.pc = 0x0012EBA0u; return; } if (c.pc != 0x002BA534u) [[unlikely]] return; }
L_002BA534:
    set32(c.r[4], ld32((c.r[29].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA540u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002BA540u) [[unlikely]] return; }
L_002BA540:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002BA560:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002BA59C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA590u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BA590u) [[unlikely]] return; }
L_002BA590:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_002BA59C:
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BA5B8; } }
    c.r[3].d[0] = ld8((c.r[2].w[0] + 137u));
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_002BA5B8:
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BA5E4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA5D4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BA5D4u) [[unlikely]] return; }
L_002BA5D4:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_002BA5E4:
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BA610; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA600u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BA600u) [[unlikely]] return; }
L_002BA600:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_002BA610:
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BA63C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA62Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BA62Cu) [[unlikely]] return; }
L_002BA62C:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_002BA63C:
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002BA66C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA658u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BA658u) [[unlikely]] return; }
L_002BA658:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
L_002BA66C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002BA680:
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0] + 24u)));  c.pc = t; return; }
L_002BA690:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] - 24304u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 60u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[2].w[0] + 196u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 72u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA6C0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 341u, depth + 1u); else { c.pc = 0x002B7720u; return; } if (c.pc != 0x002BA6C0u) [[unlikely]] return; }
L_002BA6C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002BA6E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA6D0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002BA6D0u) [[unlikely]] return; }
L_002BA6D0:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st128((c.r[1].w[0] - 24240u) & ~15u, c.r[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] - 15664u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002BA70C; } }
L_002BA6E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA6F0u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002BA6F0u) [[unlikely]] return; }
L_002BA6F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA700u); set32(c.r[4], c.r[4].w[0] - 24240u);  if (depth < kMaxDepth) unit_006E(c, 450u, depth + 1u); else { c.pc = 0x002BB320u; return; } if (c.pc != 0x002BA700u) [[unlikely]] return; }
L_002BA700:
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st8((c.r[1].w[0] - 15664u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002BA70C:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 5u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA72Cu); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BA72Cu) [[unlikely]] return; }
L_002BA72C:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BA754; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 5u);
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA754u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BA754u) [[unlikely]] return; }
L_002BA754:
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BA77C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 5u);
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA77Cu); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BA77Cu) [[unlikely]] return; }
L_002BA77C:
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BA7A4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 5u);
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA7A4u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BA7A4u) [[unlikely]] return; }
L_002BA7A4:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[3].w[0] - 15696u);
    set32(c.r[2], 0u + 5u);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA7D0u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BA7D0u) [[unlikely]] return; }
L_002BA7D0:
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 5u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA7F0u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BA7F0u) [[unlikely]] return; }
L_002BA7F0:
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA7FCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_006E(c, 483u, depth + 1u); else { c.pc = 0x002BBC10u; return; } if (c.pc != 0x002BA7FCu) [[unlikely]] return; }
L_002BA7FC:
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA810u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BA810u) [[unlikely]] return; }
L_002BA810:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.f[2] = ld32((c.r[1].w[0] - 15800u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.f[1] = ld32((c.r[1].w[0] - 15804u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.f[0] = ld32((c.r[1].w[0] - 15808u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[3].w[0] + 96u), c.f[0]);
    st32((c.r[3].w[0] + 100u), c.f[1]);
    st32((c.r[3].w[0] + 104u), c.f[2]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA854u); st32((c.r[3].w[0] + 108u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x002BA854u) [[unlikely]] return; }
L_002BA854:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BA870:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BA8A8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 3u);
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA8A8u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BA8A8u) [[unlikely]] return; }
L_002BA8A8:
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BA8D0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 3u);
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA8D0u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BA8D0u) [[unlikely]] return; }
L_002BA8D0:
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BA8F8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 3u);
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA8F8u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BA8F8u) [[unlikely]] return; }
L_002BA8F8:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 3u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA918u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BA918u) [[unlikely]] return; }
L_002BA918:
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA92Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BA92Cu) [[unlikely]] return; }
L_002BA92C:
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 3u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA94Cu); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BA94Cu) [[unlikely]] return; }
L_002BA94C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BA960:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BA998; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 3u);
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA998u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BA998u) [[unlikely]] return; }
L_002BA998:
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BA9C0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 3u);
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA9C0u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BA9C0u) [[unlikely]] return; }
L_002BA9C0:
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BA9E8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 3u);
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA9E8u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BA9E8u) [[unlikely]] return; }
L_002BA9E8:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 3u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAA08u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BAA08u) [[unlikely]] return; }
L_002BAA08:
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAA1Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BAA1Cu) [[unlikely]] return; }
L_002BAA1C:
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 3u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAA3Cu); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BAA3Cu) [[unlikely]] return; }
L_002BAA3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BAA50:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B8F40u | kUnwind; return; } goto L_002B8F40; }
L_002BAA60:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B8D30u | kUnwind; return; } goto L_002B8D30; }
L_002BAA70:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BA360u | kUnwind; return; } goto L_002BA360; }
L_002BAA80:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BA350u | kUnwind; return; } goto L_002BA350; }
L_002BAA90:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BA2C0u | kUnwind; return; } goto L_002BA2C0; }
L_002BAAA0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B9E20u | kUnwind; return; } goto L_002B9E20; }
L_002BAAB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[22] = c.f[12];
    c.f[21] = c.f[13];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAAE4u); c.f[20] = c.f[14];  if (depth < kMaxDepth) unit_000F(c, 256u, depth + 1u); else { c.pc = 0x0013E440u; return; } if (c.pc != 0x002BAAE4u) [[unlikely]] return; }
L_002BAAE4:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAAF0u); set32(c.r[4], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x002BAAF0u) [[unlikely]] return; }
L_002BAAF0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 9776u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 9792u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 20u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[16].w[0] + 24u), 0u);
    c.f[1] = c.r[4].w[0];
    st32((c.r[16].w[0] + 28u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 32u), c.f[22]);
    st32((c.r[16].w[0] + 36u), c.f[21]);
    st32((c.r[16].w[0] + 40u), c.f[20]);
    st32((c.r[16].w[0] + 44u), c.f[22]);
    st32((c.r[16].w[0] + 48u), c.f[21]);
    st32((c.r[16].w[0] + 52u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 56u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 60u), 0u);
    st32((c.r[16].w[0] + 64u), 0u);
    st32((c.r[16].w[0] + 68u), c.f[22]);
    st32((c.r[16].w[0] + 72u), c.f[21]);
    st32((c.r[16].w[0] + 76u), 0u);
    st32((c.r[16].w[0] + 80u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 84u), 0u);
    st32((c.r[16].w[0] + 88u), 0u);
    set32(c.r[3], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1420u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[16].w[0] + 92u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    c.f[0] = ld32((c.r[1].w[0] + 1424u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[16].w[0] + 96u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 54;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002BABD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002BAC34; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 9776u);
    set32(c.r[2], c.r[2].w[0] + 9792u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 8u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAC10u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x002BAC10u) [[unlikely]] return; }
L_002BAC10:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAC1Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E490u; return; } if (c.pc != 0x002BAC1Cu) [[unlikely]] return; }
L_002BAC1C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002BAC38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAC34u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002BAC34u) [[unlikely]] return; }
L_002BAC34:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002BAC38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002BAC50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    c.f[20] = c.r[3].w[0];
    set32(c.r[3], 0u + 3u);
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002BAD94; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_002BAD7C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002BACB4; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002BAC9C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x437F0000u);  if (t) { goto L_002BAE54; } }
L_002BAC9C:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BACACu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BACACu) [[unlikely]] return; }
L_002BACAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BAE50; } }
L_002BACB4:
    set32(c.r[6], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_002BACD4; } }
    c.f[20] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_002BAD4C; } }
L_002BACD4:
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[3], c.r[6].w[0] + c.r[4].w[0]);
    c.r[1].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = c.r[7].d[0] & 255ull;  if (t) { goto L_002BAD50; } }
    c.f[1] = ld32((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[5].w[0] - c.r[6].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 68u));
    c.f[3] = c.r[3].w[0];
    c.f[2] = c.r[4].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.f[0] = fp::cvt_s_w(c.f[2]);
    fpu_div(c, 20u, c.f[3], c.f[0]);
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BAD34; } }
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    c.f[0] = ld32((c.r[16].w[0] + 72u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002BAD4C; } }
L_002BAD34:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 27616u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAD44u); c.f[12] = fp::mul(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0011(c, 99u, depth + 1u); else { c.pc = 0x00145F50u; return; } if (c.pc != 0x002BAD44u) [[unlikely]] return; }
L_002BAD44:
    c.f[20] = c.f[0];
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_002BAD4C:
    c.r[3].d[0] = c.r[7].d[0] & 255ull;
    c.budget -= 1;
L_002BAD50:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_002BAD6C; } }
    set32(c.r[3], 0u + 255u);
    st32((c.r[16].w[0] + 20u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 28u), 0u);  if (t) { goto L_002BAE50; } }
L_002BAD6C:
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 28u), c.r[3].w[0]);  if (t) { goto L_002BAE50; } }
L_002BAD7C:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAD8Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BAD8Cu) [[unlikely]] return; }
L_002BAD8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BAE50; } }
L_002BAD94:
    set32(c.r[7], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 28u)));
    c.r[1].d[0] = c.r[6].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002BADB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002BAE28; } }
L_002BADB0:
    set32(c.r[5], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[3], c.r[7].w[0] + c.r[5].w[0]);
    c.r[1].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_002BAE2C; } }
    c.f[1] = ld32((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[6].w[0] - c.r[7].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 68u));
    c.f[3] = c.r[3].w[0];
    c.f[2] = c.r[5].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.f[0] = fp::cvt_s_w(c.f[2]);
    fpu_div(c, 0u, c.f[3], c.f[0]);
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[20] = fp::sub(c.f[20], c.f[0]);  if (t) { goto L_002BAE10; } }
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    c.f[0] = ld32((c.r[16].w[0] + 72u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002BAE28; } }
L_002BAE10:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 27616u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAE20u); c.f[12] = fp::mul(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0011(c, 99u, depth + 1u); else { c.pc = 0x00145F50u; return; } if (c.pc != 0x002BAE20u) [[unlikely]] return; }
L_002BAE20:
    c.f[20] = c.f[0];
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_002BAE28:
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 1;
L_002BAE2C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BAE44; } }
    st32((c.r[16].w[0] + 20u), 0u);
    st32((c.r[16].w[0] + 24u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 28u), 0u);  if (t) { goto L_002BAE50; } }
L_002BAE44:
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 3;
L_002BAE50:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.budget -= 1;
L_002BAE54:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[4].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[20]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.f[2] = fp::sub(c.f[0], c.f[20]);
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 44u));
    c.f[0] = ld32((c.r[16].w[0] + 68u));
    c.facc = fp::mul(c.f[1], c.f[20]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[2]));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    c.f[0] = ld32((c.r[16].w[0] + 72u));
    c.facc = fp::mul(c.f[1], c.f[20]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[2]));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 28;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002BAED0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002BAF30; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_002BAF30; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_002BAF30; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002BAF18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_002BB144; } }
L_002BAF18:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAF28u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BAF28u) [[unlikely]] return; }
L_002BAF28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BB140; } }
L_002BAF30:
    set32(c.r[16], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 92u)));
    c.f[0] = c.r[16].w[0];
    c.f[12] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAF60u); c.r[18].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_0007(c, 19u, depth + 1u); else { c.pc = 0x0011C1B0u; return; } if (c.pc != 0x002BAF60u) [[unlikely]] return; }
L_002BAF60:
    c.r[3].d[0] = c.r[2].d[0] << 32;
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    c.r[18].d[0] = c.r[3].d[0] | c.r[18].d[0];
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.f[0] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAF7Cu); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 19u, depth + 1u); else { c.pc = 0x0011C1B0u; return; } if (c.pc != 0x002BAF7Cu) [[unlikely]] return; }
L_002BAF7C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    set32(c.r[10], ld32((c.r[1].w[0] + 20144u)));
    c.r[11].d[0] = c.r[18].d[0] | c.r[2].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[10].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_002BB038; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[1], c.r[10].w[0] + c.r[1].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x50000000u);
    set32(c.r[9], ld32((c.r[1].w[0] + 1380u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[7].d[0] = c.r[2].d[0] | 3ull;
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = 0ull | 32769ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x11000000u);
    c.r[4].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[5].d[0] = c.r[5].d[0] | 2ull;
    set32(c.r[3], 0u + 14u);
    set32(c.r[2], 0u + 64u);
    c.r[8].d[0] = c.r[9].d[0] | c.r[8].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[8].w[0]), c.r[7].d[0]);
    set32(c.r[1], c.r[10].w[0] + c.r[1].w[0]);
    st64((c.r[8].w[0] + 8u), 0ull);
    st64((c.r[8].w[0] + 16u), 0ull);
    st32((c.r[8].w[0] + 24u), c.r[6].w[0]);
    st32((c.r[8].w[0] + 28u), c.r[5].w[0]);
    st64((c.r[8].w[0] + 32u), c.r[4].d[0]);
    st64((c.r[8].w[0] + 40u), c.r[3].d[0]);
    st64((c.r[8].w[0] + 48u), c.r[11].d[0]);
    st64((c.r[8].w[0] + 56u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1380u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[2].w[0] + 64u);
    set32(c.r[1], c.r[10].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1380u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[10].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    set32(c.r[1], c.r[10].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1364u), c.r[2].w[0]);
    c.budget -= 37;
L_002BB038:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB048u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BB048u) [[unlikely]] return; }
L_002BB048:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[16], ld32((c.r[1].w[0] + 20144u)));
    c.f[0] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1420u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.f[1] = ld32((c.r[1].w[0] + 1424u));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[17].d[0] = c.r[2].d[0] << 16;
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB08Cu); c.f[12] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 19u, depth + 1u); else { c.pc = 0x0011C1B0u; return; } if (c.pc != 0x002BB08Cu) [[unlikely]] return; }
L_002BB08C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[4].d[0] = c.r[2].d[0] << 48;
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[11].d[0] = c.r[17].d[0] | c.r[4].d[0];  if (t) { goto L_002BB140; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x50000000u);
    set32(c.r[10], ld32((c.r[1].w[0] + 1380u)));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[8].d[0] = c.r[3].d[0] | 3ull;
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = 0ull | 32769ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x11000000u);
    c.r[5].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[6].d[0] = c.r[6].d[0] | 2ull;
    set32(c.r[4], 0u + 14u);
    set32(c.r[3], 0u + 64u);
    c.r[9].d[0] = c.r[10].d[0] | c.r[9].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[9].w[0]), c.r[8].d[0]);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st64((c.r[9].w[0] + 8u), 0ull);
    st64((c.r[9].w[0] + 16u), 0ull);
    st32((c.r[9].w[0] + 24u), c.r[7].w[0]);
    st32((c.r[9].w[0] + 28u), c.r[6].w[0]);
    st64((c.r[9].w[0] + 32u), c.r[5].d[0]);
    st64((c.r[9].w[0] + 40u), c.r[4].d[0]);
    st64((c.r[9].w[0] + 48u), c.r[11].d[0]);
    st64((c.r[9].w[0] + 56u), c.r[3].d[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1380u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] + 64u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1380u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] - 4u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1364u), c.r[3].w[0]);
    c.budget -= 38;
L_002BB140:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002BB144:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002BB160:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BB170:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BB180:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BB190:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BB1A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[7], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 6;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_002BB1FC; } }
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    set32(c.r[7], 0u + 1u);
    set32(c.r[3], c.r[5].w[0] + c.r[6].w[0]);
    c.f[0] = fp::add(c.f[0], c.f[12]);
    st32((c.r[4].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 48u));
    c.f[0] = fp::add(c.f[0], c.f[13]);
    st32((c.r[4].w[0] + 72u), c.f[0]);
    st32((c.r[4].w[0] + 60u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 64u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 24u), 0u);
    c.budget -= 13;
    { const bool t = c.r[3].sd[0] > 0; st32((c.r[4].w[0] + 20u), c.r[7].w[0]);  if (t) { goto L_002BB1FC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB1FCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BB1FCu) [[unlikely]] return; }
L_002BB1FC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BB210:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BB26C; } }
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    set32(c.r[8], 0u + 255u);
    set32(c.r[7], 0u + 3u);
    set32(c.r[3], c.r[5].w[0] + c.r[6].w[0]);
    c.f[0] = fp::add(c.f[0], c.f[12]);
    st32((c.r[4].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 48u));
    c.f[0] = fp::add(c.f[0], c.f[13]);
    st32((c.r[4].w[0] + 72u), c.f[0]);
    st32((c.r[4].w[0] + 60u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 64u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 24u), c.r[8].w[0]);
    c.budget -= 14;
    { const bool t = c.r[3].sd[0] > 0; st32((c.r[4].w[0] + 20u), c.r[7].w[0]);  if (t) { goto L_002BB26C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB26Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BB26Cu) [[unlikely]] return; }
L_002BB26C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BB280:
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_002BB2A8; } }
    set32(c.r[5], 0u + 2u);
    set32(c.r[3], 0u + 255u);
    st32((c.r[4].w[0] + 20u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 28u), 0u);  if (t) { goto L_002BB2BC; } }
L_002BB2A8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002BB2BC; } }
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    c.budget -= 3;
L_002BB2BC:
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    st32((c.r[4].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 48u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 72u), c.f[0]);  c.pc = t; return; }
L_002BB2D0:
    set32(c.r[4], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002BB30C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_002BB30C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002BB304; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BB304; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BB310; } }
L_002BB304:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002BB310; } }
L_002BB30C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BB310:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BB320:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), c.r[3].w[0]);  c.pc = t; return; }
L_002BB350:
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    st32((c.r[5].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 48u));
    st32((c.r[5].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 8u), c.f[0]);  c.pc = t; return; }
L_002BB370:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.f[0] = c.r[2].w[0];
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.f[12] = ld32((c.r[7].w[0] + 64u));
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.f[13] = ld32((c.r[7].w[0] + 68u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB3A4u); c.f[14] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_006E(c, 422u, depth + 1u); else { c.pc = 0x002BAAB0u; return; } if (c.pc != 0x002BB3A4u) [[unlikely]] return; }
L_002BB3A4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 9680u);
    set32(c.r[2], c.r[2].w[0] + 9696u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[5], 0u + 30u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], 0u - 1u);
    ld128((c.r[16].w[0] + 32u) & ~15u, c.r[6]);
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st128((c.r[17].w[0] + 112u) & ~15u, c.r[6]);
    ld128((c.r[16].w[0] + 48u) & ~15u, c.r[6]);
    st128((c.r[17].w[0] + 128u) & ~15u, c.r[6]);
    st32((c.r[17].w[0] + 164u), c.r[5].w[0]);
    st32((c.r[17].w[0] + 160u), 0u);
    st32((c.r[17].w[0] + 172u), 0u);
    st8((c.r[17].w[0] + 168u), static_cast<std::uint8_t>(0u));
    ld128((c.r[17].w[0] + 112u) & ~15u, c.r[5]);
    st128((c.r[17].w[0] + 144u) & ~15u, c.r[5]);
    st32((c.r[17].w[0] + 176u), c.r[16].w[0]);
    st32((c.r[17].w[0] + 180u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 184u), c.r[4].w[0]);
    st8((c.r[17].w[0] + 188u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 192u), 0u);
    st32((c.r[17].w[0] + 196u), 0u);
    st32((c.r[17].w[0] + 200u), 0u);
    st8((c.r[17].w[0] + 204u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 72u));
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 76u));
    st32((c.r[17].w[0] + 56u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 37;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002BB440:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002BB494; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 9680u);
    set32(c.r[2], c.r[2].w[0] + 9696u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB47Cu); st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006E(c, 425u, depth + 1u); else { c.pc = 0x002BABD0u; return; } if (c.pc != 0x002BB47Cu) [[unlikely]] return; }
L_002BB47C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002BB498; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB494u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002BB494u) [[unlikely]] return; }
L_002BB494:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002BB498:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002BB4B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 188u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BB560; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 192u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_002BB4F0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002BB4F0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002BB4F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_002BB564; } }
L_002BB4F0:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 168u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BB528; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 172u)));
    set32(c.r[3], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0] + 172u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 160u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002BB558; } }
    st32((c.r[4].w[0] + 172u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 168u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002BB558; } }
L_002BB528:
    set32(c.r[2], ld32((c.r[4].w[0] + 172u)));
    set32(c.r[5], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0] + 172u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 160u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002BB558; } }
    st32((c.r[4].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 168u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002BB558:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB560u); set32(c.r[4], c.r[4].w[0] + 112u);  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x002BB560u) [[unlikely]] return; }
L_002BB560:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002BB564:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BB570:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 188u));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_002BB5E8; } }
    set32(c.r[6], ld32((c.r[21].w[0] + 192u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_002BB5E0; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_002BB600; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_002BB600; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[21].w[0] + 176u)));  if (t) { goto L_002BB604; } }
L_002BB5E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002BB600; } }
L_002BB5E8:
    set32(c.r[6], ld32((c.r[21].w[0] + 192u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_002BB5FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BB600; } }
L_002BB5FC:
    c.r[20].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002BB600:
    set32(c.r[5], ld32((c.r[21].w[0] + 176u)));
    c.budget -= 1;
L_002BB604:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[7], c.r[3].w[0] + 32u);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[19], ld32((c.r[3].w[0] + 84u)));
    c.budget -= 13;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002BBB6C; } }
    set32(c.r[17], ld32((c.r[3].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[18], ld32((c.r[5].w[0] + 8u)));  if (t) { goto L_002BB654; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002BBB6C; } }
    ld128((c.r[21].w[0] + 144u) & ~15u, c.r[3]);
    st128((c.r[17].w[0] + 48u) & ~15u, c.r[3]);
    c.budget -= 2;
L_002BB654:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002BBB58; } }
L_002BB65C:
    set32(c.r[3], ld32((c.r[21].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BBB6C; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002BBB6C; } }
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BB684; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { goto L_002BBB54; } }
L_002BB684:
    set32(c.r[3], ld32((c.r[21].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BB6B8; } }
    set32(c.r[2], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[3] = ld32((c.r[21].w[0] + 32u));
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[1] = ld32((c.r[21].w[0] + 36u));
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[20] = ld32((c.r[21].w[0] + 40u));
    c.f[22] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.f[21] = fp::add(c.f[1], c.f[0]);  if (t) { goto L_002BB6DC; } }
L_002BB6B8:
    set32(c.r[2], ld32((c.r[4].w[0] + 80u)));
    c.f[0] = ld32((c.r[21].w[0] + 36u));
    c.f[22] = ld32((c.r[21].w[0] + 32u));
    c.f[20] = ld32((c.r[21].w[0] + 40u));
    mmi::mult(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[21] = fp::add(c.f[0], c.f[1]);
    c.budget -= 9;
L_002BB6DC:
    set32(c.r[3], ld32((c.r[21].w[0] + 200u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 3);  if (t) { goto L_002BB6F8; } }
    c.f[2] = ld32((c.r[21].w[0] + 56u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[21].w[0] + 52u));  if (t) { goto L_002BB704; } }
    set32(c.r[2], c.r[16].w[0] << 3);
    c.budget -= 1;
L_002BB6F8:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.budget -= 3;
L_002BB704:
    st32((c.r[19].w[0] + 16u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[19].w[0] + 20u), c.f[2]);
    c.f[1] = c.r[2].w[0];
    c.budget -= 6;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[19].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_002BB738; } }
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[17].w[0] + 20u), c.f[0]);
    st32((c.r[17].w[0] + 24u), c.f[1]);
    c.budget -= 7;
L_002BB738:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[22].d[0] = 0ull + 0ull;
    st32((c.r[19].w[0] + 352u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB750u); st32((c.r[19].w[0] + 356u), 0u);  if (depth < kMaxDepth) unit_0018(c, 67u, depth + 1u); else { c.pc = 0x00162250u; return; } if (c.pc != 0x002BB750u) [[unlikely]] return; }
L_002BB750:
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::add(c.f[22], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_002BB79C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.f[0] = ld32((c.r[1].w[0] + 1420u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[22]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BB798; } }
    c.r[22].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002BB798:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_002BB79C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB7A4u);  if (depth < kMaxDepth) unit_0018(c, 70u, depth + 1u); else { c.pc = 0x00162370u; return; } if (c.pc != 0x002BB7A4u) [[unlikely]] return; }
L_002BB7A4:
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::add(c.f[21], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].d[0] = c.r[22].d[0] & 255ull;  if (t) { goto L_002BB7F0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    c.f[0] = ld32((c.r[1].w[0] + 1424u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BB7EC; } }
    c.r[22].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002BB7EC:
    c.r[3].d[0] = c.r[22].d[0] & 255ull;
    c.budget -= 1;
L_002BB7F0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BBB54; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 24u)));
    st32((c.r[19].w[0] + 300u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB810u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BB810u) [[unlikely]] return; }
L_002BB810:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BB89C; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 192u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002BB86C; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB838u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 480u, depth + 1u); else { c.pc = 0x002BBBA0u; return; } if (c.pc != 0x002BB838u) [[unlikely]] return; }
L_002BB838:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BB86C; } }
    c.r[2].d[0] = ld8((c.r[21].w[0] + 188u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BB86C; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 176u)));
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB860u); set32(c.r[5], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_006E(c, 450u, depth + 1u); else { c.pc = 0x002BB320u; return; } if (c.pc != 0x002BB860u) [[unlikely]] return; }
L_002BB860:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st128((c.r[19].w[0] + 48u) & ~15u, c.r[2]);  if (t) { goto L_002BB978; } }
L_002BB86C:
    set32(c.r[3], ld32((c.r[21].w[0] + 196u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 4);  if (t) { goto L_002BB88C; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 176u)));
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[2]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st128((c.r[19].w[0] + 48u) & ~15u, c.r[2]);  if (t) { goto L_002BB978; } }
    set32(c.r[2], c.r[16].w[0] << 4);
    c.budget -= 1;
L_002BB88C:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st128((c.r[19].w[0] + 48u) & ~15u, c.r[2]);  if (t) { goto L_002BB978; } }
L_002BB89C:
    set32(c.r[2], ld32((c.r[21].w[0] + 176u)));
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[2]);
    set32(c.r[4], ld32((c.r[21].w[0] + 196u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[3], c.r[16].w[0] << 4);  if (t) { goto L_002BB8EC; } }
    c.f[2] = ld32((c.r[21].w[0] + 24u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[3], c.r[29].w[0] + 156u);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[1] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_002BB92C; } }
    set32(c.r[3], c.r[16].w[0] << 4);
    c.budget -= 1;
L_002BB8EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    ld128((c.r[3].w[0]) & ~15u, c.r[3]);
    c.f[0] = c.r[2].w[0];
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[3]);
    c.f[1] = ld32((c.r[21].w[0] + 24u));
    set32(c.r[2], ld32((c.r[21].w[0] + 196u)));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[2] = ld32((c.r[2].w[0] + 12u));
    c.f[1] = fp::cvt_s_w(c.f[2]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[29].w[0] + 156u), c.r[2].w[0]);
    c.budget -= 16;
L_002BB92C:
    set32(c.r[3], ld32((c.r[21].w[0] + 192u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002BB970; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB948u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 480u, depth + 1u); else { c.pc = 0x002BBBA0u; return; } if (c.pc != 0x002BB948u) [[unlikely]] return; }
L_002BB948:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BB970; } }
    c.r[2].d[0] = ld8((c.r[21].w[0] + 188u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BB970; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 176u)));
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB970u); set32(c.r[5], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_006E(c, 450u, depth + 1u); else { c.pc = 0x002BB320u; return; } if (c.pc != 0x002BB970u) [[unlikely]] return; }
L_002BB970:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[2]);
    st128((c.r[19].w[0] + 48u) & ~15u, c.r[2]);
    c.budget -= 2;
L_002BB978:
    set32(c.r[3], ld32((c.r[21].w[0] + 176u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_002BB9B4; } }
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[12] = c.f[22];
    c.f[13] = c.f[21];
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB9A8u); c.f[14] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BB9A8u) [[unlikely]] return; }
L_002BB9A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_002BBA00; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_002BB9B4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002BB9E0; } }
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[12] = c.f[22];
    c.f[13] = c.f[21];
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB9D8u); c.f[14] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BB9D8u) [[unlikely]] return; }
L_002BB9D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BB9FC; } }
L_002BB9E0:
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[12] = c.f[22];
    c.f[13] = c.f[21];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB9FCu); c.f[14] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BB9FCu) [[unlikely]] return; }
L_002BB9FC:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_002BBA00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBA08u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 480u, depth + 1u); else { c.pc = 0x002BBBA0u; return; } if (c.pc != 0x002BBA08u) [[unlikely]] return; }
L_002BBA08:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_002BBAD8; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_002BBAD4; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_002BBAD4; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 192u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BBAD4; } }
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 352u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 356u), 0u);
    set32(c.r[3], ld32((c.r[21].w[0] + 176u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002BBA7C; } }
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.f[12] = c.f[22];
    c.f[13] = c.f[21];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBA74u); c.f[14] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BBA74u) [[unlikely]] return; }
L_002BBA74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[17].w[0] + 176u)));  if (t) { goto L_002BBAC8; } }
L_002BBA7C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_002BBAA8; } }
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.f[12] = c.f[22];
    c.f[13] = c.f[21];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBAA0u); c.f[14] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BBAA0u) [[unlikely]] return; }
L_002BBAA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BBAC4; } }
L_002BBAA8:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.f[12] = c.f[22];
    c.f[13] = c.f[21];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBAC4u); c.f[14] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BBAC4u) [[unlikely]] return; }
L_002BBAC4:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.budget -= 1;
L_002BBAC8:
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBAD4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BBAD4u) [[unlikely]] return; }
L_002BBAD4:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_002BBAD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBAE0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 480u, depth + 1u); else { c.pc = 0x002BBBA0u; return; } if (c.pc != 0x002BBAE0u) [[unlikely]] return; }
L_002BBAE0:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BBB40; } }
    c.r[2].d[0] = ld8((c.r[21].w[0] + 204u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BBB40; } }
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBB18u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BBB18u) [[unlikely]] return; }
L_002BBB18:
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBB38u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BBB38u) [[unlikely]] return; }
L_002BBB38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { goto L_002BBB54; } }
L_002BBB40:
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBB50u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BBB50u) [[unlikely]] return; }
L_002BBB50:
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 1;
L_002BBB54:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002BBB58:
    set32(c.r[4], ld32((c.r[21].w[0] + 176u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BB65Cu | kUnwind; return; } goto L_002BB65C; } }
L_002BBB6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_002BBBA0:
    set32(c.r[2], ld32((c.r[4].w[0] + 180u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002BBBC4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 184u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002BBBC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BBBC4; } }
L_002BBBC0:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002BBBC4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BBBD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 192u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BBBFC; } }
    st32((c.r[4].w[0] + 180u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 184u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 172u), 0u);
    st8((c.r[4].w[0] + 168u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBBFCu); set32(c.r[4], c.r[4].w[0] + 112u);  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x002BBBFCu) [[unlikely]] return; }
L_002BBBFC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BBC10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 192u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002BBC44; } }
    st32((c.r[17].w[0] + 172u), 0u);
    set32(c.r[4], c.r[17].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBC40u); st8((c.r[17].w[0] + 168u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x002BBC40u) [[unlikely]] return; }
L_002BBC40:
    st8((c.r[17].w[0] + 188u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.budget -= 1;
L_002BBC44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002BBC60:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[6], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 116u)));
    st32((c.r[4].w[0] + 16u), c.f[12]);
    st32((c.r[4].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 352u), c.r[5].w[0]);
    c.budget -= 16;
    { st32((c.r[4].w[0] + 356u), 0u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00162250u | kUnwind; return; } [[clang::musttail]] return unit_0018(c, 67u, depth); }
L_002BBCA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_002BBCB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002BBCD4; } }
L_002BBCB8:
    set32(c.r[2], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    c.f[12] = ld32((c.r[6].w[0] + 72u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBCD4u); set32(c.r[4], ld32((c.r[6].w[0])));  if (depth < kMaxDepth) unit_006E(c, 485u, depth + 1u); else { c.pc = 0x002BBC60u; return; } if (c.pc != 0x002BBCD4u) [[unlikely]] return; }
L_002BBCD4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BBCE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.f[0] = c.r[2].w[0];
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.f[12] = 0u;
    c.f[14] = fp::cvt_s_w(c.f[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBD18u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_006E(c, 422u, depth + 1u); else { c.pc = 0x002BAAB0u; return; } if (c.pc != 0x002BBD18u) [[unlikely]] return; }
L_002BBD18:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 9584u);
    set32(c.r[2], c.r[2].w[0] + 9600u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 100u), c.r[18].w[0]);  if (t) { goto L_002BBD64; } }
L_002BBD3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBD44u); set32(c.r[4], 0u + 256u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002BBD44u) [[unlikely]] return; }
L_002BBD44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] << 2);  if (t) { goto L_002BBD58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBD54u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 177u, depth + 1u); else { c.pc = 0x0015E070u; return; } if (c.pc != 0x002BBD54u) [[unlikely]] return; }
L_002BBD54:
    set32(c.r[3], c.r[17].w[0] << 2);
    c.budget -= 1;
L_002BBD58:
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[3].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 3;
L_002BBD64:
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BBD3Cu | kUnwind; return; } goto L_002BBD3C; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002BBD90:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002BBE30; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 9584u);
    set32(c.r[2], c.r[2].w[0] + 9600u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 7;
L_002BBDD0:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 104u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[2].w[0] + 104u);  if (t) { goto L_002BBDFC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BBDFC; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBDFCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BBDFCu) [[unlikely]] return; }
L_002BBDFC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BBDD0u | kUnwind; return; } goto L_002BBDD0; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBE18u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 425u, depth + 1u); else { c.pc = 0x002BABD0u; return; } if (c.pc != 0x002BBE18u) [[unlikely]] return; }
L_002BBE18:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002BBE34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBE30u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002BBE30u) [[unlikely]] return; }
L_002BBE30:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002BBE34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002BBE50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BBE60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 100u)));
    c.f[13] = ld32((c.r[16].w[0] + 36u));
    c.f[14] = ld32((c.r[16].w[0] + 40u));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBE90u); c.f[12] = ld32((c.r[16].w[0] + 32u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BBE90u) [[unlikely]] return; }
L_002BBE90:
    c.f[1] = ld32((c.r[16].w[0] + 56u));
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[3].w[0] + 16u), c.f[0]);
    st32((c.r[3].w[0] + 20u), c.f[1]);
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBECCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BBECCu) [[unlikely]] return; }
L_002BBECC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002BBF00; } }
L_002BBED4:
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[4], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 104u)));
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBEFCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BBEFCu) [[unlikely]] return; }
L_002BBEFC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002BBF00:
    c.r[3].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BBED4u | kUnwind; return; } goto L_002BBED4; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002BBF20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 24u), c.f[26]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 104u)));
    c.f[21] = fp::sub(c.f[15], c.f[16]);
    c.f[24] = c.f[14];
    c.f[26] = c.f[12];
    st32((c.r[2].w[0] + 160u), c.f[16]);
    st32((c.r[2].w[0] + 164u), c.f[21]);
    set32(c.r[4], ld32((c.r[4].w[0] + 104u)));
    c.f[14] = ld32((c.r[16].w[0] + 40u));
    c.f[25] = c.f[13];
    c.f[23] = c.f[15];
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 25;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBF84u); c.f[22] = c.f[16];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BBF84u) [[unlikely]] return; }
L_002BBF84:
    set32(c.r[2], ld32((c.r[16].w[0] + 108u)));
    c.f[20] = fp::sub(c.f[24], c.f[22]);
    c.f[12] = fp::add(c.f[26], c.f[22]);
    st32((c.r[2].w[0] + 160u), c.f[20]);
    st32((c.r[2].w[0] + 164u), c.f[22]);
    set32(c.r[4], ld32((c.r[16].w[0] + 108u)));
    c.f[14] = ld32((c.r[16].w[0] + 40u));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBFB0u); c.f[13] = c.f[25];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BBFB0u) [[unlikely]] return; }
L_002BBFB0:
    set32(c.r[2], ld32((c.r[16].w[0] + 112u)));
    c.f[0] = fp::add(c.f[26], c.f[24]);
    c.f[12] = fp::sub(c.f[0], c.f[22]);
    st32((c.r[2].w[0] + 160u), c.f[22]);
    st32((c.r[2].w[0] + 164u), c.f[21]);
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    c.f[14] = ld32((c.r[16].w[0] + 40u));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBFDCu); c.f[13] = fp::add(c.f[25], c.f[22]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BBFDCu) [[unlikely]] return; }
L_002BBFDC:
    set32(c.r[2], ld32((c.r[16].w[0] + 116u)));
    c.f[0] = fp::add(c.f[25], c.f[23]);
    c.f[13] = fp::sub(c.f[0], c.f[22]);
    st32((c.r[2].w[0] + 160u), c.f[20]);
    st32((c.r[2].w[0] + 164u), c.f[22]);
    set32(c.r[4], ld32((c.r[16].w[0] + 116u)));
    c.f[14] = ld32((c.r[16].w[0] + 40u));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 9;
    [[clang::musttail]] return unit_006F(c, 1u, depth);
}

}
