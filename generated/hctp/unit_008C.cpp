#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_008C[4096] = {
    1, 0, 0, 0, 2, 0, 3, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0,
    0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 10, 0, 0, 11, 0, 0, 0, 12, 0, 13, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 16, 0, 0, 0, 17,
    0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0,
    26, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0,
    0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 35, 0, 0, 36,
    0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41,
    0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 45, 0,
    46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 48, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 55, 0, 0, 56, 0, 0, 57, 0, 0, 58, 0, 0, 59, 0, 0, 60, 0, 0, 61, 0, 0,
    62, 0, 0, 63, 0, 0, 64, 0, 0, 65, 0, 0, 66, 0, 0, 67, 0, 0, 68, 0, 0, 69, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0,
    0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0,
    0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0,
    79, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0,
    88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 91, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0,
    99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 104, 0, 0, 0, 0, 0,
    105, 0, 0, 0, 0, 0, 106, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0,
    0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 120, 0, 0, 0,
    0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 125, 0,
    0, 126, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0,
    0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0,
    0, 135, 0, 136, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    144, 0, 0, 145, 0, 0, 146, 0, 0, 147, 0, 0, 148, 0, 0, 149, 0, 0, 150, 0, 0, 151, 0, 0, 152, 0, 0, 153, 0, 0, 154, 0,
    0, 155, 0, 0, 156, 0, 0, 157, 0, 0, 158, 0, 0, 159, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 165, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 167,
    0, 0, 0, 0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0,
    176, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 180, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 181, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 189, 0,
    190, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0,
    197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0,
    0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0,
    0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 209, 0, 0, 0,
    0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 214, 0,
    0, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 217, 0, 218, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0,
    0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 229, 0, 230, 0, 0, 0, 0, 231, 0, 232, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 236, 0, 0, 237, 0, 0, 238, 0, 0, 239, 0, 0,
    240, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 246, 0,
    0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 253, 0, 254, 0, 0, 0, 0, 255, 0, 0, 0,
    0, 0, 256, 0, 0, 0, 257, 0, 0, 258, 0, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    269, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 273, 0, 274, 0, 0, 0, 0,
    275, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 279, 0, 0,
    0, 280, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 285, 0,
    0, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 293, 0, 0, 294, 0,
    0, 295, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 298, 0, 0, 0, 0, 299, 0, 0, 0, 300,
    0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 304, 0, 0, 305, 0, 306,
    0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 308, 0, 309, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 312, 0, 0, 313, 0, 0, 314, 0, 0, 315, 0, 0, 316, 0, 0, 317, 0, 0,
    0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0,
    0, 322, 0, 0, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 333, 0, 0, 0, 0,
    0, 334, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 338, 0, 0, 0,
    0, 0, 0, 0, 339, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 342,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 347, 0, 348, 0, 0, 0, 0, 349, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 351, 0, 0, 0, 0, 352, 0, 0, 0, 353, 0, 0, 0, 0, 354, 0, 0, 0, 355, 0, 0,
    0, 0, 0, 0, 356, 0, 0, 0, 357, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 361, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365,
    0, 0, 0, 0, 366, 0, 0, 367, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0,
    0, 0, 0, 0, 0, 0, 371, 0, 0, 372, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 375, 0, 0, 376, 0,
    377, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 381, 0, 0, 382, 0, 0, 383, 0, 0, 384, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 390, 0, 0, 391,
    0, 0, 392, 0, 393, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 396, 0, 0,
    0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 398, 0, 399, 0, 0, 0, 400, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 405, 0, 0, 0,
    0, 406, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410,
    0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 413, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0,
    416, 0, 0, 417, 0, 418, 0, 0, 419, 0, 0, 0, 0, 420, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422,
    0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 424, 0, 0, 425, 0, 426, 0, 0, 0, 0, 427, 0, 0, 0, 428, 0, 0, 0, 0, 429, 0, 0,
    0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0,
    0, 0, 0, 434, 0, 0, 0, 435, 0, 0, 436, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 443, 0, 0, 444,
    0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 447, 0, 0, 0,
    448, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0,
    453, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    456, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0,
    0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 461, 0, 462, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 468, 0, 0, 469,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 471, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 475, 0, 476, 0, 0, 0, 477, 0, 0, 478, 0, 0,
    0, 0, 0, 479, 0, 0, 0, 480, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 484, 0, 485, 0,
    486, 0, 0, 487, 0, 488, 0, 0, 0, 489, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 491,
    0, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 497, 0, 0,
    498, 0, 0, 499, 0, 0, 500, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 503, 0, 0, 504, 0, 0, 0, 0,
    0, 505, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0,
    0, 0, 0, 0, 509, 0, 0, 0, 510, 0, 0, 0, 511, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0,
    0, 514, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 517, 0, 0, 0,
    518, 0, 0, 0, 519, 0, 0, 0, 520, 0, 0, 0, 521, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0,
    0, 0, 0, 0, 0, 523, 0, 0, 0, 0, 524, 0, 0, 525, 0, 526, 0, 0, 0, 527, 0, 528, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0,
    0, 530, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 534, 0, 0, 0,
    0, 0, 0, 535, 0, 0, 0, 0, 536, 0, 0, 0, 537, 0, 0, 538, 0, 0, 0, 0, 539, 0, 0, 0, 0, 0, 0, 0, 540, 0, 0, 0,
    0, 0, 0, 0, 541, 0, 0, 0, 0, 0, 0, 0, 542, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 0, 0, 0, 0, 0, 544, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 545, 0, 0, 0, 546, 0, 0, 0, 0, 0, 0, 0, 547, 0, 0, 0, 548, 0, 0, 0, 0, 0, 0, 549,
    0, 0, 0, 0, 0, 0, 0, 550, 0, 0, 0, 0, 0, 0, 0, 0, 551, 0, 0, 0, 0, 0, 552, 0, 553, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 554, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 555, 0, 0, 556, 0, 0, 0, 0, 0, 557, 0, 0,
    0, 0, 0, 0, 558, 0, 0, 0, 0, 0, 0, 0, 559, 0, 560, 0, 561, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 563, 0, 0, 0,
    0, 564, 0, 0, 0, 565, 0, 0, 0, 0, 566, 0, 0, 0, 567, 0, 568, 0, 569, 0, 0, 570, 0, 0, 0, 0, 0, 0, 571, 0, 0, 0,
    0, 0, 572, 0, 573, 0, 0, 0, 574, 0, 0, 0, 0, 575, 0, 0, 0, 0, 576, 0, 0, 0, 577, 0, 0, 0, 0, 0, 578, 0, 0, 0,
    0, 0, 0, 0, 0, 579, 0, 0, 0, 0, 0, 0, 0, 0, 0, 580, 0, 0, 0, 0, 581, 0, 0, 0, 582, 0, 583, 0, 0, 584, 0, 0,
    585, 0, 0, 586, 0, 587, 0, 0, 0, 0, 0, 0, 588, 0, 0, 0, 589, 0, 590, 0, 591, 0, 0, 0, 0, 0, 592, 0, 0, 593, 0, 0,
    594, 0, 0, 0, 0, 0, 595, 0, 0, 0, 596, 0, 0, 0, 597, 0, 0, 598, 0, 599, 0, 0, 0, 0, 600, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 601, 0, 0, 0, 0, 0, 0, 602, 0, 0, 0, 0, 0, 0, 0, 0, 603, 0, 0, 0, 0, 0, 0,
    0, 604, 0, 0, 0, 0, 0, 0, 0, 0, 0, 605, 0, 0, 0, 0, 606, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    607, 0, 0, 608, 0, 0, 609, 0, 0, 0, 0, 0, 610, 0, 0, 0, 0, 0, 0, 0, 611, 0, 0, 0, 0, 0, 0, 0, 0, 0, 612, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 613, 0, 0, 0, 0, 614, 0, 0, 0, 615, 0, 616, 0, 617, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 618, 0, 0, 619, 0, 0, 620, 0, 0, 621, 0, 0, 0, 0, 0, 0, 0, 622, 0, 0, 0,
};

void unit_008C(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00330000;
    case 2u: goto L_00330010;
    case 3u: goto L_00330018;
    case 4u: goto L_00330020;
    case 5u: goto L_0033005C;
    case 6u: goto L_00330070;
    case 7u: goto L_00330094;
    case 8u: goto L_003300B4;
    case 9u: goto L_003300DC;
    case 10u: goto L_0033010C;
    case 11u: goto L_00330118;
    case 12u: goto L_00330128;
    case 13u: goto L_00330130;
    case 14u: goto L_00330150;
    case 15u: goto L_00330164;
    case 16u: goto L_0033016C;
    case 17u: goto L_0033017C;
    case 18u: goto L_00330198;
    case 19u: goto L_003301AC;
    case 20u: goto L_003301BC;
    case 21u: goto L_003301E0;
    case 22u: goto L_00330224;
    case 23u: goto L_00330240;
    case 24u: goto L_00330264;
    case 25u: goto L_00330274;
    case 26u: goto L_00330280;
    case 27u: goto L_0033029C;
    case 28u: goto L_003302B4;
    case 29u: goto L_003302C0;
    case 30u: goto L_003302D4;
    case 31u: goto L_003302F0;
    case 32u: goto L_0033030C;
    case 33u: goto L_0033034C;
    case 34u: goto L_00330364;
    case 35u: goto L_00330370;
    case 36u: goto L_0033037C;
    case 37u: goto L_00330390;
    case 38u: goto L_003303B8;
    case 39u: goto L_003303D0;
    case 40u: goto L_003303E4;
    case 41u: goto L_003303FC;
    case 42u: goto L_00330410;
    case 43u: goto L_00330444;
    case 44u: goto L_00330470;
    case 45u: goto L_00330478;
    case 46u: goto L_00330480;
    case 47u: goto L_003304A8;
    case 48u: goto L_003304B0;
    case 49u: goto L_003304D0;
    case 50u: goto L_00330518;
    case 51u: goto L_00330540;
    case 52u: goto L_00330550;
    case 53u: goto L_00330574;
    case 54u: goto L_003305A0;
    case 55u: goto L_003305AC;
    case 56u: goto L_003305B8;
    case 57u: goto L_003305C4;
    case 58u: goto L_003305D0;
    case 59u: goto L_003305DC;
    case 60u: goto L_003305E8;
    case 61u: goto L_003305F4;
    case 62u: goto L_00330600;
    case 63u: goto L_0033060C;
    case 64u: goto L_00330618;
    case 65u: goto L_00330624;
    case 66u: goto L_00330630;
    case 67u: goto L_0033063C;
    case 68u: goto L_00330648;
    case 69u: goto L_00330654;
    case 70u: goto L_00330660;
    case 71u: goto L_00330678;
    case 72u: goto L_00330690;
    case 73u: goto L_003306B4;
    case 74u: goto L_003306DC;
    case 75u: goto L_003306F4;
    case 76u: goto L_00330710;
    case 77u: goto L_00330720;
    case 78u: goto L_00330768;
    case 79u: goto L_00330780;
    case 80u: goto L_0033079C;
    case 81u: goto L_003307B0;
    case 82u: goto L_003307C0;
    case 83u: goto L_003307E0;
    case 84u: goto L_00330808;
    case 85u: goto L_00330820;
    case 86u: goto L_00330840;
    case 87u: goto L_00330868;
    case 88u: goto L_00330880;
    case 89u: goto L_003308B8;
    case 90u: goto L_003308E0;
    case 91u: goto L_0033090C;
    case 92u: goto L_00330914;
    case 93u: goto L_0033093C;
    case 94u: goto L_00330968;
    case 95u: goto L_00330990;
    case 96u: goto L_003309B4;
    case 97u: goto L_003309D4;
    case 98u: goto L_003309E0;
    case 99u: goto L_00330A00;
    case 100u: goto L_00330A28;
    case 101u: goto L_00330A3C;
    case 102u: goto L_00330A50;
    case 103u: goto L_00330A60;
    case 104u: goto L_00330A68;
    case 105u: goto L_00330A80;
    case 106u: goto L_00330A98;
    case 107u: goto L_00330AA4;
    case 108u: goto L_00330ABC;
    case 109u: goto L_00330AC8;
    case 110u: goto L_00330AF0;
    case 111u: goto L_00330B0C;
    case 112u: goto L_00330B1C;
    case 113u: goto L_00330B3C;
    case 114u: goto L_00330B50;
    case 115u: goto L_00330B6C;
    case 116u: goto L_00330BA0;
    case 117u: goto L_00330BAC;
    case 118u: goto L_00330BC0;
    case 119u: goto L_00330BE8;
    case 120u: goto L_00330BF0;
    case 121u: goto L_00330C08;
    case 122u: goto L_00330C3C;
    case 123u: goto L_00330C48;
    case 124u: goto L_00330C5C;
    case 125u: goto L_00330C78;
    case 126u: goto L_00330C84;
    case 127u: goto L_00330C8C;
    case 128u: goto L_00330CA4;
    case 129u: goto L_00330CB0;
    case 130u: goto L_00330CF8;
    case 131u: goto L_00330D0C;
    case 132u: goto L_00330D30;
    case 133u: goto L_00330D40;
    case 134u: goto L_00330D64;
    case 135u: goto L_00330D84;
    case 136u: goto L_00330D8C;
    case 137u: goto L_00330D94;
    case 138u: goto L_00330DB8;
    case 139u: goto L_00330DCC;
    case 140u: goto L_00330DD4;
    case 141u: goto L_00330DF0;
    case 142u: goto L_00330E30;
    case 143u: goto L_00330E54;
    case 144u: goto L_00330E80;
    case 145u: goto L_00330E8C;
    case 146u: goto L_00330E98;
    case 147u: goto L_00330EA4;
    case 148u: goto L_00330EB0;
    case 149u: goto L_00330EBC;
    case 150u: goto L_00330EC8;
    case 151u: goto L_00330ED4;
    case 152u: goto L_00330EE0;
    case 153u: goto L_00330EEC;
    case 154u: goto L_00330EF8;
    case 155u: goto L_00330F04;
    case 156u: goto L_00330F10;
    case 157u: goto L_00330F1C;
    case 158u: goto L_00330F28;
    case 159u: goto L_00330F34;
    case 160u: goto L_00330F40;
    case 161u: goto L_00330F58;
    case 162u: goto L_00330F70;
    case 163u: goto L_00330FA0;
    case 164u: goto L_00330FC8;
    case 165u: goto L_00330FD0;
    case 166u: goto L_00330FEC;
    case 167u: goto L_00330FFC;
    case 168u: goto L_00331010;
    case 169u: goto L_00331024;
    case 170u: goto L_00331034;
    case 171u: goto L_00331044;
    case 172u: goto L_00331080;
    case 173u: goto L_00331098;
    case 174u: goto L_003310C0;
    case 175u: goto L_003310F0;
    case 176u: goto L_00331100;
    case 177u: goto L_00331108;
    case 178u: goto L_00331130;
    case 179u: goto L_0033115C;
    case 180u: goto L_00331168;
    case 181u: goto L_00331190;
    case 182u: goto L_0033119C;
    case 183u: goto L_003311C0;
    case 184u: goto L_003311CC;
    case 185u: goto L_003311DC;
    case 186u: goto L_00331230;
    case 187u: goto L_00331248;
    case 188u: goto L_0033126C;
    case 189u: goto L_00331278;
    case 190u: goto L_00331280;
    case 191u: goto L_003312A0;
    case 192u: goto L_003312D0;
    case 193u: goto L_0033131C;
    case 194u: goto L_00331344;
    case 195u: goto L_0033135C;
    case 196u: goto L_00331370;
    case 197u: goto L_00331380;
    case 198u: goto L_003313B8;
    case 199u: goto L_003313E8;
    case 200u: goto L_0033140C;
    case 201u: goto L_00331420;
    case 202u: goto L_0033145C;
    case 203u: goto L_0033146C;
    case 204u: goto L_003314A0;
    case 205u: goto L_003314C0;
    case 206u: goto L_003314E8;
    case 207u: goto L_00331508;
    case 208u: goto L_00331564;
    case 209u: goto L_00331570;
    case 210u: goto L_00331590;
    case 211u: goto L_003315AC;
    case 212u: goto L_003315C4;
    case 213u: goto L_003315E4;
    case 214u: goto L_003315F8;
    case 215u: goto L_00331610;
    case 216u: goto L_00331624;
    case 217u: goto L_00331630;
    case 218u: goto L_00331638;
    case 219u: goto L_00331650;
    case 220u: goto L_0033166C;
    case 221u: goto L_0033169C;
    case 222u: goto L_003316D0;
    case 223u: goto L_003316EC;
    case 224u: goto L_00331710;
    case 225u: goto L_0033172C;
    case 226u: goto L_00331738;
    case 227u: goto L_00331780;
    case 228u: goto L_003317B8;
    case 229u: goto L_003317C8;
    case 230u: goto L_003317D0;
    case 231u: goto L_003317E4;
    case 232u: goto L_003317EC;
    case 233u: goto L_00331820;
    case 234u: goto L_00331864;
    case 235u: goto L_003318C4;
    case 236u: goto L_003318D0;
    case 237u: goto L_003318DC;
    case 238u: goto L_003318E8;
    case 239u: goto L_003318F4;
    case 240u: goto L_00331900;
    case 241u: goto L_00331918;
    case 242u: goto L_00331930;
    case 243u: goto L_00331948;
    case 244u: goto L_0033195C;
    case 245u: goto L_00331970;
    case 246u: goto L_00331978;
    case 247u: goto L_00331994;
    case 248u: goto L_003319BC;
    case 249u: goto L_003319E0;
    case 250u: goto L_003319F0;
    case 251u: goto L_00331A24;
    case 252u: goto L_00331A4C;
    case 253u: goto L_00331A54;
    case 254u: goto L_00331A5C;
    case 255u: goto L_00331A70;
    case 256u: goto L_00331A88;
    case 257u: goto L_00331A98;
    case 258u: goto L_00331AA4;
    case 259u: goto L_00331AB8;
    case 260u: goto L_00331ACC;
    case 261u: goto L_00331B00;
    case 262u: goto L_00331B28;
    case 263u: goto L_00331B38;
    case 264u: goto L_00331B48;
    case 265u: goto L_00331B58;
    case 266u: goto L_00331B90;
    case 267u: goto L_00331BB0;
    case 268u: goto L_00331BCC;
    case 269u: goto L_00331C00;
    case 270u: goto L_00331C18;
    case 271u: goto L_00331C30;
    case 272u: goto L_00331C54;
    case 273u: goto L_00331C64;
    case 274u: goto L_00331C6C;
    case 275u: goto L_00331C80;
    case 276u: goto L_00331C98;
    case 277u: goto L_00331CB4;
    case 278u: goto L_00331CEC;
    case 279u: goto L_00331CF4;
    case 280u: goto L_00331D04;
    case 281u: goto L_00331D1C;
    case 282u: goto L_00331D34;
    case 283u: goto L_00331D44;
    case 284u: goto L_00331D60;
    case 285u: goto L_00331D78;
    case 286u: goto L_00331D90;
    case 287u: goto L_00331DA0;
    case 288u: goto L_00331DBC;
    case 289u: goto L_00331E48;
    case 290u: goto L_00331F10;
    case 291u: goto L_00331F38;
    case 292u: goto L_00331F60;
    case 293u: goto L_00331F6C;
    case 294u: goto L_00331F78;
    case 295u: goto L_00331F84;
    case 296u: goto L_00331F90;
    case 297u: goto L_00331FC4;
    case 298u: goto L_00331FD8;
    case 299u: goto L_00331FEC;
    case 300u: goto L_00331FFC;
    case 301u: goto L_0033200C;
    case 302u: goto L_0033201C;
    case 303u: goto L_00332054;
    case 304u: goto L_00332068;
    case 305u: goto L_00332074;
    case 306u: goto L_0033207C;
    case 307u: goto L_0033208C;
    case 308u: goto L_003320AC;
    case 309u: goto L_003320B4;
    case 310u: goto L_003320D0;
    case 311u: goto L_00332128;
    case 312u: goto L_00332138;
    case 313u: goto L_00332144;
    case 314u: goto L_00332150;
    case 315u: goto L_0033215C;
    case 316u: goto L_00332168;
    case 317u: goto L_00332174;
    case 318u: goto L_0033218C;
    case 319u: goto L_003321B0;
    case 320u: goto L_003321D4;
    case 321u: goto L_003321E4;
    case 322u: goto L_00332204;
    case 323u: goto L_00332218;
    case 324u: goto L_0033222C;
    case 325u: goto L_00332244;
    case 326u: goto L_00332254;
    case 327u: goto L_00332264;
    case 328u: goto L_00332274;
    case 329u: goto L_003322A0;
    case 330u: goto L_003322B0;
    case 331u: goto L_003322BC;
    case 332u: goto L_003322E4;
    case 333u: goto L_003322EC;
    case 334u: goto L_00332304;
    case 335u: goto L_0033230C;
    case 336u: goto L_00332338;
    case 337u: goto L_00332360;
    case 338u: goto L_00332370;
    case 339u: goto L_00332390;
    case 340u: goto L_003323A4;
    case 341u: goto L_003323E0;
    case 342u: goto L_003323FC;
    case 343u: goto L_00332430;
    case 344u: goto L_00332450;
    case 345u: goto L_00332478;
    case 346u: goto L_003324BC;
    case 347u: goto L_003324D4;
    case 348u: goto L_003324DC;
    case 349u: goto L_003324F0;
    case 350u: goto L_0033251C;
    case 351u: goto L_0033252C;
    case 352u: goto L_00332540;
    case 353u: goto L_00332550;
    case 354u: goto L_00332564;
    case 355u: goto L_00332574;
    case 356u: goto L_00332590;
    case 357u: goto L_003325A0;
    case 358u: goto L_003325B4;
    case 359u: goto L_003325D0;
    case 360u: goto L_003325EC;
    case 361u: goto L_00332614;
    case 362u: goto L_0033261C;
    case 363u: goto L_00332648;
    case 364u: goto L_00332650;
    case 365u: goto L_0033267C;
    case 366u: goto L_00332690;
    case 367u: goto L_0033269C;
    case 368u: goto L_003326B0;
    case 369u: goto L_003326D0;
    case 370u: goto L_003326F4;
    case 371u: goto L_00332718;
    case 372u: goto L_00332724;
    case 373u: goto L_00332730;
    case 374u: goto L_00332754;
    case 375u: goto L_0033276C;
    case 376u: goto L_00332778;
    case 377u: goto L_00332780;
    case 378u: goto L_00332790;
    case 379u: goto L_003327B0;
    case 380u: goto L_003327D0;
    case 381u: goto L_00332810;
    case 382u: goto L_0033281C;
    case 383u: goto L_00332828;
    case 384u: goto L_00332834;
    case 385u: goto L_0033284C;
    case 386u: goto L_00332870;
    case 387u: goto L_00332898;
    case 388u: goto L_003328C0;
    case 389u: goto L_003328E0;
    case 390u: goto L_003328F0;
    case 391u: goto L_003328FC;
    case 392u: goto L_00332908;
    case 393u: goto L_00332910;
    case 394u: goto L_00332930;
    case 395u: goto L_00332960;
    case 396u: goto L_00332974;
    case 397u: goto L_00332990;
    case 398u: goto L_003329AC;
    case 399u: goto L_003329B4;
    case 400u: goto L_003329C4;
    case 401u: goto L_003329D4;
    case 402u: goto L_00332A10;
    case 403u: goto L_00332A34;
    case 404u: goto L_00332A64;
    case 405u: goto L_00332A70;
    case 406u: goto L_00332A84;
    case 407u: goto L_00332A98;
    case 408u: goto L_00332AB8;
    case 409u: goto L_00332AC8;
    case 410u: goto L_00332AFC;
    case 411u: goto L_00332B0C;
    case 412u: goto L_00332B28;
    case 413u: goto L_00332B38;
    case 414u: goto L_00332B44;
    case 415u: goto L_00332B70;
    case 416u: goto L_00332B80;
    case 417u: goto L_00332B8C;
    case 418u: goto L_00332B94;
    case 419u: goto L_00332BA0;
    case 420u: goto L_00332BB4;
    case 421u: goto L_00332BC4;
    case 422u: goto L_00332BFC;
    case 423u: goto L_00332C14;
    case 424u: goto L_00332C28;
    case 425u: goto L_00332C34;
    case 426u: goto L_00332C3C;
    case 427u: goto L_00332C50;
    case 428u: goto L_00332C60;
    case 429u: goto L_00332C74;
    case 430u: goto L_00332C84;
    case 431u: goto L_00332CB4;
    case 432u: goto L_00332CD0;
    case 433u: goto L_00332CF4;
    case 434u: goto L_00332D0C;
    case 435u: goto L_00332D1C;
    case 436u: goto L_00332D28;
    case 437u: goto L_00332D38;
    case 438u: goto L_00332D60;
    case 439u: goto L_00332D94;
    case 440u: goto L_00332DB4;
    case 441u: goto L_00332DC4;
    case 442u: goto L_00332DE0;
    case 443u: goto L_00332DF0;
    case 444u: goto L_00332DFC;
    case 445u: goto L_00332E18;
    case 446u: goto L_00332E5C;
    case 447u: goto L_00332E70;
    case 448u: goto L_00332E80;
    case 449u: goto L_00332E88;
    case 450u: goto L_00332EB0;
    case 451u: goto L_00332ECC;
    case 452u: goto L_00332EF0;
    case 453u: goto L_00332F00;
    case 454u: goto L_00332F20;
    case 455u: goto L_00332F40;
    case 456u: goto L_00332F80;
    case 457u: goto L_00332F8C;
    case 458u: goto L_00332FD0;
    case 459u: goto L_00332FF0;
    case 460u: goto L_00333014;
    case 461u: goto L_00333028;
    case 462u: goto L_00333030;
    case 463u: goto L_00333050;
    case 464u: goto L_0033306C;
    case 465u: goto L_003330B4;
    case 466u: goto L_003330C0;
    case 467u: goto L_003330E4;
    case 468u: goto L_003330F0;
    case 469u: goto L_003330FC;
    case 470u: goto L_00333124;
    case 471u: goto L_00333134;
    case 472u: goto L_00333140;
    case 473u: goto L_00333180;
    case 474u: goto L_003331B0;
    case 475u: goto L_003331D0;
    case 476u: goto L_003331D8;
    case 477u: goto L_003331E8;
    case 478u: goto L_003331F4;
    case 479u: goto L_0033320C;
    case 480u: goto L_0033321C;
    case 481u: goto L_00333228;
    case 482u: goto L_00333290;
    case 483u: goto L_003332E8;
    case 484u: goto L_003332F0;
    case 485u: goto L_003332F8;
    case 486u: goto L_00333300;
    case 487u: goto L_0033330C;
    case 488u: goto L_00333314;
    case 489u: goto L_00333324;
    case 490u: goto L_00333330;
    case 491u: goto L_0033337C;
    case 492u: goto L_003333A0;
    case 493u: goto L_003333EC;
    case 494u: goto L_00333414;
    case 495u: goto L_0033343C;
    case 496u: goto L_00333464;
    case 497u: goto L_00333474;
    case 498u: goto L_00333480;
    case 499u: goto L_0033348C;
    case 500u: goto L_00333498;
    case 501u: goto L_003334A4;
    case 502u: goto L_003334D4;
    case 503u: goto L_003334E0;
    case 504u: goto L_003334EC;
    case 505u: goto L_00333504;
    case 506u: goto L_00333520;
    case 507u: goto L_00333550;
    case 508u: goto L_00333570;
    case 509u: goto L_00333590;
    case 510u: goto L_003335A0;
    case 511u: goto L_003335B0;
    case 512u: goto L_003335D0;
    case 513u: goto L_003335F0;
    case 514u: goto L_00333604;
    case 515u: goto L_00333618;
    case 516u: goto L_00333660;
    case 517u: goto L_00333670;
    case 518u: goto L_00333680;
    case 519u: goto L_00333690;
    case 520u: goto L_003336A0;
    case 521u: goto L_003336B0;
    case 522u: goto L_003336F0;
    case 523u: goto L_00333714;
    case 524u: goto L_00333728;
    case 525u: goto L_00333734;
    case 526u: goto L_0033373C;
    case 527u: goto L_0033374C;
    case 528u: goto L_00333754;
    case 529u: goto L_00333764;
    case 530u: goto L_00333784;
    case 531u: goto L_00333794;
    case 532u: goto L_003337B4;
    case 533u: goto L_003337D8;
    case 534u: goto L_003337F0;
    case 535u: goto L_0033380C;
    case 536u: goto L_00333820;
    case 537u: goto L_00333830;
    case 538u: goto L_0033383C;
    case 539u: goto L_00333850;
    case 540u: goto L_00333870;
    case 541u: goto L_00333890;
    case 542u: goto L_003338B0;
    case 543u: goto L_003338D0;
    case 544u: goto L_003338F0;
    case 545u: goto L_00333920;
    case 546u: goto L_00333930;
    case 547u: goto L_00333950;
    case 548u: goto L_00333960;
    case 549u: goto L_0033397C;
    case 550u: goto L_0033399C;
    case 551u: goto L_003339C0;
    case 552u: goto L_003339D8;
    case 553u: goto L_003339E0;
    case 554u: goto L_00333A10;
    case 555u: goto L_00333A50;
    case 556u: goto L_00333A5C;
    case 557u: goto L_00333A74;
    case 558u: goto L_00333A90;
    case 559u: goto L_00333AB0;
    case 560u: goto L_00333AB8;
    case 561u: goto L_00333AC0;
    case 562u: goto L_00333AD4;
    case 563u: goto L_00333AF0;
    case 564u: goto L_00333B04;
    case 565u: goto L_00333B14;
    case 566u: goto L_00333B28;
    case 567u: goto L_00333B38;
    case 568u: goto L_00333B40;
    case 569u: goto L_00333B48;
    case 570u: goto L_00333B54;
    case 571u: goto L_00333B70;
    case 572u: goto L_00333B88;
    case 573u: goto L_00333B90;
    case 574u: goto L_00333BA0;
    case 575u: goto L_00333BB4;
    case 576u: goto L_00333BC8;
    case 577u: goto L_00333BD8;
    case 578u: goto L_00333BF0;
    case 579u: goto L_00333C14;
    case 580u: goto L_00333C3C;
    case 581u: goto L_00333C50;
    case 582u: goto L_00333C60;
    case 583u: goto L_00333C68;
    case 584u: goto L_00333C74;
    case 585u: goto L_00333C80;
    case 586u: goto L_00333C8C;
    case 587u: goto L_00333C94;
    case 588u: goto L_00333CB0;
    case 589u: goto L_00333CC0;
    case 590u: goto L_00333CC8;
    case 591u: goto L_00333CD0;
    case 592u: goto L_00333CE8;
    case 593u: goto L_00333CF4;
    case 594u: goto L_00333D00;
    case 595u: goto L_00333D18;
    case 596u: goto L_00333D28;
    case 597u: goto L_00333D38;
    case 598u: goto L_00333D44;
    case 599u: goto L_00333D4C;
    case 600u: goto L_00333D60;
    case 601u: goto L_00333DA4;
    case 602u: goto L_00333DC0;
    case 603u: goto L_00333DE4;
    case 604u: goto L_00333E04;
    case 605u: goto L_00333E2C;
    case 606u: goto L_00333E40;
    case 607u: goto L_00333E80;
    case 608u: goto L_00333E8C;
    case 609u: goto L_00333E98;
    case 610u: goto L_00333EB0;
    case 611u: goto L_00333ED0;
    case 612u: goto L_00333EF8;
    case 613u: goto L_00333F20;
    case 614u: goto L_00333F34;
    case 615u: goto L_00333F44;
    case 616u: goto L_00333F4C;
    case 617u: goto L_00333F54;
    case 618u: goto L_00333FAC;
    case 619u: goto L_00333FB8;
    case 620u: goto L_00333FC4;
    case 621u: goto L_00333FD0;
    case 622u: goto L_00333FF0;
    default: bad_entry(c, 0x00330000u); return;
    }
L_00330000:
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330010u); set32(c.r[5], 0u + 64u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x00330010u) [[unlikely]] return; }
L_00330010:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330018u);  if (depth < kMaxDepth) unit_0022(c, 126u, depth + 1u); else { c.pc = 0x00188A80u; return; } if (c.pc != 0x00330018u) [[unlikely]] return; }
L_00330018:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330020u);  if (depth < kMaxDepth) unit_0022(c, 127u, depth + 1u); else { c.pc = 0x00188AB0u; return; } if (c.pc != 0x00330020u) [[unlikely]] return; }
L_00330020:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00330054; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    st8((c.r[2].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    st8((c.r[2].w[0] + 24u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    st8((c.r[2].w[0] + 32u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    st8((c.r[2].w[0] + 40u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 11;
L_00330054:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033005Cu);  if (depth < kMaxDepth) unit_000C(c, 21u, depth + 1u); else { c.pc = 0x001301E0u; return; } if (c.pc != 0x0033005Cu) [[unlikely]] return; }
L_0033005C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00330070:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00330094u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00330094u) [[unlikely]] return; }
L_00330094:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003300AC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 176u)));
    st8((c.r[2].w[0] + 72u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_003300AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003300B4u);  if (depth < kMaxDepth) unit_0022(c, 256u, depth + 1u); else { c.pc = 0x00189B70u; return; } if (c.pc != 0x003300B4u) [[unlikely]] return; }
L_003300B4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003300C8; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 5u);  if (t) { goto L_00330138; } }
L_003300C8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003300DCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 198u, depth + 1u); else { c.pc = 0x001892F0u; return; } if (c.pc != 0x003300DCu) [[unlikely]] return; }
L_003300DC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26120u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[17].w[0] + 1360u);  if (t) { goto L_00330120; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033010Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033010Cu) [[unlikely]] return; }
L_0033010C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330118u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0087(c, 405u, depth + 1u); else { c.pc = 0x0031F950u; return; } if (c.pc != 0x00330118u) [[unlikely]] return; }
L_00330118:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00330228; } }
L_00330120:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330128u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_008A(c, 143u, depth + 1u); else { c.pc = 0x00329610u; return; } if (c.pc != 0x00330128u) [[unlikely]] return; }
L_00330128:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330130u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 375u, depth + 1u); else { c.pc = 0x0031F5E0u; return; } if (c.pc != 0x00330130u) [[unlikely]] return; }
L_00330130:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00330224; } }
L_00330138:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00330184; } }
    set32(c.r[5], 0u + 10u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330150u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 198u, depth + 1u); else { c.pc = 0x001892F0u; return; } if (c.pc != 0x00330150u) [[unlikely]] return; }
L_00330150:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 11u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330164u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 198u, depth + 1u); else { c.pc = 0x001892F0u; return; } if (c.pc != 0x00330164u) [[unlikely]] return; }
L_00330164:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033016Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 375u, depth + 1u); else { c.pc = 0x0031F5E0u; return; } if (c.pc != 0x0033016Cu) [[unlikely]] return; }
L_0033016C:
    st8((c.r[17].w[0] + 1760u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033017Cu); set32(c.r[4], ld32((c.r[1].w[0] + 26160u)));  if (depth < kMaxDepth) unit_0023(c, 112u, depth + 1u); else { c.pc = 0x0018D220u; return; } if (c.pc != 0x0033017Cu) [[unlikely]] return; }
L_0033017C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00330224; } }
L_00330184:
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[16].w[0] - 1u);  if (t) { goto L_003301C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330198u); set32(c.r[4], 0u + 40u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00330198u) [[unlikely]] return; }
L_00330198:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003301AC; } }
    set32(c.r[5], 0u + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003301ACu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_008B(c, 128u, depth + 1u); else { c.pc = 0x0032CE80u; return; } if (c.pc != 0x003301ACu) [[unlikely]] return; }
L_003301AC:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], 0u + 14u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003301BCu); st8((c.r[17].w[0] + 2288u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x003301BCu) [[unlikely]] return; }
L_003301BC:
    set32(c.r[2], c.r[16].w[0] - 1u);
    c.budget -= 1;
L_003301C0:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[4], c.r[17].w[0] + 1360u);  if (t) { goto L_003301D8; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;  if (t) { goto L_003301E4; } }
L_003301D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003301E0u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_008A(c, 143u, depth + 1u); else { c.pc = 0x00329610u; return; } if (c.pc != 0x003301E0u) [[unlikely]] return; }
L_003301E0:
    c.r[2].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 1;
L_003301E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 7u);  if (t) { goto L_003301F0; } }
    st8((c.r[17].w[0] + 1760u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_003301F0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0033021C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 1624u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);  if (t) { goto L_00330218; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[1].w[0] - 1624u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st8((c.r[1].w[0] - 1688u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00330218:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0033021C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330224u);  if (depth < kMaxDepth) unit_0087(c, 375u, depth + 1u); else { c.pc = 0x0031F5E0u; return; } if (c.pc != 0x00330224u) [[unlikely]] return; }
L_00330224:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00330228:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00330240:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 1624u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], 0u + 5u);  if (t) { goto L_0033026C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330264u);  if (depth < kMaxDepth) unit_0087(c, 405u, depth + 1u); else { c.pc = 0x0031F950u; return; } if (c.pc != 0x00330264u) [[unlikely]] return; }
L_00330264:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00330278; } }
L_0033026C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330274u); st8((c.r[4].w[0] + 1760u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0087(c, 380u, depth + 1u); else { c.pc = 0x0031F6A0u; return; } if (c.pc != 0x00330274u) [[unlikely]] return; }
L_00330274:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00330278:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00330280:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033029Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 407u, depth + 1u); else { c.pc = 0x0031F9A0u; return; } if (c.pc != 0x0033029Cu) [[unlikely]] return; }
L_0033029C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003302CC; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003302B4u); st8((c.r[17].w[0] + 1760u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0087(c, 380u, depth + 1u); else { c.pc = 0x0031F6A0u; return; } if (c.pc != 0x003302B4u) [[unlikely]] return; }
L_003302B4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003302C0u); set32(c.r[4], ld32((c.r[1].w[0] + 26160u)));  if (depth < kMaxDepth) unit_0023(c, 108u, depth + 1u); else { c.pc = 0x0018D160u; return; } if (c.pc != 0x003302C0u) [[unlikely]] return; }
L_003302C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] - 1624u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003302D4; } }
L_003302CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003302D4u);  if (depth < kMaxDepth) unit_000C(c, 24u, depth + 1u); else { c.pc = 0x00130260u; return; } if (c.pc != 0x003302D4u) [[unlikely]] return; }
L_003302D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003302F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033030Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 128u, depth + 1u); else { c.pc = 0x00188AE0u; return; } if (c.pc != 0x0033030Cu) [[unlikely]] return; }
L_0033030C:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00330368; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[2], 0u + 6u);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00330364; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00330354; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033034Cu); set32(c.r[5], 0u + 5u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033034Cu) [[unlikely]] return; }
L_0033034C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00330364; } }
L_00330354:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00330364u); set32(c.r[5], 0u + 7u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00330364u) [[unlikely]] return; }
L_00330364:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00330368:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330370u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 169u, depth + 1u); else { c.pc = 0x0018DA60u; return; } if (c.pc != 0x00330370u) [[unlikely]] return; }
L_00330370:
    set32(c.r[5], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033037Cu); set32(c.r[4], c.r[17].w[0] + 1360u);  if (depth < kMaxDepth) unit_008A(c, 142u, depth + 1u); else { c.pc = 0x003295D0u; return; } if (c.pc != 0x0033037Cu) [[unlikely]] return; }
L_0033037C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00330390:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 1420u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003303B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003303BC; } }
L_003303B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003303B8u);  if (depth < kMaxDepth) unit_0087(c, 385u, depth + 1u); else { c.pc = 0x0031F760u; return; } if (c.pc != 0x003303B8u) [[unlikely]] return; }
L_003303B8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003303BC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003303D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003303E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 392u, depth + 1u); else { c.pc = 0x0031F810u; return; } if (c.pc != 0x003303E4u) [[unlikely]] return; }
L_003303E4:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.r[1].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], 0u + 255u);  if (t) { goto L_003303FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003303FCu);  if (depth < kMaxDepth) unit_0022(c, 134u, depth + 1u); else { c.pc = 0x00188B50u; return; } if (c.pc != 0x003303FCu) [[unlikely]] return; }
L_003303FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00330410:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[8], 0u + 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330444u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 356u, depth + 1u); else { c.pc = 0x0031F380u; return; } if (c.pc != 0x00330444u) [[unlikely]] return; }
L_00330444:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 23312u);
    set32(c.r[2], c.r[2].w[0] + 23400u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 220u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 208u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 212u), c.r[18].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330470u); st32((c.r[16].w[0] + 216u), 0u);  if (depth < kMaxDepth) unit_008A(c, 20u, depth + 1u); else { c.pc = 0x00328270u; return; } if (c.pc != 0x00330470u) [[unlikely]] return; }
L_00330470:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330478u); set32(c.r[4], c.r[16].w[0] + 288u);  if (depth < kMaxDepth) unit_008B(c, 337u, depth + 1u); else { c.pc = 0x0032F800u; return; } if (c.pc != 0x00330478u) [[unlikely]] return; }
L_00330478:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330480u); set32(c.r[4], c.r[16].w[0] + 2368u);  if (depth < kMaxDepth) unit_008B(c, 306u, depth + 1u); else { c.pc = 0x0032F430u; return; } if (c.pc != 0x00330480u) [[unlikely]] return; }
L_00330480:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4D500000u);
    set32(c.r[3], 0u + 120u);
    c.r[4].d[0] = c.r[2].d[0] | 21321ull;
    set32(c.r[5], 0u + 3u);
    st32((c.r[16].w[0] + 48u), c.r[4].w[0]);
    set32(c.r[2], 0u + 121u);
    st16((c.r[16].w[0] + 188u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[16].w[0] + 1440u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003304A8u); st16((c.r[16].w[0] + 190u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008A(c, 143u, depth + 1u); else { c.pc = 0x00329610u; return; } if (c.pc != 0x003304A8u) [[unlikely]] return; }
L_003304A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003304B0u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x003304B0u) [[unlikely]] return; }
L_003304B0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003304D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00330678; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 23312u);
    set32(c.r[2], c.r[2].w[0] + 23400u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 216u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00330518; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330518u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00330518u) [[unlikely]] return; }
L_00330518:
    st32((c.r[17].w[0] + 216u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00330540; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00330540; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00330540u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00330540u) [[unlikely]] return; }
L_00330540:
    set32(c.r[4], c.r[17].w[0] + 2368u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330550u); st32((c.r[17].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_008B(c, 308u, depth + 1u); else { c.pc = 0x0032F480u; return; } if (c.pc != 0x00330550u) [[unlikely]] return; }
L_00330550:
    set32(c.r[2], c.r[17].w[0] + 288u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 220u);  if (t) { goto L_0033064C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[17].w[0] + 1440u);
    set32(c.r[2], c.r[2].w[0] + 23664u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330574u); st32((c.r[17].w[0] + 288u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008A(c, 126u, depth + 1u); else { c.pc = 0x00329390u; return; } if (c.pc != 0x00330574u) [[unlikely]] return; }
L_00330574:
    set32(c.r[4], c.r[17].w[0] + 1184u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);  if (t) { goto L_003305A0; } }
    set32(c.r[2], c.r[2].w[0] + 21488u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0] + 1360u), c.r[2].w[0]);  if (t) { goto L_003305A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 17408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003305A0u); st32((c.r[17].w[0] + 1360u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 264u, depth + 1u); else { c.pc = 0x0014ADA0u; return; } if (c.pc != 0x003305A0u) [[unlikely]] return; }
L_003305A0:
    set32(c.r[4], c.r[17].w[0] + 1156u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003305ACu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 215u, depth + 1u); else { c.pc = 0x0032A270u; return; } if (c.pc != 0x003305ACu) [[unlikely]] return; }
L_003305AC:
    set32(c.r[4], c.r[17].w[0] + 1128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003305B8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 215u, depth + 1u); else { c.pc = 0x0032A270u; return; } if (c.pc != 0x003305B8u) [[unlikely]] return; }
L_003305B8:
    set32(c.r[4], c.r[17].w[0] + 1100u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003305C4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 215u, depth + 1u); else { c.pc = 0x0032A270u; return; } if (c.pc != 0x003305C4u) [[unlikely]] return; }
L_003305C4:
    set32(c.r[4], c.r[17].w[0] + 1072u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003305D0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 215u, depth + 1u); else { c.pc = 0x0032A270u; return; } if (c.pc != 0x003305D0u) [[unlikely]] return; }
L_003305D0:
    set32(c.r[4], c.r[17].w[0] + 1044u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003305DCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 215u, depth + 1u); else { c.pc = 0x0032A270u; return; } if (c.pc != 0x003305DCu) [[unlikely]] return; }
L_003305DC:
    set32(c.r[4], c.r[17].w[0] + 1016u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003305E8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 215u, depth + 1u); else { c.pc = 0x0032A270u; return; } if (c.pc != 0x003305E8u) [[unlikely]] return; }
L_003305E8:
    set32(c.r[4], c.r[17].w[0] + 988u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003305F4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 215u, depth + 1u); else { c.pc = 0x0032A270u; return; } if (c.pc != 0x003305F4u) [[unlikely]] return; }
L_003305F4:
    set32(c.r[4], c.r[17].w[0] + 960u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330600u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 215u, depth + 1u); else { c.pc = 0x0032A270u; return; } if (c.pc != 0x00330600u) [[unlikely]] return; }
L_00330600:
    set32(c.r[4], c.r[17].w[0] + 768u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033060Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 261u, depth + 1u); else { c.pc = 0x0032AF10u; return; } if (c.pc != 0x0033060Cu) [[unlikely]] return; }
L_0033060C:
    set32(c.r[4], c.r[17].w[0] + 576u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330618u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 261u, depth + 1u); else { c.pc = 0x0032AF10u; return; } if (c.pc != 0x00330618u) [[unlikely]] return; }
L_00330618:
    set32(c.r[4], c.r[17].w[0] + 528u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330624u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 53u, depth + 1u); else { c.pc = 0x003287A0u; return; } if (c.pc != 0x00330624u) [[unlikely]] return; }
L_00330624:
    set32(c.r[4], c.r[17].w[0] + 416u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330630u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0023(c, 199u, depth + 1u); else { c.pc = 0x0018DF40u; return; } if (c.pc != 0x00330630u) [[unlikely]] return; }
L_00330630:
    set32(c.r[4], c.r[17].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033063Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0023(c, 199u, depth + 1u); else { c.pc = 0x0018DF40u; return; } if (c.pc != 0x0033063Cu) [[unlikely]] return; }
L_0033063C:
    set32(c.r[4], c.r[17].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330648u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x00330648u) [[unlikely]] return; }
L_00330648:
    set32(c.r[4], c.r[17].w[0] + 220u);
    c.budget -= 1;
L_0033064C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330654u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 27u, depth + 1u); else { c.pc = 0x003283B0u; return; } if (c.pc != 0x00330654u) [[unlikely]] return; }
L_00330654:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330660u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 359u, depth + 1u); else { c.pc = 0x0031F410u; return; } if (c.pc != 0x00330660u) [[unlikely]] return; }
L_00330660:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0033067C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330678u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00330678u) [[unlikely]] return; }
L_00330678:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0033067C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00330690:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 216u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003306B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003306B4u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x003306B4u) [[unlikely]] return; }
L_003306B4:
    st32((c.r[16].w[0] + 216u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003306DC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003306DC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003306DCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003306DCu) [[unlikely]] return; }
L_003306DC:
    st32((c.r[16].w[0] + 24u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 208u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 212u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003306F4u); set32(c.r[4], c.r[2].w[0] << 3);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x003306F4u) [[unlikely]] return; }
L_003306F4:
    st32((c.r[16].w[0] + 216u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 208u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 212u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 216u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330710u); mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]); c.r[5].d[0] = c.lo.d[0];  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x00330710u) [[unlikely]] return; }
L_00330710:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00330720u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00330720u) [[unlikely]] return; }
L_00330720:
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[3].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00330730; } }
    set32(c.r[3], c.r[16].w[0] + 20u);
    c.budget -= 1;
L_00330730:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 208u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 212u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 216u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[6].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[6].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00330768u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00330768u) [[unlikely]] return; }
L_00330768:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    st32((c.r[3].w[0] + 36u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00330780:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033079Cu); st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0022(c, 256u, depth + 1u); else { c.pc = 0x00189B70u; return; } if (c.pc != 0x0033079Cu) [[unlikely]] return; }
L_0033079C:
    set32(c.r[2], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 60u);  if (t) { goto L_00330878; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003307B0u);  if (depth < kMaxDepth) unit_0022(c, 124u, depth + 1u); else { c.pc = 0x00188A50u; return; } if (c.pc != 0x003307B0u) [[unlikely]] return; }
L_003307B0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[4], 0u + 60u);  if (t) { goto L_00330818; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003307C0u); set32(c.r[4], 0u + 60u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003307C0u) [[unlikely]] return; }
L_003307C0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003308BC; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[16].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003307D8; } }
    set32(c.r[16], c.r[18].w[0] + 20u);
    c.budget -= 1;
L_003307D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003307E0u);  if (depth < kMaxDepth) unit_0022(c, 124u, depth + 1u); else { c.pc = 0x00188A50u; return; } if (c.pc != 0x003307E0u) [[unlikely]] return; }
L_003307E0:
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[5].d[0]);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[18].w[0] + 216u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[9], ld32((c.r[18].w[0] + 208u)));
    c.r[10].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330808u); c.r[11].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 419u, depth + 1u); else { c.pc = 0x0012F590u; return; } if (c.pc != 0x00330808u) [[unlikely]] return; }
L_00330808:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 33u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003308C0; } }
    set32(c.r[4], 0u + 60u);
    c.budget -= 1;
L_00330818:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330820u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00330820u) [[unlikely]] return; }
L_00330820:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003308BC; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[16].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00330838; } }
    set32(c.r[16], c.r[18].w[0] + 20u);
    c.budget -= 1;
L_00330838:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330840u);  if (depth < kMaxDepth) unit_0022(c, 118u, depth + 1u); else { c.pc = 0x001889B0u; return; } if (c.pc != 0x00330840u) [[unlikely]] return; }
L_00330840:
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[5].d[0]);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[18].w[0] + 216u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[9], ld32((c.r[18].w[0] + 208u)));
    c.r[10].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330868u); c.r[11].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 419u, depth + 1u); else { c.pc = 0x0012F590u; return; } if (c.pc != 0x00330868u) [[unlikely]] return; }
L_00330868:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003308BC; } }
    set32(c.r[4], 0u + 60u);
    c.budget -= 1;
L_00330878:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330880u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00330880u) [[unlikely]] return; }
L_00330880:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003308BC; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00330894; } }
    set32(c.r[7], c.r[7].w[0] + 20u);
    c.budget -= 1;
L_00330894:
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[5].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], ld32((c.r[18].w[0] + 216u)));
    set32(c.r[9], ld32((c.r[18].w[0] + 208u)));
    set32(c.r[10], ld32((c.r[18].w[0] + 212u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003308B8u); c.r[11].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 419u, depth + 1u); else { c.pc = 0x0012F590u; return; } if (c.pc != 0x003308B8u) [[unlikely]] return; }
L_003308B8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003308BC:
    st8((c.r[17].w[0] + 33u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_003308C0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003308E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 9;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003309D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033090Cu); set32(c.r[4], 0u + 438u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x0033090Cu) [[unlikely]] return; }
L_0033090C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330914u); set32(c.r[4], c.r[18].w[0] + 2368u);  if (depth < kMaxDepth) unit_008B(c, 312u, depth + 1u); else { c.pc = 0x0032F5D0u; return; } if (c.pc != 0x00330914u) [[unlikely]] return; }
L_00330914:
    set32(c.r[3], ld32((c.r[18].w[0] + 2376u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00330934; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003309B4; } }
L_00330934:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033093Cu);  if (depth < kMaxDepth) unit_0022(c, 128u, depth + 1u); else { c.pc = 0x00188AE0u; return; } if (c.pc != 0x0033093Cu) [[unlikely]] return; }
L_0033093C:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00330970; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0;  if (t) { goto L_003309B4; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 1536u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00330968u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00330968u) [[unlikely]] return; }
L_00330968:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 52u)));  if (t) { goto L_003309B8; } }
L_00330970:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0; c.r[1].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_00330994; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 1536u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00330990u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00330990u) [[unlikely]] return; }
L_00330990:
    c.r[1].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 1;
L_00330994:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003309B4; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 1536u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003309B4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003309B4u) [[unlikely]] return; }
L_003309B4:
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 1;
L_003309B8:
    set32(c.r[4], c.r[18].w[0] + 220u);
    set32(c.r[5], c.r[29].w[0] + 76u);
    set32(c.r[6], c.r[29].w[0] + 72u);
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003309D4u); st32((c.r[29].w[0] + 76u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008A(c, 33u, depth + 1u); else { c.pc = 0x00328470u; return; } if (c.pc != 0x003309D4u) [[unlikely]] return; }
L_003309D4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003309E0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 169u, depth + 1u); else { c.pc = 0x0018DA60u; return; } if (c.pc != 0x003309E0u) [[unlikely]] return; }
L_003309E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00330A00:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330A28u); c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 256u, depth + 1u); else { c.pc = 0x00189B70u; return; } if (c.pc != 0x00330A28u) [[unlikely]] return; }
L_00330A28:
    set32(c.r[2], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00330AAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330A3Cu); set32(c.r[16], ld32((c.r[18].w[0])));  if (depth < kMaxDepth) unit_0022(c, 124u, depth + 1u); else { c.pc = 0x00188A50u; return; } if (c.pc != 0x00330A3Cu) [[unlikely]] return; }
L_00330A3C:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00330A88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330A50u);  if (depth < kMaxDepth) unit_0022(c, 124u, depth + 1u); else { c.pc = 0x00188A50u; return; } if (c.pc != 0x00330A50u) [[unlikely]] return; }
L_00330A50:
    set32(c.r[6], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[5], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330A60u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 421u, depth + 1u); else { c.pc = 0x0012F610u; return; } if (c.pc != 0x00330A60u) [[unlikely]] return; }
L_00330A60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330A68u);  if (depth < kMaxDepth) unit_0022(c, 124u, depth + 1u); else { c.pc = 0x00188A50u; return; } if (c.pc != 0x00330A68u) [[unlikely]] return; }
L_00330A68:
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[4], c.r[19].w[0] + 220u);
    set32(c.r[6], c.r[18].w[0] + 4u);
    set32(c.r[5], c.r[29].w[0] + 92u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330A80u); st32((c.r[29].w[0] + 92u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008A(c, 33u, depth + 1u); else { c.pc = 0x00328470u; return; } if (c.pc != 0x00330A80u) [[unlikely]] return; }
L_00330A80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00330ACC; } }
L_00330A88:
    set32(c.r[6], ld32((c.r[18].w[0] + 4u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330A98u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 421u, depth + 1u); else { c.pc = 0x0012F610u; return; } if (c.pc != 0x00330A98u) [[unlikely]] return; }
L_00330A98:
    set32(c.r[4], c.r[19].w[0] + 220u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330AA4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 37u, depth + 1u); else { c.pc = 0x003284F0u; return; } if (c.pc != 0x00330AA4u) [[unlikely]] return; }
L_00330AA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00330AC8; } }
L_00330AAC:
    set32(c.r[5], ld32((c.r[18].w[0])));
    set32(c.r[6], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330ABCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 421u, depth + 1u); else { c.pc = 0x0012F610u; return; } if (c.pc != 0x00330ABCu) [[unlikely]] return; }
L_00330ABC:
    set32(c.r[4], c.r[19].w[0] + 220u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330AC8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 37u, depth + 1u); else { c.pc = 0x003284F0u; return; } if (c.pc != 0x00330AC8u) [[unlikely]] return; }
L_00330AC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00330ACC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00330AF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330B0Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 256u, depth + 1u); else { c.pc = 0x00189B70u; return; } if (c.pc != 0x00330B0Cu) [[unlikely]] return; }
L_00330B0C:
    set32(c.r[4], ld32((c.r[17].w[0] + 176u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330B1Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 486u, depth + 1u); else { c.pc = 0x00187E10u; return; } if (c.pc != 0x00330B1Cu) [[unlikely]] return; }
L_00330B1C:
    set32(c.r[3], ld32((c.r[17].w[0] + 176u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[3].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330B3Cu); set32(c.r[7], c.r[17].w[0] + 236u);  if (depth < kMaxDepth) unit_0022(c, 198u, depth + 1u); else { c.pc = 0x001892F0u; return; } if (c.pc != 0x00330B3Cu) [[unlikely]] return; }
L_00330B3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00330B50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330B6Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0022(c, 256u, depth + 1u); else { c.pc = 0x00189B70u; return; } if (c.pc != 0x00330B6Cu) [[unlikely]] return; }
L_00330B6C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 40u)));
    set32(c.r[16], ld32((c.r[1].w[0] + 26160u)));
    set32(c.r[3], 0u + 4u);
    set32(c.r[4], ld32((c.r[18].w[0] + 176u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; st8((c.r[4].w[0] + 72u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00330C10; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 8u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330BA0u); set32(c.r[7], c.r[18].w[0] + 236u);  if (depth < kMaxDepth) unit_0022(c, 198u, depth + 1u); else { c.pc = 0x001892F0u; return; } if (c.pc != 0x00330BA0u) [[unlikely]] return; }
L_00330BA0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330BACu); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0022(c, 248u, depth + 1u); else { c.pc = 0x001899A0u; return; } if (c.pc != 0x00330BACu) [[unlikely]] return; }
L_00330BAC:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00330D0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330BC0u);  if (depth < kMaxDepth) unit_0022(c, 245u, depth + 1u); else { c.pc = 0x00189940u; return; } if (c.pc != 0x00330BC0u) [[unlikely]] return; }
L_00330BC0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00330BE0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], 0u + 6u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26112u)));
    st32((c.r[2].w[0] + 68u), c.r[3].w[0]);
    st8((c.r[18].w[0] + 192u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_00330BE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330BE8u);  if (depth < kMaxDepth) unit_0087(c, 375u, depth + 1u); else { c.pc = 0x0031F5E0u; return; } if (c.pc != 0x00330BE8u) [[unlikely]] return; }
L_00330BE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330BF0u);  if (depth < kMaxDepth) unit_0087(c, 346u, depth + 1u); else { c.pc = 0x0031F2D0u; return; } if (c.pc != 0x00330BF0u) [[unlikely]] return; }
L_00330BF0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26160u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330C08u); st8((c.r[1].w[0] - 1624u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0023(c, 140u, depth + 1u); else { c.pc = 0x0018D6A0u; return; } if (c.pc != 0x00330C08u) [[unlikely]] return; }
L_00330C08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00330D10; } }
L_00330C10:
    set32(c.r[3], c.r[5].w[0] - 1u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00330C2C; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00330CB8; } }
L_00330C2C:
    set32(c.r[5], 0u + 8u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330C3Cu); set32(c.r[7], c.r[18].w[0] + 236u);  if (depth < kMaxDepth) unit_0022(c, 198u, depth + 1u); else { c.pc = 0x001892F0u; return; } if (c.pc != 0x00330C3Cu) [[unlikely]] return; }
L_00330C3C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330C48u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0022(c, 248u, depth + 1u); else { c.pc = 0x001899A0u; return; } if (c.pc != 0x00330C48u) [[unlikely]] return; }
L_00330C48:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00330C64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330C5Cu);  if (depth < kMaxDepth) unit_000C(c, 24u, depth + 1u); else { c.pc = 0x00130260u; return; } if (c.pc != 0x00330C5Cu) [[unlikely]] return; }
L_00330C5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00330D0C; } }
L_00330C64:
    set32(c.r[6], ld32((c.r[17].w[0] + 80u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 9u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330C78u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 198u, depth + 1u); else { c.pc = 0x001892F0u; return; } if (c.pc != 0x00330C78u) [[unlikely]] return; }
L_00330C78:
    set32(c.r[5], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330C84u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 139u, depth + 1u); else { c.pc = 0x0018D670u; return; } if (c.pc != 0x00330C84u) [[unlikely]] return; }
L_00330C84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330C8Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 375u, depth + 1u); else { c.pc = 0x0031F5E0u; return; } if (c.pc != 0x00330C8Cu) [[unlikely]] return; }
L_00330C8C:
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00330CA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330CA4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 242u, depth + 1u); else { c.pc = 0x001898B0u; return; } if (c.pc != 0x00330CA4u) [[unlikely]] return; }
L_00330CA4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00330CA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330CB0u);  if (depth < kMaxDepth) unit_0087(c, 375u, depth + 1u); else { c.pc = 0x0031F5E0u; return; } if (c.pc != 0x00330CB0u) [[unlikely]] return; }
L_00330CB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00330D0C; } }
L_00330CB8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00330D0C; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00330D0C; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 240u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00330CF8; } }
    set32(c.r[5], 0u + 7u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330CF8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 198u, depth + 1u); else { c.pc = 0x001892F0u; return; } if (c.pc != 0x00330CF8u) [[unlikely]] return; }
L_00330CF8:
    set32(c.r[2], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330D0Cu); st8((c.r[2].w[0] + 72u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0087(c, 375u, depth + 1u); else { c.pc = 0x0031F5E0u; return; } if (c.pc != 0x00330D0Cu) [[unlikely]] return; }
L_00330D0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00330D10:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00330D30:
    set32(c.r[2], ld32((c.r[4].w[0] + 176u)));
    c.budget -= 3;
    { st8((c.r[2].w[0] + 72u), static_cast<std::uint8_t>(0u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0031F6A0u | kUnwind; return; } [[clang::musttail]] return unit_0087(c, 380u, depth); }
L_00330D40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330D64u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0087(c, 356u, depth + 1u); else { c.pc = 0x0031F380u; return; } if (c.pc != 0x00330D64u) [[unlikely]] return; }
L_00330D64:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 23136u);
    set32(c.r[2], c.r[2].w[0] + 23224u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 208u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330D84u); st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008A(c, 20u, depth + 1u); else { c.pc = 0x00328270u; return; } if (c.pc != 0x00330D84u) [[unlikely]] return; }
L_00330D84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330D8Cu); set32(c.r[4], c.r[16].w[0] + 272u);  if (depth < kMaxDepth) unit_008B(c, 337u, depth + 1u); else { c.pc = 0x0032F800u; return; } if (c.pc != 0x00330D8Cu) [[unlikely]] return; }
L_00330D8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330D94u); set32(c.r[4], c.r[16].w[0] + 2352u);  if (depth < kMaxDepth) unit_008B(c, 306u, depth + 1u); else { c.pc = 0x0032F430u; return; } if (c.pc != 0x00330D94u) [[unlikely]] return; }
L_00330D94:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4D4F0000u);
    set32(c.r[3], 0u + 120u);
    c.r[4].d[0] = c.r[2].d[0] | 21583ull;
    st32((c.r[16].w[0] + 48u), c.r[4].w[0]);
    set32(c.r[2], 0u + 121u);
    st32((c.r[16].w[0] + 180u), 0u);
    st16((c.r[16].w[0] + 188u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330DB8u); st16((c.r[16].w[0] + 190u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0022(c, 256u, depth + 1u); else { c.pc = 0x00189B70u; return; } if (c.pc != 0x00330DB8u) [[unlikely]] return; }
L_00330DB8:
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    set32(c.r[4], c.r[16].w[0] + 1424u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330DCCu); st32((c.r[16].w[0] + 932u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008A(c, 143u, depth + 1u); else { c.pc = 0x00329610u; return; } if (c.pc != 0x00330DCCu) [[unlikely]] return; }
L_00330DCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330DD4u); set32(c.r[4], 0u + 14u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x00330DD4u) [[unlikely]] return; }
L_00330DD4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00330DF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00330F58; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 23136u);
    set32(c.r[2], c.r[2].w[0] + 23224u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 2352u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330E30u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 308u, depth + 1u); else { c.pc = 0x0032F480u; return; } if (c.pc != 0x00330E30u) [[unlikely]] return; }
L_00330E30:
    set32(c.r[2], c.r[17].w[0] + 272u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 208u);  if (t) { goto L_00330F2C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[17].w[0] + 1424u);
    set32(c.r[2], c.r[2].w[0] + 23664u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330E54u); st32((c.r[17].w[0] + 272u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008A(c, 126u, depth + 1u); else { c.pc = 0x00329390u; return; } if (c.pc != 0x00330E54u) [[unlikely]] return; }
L_00330E54:
    set32(c.r[4], c.r[17].w[0] + 1168u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);  if (t) { goto L_00330E80; } }
    set32(c.r[2], c.r[2].w[0] + 21488u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0] + 1344u), c.r[2].w[0]);  if (t) { goto L_00330E80; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 17408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330E80u); st32((c.r[17].w[0] + 1344u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 264u, depth + 1u); else { c.pc = 0x0014ADA0u; return; } if (c.pc != 0x00330E80u) [[unlikely]] return; }
L_00330E80:
    set32(c.r[4], c.r[17].w[0] + 1140u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330E8Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 215u, depth + 1u); else { c.pc = 0x0032A270u; return; } if (c.pc != 0x00330E8Cu) [[unlikely]] return; }
L_00330E8C:
    set32(c.r[4], c.r[17].w[0] + 1112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330E98u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 215u, depth + 1u); else { c.pc = 0x0032A270u; return; } if (c.pc != 0x00330E98u) [[unlikely]] return; }
L_00330E98:
    set32(c.r[4], c.r[17].w[0] + 1084u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330EA4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 215u, depth + 1u); else { c.pc = 0x0032A270u; return; } if (c.pc != 0x00330EA4u) [[unlikely]] return; }
L_00330EA4:
    set32(c.r[4], c.r[17].w[0] + 1056u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330EB0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 215u, depth + 1u); else { c.pc = 0x0032A270u; return; } if (c.pc != 0x00330EB0u) [[unlikely]] return; }
L_00330EB0:
    set32(c.r[4], c.r[17].w[0] + 1028u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330EBCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 215u, depth + 1u); else { c.pc = 0x0032A270u; return; } if (c.pc != 0x00330EBCu) [[unlikely]] return; }
L_00330EBC:
    set32(c.r[4], c.r[17].w[0] + 1000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330EC8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 215u, depth + 1u); else { c.pc = 0x0032A270u; return; } if (c.pc != 0x00330EC8u) [[unlikely]] return; }
L_00330EC8:
    set32(c.r[4], c.r[17].w[0] + 972u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330ED4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 215u, depth + 1u); else { c.pc = 0x0032A270u; return; } if (c.pc != 0x00330ED4u) [[unlikely]] return; }
L_00330ED4:
    set32(c.r[4], c.r[17].w[0] + 944u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330EE0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 215u, depth + 1u); else { c.pc = 0x0032A270u; return; } if (c.pc != 0x00330EE0u) [[unlikely]] return; }
L_00330EE0:
    set32(c.r[4], c.r[17].w[0] + 752u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330EECu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 261u, depth + 1u); else { c.pc = 0x0032AF10u; return; } if (c.pc != 0x00330EECu) [[unlikely]] return; }
L_00330EEC:
    set32(c.r[4], c.r[17].w[0] + 560u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330EF8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 261u, depth + 1u); else { c.pc = 0x0032AF10u; return; } if (c.pc != 0x00330EF8u) [[unlikely]] return; }
L_00330EF8:
    set32(c.r[4], c.r[17].w[0] + 512u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330F04u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 53u, depth + 1u); else { c.pc = 0x003287A0u; return; } if (c.pc != 0x00330F04u) [[unlikely]] return; }
L_00330F04:
    set32(c.r[4], c.r[17].w[0] + 400u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330F10u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0023(c, 199u, depth + 1u); else { c.pc = 0x0018DF40u; return; } if (c.pc != 0x00330F10u) [[unlikely]] return; }
L_00330F10:
    set32(c.r[4], c.r[17].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330F1Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0023(c, 199u, depth + 1u); else { c.pc = 0x0018DF40u; return; } if (c.pc != 0x00330F1Cu) [[unlikely]] return; }
L_00330F1C:
    set32(c.r[4], c.r[17].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330F28u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x00330F28u) [[unlikely]] return; }
L_00330F28:
    set32(c.r[4], c.r[17].w[0] + 208u);
    c.budget -= 1;
L_00330F2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330F34u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 27u, depth + 1u); else { c.pc = 0x003283B0u; return; } if (c.pc != 0x00330F34u) [[unlikely]] return; }
L_00330F34:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330F40u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 359u, depth + 1u); else { c.pc = 0x0031F410u; return; } if (c.pc != 0x00330F40u) [[unlikely]] return; }
L_00330F40:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00330F5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330F58u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00330F58u) [[unlikely]] return; }
L_00330F58:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00330F5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00330F70:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00330FA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330FA0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00330FA0u) [[unlikely]] return; }
L_00330FA0:
    st32((c.r[18].w[0] + 28u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00330FC8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00330FC8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00330FC8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00330FC8u) [[unlikely]] return; }
L_00330FC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330FD0u); st32((c.r[18].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_0022(c, 256u, depth + 1u); else { c.pc = 0x00189B70u; return; } if (c.pc != 0x00330FD0u) [[unlikely]] return; }
L_00330FD0:
    set32(c.r[3], ld32((c.r[2].w[0] + 40u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00330FF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330FECu);  if (depth < kMaxDepth) unit_0022(c, 118u, depth + 1u); else { c.pc = 0x001889B0u; return; } if (c.pc != 0x00330FECu) [[unlikely]] return; }
L_00330FEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00331014; } }
L_00330FF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330FFCu);  if (depth < kMaxDepth) unit_0022(c, 124u, depth + 1u); else { c.pc = 0x00188A50u; return; } if (c.pc != 0x00330FFCu) [[unlikely]] return; }
L_00330FFC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[19], c.r[16].w[0] << 3);  if (t) { goto L_00331018; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331010u);  if (depth < kMaxDepth) unit_0022(c, 118u, depth + 1u); else { c.pc = 0x001889B0u; return; } if (c.pc != 0x00331010u) [[unlikely]] return; }
L_00331010:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00331014:
    set32(c.r[19], c.r[16].w[0] << 3);
    c.budget -= 1;
L_00331018:
    st32((c.r[18].w[0] + 32u), c.r[16].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331024u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x00331024u) [[unlikely]] return; }
L_00331024:
    st32((c.r[18].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331034u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x00331034u) [[unlikely]] return; }
L_00331034:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00331044u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00331044u) [[unlikely]] return; }
L_00331044:
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; c.r[3].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00331054; } }
    set32(c.r[3], c.r[18].w[0] + 20u);
    c.budget -= 1;
L_00331054:
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 20u), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00331080u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00331080u) [[unlikely]] return; }
L_00331080:
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[4], c.r[18].w[0] + 208u);
    set32(c.r[5], c.r[17].w[0] + 80u);
    set32(c.r[6], c.r[17].w[0] + 84u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331098u); st32((c.r[2].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_008A(c, 33u, depth + 1u); else { c.pc = 0x00328470u; return; } if (c.pc != 0x00331098u) [[unlikely]] return; }
L_00331098:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003310C0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 10;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003311D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003310F0u); set32(c.r[4], 0u + 438u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x003310F0u) [[unlikely]] return; }
L_003310F0:
    set32(c.r[17], ld32((c.r[19].w[0] + 24u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331100u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_008C(c, 191u, depth + 1u); else { c.pc = 0x003312A0u; return; } if (c.pc != 0x00331100u) [[unlikely]] return; }
L_00331100:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331108u); set32(c.r[4], c.r[19].w[0] + 2352u);  if (depth < kMaxDepth) unit_008B(c, 312u, depth + 1u); else { c.pc = 0x0032F5D0u; return; } if (c.pc != 0x00331108u) [[unlikely]] return; }
L_00331108:
    set32(c.r[3], ld32((c.r[19].w[0] + 2360u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00331128; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00331270; } }
L_00331128:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331130u);  if (depth < kMaxDepth) unit_0022(c, 128u, depth + 1u); else { c.pc = 0x00188AE0u; return; } if (c.pc != 0x00331130u) [[unlikely]] return; }
L_00331130:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00331170; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0;  if (t) { goto L_0033126C; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 1536u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033115Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033115Cu) [[unlikely]] return; }
L_0033115C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331168u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_008C(c, 191u, depth + 1u); else { c.pc = 0x003312A0u; return; } if (c.pc != 0x00331168u) [[unlikely]] return; }
L_00331168:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033126C; } }
L_00331170:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0; c.r[1].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_003311A0; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 1536u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00331190u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00331190u) [[unlikely]] return; }
L_00331190:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033119Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008C(c, 191u, depth + 1u); else { c.pc = 0x003312A0u; return; } if (c.pc != 0x0033119Cu) [[unlikely]] return; }
L_0033119C:
    c.r[1].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 1;
L_003311A0:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0033126C; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 1536u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003311C0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003311C0u) [[unlikely]] return; }
L_003311C0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003311CCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_008C(c, 191u, depth + 1u); else { c.pc = 0x003312A0u; return; } if (c.pc != 0x003311CCu) [[unlikely]] return; }
L_003311CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033126C; } }
L_003311D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003311DCu);  if (depth < kMaxDepth) unit_0022(c, 256u, depth + 1u); else { c.pc = 0x00189B70u; return; } if (c.pc != 0x003311DCu) [[unlikely]] return; }
L_003311DC:
    set32(c.r[3], ld32((c.r[2].w[0] + 40u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003311F8; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0033126C; } }
L_003311F8:
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] - 1u);  if (t) { goto L_0033126C; } }
    set32(c.r[4], c.r[19].w[0] + 208u);
    st32((c.r[19].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 92u);
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[6], c.r[16].w[0] + 84u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331230u); st32((c.r[29].w[0] + 92u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008A(c, 33u, depth + 1u); else { c.pc = 0x00328470u; return; } if (c.pc != 0x00331230u) [[unlikely]] return; }
L_00331230:
    set32(c.r[4], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00331248u); set32(c.r[5], c.r[2].w[0] - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00331248u) [[unlikely]] return; }
L_00331248:
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[5], c.r[3].w[0] - 1u);
    c.r[1].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0033126C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033126Cu);  if (depth < kMaxDepth) unit_0022(c, 254u, depth + 1u); else { c.pc = 0x00189AE0u; return; } if (c.pc != 0x0033126Cu) [[unlikely]] return; }
L_0033126C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00331270:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331278u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 169u, depth + 1u); else { c.pc = 0x0018DA60u; return; } if (c.pc != 0x00331278u) [[unlikely]] return; }
L_00331278:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331280u);  if (depth < kMaxDepth) unit_0087(c, 346u, depth + 1u); else { c.pc = 0x0031F2D0u; return; } if (c.pc != 0x00331280u) [[unlikely]] return; }
L_00331280:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003312A0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003312D0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0022(c, 256u, depth + 1u); else { c.pc = 0x00189B70u; return; } if (c.pc != 0x003312D0u) [[unlikely]] return; }
L_003312D0:
    set32(c.r[3], ld32((c.r[20].w[0] + 24u)));
    st32((c.r[29].w[0] + 140u), c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0] + 40u)));
    set32(c.r[18], ld32((c.r[2].w[0] + 96u)));
    c.r[1].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003312F8; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_00331384; } }
L_003312F8:
    set32(c.r[3], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[16], ld32((c.r[18].w[0] + 12u)));  if (t) { goto L_00331324; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0; set32(c.r[4], c.r[21].w[0] + 208u);  if (t) { goto L_00331374; } }
    set32(c.r[5], c.r[16].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033131Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 254u, depth + 1u); else { c.pc = 0x00189AE0u; return; } if (c.pc != 0x0033131Cu) [[unlikely]] return; }
L_0033131C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00331370; } }
L_00331324:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00331370; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331344u); set32(c.r[22], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0022(c, 118u, depth + 1u); else { c.pc = 0x001889B0u; return; } if (c.pc != 0x00331344u) [[unlikely]] return; }
L_00331344:
    c.r[1].d[0] = c.r[22].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00331370; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033135Cu); set32(c.r[22], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0022(c, 124u, depth + 1u); else { c.pc = 0x00188A50u; return; } if (c.pc != 0x0033135Cu) [[unlikely]] return; }
L_0033135C:
    c.r[1].d[0] = c.r[22].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], c.r[16].w[0] + 1u);  if (t) { goto L_00331370; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331370u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 254u, depth + 1u); else { c.pc = 0x00189AE0u; return; } if (c.pc != 0x00331370u) [[unlikely]] return; }
L_00331370:
    set32(c.r[4], c.r[21].w[0] + 208u);
    c.budget -= 1;
L_00331374:
    set32(c.r[5], c.r[29].w[0] + 140u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331380u); set32(c.r[6], c.r[19].w[0] + 84u);  if (depth < kMaxDepth) unit_008A(c, 33u, depth + 1u); else { c.pc = 0x00328470u; return; } if (c.pc != 0x00331380u) [[unlikely]] return; }
L_00331380:
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_00331384:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[3].d[0];  if (t) { goto L_0033146C; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[16], ld32((c.r[18].w[0] + 20u)));  if (t) { goto L_003313F0; } }
    set32(c.r[2], c.r[16].w[0] + c.r[5].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003313B8; } }
    set32(c.r[5], c.r[16].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003313B8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 255u, depth + 1u); else { c.pc = 0x00189B40u; return; } if (c.pc != 0x003313B8u) [[unlikely]] return; }
L_003313B8:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 140u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[21].w[0] + 208u);  if (t) { goto L_00331460; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 140u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[5], ld32((c.r[29].w[0] + 140u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003313E8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003313E8u) [[unlikely]] return; }
L_003313E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033145C; } }
L_003313F0:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0033145C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033140Cu); set32(c.r[17], c.r[16].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 118u, depth + 1u); else { c.pc = 0x001889B0u; return; } if (c.pc != 0x0033140Cu) [[unlikely]] return; }
L_0033140C:
    c.r[1].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], c.r[16].w[0] + 1u);  if (t) { goto L_00331420; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331420u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 255u, depth + 1u); else { c.pc = 0x00189B40u; return; } if (c.pc != 0x00331420u) [[unlikely]] return; }
L_00331420:
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 140u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[5].w[0] - 1u);  if (t) { goto L_0033145C; } }
    st32((c.r[29].w[0] + 140u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[5], ld32((c.r[29].w[0] + 140u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033145Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033145Cu) [[unlikely]] return; }
L_0033145C:
    set32(c.r[4], c.r[21].w[0] + 208u);
    c.budget -= 1;
L_00331460:
    set32(c.r[6], c.r[19].w[0] + 84u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033146Cu); set32(c.r[5], c.r[29].w[0] + 140u);  if (depth < kMaxDepth) unit_008A(c, 33u, depth + 1u); else { c.pc = 0x00328470u; return; } if (c.pc != 0x0033146Cu) [[unlikely]] return; }
L_0033146C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003314A0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003314C0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0022(c, 256u, depth + 1u); else { c.pc = 0x00189B70u; return; } if (c.pc != 0x003314C0u) [[unlikely]] return; }
L_003314C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[29].w[0] + 88u), 0u);
    set32(c.r[16], ld32((c.r[1].w[0] + 26120u)));
    set32(c.r[18], c.r[29].w[0] + 92u);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[18].w[0]), 0u);
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003314E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003314E8u) [[unlikely]] return; }
L_003314E8:
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 84u)));
    set32(c.r[5], 0u + 8u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[29].w[0] + 88u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331508u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 198u, depth + 1u); else { c.pc = 0x001892F0u; return; } if (c.pc != 0x00331508u) [[unlikely]] return; }
L_00331508:
    set32(c.r[3], ld32((c.r[19].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_0033151C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00331548; } }
L_0033151C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0033154C; } }
    st8((c.r[17].w[0] + 192u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26112u)));
    set32(c.r[3], 0u + 6u);
    st32((c.r[2].w[0] + 68u), c.r[3].w[0]);
    c.budget -= 5;
L_00331548:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0033154C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st8((c.r[1].w[0] - 1624u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 176u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331564u); st8((c.r[2].w[0] + 72u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0087(c, 375u, depth + 1u); else { c.pc = 0x0031F5E0u; return; } if (c.pc != 0x00331564u) [[unlikely]] return; }
L_00331564:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331570u); set32(c.r[4], ld32((c.r[1].w[0] + 26160u)));  if (depth < kMaxDepth) unit_0023(c, 140u, depth + 1u); else { c.pc = 0x0018D6A0u; return; } if (c.pc != 0x00331570u) [[unlikely]] return; }
L_00331570:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00331590:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003315ACu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0022(c, 256u, depth + 1u); else { c.pc = 0x00189B70u; return; } if (c.pc != 0x003315ACu) [[unlikely]] return; }
L_003315AC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_003315CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003315C4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 245u, depth + 1u); else { c.pc = 0x00189940u; return; } if (c.pc != 0x003315C4u) [[unlikely]] return; }
L_003315C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0033161C; } }
L_003315CC:
    set32(c.r[16], ld32((c.r[1].w[0] + 26160u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    set32(c.r[5], ld32((c.r[1].w[0] + 7252u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003315E4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 254u, depth + 1u); else { c.pc = 0x00189AE0u; return; } if (c.pc != 0x003315E4u) [[unlikely]] return; }
L_003315E4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    set32(c.r[5], ld32((c.r[1].w[0] + 7256u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003315F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 255u, depth + 1u); else { c.pc = 0x00189B40u; return; } if (c.pc != 0x003315F8u) [[unlikely]] return; }
L_003315F8:
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00331610; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331610u);  if (depth < kMaxDepth) unit_0022(c, 245u, depth + 1u); else { c.pc = 0x00189940u; return; } if (c.pc != 0x00331610u) [[unlikely]] return; }
L_00331610:
    set32(c.r[2], ld32((c.r[18].w[0] + 176u)));
    st8((c.r[2].w[0] + 72u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
L_0033161C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331624u);  if (depth < kMaxDepth) unit_0087(c, 380u, depth + 1u); else { c.pc = 0x0031F6A0u; return; } if (c.pc != 0x00331624u) [[unlikely]] return; }
L_00331624:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331630u); set32(c.r[4], ld32((c.r[1].w[0] + 26160u)));  if (depth < kMaxDepth) unit_0023(c, 140u, depth + 1u); else { c.pc = 0x0018D6A0u; return; } if (c.pc != 0x00331630u) [[unlikely]] return; }
L_00331630:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331638u);  if (depth < kMaxDepth) unit_0087(c, 346u, depth + 1u); else { c.pc = 0x0031F2D0u; return; } if (c.pc != 0x00331638u) [[unlikely]] return; }
L_00331638:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00331650:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033166Cu); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0033166Cu) [[unlikely]] return; }
L_0033166C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003316A8; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00331680; } }
    set32(c.r[7], c.r[7].w[0] + 20u);
    c.budget -= 1;
L_00331680:
    set32(c.r[8], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[9], ld32((c.r[17].w[0] + 32u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033169Cu); c.r[10].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 381u, depth + 1u); else { c.pc = 0x0012ED90u; return; } if (c.pc != 0x0033169Cu) [[unlikely]] return; }
L_0033169C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 21824u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_003316A8:
    st8((c.r[16].w[0] + 40u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 33u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003316D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[7], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003316ECu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 356u, depth + 1u); else { c.pc = 0x0031F380u; return; } if (c.pc != 0x003316ECu) [[unlikely]] return; }
L_003316EC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 22960u);
    set32(c.r[2], c.r[2].w[0] + 23048u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 208u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331710u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_0023(c, 195u, depth + 1u); else { c.pc = 0x0018DEA0u; return; } if (c.pc != 0x00331710u) [[unlikely]] return; }
L_00331710:
    set32(c.r[4], c.r[16].w[0] + 320u);
    set32(c.r[5], 0u + 5u);
    set32(c.r[6], 0u + 140u);
    set32(c.r[7], 0u + 88u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033172Cu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008A(c, 320u, depth + 1u); else { c.pc = 0x0032B8B0u; return; } if (c.pc != 0x0033172Cu) [[unlikely]] return; }
L_0033172C:
    set32(c.r[4], c.r[16].w[0] + 496u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331738u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_008B(c, 59u, depth + 1u); else { c.pc = 0x0032C7B0u; return; } if (c.pc != 0x00331738u) [[unlikely]] return; }
L_00331738:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] - 3744u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[16].w[0] + 1536u);
    st64((c.r[29].w[0]), c.r[2].d[0]);
    set32(c.r[5], c.r[5].w[0] - 3648u);
    set32(c.r[6], c.r[6].w[0] - 3640u);
    set32(c.r[7], c.r[7].w[0] - 3632u);
    set32(c.r[8], c.r[8].w[0] - 3624u);
    set32(c.r[9], c.r[9].w[0] - 3616u);
    set32(c.r[10], 0u + 11u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331780u); set32(c.r[11], c.r[11].w[0] - 3752u);  if (depth < kMaxDepth) unit_008A(c, 298u, depth + 1u); else { c.pc = 0x0032B400u; return; } if (c.pc != 0x00331780u) [[unlikely]] return; }
L_00331780:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4C4C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[4].d[0] = c.r[2].d[0] | 21583ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st32((c.r[16].w[0] + 48u), c.r[4].w[0]);
    set32(c.r[3], 0u + 116u);
    st32((c.r[16].w[0] + 180u), 0u);
    set32(c.r[2], 0u + 117u);
    st16((c.r[16].w[0] + 188u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[16].w[0] + 208u);
    set32(c.r[5], c.r[5].w[0] - 3608u);
    set32(c.r[6], c.r[6].w[0] - 3600u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003317B8u); st16((c.r[16].w[0] + 190u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008A(c, 12u, depth + 1u); else { c.pc = 0x00328180u; return; } if (c.pc != 0x003317B8u) [[unlikely]] return; }
L_003317B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003317C8u); st32((c.r[16].w[0] + 692u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008A(c, 31u, depth + 1u); else { c.pc = 0x00328420u; return; } if (c.pc != 0x003317C8u) [[unlikely]] return; }
L_003317C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003317D0u);  if (depth < kMaxDepth) unit_0022(c, 256u, depth + 1u); else { c.pc = 0x00189B70u; return; } if (c.pc != 0x003317D0u) [[unlikely]] return; }
L_003317D0:
    set32(c.r[2], ld32((c.r[2].w[0] + 84u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 632u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003317E4u); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_009C(c, 186u, depth + 1u); else { c.pc = 0x00370F00u; return; } if (c.pc != 0x003317E4u) [[unlikely]] return; }
L_003317E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003317ECu); set32(c.r[4], 0u + 14u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x003317ECu) [[unlikely]] return; }
L_003317EC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26112u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 240u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00331804; } }
    st8((c.r[2].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00331804:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00331820:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00331918; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 22960u);
    set32(c.r[2], c.r[2].w[0] + 23048u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] - 632u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331864u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009C(c, 186u, depth + 1u); else { c.pc = 0x00370F00u; return; } if (c.pc != 0x00331864u) [[unlikely]] return; }
L_00331864:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26112u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 240u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 1536u);  if (t) { goto L_00331880; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[3].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00331880:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);  if (t) { goto L_003318D0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 21728u);
    set32(c.r[2], c.r[2].w[0] + 21756u);
    st32((c.r[17].w[0] + 1560u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0] + 1564u), c.r[2].w[0]);  if (t) { goto L_003318D0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 19872u);
    set32(c.r[2], c.r[2].w[0] + 19900u);
    st32((c.r[17].w[0] + 1560u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 1564u);
    st32((c.r[17].w[0] + 1564u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003318C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x003318C4u) [[unlikely]] return; }
L_003318C4:
    set32(c.r[4], c.r[17].w[0] + 1536u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003318D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008A(c, 215u, depth + 1u); else { c.pc = 0x0032A270u; return; } if (c.pc != 0x003318D0u) [[unlikely]] return; }
L_003318D0:
    set32(c.r[4], c.r[17].w[0] + 496u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003318DCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 86u, depth + 1u); else { c.pc = 0x0032CB30u; return; } if (c.pc != 0x003318DCu) [[unlikely]] return; }
L_003318DC:
    set32(c.r[4], c.r[17].w[0] + 320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003318E8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 343u, depth + 1u); else { c.pc = 0x0032BBF0u; return; } if (c.pc != 0x003318E8u) [[unlikely]] return; }
L_003318E8:
    set32(c.r[4], c.r[17].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003318F4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0023(c, 199u, depth + 1u); else { c.pc = 0x0018DF40u; return; } if (c.pc != 0x003318F4u) [[unlikely]] return; }
L_003318F4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331900u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 359u, depth + 1u); else { c.pc = 0x0031F410u; return; } if (c.pc != 0x00331900u) [[unlikely]] return; }
L_00331900:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0033191C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331918u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00331918u) [[unlikely]] return; }
L_00331918:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0033191C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00331930:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331948u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0022(c, 256u, depth + 1u); else { c.pc = 0x00189B70u; return; } if (c.pc != 0x00331948u) [[unlikely]] return; }
L_00331948:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033195Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033195Cu) [[unlikely]] return; }
L_0033195C:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331970u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 198u, depth + 1u); else { c.pc = 0x001892F0u; return; } if (c.pc != 0x00331970u) [[unlikely]] return; }
L_00331970:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331978u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 212u, depth + 1u); else { c.pc = 0x00189520u; return; } if (c.pc != 0x00331978u) [[unlikely]] return; }
L_00331978:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033199C; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 80u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 9u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331994u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 198u, depth + 1u); else { c.pc = 0x001892F0u; return; } if (c.pc != 0x00331994u) [[unlikely]] return; }
L_00331994:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003319B4; } }
L_0033199C:
    st8((c.r[17].w[0] + 192u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26112u)));
    set32(c.r[3], 0u + 7u);
    st32((c.r[2].w[0] + 68u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
L_003319B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003319BCu);  if (depth < kMaxDepth) unit_0087(c, 375u, depth + 1u); else { c.pc = 0x0031F5E0u; return; } if (c.pc != 0x003319BCu) [[unlikely]] return; }
L_003319BC:
    st8((c.r[17].w[0] + 1572u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003319E0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0031F6A0u | kUnwind; return; } [[clang::musttail]] return unit_0087(c, 380u, depth); }
L_003319F0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00331A24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331A24u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00331A24u) [[unlikely]] return; }
L_00331A24:
    st32((c.r[20].w[0] + 28u), 0u);
    set32(c.r[4], ld32((c.r[20].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00331A4C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00331A4C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00331A4Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00331A4Cu) [[unlikely]] return; }
L_00331A4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331A54u); st32((c.r[20].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_0022(c, 256u, depth + 1u); else { c.pc = 0x00189B70u; return; } if (c.pc != 0x00331A54u) [[unlikely]] return; }
L_00331A54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331A5Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 289u, depth + 1u); else { c.pc = 0x00386C00u; return; } if (c.pc != 0x00331A5Cu) [[unlikely]] return; }
L_00331A5C:
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331A70u); set32(c.r[5], c.r[3].w[0] + 14u);  if (depth < kMaxDepth) unit_0024(c, 42u, depth + 1u); else { c.pc = 0x00190580u; return; } if (c.pc != 0x00331A70u) [[unlikely]] return; }
L_00331A70:
    c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 26u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], c.r[18].w[0] << 3);
    st32((c.r[20].w[0] + 32u), c.r[18].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331A88u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x00331A88u) [[unlikely]] return; }
L_00331A88:
    st32((c.r[20].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 28u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331A98u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x00331A98u) [[unlikely]] return; }
L_00331A98:
    set32(c.r[4], c.r[20].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331AA4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 205u, depth + 1u); else { c.pc = 0x0018DFE0u; return; } if (c.pc != 0x00331AA4u) [[unlikely]] return; }
L_00331AA4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 440u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331AB8u); set32(c.r[4], c.r[20].w[0] + 64u);  if (depth < kMaxDepth) unit_0023(c, 203u, depth + 1u); else { c.pc = 0x0018DFC0u; return; } if (c.pc != 0x00331AB8u) [[unlikely]] return; }
L_00331AB8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 444u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331ACCu); set32(c.r[4], c.r[20].w[0] + 64u);  if (depth < kMaxDepth) unit_0023(c, 204u, depth + 1u); else { c.pc = 0x0018DFD0u; return; } if (c.pc != 0x00331ACCu) [[unlikely]] return; }
L_00331ACC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[2], c.r[2].w[0] - 3584u);
    set32(c.r[3], c.r[29].w[0] + 96u);
    ld128((c.r[2].w[0]) & ~15u, c.r[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st128((c.r[5].w[0]) & ~15u, c.r[4]);
    set32(c.r[2], c.r[2].w[0] - 3568u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 24u)));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00331B70; } }
L_00331B00:
    mmi::div(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[16].w[0] + c.r[17].w[0]);  if (t) { goto L_00331B20; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42CC0000u);
    st32((c.r[29].w[0] + 116u), c.r[2].w[0]);
    c.budget -= 2;
L_00331B20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331B28u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 43u, depth + 1u); else { c.pc = 0x001905B0u; return; } if (c.pc != 0x00331B28u) [[unlikely]] return; }
L_00331B28:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[20].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331B38u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 210u, depth + 1u); else { c.pc = 0x0018E080u; return; } if (c.pc != 0x00331B38u) [[unlikely]] return; }
L_00331B38:
    set32(c.r[4], c.r[20].w[0] + 64u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331B48u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0023(c, 211u, depth + 1u); else { c.pc = 0x0018E0B0u; return; } if (c.pc != 0x00331B48u) [[unlikely]] return; }
L_00331B48:
    set32(c.r[4], c.r[20].w[0] + 64u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331B58u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0023(c, 212u, depth + 1u); else { c.pc = 0x0018E0F0u; return; } if (c.pc != 0x00331B58u) [[unlikely]] return; }
L_00331B58:
    c.f[1] = ld32((c.r[29].w[0] + 116u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B80000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 116u), c.f[0]);
    c.budget -= 6;
L_00331B70:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 10u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00331B00u | kUnwind; return; } goto L_00331B00; } }
    st32((c.r[20].w[0] + 168u), 0u);
    set32(c.r[2], 0u + 10u);
    st32((c.r[20].w[0] + 172u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331B90u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 21u, depth + 1u); else { c.pc = 0x001301E0u; return; } if (c.pc != 0x00331B90u) [[unlikely]] return; }
L_00331B90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00331BB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331BCCu); set32(c.r[4], 0u + 52u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00331BCCu) [[unlikely]] return; }
L_00331BCC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00331C04; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00331BE4; } }
    set32(c.r[7], c.r[7].w[0] + 20u);
    c.budget -= 1;
L_00331BE4:
    set32(c.r[8], ld32((c.r[17].w[0] + 28u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[9], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331C00u); set32(c.r[10], 0u + 10u);  if (depth < kMaxDepth) unit_000B(c, 395u, depth + 1u); else { c.pc = 0x0012F020u; return; } if (c.pc != 0x00331C00u) [[unlikely]] return; }
L_00331C00:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00331C04:
    set32(c.r[25], ld32((c.r[17].w[0] + 488u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00331C18u); set32(c.r[4], c.r[17].w[0] + 320u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00331C18u) [[unlikely]] return; }
L_00331C18:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00331C30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00331C64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331C54u);  if (depth < kMaxDepth) unit_0087(c, 346u, depth + 1u); else { c.pc = 0x0031F2D0u; return; } if (c.pc != 0x00331C54u) [[unlikely]] return; }
L_00331C54:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 632u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331C64u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009C(c, 186u, depth + 1u); else { c.pc = 0x00370F00u; return; } if (c.pc != 0x00331C64u) [[unlikely]] return; }
L_00331C64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331C6Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 28u, depth + 1u); else { c.pc = 0x001302A0u; return; } if (c.pc != 0x00331C6Cu) [[unlikely]] return; }
L_00331C6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00331C80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331C98u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 169u, depth + 1u); else { c.pc = 0x0018DA60u; return; } if (c.pc != 0x00331C98u) [[unlikely]] return; }
L_00331C98:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[4], c.r[16].w[0] + 320u);
    set32(c.r[25], ld32((c.r[16].w[0] + 488u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 40u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00331CB4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00331CB4u) [[unlikely]] return; }
L_00331CB4:
    set32(c.r[2], ld32((c.r[16].w[0] + 168u)));
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00331CE4; } }
    st32((c.r[16].w[0] + 168u), c.r[3].w[0]);
    set32(c.r[3], c.r[17].w[0] + 1u);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    st32((c.r[16].w[0] + 172u), c.r[2].w[0]);
    c.budget -= 6;
L_00331CE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331CECu);  if (depth < kMaxDepth) unit_008C(c, 284u, depth + 1u); else { c.pc = 0x00331D60u; return; } if (c.pc != 0x00331CECu) [[unlikely]] return; }
L_00331CEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331CF4u);  if (depth < kMaxDepth) unit_0022(c, 256u, depth + 1u); else { c.pc = 0x00189B70u; return; } if (c.pc != 0x00331CF4u) [[unlikely]] return; }
L_00331CF4:
    set32(c.r[5], ld32((c.r[16].w[0] + 36u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331D04u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 233u, depth + 1u); else { c.pc = 0x001897B0u; return; } if (c.pc != 0x00331D04u) [[unlikely]] return; }
L_00331D04:
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 6u);  if (t) { goto L_00331D24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331D1Cu); set32(c.r[4], 0u - 607u);  if (depth < kMaxDepth) unit_008B(c, 330u, depth + 1u); else { c.pc = 0x0032F790u; return; } if (c.pc != 0x00331D1Cu) [[unlikely]] return; }
L_00331D1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00331D48; } }
L_00331D24:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u - 2u);  if (t) { goto L_00331D3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331D34u); set32(c.r[4], 0u - 606u);  if (depth < kMaxDepth) unit_008B(c, 330u, depth + 1u); else { c.pc = 0x0032F790u; return; } if (c.pc != 0x00331D34u) [[unlikely]] return; }
L_00331D34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00331D44; } }
L_00331D3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331D44u);  if (depth < kMaxDepth) unit_008B(c, 330u, depth + 1u); else { c.pc = 0x0032F790u; return; } if (c.pc != 0x00331D44u) [[unlikely]] return; }
L_00331D44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00331D48:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00331D60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331D78u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 256u, depth + 1u); else { c.pc = 0x00189B70u; return; } if (c.pc != 0x00331D78u) [[unlikely]] return; }
L_00331D78:
    set32(c.r[6], ld32((c.r[16].w[0] + 36u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331D90u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 198u, depth + 1u); else { c.pc = 0x001892F0u; return; } if (c.pc != 0x00331D90u) [[unlikely]] return; }
L_00331D90:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 60u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331DA0u); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_0022(c, 223u, depth + 1u); else { c.pc = 0x00189660u; return; } if (c.pc != 0x00331DA0u) [[unlikely]] return; }
L_00331DA0:
    set32(c.r[5], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[8], 0u - 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[8].d[0] + 0ull;
    c.r[3].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], c.r[4].w[0] << (c.r[6].w[0] & 31u));
    c.budget -= 7;
L_00331DBC:
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00331DD4; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != c.r[3].d[0]; c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00331DD4; } }
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 1;
L_00331DD4:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] << (c.r[6].w[0] & 31u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00331DBCu | kUnwind; return; } goto L_00331DBC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[7].w[0] - c.r[8].w[0]);
    c.f[2] = ld32((c.r[1].w[0] - 12616u));
    set32(c.r[4], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[2], 0u + 456u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[1] = c.r[8].w[0];
    set32(c.r[3], c.r[3].w[0] << 3);
    c.f[3] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 12624u));
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.f[2] = fp::cvt_w_s(c.f[2]);
    set32(c.r[8], c.f[0]);
    set32(c.r[4], c.f[2]);
    set32(c.r[3], c.r[8].w[0] + 281u);
    st32((c.r[16].w[0] + 1540u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 1548u), c.r[4].w[0]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331E48u); st32((c.r[16].w[0] + 1536u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 128u, depth + 1u); else { c.pc = 0x00188AE0u; return; } if (c.pc != 0x00331E48u) [[unlikely]] return; }
L_00331E48:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00331EA4; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[4], c.r[3].w[0] >> 1);  if (t) { goto L_00331E70; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00331E88; } }
L_00331E70:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_00331E88:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 12616u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1544u), c.r[3].w[0]);  if (t) { goto L_00331EF4; } }
L_00331EA4:
    set32(c.r[3], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[4], c.r[3].w[0] >> 1);  if (t) { goto L_00331EC0; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00331ED8; } }
L_00331EC0:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_00331ED8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 12616u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[16].w[0] + 1544u), c.r[3].w[0]);
    c.budget -= 7;
L_00331EF4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00F60000u);
    st32((c.r[16].w[0] + 1552u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00331F10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[7], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331F38u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 356u, depth + 1u); else { c.pc = 0x0031F380u; return; } if (c.pc != 0x00331F38u) [[unlikely]] return; }
L_00331F38:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 22784u);
    set32(c.r[2], c.r[2].w[0] + 22872u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 224u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[5], 0u + 10u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331F60u); st32((c.r[16].w[0] + 208u), 0u);  if (depth < kMaxDepth) unit_008B(c, 10u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x00331F60u) [[unlikely]] return; }
L_00331F60:
    set32(c.r[4], c.r[16].w[0] + 896u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331F6Cu); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_0023(c, 195u, depth + 1u); else { c.pc = 0x0018DEA0u; return; } if (c.pc != 0x00331F6Cu) [[unlikely]] return; }
L_00331F6C:
    set32(c.r[4], c.r[16].w[0] + 1008u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331F78u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_008B(c, 59u, depth + 1u); else { c.pc = 0x0032C7B0u; return; } if (c.pc != 0x00331F78u) [[unlikely]] return; }
L_00331F78:
    set32(c.r[4], c.r[16].w[0] + 2048u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331F84u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_0023(c, 226u, depth + 1u); else { c.pc = 0x0018E370u; return; } if (c.pc != 0x00331F84u) [[unlikely]] return; }
L_00331F84:
    set32(c.r[4], c.r[16].w[0] + 2176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331F90u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_0023(c, 195u, depth + 1u); else { c.pc = 0x0018DEA0u; return; } if (c.pc != 0x00331F90u) [[unlikely]] return; }
L_00331F90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4C4C0000u);
    set32(c.r[3], 0u + 124u);
    c.r[4].d[0] = c.r[2].d[0] | 21317ull;
    st32((c.r[16].w[0] + 48u), c.r[4].w[0]);
    set32(c.r[2], 0u + 125u);
    st32((c.r[16].w[0] + 180u), 0u);
    st16((c.r[16].w[0] + 188u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 190u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 208u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00332040; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331FC4u);  if (depth < kMaxDepth) unit_0022(c, 104u, depth + 1u); else { c.pc = 0x00188770u; return; } if (c.pc != 0x00331FC4u) [[unlikely]] return; }
L_00331FC4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[4], 0u + 160u);  if (t) { goto L_00332040; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331FD8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00331FD8u) [[unlikely]] return; }
L_00331FD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00331FEC; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331FECu); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_002A(c, 287u, depth + 1u); else { c.pc = 0x001AB200u; return; } if (c.pc != 0x00331FECu) [[unlikely]] return; }
L_00331FEC:
    st32((c.r[16].w[0] + 208u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331FFCu); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x00331FFCu) [[unlikely]] return; }
L_00331FFC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033200Cu); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x0033200Cu) [[unlikely]] return; }
L_0033200C:
    set32(c.r[4], ld32((c.r[16].w[0] + 208u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033201Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x0033201Cu) [[unlikely]] return; }
L_0033201C:
    set32(c.r[6], ld32((c.r[16].w[0] + 208u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x42B40000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43640000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x48400000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[6].w[0] + 96u), c.r[5].w[0]);
    st32((c.r[6].w[0] + 100u), c.r[4].w[0]);
    st32((c.r[6].w[0] + 104u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 9;
L_00332040:
    set32(c.r[4], ld32((c.r[16].w[0] + 208u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00332054u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00332054u) [[unlikely]] return; }
L_00332054:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 440u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332068u); set32(c.r[4], c.r[16].w[0] + 2176u);  if (depth < kMaxDepth) unit_0023(c, 203u, depth + 1u); else { c.pc = 0x0018DFC0u; return; } if (c.pc != 0x00332068u) [[unlikely]] return; }
L_00332068:
    set32(c.r[4], c.r[16].w[0] + 2176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332074u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0023(c, 205u, depth + 1u); else { c.pc = 0x0018DFE0u; return; } if (c.pc != 0x00332074u) [[unlikely]] return; }
L_00332074:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033207Cu); set32(c.r[4], 0u + 516u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x0033207Cu) [[unlikely]] return; }
L_0033207C:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 2176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033208Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0023(c, 210u, depth + 1u); else { c.pc = 0x0018E080u; return; } if (c.pc != 0x0033208Cu) [[unlikely]] return; }
L_0033208C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[6], c.r[29].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] - 3552u);
    set32(c.r[4], c.r[16].w[0] + 2176u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003320ACu); st128((c.r[6].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0023(c, 212u, depth + 1u); else { c.pc = 0x0018E0F0u; return; } if (c.pc != 0x003320ACu) [[unlikely]] return; }
L_003320AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003320B4u); set32(c.r[4], 0u + 14u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x003320B4u) [[unlikely]] return; }
L_003320B4:
    st32((c.r[16].w[0] + 2288u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003320D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0033218C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 22784u);
    set32(c.r[2], c.r[2].w[0] + 22872u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 208u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00332128; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00332128; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00332128u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00332128u) [[unlikely]] return; }
L_00332128:
    set32(c.r[4], c.r[17].w[0] + 2176u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332138u); st32((c.r[17].w[0] + 208u), 0u);  if (depth < kMaxDepth) unit_0023(c, 199u, depth + 1u); else { c.pc = 0x0018DF40u; return; } if (c.pc != 0x00332138u) [[unlikely]] return; }
L_00332138:
    set32(c.r[4], c.r[17].w[0] + 2048u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332144u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0023(c, 228u, depth + 1u); else { c.pc = 0x0018E3B0u; return; } if (c.pc != 0x00332144u) [[unlikely]] return; }
L_00332144:
    set32(c.r[4], c.r[17].w[0] + 1008u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332150u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 86u, depth + 1u); else { c.pc = 0x0032CB30u; return; } if (c.pc != 0x00332150u) [[unlikely]] return; }
L_00332150:
    set32(c.r[4], c.r[17].w[0] + 896u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033215Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0023(c, 199u, depth + 1u); else { c.pc = 0x0018DF40u; return; } if (c.pc != 0x0033215Cu) [[unlikely]] return; }
L_0033215C:
    set32(c.r[4], c.r[17].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332168u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 29u, depth + 1u); else { c.pc = 0x0032C430u; return; } if (c.pc != 0x00332168u) [[unlikely]] return; }
L_00332168:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332174u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 359u, depth + 1u); else { c.pc = 0x0031F410u; return; } if (c.pc != 0x00332174u) [[unlikely]] return; }
L_00332174:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00332190; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033218Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0033218Cu) [[unlikely]] return; }
L_0033218C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00332190:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003321B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 4u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003321D4u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x003321D4u) [[unlikely]] return; }
L_003321D4:
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003321E4u); set32(c.r[5], 0u + 32u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x003321E4u) [[unlikely]] return; }
L_003321E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[29].w[0] + 64u);
    set32(c.r[2], c.r[2].w[0] - 3536u);
    set32(c.r[4], c.r[17].w[0] + 2048u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], 0u + 4u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332204u); st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0023(c, 205u, depth + 1u); else { c.pc = 0x0018DFE0u; return; } if (c.pc != 0x00332204u) [[unlikely]] return; }
L_00332204:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 440u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332218u); set32(c.r[4], c.r[17].w[0] + 2048u);  if (depth < kMaxDepth) unit_0023(c, 203u, depth + 1u); else { c.pc = 0x0018DFC0u; return; } if (c.pc != 0x00332218u) [[unlikely]] return; }
L_00332218:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 444u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033222Cu); set32(c.r[4], c.r[17].w[0] + 2048u);  if (depth < kMaxDepth) unit_0023(c, 204u, depth + 1u); else { c.pc = 0x0018DFD0u; return; } if (c.pc != 0x0033222Cu) [[unlikely]] return; }
L_0033222C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[29].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] - 3520u);
    c.r[16].d[0] = 0ull + 0ull;
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.budget -= 6;
L_00332244:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332254u); set32(c.r[4], ld32((c.r[2].w[0] + 64u)));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00332254u) [[unlikely]] return; }
L_00332254:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 2048u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332264u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 210u, depth + 1u); else { c.pc = 0x0018E080u; return; } if (c.pc != 0x00332264u) [[unlikely]] return; }
L_00332264:
    set32(c.r[4], c.r[17].w[0] + 2048u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332274u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0023(c, 212u, depth + 1u); else { c.pc = 0x0018E0F0u; return; } if (c.pc != 0x00332274u) [[unlikely]] return; }
L_00332274:
    c.f[1] = ld32((c.r[29].w[0] + 52u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 52u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00332244u | kUnwind; return; } goto L_00332244; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003322A0u); set32(c.r[5], c.r[17].w[0] + 896u);  if (depth < kMaxDepth) unit_008C(c, 394u, depth + 1u); else { c.pc = 0x00332930u; return; } if (c.pc != 0x003322A0u) [[unlikely]] return; }
L_003322A0:
    set32(c.r[2], 0u - 2u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 996u), c.r[2].w[0]);  if (t) { goto L_003322C0; } }
L_003322B0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003322BCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0023(c, 213u, depth + 1u); else { c.pc = 0x0018E130u; return; } if (c.pc != 0x003322BCu) [[unlikely]] return; }
L_003322BC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_003322C0:
    set32(c.r[2], ld32((c.r[17].w[0] + 908u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[17].w[0] + 896u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003322B0u | kUnwind; return; } goto L_003322B0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26120u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003322E4u); set32(c.r[4], c.r[17].w[0] + 896u);  if (depth < kMaxDepth) unit_008C(c, 455u, depth + 1u); else { c.pc = 0x00332F40u; return; } if (c.pc != 0x003322E4u) [[unlikely]] return; }
L_003322E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003322ECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 21u, depth + 1u); else { c.pc = 0x001301E0u; return; } if (c.pc != 0x003322ECu) [[unlikely]] return; }
L_003322EC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 2152u)));
    set32(c.r[2], ld32((c.r[1].w[0] + 26120u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332304u); set32(c.r[4], c.r[17].w[0] + 224u);  if (depth < kMaxDepth) unit_008B(c, 55u, depth + 1u); else { c.pc = 0x0032C740u; return; } if (c.pc != 0x00332304u) [[unlikely]] return; }
L_00332304:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033230Cu);  if (depth < kMaxDepth) unit_0022(c, 127u, depth + 1u); else { c.pc = 0x00188AB0u; return; } if (c.pc != 0x0033230Cu) [[unlikely]] return; }
L_0033230C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00332370; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[17].w[0] + 2048u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332338u); st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0023(c, 213u, depth + 1u); else { c.pc = 0x0018E130u; return; } if (c.pc != 0x00332338u) [[unlikely]] return; }
L_00332338:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] > 0;  if (t) { goto L_00332370; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[17].w[0] + 2048u);
    c.r[6].d[0] = 0ull + 0ull;
    st8((c.r[2].w[0] + 8u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332360u); st8((c.r[2].w[0] + 16u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_0023(c, 213u, depth + 1u); else { c.pc = 0x0018E130u; return; } if (c.pc != 0x00332360u) [[unlikely]] return; }
L_00332360:
    set32(c.r[4], c.r[17].w[0] + 2048u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332370u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0023(c, 213u, depth + 1u); else { c.pc = 0x0018E130u; return; } if (c.pc != 0x00332370u) [[unlikely]] return; }
L_00332370:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00332390:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003323A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 385u, depth + 1u); else { c.pc = 0x0031F760u; return; } if (c.pc != 0x003323A4u) [[unlikely]] return; }
L_003323A4:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003323B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003323D0; } }
L_003323B8:
    set32(c.r[2], ld32((c.r[16].w[0] + 208u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003323CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003323D0; } }
L_003323CC:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 137u));
    c.budget -= 1;
L_003323D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003323E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003323FCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003323FCu) [[unlikely]] return; }
L_003323FC:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);  if (t) { goto L_00332458; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_00332438; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 26120u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_00332460; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332430u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 24u, depth + 1u); else { c.pc = 0x00130260u; return; } if (c.pc != 0x00332430u) [[unlikely]] return; }
L_00332430:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003324E0; } }
L_00332438:
    set32(c.r[3], ld32((c.r[1].w[0] + 26120u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0033245C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332450u);  if (depth < kMaxDepth) unit_000C(c, 24u, depth + 1u); else { c.pc = 0x00130260u; return; } if (c.pc != 0x00332450u) [[unlikely]] return; }
L_00332450:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003324DC; } }
L_00332458:
    st8((c.r[1].w[0] - 1616u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0033245C:
    set32(c.r[4], 0u + 2u);
    c.budget -= 1;
L_00332460:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_00332480; } }
    set32(c.r[5], 0u + 9u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332478u); st32((c.r[16].w[0] + 2288u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_0087(c, 405u, depth + 1u); else { c.pc = 0x0031F950u; return; } if (c.pc != 0x00332478u) [[unlikely]] return; }
L_00332478:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003324DC; } }
L_00332480:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00332490; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_003324A8; } }
L_00332490:
    st8((c.r[16].w[0] + 192u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26112u)));
    set32(c.r[3], 0u + 6u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 68u), c.r[3].w[0]);  if (t) { goto L_003324B0; } }
L_003324A8:
    set32(c.r[2], ld32((c.r[16].w[0] + 176u)));
    st8((c.r[2].w[0] + 72u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_003324B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003324BCu); set32(c.r[4], ld32((c.r[1].w[0] + 26160u)));  if (depth < kMaxDepth) unit_0023(c, 140u, depth + 1u); else { c.pc = 0x0018D6A0u; return; } if (c.pc != 0x003324BCu) [[unlikely]] return; }
L_003324BC:
    st8((c.r[16].w[0] + 2160u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[16].w[0] + 208u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003324D4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003324D4u) [[unlikely]] return; }
L_003324D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003324DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 375u, depth + 1u); else { c.pc = 0x0031F5E0u; return; } if (c.pc != 0x003324DCu) [[unlikely]] return; }
L_003324DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003324E0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003324F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 1616u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00332524; } }
    set32(c.r[5], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033251Cu); st32((c.r[16].w[0] + 2288u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_0087(c, 405u, depth + 1u); else { c.pc = 0x0031F950u; return; } if (c.pc != 0x0033251Cu) [[unlikely]] return; }
L_0033251C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00332544; } }
L_00332524:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033252Cu); st8((c.r[16].w[0] + 2160u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0087(c, 380u, depth + 1u); else { c.pc = 0x0031F6A0u; return; } if (c.pc != 0x0033252Cu) [[unlikely]] return; }
L_0033252C:
    set32(c.r[4], ld32((c.r[16].w[0] + 208u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00332540u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00332540u) [[unlikely]] return; }
L_00332540:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00332544:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00332550:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332564u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 392u, depth + 1u); else { c.pc = 0x0031F810u; return; } if (c.pc != 0x00332564u) [[unlikely]] return; }
L_00332564:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00332574u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00332574u) [[unlikely]] return; }
L_00332574:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 32u);  if (t) { goto L_00332588; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00332590; } }
L_00332588:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332590u);  if (depth < kMaxDepth) unit_0022(c, 134u, depth + 1u); else { c.pc = 0x00188B50u; return; } if (c.pc != 0x00332590u) [[unlikely]] return; }
L_00332590:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003325A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003325B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 169u, depth + 1u); else { c.pc = 0x0018DA60u; return; } if (c.pc != 0x003325B4u) [[unlikely]] return; }
L_003325B4:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    st32((c.r[16].w[0] + 2148u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003325D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003325ECu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 407u, depth + 1u); else { c.pc = 0x0031F9A0u; return; } if (c.pc != 0x003325ECu) [[unlikely]] return; }
L_003325EC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003326A8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 2288u)));
    set32(c.r[3], 0u + 9u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 5u);  if (t) { goto L_00332668; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332614u); set32(c.r[4], ld32((c.r[1].w[0] + 26120u)));  if (depth < kMaxDepth) unit_0023(c, 32u, depth + 1u); else { c.pc = 0x0018C5C0u; return; } if (c.pc != 0x00332614u) [[unlikely]] return; }
L_00332614:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033261Cu);  if (depth < kMaxDepth) unit_0087(c, 346u, depth + 1u); else { c.pc = 0x0031F2D0u; return; } if (c.pc != 0x0033261Cu) [[unlikely]] return; }
L_0033261C:
    st8((c.r[16].w[0] + 192u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26112u)));
    set32(c.r[3], 0u + 6u);
    st32((c.r[2].w[0] + 68u), c.r[3].w[0]);
    st8((c.r[16].w[0] + 2160u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[16].w[0] + 208u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00332648u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00332648u) [[unlikely]] return; }
L_00332648:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332650u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 375u, depth + 1u); else { c.pc = 0x0031F5E0u; return; } if (c.pc != 0x00332650u) [[unlikely]] return; }
L_00332650:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], 0u + 1u);
    st8((c.r[1].w[0] - 1616u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] - 1624u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003326B0; } }
L_00332668:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003326B0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033267Cu); st8((c.r[16].w[0] + 2160u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0087(c, 380u, depth + 1u); else { c.pc = 0x0031F6A0u; return; } if (c.pc != 0x0033267Cu) [[unlikely]] return; }
L_0033267C:
    set32(c.r[4], ld32((c.r[16].w[0] + 208u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00332690u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00332690u) [[unlikely]] return; }
L_00332690:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033269Cu); set32(c.r[4], ld32((c.r[1].w[0] + 26160u)));  if (depth < kMaxDepth) unit_0023(c, 115u, depth + 1u); else { c.pc = 0x0018D2A0u; return; } if (c.pc != 0x0033269Cu) [[unlikely]] return; }
L_0033269C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] - 1616u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003326B0; } }
L_003326A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003326B0u);  if (depth < kMaxDepth) unit_000C(c, 24u, depth + 1u); else { c.pc = 0x00130260u; return; } if (c.pc != 0x003326B0u) [[unlikely]] return; }
L_003326B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003326D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], 0u + 1u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003326F4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 356u, depth + 1u); else { c.pc = 0x0031F380u; return; } if (c.pc != 0x003326F4u) [[unlikely]] return; }
L_003326F4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 22608u);
    set32(c.r[2], c.r[2].w[0] + 22696u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 208u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332718u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_008B(c, 10u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x00332718u) [[unlikely]] return; }
L_00332718:
    set32(c.r[4], c.r[16].w[0] + 880u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332724u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_0023(c, 195u, depth + 1u); else { c.pc = 0x0018DEA0u; return; } if (c.pc != 0x00332724u) [[unlikely]] return; }
L_00332724:
    set32(c.r[4], c.r[16].w[0] + 992u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332730u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_008B(c, 59u, depth + 1u); else { c.pc = 0x0032C7B0u; return; } if (c.pc != 0x00332730u) [[unlikely]] return; }
L_00332730:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4C4C0000u);
    set32(c.r[3], 0u + 124u);
    c.r[4].d[0] = c.r[2].d[0] | 21317ull;
    st32((c.r[16].w[0] + 48u), c.r[4].w[0]);
    set32(c.r[2], 0u + 125u);
    st32((c.r[16].w[0] + 180u), 0u);
    st16((c.r[16].w[0] + 188u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332754u); st16((c.r[16].w[0] + 190u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0022(c, 256u, depth + 1u); else { c.pc = 0x00189B70u; return; } if (c.pc != 0x00332754u) [[unlikely]] return; }
L_00332754:
    st32((c.r[2].w[0] + 96u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 440u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033276Cu); set32(c.r[4], c.r[16].w[0] + 880u);  if (depth < kMaxDepth) unit_0023(c, 203u, depth + 1u); else { c.pc = 0x0018DFC0u; return; } if (c.pc != 0x0033276Cu) [[unlikely]] return; }
L_0033276C:
    set32(c.r[4], c.r[16].w[0] + 880u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332778u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0023(c, 205u, depth + 1u); else { c.pc = 0x0018DFE0u; return; } if (c.pc != 0x00332778u) [[unlikely]] return; }
L_00332778:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332780u); set32(c.r[4], 0u + 516u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00332780u) [[unlikely]] return; }
L_00332780:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 880u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332790u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0023(c, 210u, depth + 1u); else { c.pc = 0x0018E080u; return; } if (c.pc != 0x00332790u) [[unlikely]] return; }
L_00332790:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[6], c.r[29].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] - 3504u);
    set32(c.r[4], c.r[16].w[0] + 880u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003327B0u); st128((c.r[6].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0023(c, 212u, depth + 1u); else { c.pc = 0x0018E0F0u; return; } if (c.pc != 0x003327B0u) [[unlikely]] return; }
L_003327B0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003327D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0033284C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 22608u);
    set32(c.r[2], c.r[2].w[0] + 22696u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 992u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332810u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 86u, depth + 1u); else { c.pc = 0x0032CB30u; return; } if (c.pc != 0x00332810u) [[unlikely]] return; }
L_00332810:
    set32(c.r[4], c.r[17].w[0] + 880u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033281Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0023(c, 199u, depth + 1u); else { c.pc = 0x0018DF40u; return; } if (c.pc != 0x0033281Cu) [[unlikely]] return; }
L_0033281C:
    set32(c.r[4], c.r[17].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332828u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 29u, depth + 1u); else { c.pc = 0x0032C430u; return; } if (c.pc != 0x00332828u) [[unlikely]] return; }
L_00332828:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332834u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 359u, depth + 1u); else { c.pc = 0x0031F410u; return; } if (c.pc != 0x00332834u) [[unlikely]] return; }
L_00332834:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00332850; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033284Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0033284Cu) [[unlikely]] return; }
L_0033284C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00332850:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00332870:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00332898; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332898u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00332898u) [[unlikely]] return; }
L_00332898:
    st32((c.r[17].w[0] + 28u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003328C0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003328C0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003328C0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003328C0u) [[unlikely]] return; }
L_003328C0:
    st32((c.r[17].w[0] + 24u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26120u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[16], c.r[2].w[0] << 3);
    st32((c.r[17].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003328E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x003328E0u) [[unlikely]] return; }
L_003328E0:
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003328F0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x003328F0u) [[unlikely]] return; }
L_003328F0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003328FCu); set32(c.r[5], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_008C(c, 394u, depth + 1u); else { c.pc = 0x00332930u; return; } if (c.pc != 0x003328FCu) [[unlikely]] return; }
L_003328FC:
    set32(c.r[5], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332908u); set32(c.r[4], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_008C(c, 455u, depth + 1u); else { c.pc = 0x00332F40u; return; } if (c.pc != 0x00332908u) [[unlikely]] return; }
L_00332908:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332910u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 21u, depth + 1u); else { c.pc = 0x001301E0u; return; } if (c.pc != 0x00332910u) [[unlikely]] return; }
L_00332910:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00332930:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 440u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332960u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 203u, depth + 1u); else { c.pc = 0x0018DFC0u; return; } if (c.pc != 0x00332960u) [[unlikely]] return; }
L_00332960:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 444u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332974u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 204u, depth + 1u); else { c.pc = 0x0018DFD0u; return; } if (c.pc != 0x00332974u) [[unlikely]] return; }
L_00332974:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[18], ld32((c.r[1].w[0] + 26120u)));
    set32(c.r[17], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_003329E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332990u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 205u, depth + 1u); else { c.pc = 0x0018DFE0u; return; } if (c.pc != 0x00332990u) [[unlikely]] return; }
L_00332990:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[3], c.r[3].w[0] - 3488u);
    c.r[16].d[0] = 0ull + 0ull;
    ld128((c.r[3].w[0]) & ~15u, c.r[3]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st128((c.r[4].w[0]) & ~15u, c.r[3]);  if (t) { goto L_003329D8; } }
L_003329AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003329B4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 4u, depth + 1u); else { c.pc = 0x0018C010u; return; } if (c.pc != 0x003329B4u) [[unlikely]] return; }
L_003329B4:
    set32(c.r[6], ld32((c.r[2].w[0] + 28u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003329C4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 210u, depth + 1u); else { c.pc = 0x0018E080u; return; } if (c.pc != 0x003329C4u) [[unlikely]] return; }
L_003329C4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003329D4u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0023(c, 211u, depth + 1u); else { c.pc = 0x0018E0B0u; return; } if (c.pc != 0x003329D4u) [[unlikely]] return; }
L_003329D4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_003329D8:
    c.r[3].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003329ACu | kUnwind; return; } goto L_003329AC; } }
L_003329E4:
    st32((c.r[19].w[0] + 104u), 0u);
    set32(c.r[3], 0u + 10u);
    st32((c.r[19].w[0] + 108u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00332A10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 176u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332A34u); st8((c.r[2].w[0] + 72u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0022(c, 256u, depth + 1u); else { c.pc = 0x00189B70u; return; } if (c.pc != 0x00332A34u) [[unlikely]] return; }
L_00332A34:
    set32(c.r[3], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00332B4C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00332AA0; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[16], ld32((c.r[1].w[0] + 26120u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00332A64u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00332A64u) [[unlikely]] return; }
L_00332A64:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332A70u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 4u, depth + 1u); else { c.pc = 0x0018C010u; return; } if (c.pc != 0x00332A70u) [[unlikely]] return; }
L_00332A70:
    st32((c.r[18].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00332A84u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00332A84u) [[unlikely]] return; }
L_00332A84:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 11u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332A98u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 198u, depth + 1u); else { c.pc = 0x001892F0u; return; } if (c.pc != 0x00332A98u) [[unlikely]] return; }
L_00332A98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[18].w[0] + 96u)));  if (t) { goto L_00332AE0; } }
L_00332AA0:
    st32((c.r[18].w[0] + 96u), 0u);
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[16], ld32((c.r[17].w[0] + 168u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00332AB8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00332AB8u) [[unlikely]] return; }
L_00332AB8:
    set32(c.r[5], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[4], c.r[17].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332AC8u); set32(c.r[6], 0u + 20u);  if (depth < kMaxDepth) unit_008B(c, 58u, depth + 1u); else { c.pc = 0x0032C780u; return; } if (c.pc != 0x00332AC8u) [[unlikely]] return; }
L_00332AC8:
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st8((c.r[1].w[0] - 1616u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st8((c.r[1].w[0] - 1624u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    c.budget -= 6;
L_00332AE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 1188u), c.r[2].w[0]);  if (t) { goto L_00332B14; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[16], ld32((c.r[17].w[0] + 168u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00332AFCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00332AFCu) [[unlikely]] return; }
L_00332AFC:
    set32(c.r[5], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[4], c.r[17].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332B0Cu); set32(c.r[6], 0u + 23u);  if (depth < kMaxDepth) unit_008B(c, 58u, depth + 1u); else { c.pc = 0x0032C780u; return; } if (c.pc != 0x00332B0Cu) [[unlikely]] return; }
L_00332B0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00332B3C; } }
L_00332B14:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[16], ld32((c.r[17].w[0] + 168u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00332B28u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00332B28u) [[unlikely]] return; }
L_00332B28:
    set32(c.r[5], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[4], c.r[17].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332B38u); set32(c.r[6], 0u + 21u);  if (depth < kMaxDepth) unit_008B(c, 58u, depth + 1u); else { c.pc = 0x0032C780u; return; } if (c.pc != 0x00332B38u) [[unlikely]] return; }
L_00332B38:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00332B3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332B44u);  if (depth < kMaxDepth) unit_000C(c, 24u, depth + 1u); else { c.pc = 0x00130260u; return; } if (c.pc != 0x00332B44u) [[unlikely]] return; }
L_00332B44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 168u)));  if (t) { goto L_00332C9C; } }
L_00332B4C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00332C98; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[16], ld32((c.r[1].w[0] + 26120u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00332B70u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00332B70u) [[unlikely]] return; }
L_00332B70:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332B80u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 4u, depth + 1u); else { c.pc = 0x0018C010u; return; } if (c.pc != 0x00332B80u) [[unlikely]] return; }
L_00332B80:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332B8Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 21u, depth + 1u); else { c.pc = 0x0018C3E0u; return; } if (c.pc != 0x00332B8Cu) [[unlikely]] return; }
L_00332B8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332B94u);  if (depth < kMaxDepth) unit_0087(c, 346u, depth + 1u); else { c.pc = 0x0031F2D0u; return; } if (c.pc != 0x00332B94u) [[unlikely]] return; }
L_00332B94:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332BA0u); set32(c.r[4], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_0023(c, 242u, depth + 1u); else { c.pc = 0x0018E580u; return; } if (c.pc != 0x00332BA0u) [[unlikely]] return; }
L_00332BA0:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[18], ld32((c.r[17].w[0] + 168u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00332BB4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00332BB4u) [[unlikely]] return; }
L_00332BB4:
    set32(c.r[5], c.r[2].w[0] - c.r[18].w[0]);
    set32(c.r[4], c.r[17].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332BC4u); set32(c.r[6], 0u + 20u);  if (depth < kMaxDepth) unit_008B(c, 58u, depth + 1u); else { c.pc = 0x0032C780u; return; } if (c.pc != 0x00332BC4u) [[unlikely]] return; }
L_00332BC4:
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 168u)));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[3], c.r[2].w[0] - 1u);  if (t) { goto L_00332BEC; } }
    set32(c.r[2], c.r[2].w[0] + 9u);
    st32((c.r[17].w[0] + 168u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 172u), c.r[2].w[0]);
    c.budget -= 3;
L_00332BEC:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00332BFCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00332BFCu) [[unlikely]] return; }
L_00332BFC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00332C28; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00332C14u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00332C14u) [[unlikely]] return; }
L_00332C14:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[5], c.r[2].w[0] - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 140u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00332C28u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00332C28u) [[unlikely]] return; }
L_00332C28:
    set32(c.r[5], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332C34u); set32(c.r[4], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_008C(c, 455u, depth + 1u); else { c.pc = 0x00332F40u; return; } if (c.pc != 0x00332C34u) [[unlikely]] return; }
L_00332C34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332C3Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008C(c, 458u, depth + 1u); else { c.pc = 0x00332FD0u; return; } if (c.pc != 0x00332C3Cu) [[unlikely]] return; }
L_00332C3C:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[18], ld32((c.r[17].w[0] + 168u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00332C50u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00332C50u) [[unlikely]] return; }
L_00332C50:
    set32(c.r[5], c.r[2].w[0] - c.r[18].w[0]);
    set32(c.r[4], c.r[17].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332C60u); set32(c.r[6], 0u + 21u);  if (depth < kMaxDepth) unit_008B(c, 58u, depth + 1u); else { c.pc = 0x0032C780u; return; } if (c.pc != 0x00332C60u) [[unlikely]] return; }
L_00332C60:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00332C7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332C74u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 375u, depth + 1u); else { c.pc = 0x0031F5E0u; return; } if (c.pc != 0x00332C74u) [[unlikely]] return; }
L_00332C74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00332C88; } }
L_00332C7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332C84u);  if (depth < kMaxDepth) unit_000C(c, 24u, depth + 1u); else { c.pc = 0x00130260u; return; } if (c.pc != 0x00332C84u) [[unlikely]] return; }
L_00332C84:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00332C88:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st8((c.r[1].w[0] - 1616u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st8((c.r[1].w[0] - 1624u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00332C98:
    set32(c.r[2], ld32((c.r[17].w[0] + 168u)));
    c.budget -= 1;
L_00332C9C:
    st32((c.r[17].w[0] + 860u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 168u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332CB4u); set32(c.r[4], c.r[17].w[0] + 208u);  if (depth < kMaxDepth) unit_008B(c, 55u, depth + 1u); else { c.pc = 0x0032C740u; return; } if (c.pc != 0x00332CB4u) [[unlikely]] return; }
L_00332CB4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00332CD0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332CF4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0022(c, 256u, depth + 1u); else { c.pc = 0x00189B70u; return; } if (c.pc != 0x00332CF4u) [[unlikely]] return; }
L_00332CF4:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[18].w[0] + 168u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00332D0Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00332D0Cu) [[unlikely]] return; }
L_00332D0C:
    set32(c.r[5], c.r[2].w[0] - c.r[19].w[0]);
    set32(c.r[4], c.r[18].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332D1Cu); set32(c.r[6], 0u + 20u);  if (depth < kMaxDepth) unit_008B(c, 58u, depth + 1u); else { c.pc = 0x0032C780u; return; } if (c.pc != 0x00332D1Cu) [[unlikely]] return; }
L_00332D1C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332D28u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 169u, depth + 1u); else { c.pc = 0x0018DA60u; return; } if (c.pc != 0x00332D28u) [[unlikely]] return; }
L_00332D28:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00332D38u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00332D38u) [[unlikely]] return; }
L_00332D38:
    set32(c.r[3], ld32((c.r[18].w[0] + 168u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00332D68; } }
    st32((c.r[18].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 10u);
    st32((c.r[18].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332D60u); set32(c.r[4], c.r[18].w[0] + 64u);  if (depth < kMaxDepth) unit_008C(c, 455u, depth + 1u); else { c.pc = 0x00332F40u; return; } if (c.pc != 0x00332D60u) [[unlikely]] return; }
L_00332D60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 96u)));  if (t) { goto L_00332D98; } }
L_00332D68:
    set32(c.r[3], c.r[3].w[0] + 10u);
    c.r[3].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00332D94; } }
    set32(c.r[3], c.r[2].w[0] - 9u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 168u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332D94u); set32(c.r[4], c.r[18].w[0] + 64u);  if (depth < kMaxDepth) unit_008C(c, 455u, depth + 1u); else { c.pc = 0x00332F40u; return; } if (c.pc != 0x00332D94u) [[unlikely]] return; }
L_00332D94:
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 1;
L_00332D98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00332DCC; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[19], ld32((c.r[18].w[0] + 168u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00332DB4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00332DB4u) [[unlikely]] return; }
L_00332DB4:
    set32(c.r[5], c.r[2].w[0] - c.r[19].w[0]);
    set32(c.r[4], c.r[18].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332DC4u); set32(c.r[6], 0u + 23u);  if (depth < kMaxDepth) unit_008B(c, 58u, depth + 1u); else { c.pc = 0x0032C780u; return; } if (c.pc != 0x00332DC4u) [[unlikely]] return; }
L_00332DC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00332DF4; } }
L_00332DCC:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[19], ld32((c.r[18].w[0] + 168u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00332DE0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00332DE0u) [[unlikely]] return; }
L_00332DE0:
    set32(c.r[5], c.r[2].w[0] - c.r[19].w[0]);
    set32(c.r[4], c.r[18].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332DF0u); set32(c.r[6], 0u + 21u);  if (depth < kMaxDepth) unit_008B(c, 58u, depth + 1u); else { c.pc = 0x0032C780u; return; } if (c.pc != 0x00332DF0u) [[unlikely]] return; }
L_00332DF0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00332DF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332DFCu);  if (depth < kMaxDepth) unit_008C(c, 458u, depth + 1u); else { c.pc = 0x00332FD0u; return; } if (c.pc != 0x00332DFCu) [[unlikely]] return; }
L_00332DFC:
    set32(c.r[2], ld32((c.r[18].w[0] + 168u)));
    st32((c.r[18].w[0] + 860u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 168u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332E18u); set32(c.r[4], c.r[18].w[0] + 208u);  if (depth < kMaxDepth) unit_008B(c, 55u, depth + 1u); else { c.pc = 0x0032C740u; return; } if (c.pc != 0x00332E18u) [[unlikely]] return; }
L_00332E18:
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[17].d[0];  if (t) { goto L_00332E88; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00332E88; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00332E88; } }
    set32(c.r[17], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[19], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[19].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_00332E88; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[1].w[0] + 26120u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332E5Cu); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 11u, depth + 1u); else { c.pc = 0x0018C1B0u; return; } if (c.pc != 0x00332E5Cu) [[unlikely]] return; }
L_00332E5C:
    set32(c.r[6], ld32((c.r[18].w[0] + 44u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 11u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332E70u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 198u, depth + 1u); else { c.pc = 0x001892F0u; return; } if (c.pc != 0x00332E70u) [[unlikely]] return; }
L_00332E70:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332E80u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 181u, depth + 1u); else { c.pc = 0x0018DC00u; return; } if (c.pc != 0x00332E80u) [[unlikely]] return; }
L_00332E80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332E88u);  if (depth < kMaxDepth) unit_0087(c, 346u, depth + 1u); else { c.pc = 0x0031F2D0u; return; } if (c.pc != 0x00332E88u) [[unlikely]] return; }
L_00332E88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00332EB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332ECCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0022(c, 256u, depth + 1u); else { c.pc = 0x00189B70u; return; } if (c.pc != 0x00332ECCu) [[unlikely]] return; }
L_00332ECC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00332F0C; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[16], ld32((c.r[18].w[0] + 168u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00332EF0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00332EF0u) [[unlikely]] return; }
L_00332EF0:
    set32(c.r[5], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[4], c.r[18].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332F00u); set32(c.r[6], 0u + 21u);  if (depth < kMaxDepth) unit_008B(c, 58u, depth + 1u); else { c.pc = 0x0032C780u; return; } if (c.pc != 0x00332F00u) [[unlikely]] return; }
L_00332F00:
    st32((c.r[17].w[0] + 96u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 1188u), 0u);  if (t) { goto L_00332F20; } }
L_00332F0C:
    st32((c.r[18].w[0] + 36u), 0u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 176u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332F20u); st8((c.r[2].w[0] + 72u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0087(c, 380u, depth + 1u); else { c.pc = 0x0031F6A0u; return; } if (c.pc != 0x00332F20u) [[unlikely]] return; }
L_00332F20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00332F40:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] - 3472u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[6], c.r[29].w[0] + 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    ld128((c.r[3].w[0]) & ~15u, c.r[3]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[6].w[0]) & ~15u, c.r[3]);
    set32(c.r[19], ld32((c.r[4].w[0] + 104u)));
    c.budget -= 16;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[5].w[0] - c.r[19].w[0]);  if (t) { goto L_00332FA4; } }
L_00332F80:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332F8Cu); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0023(c, 212u, depth + 1u); else { c.pc = 0x0018E0F0u; return; } if (c.pc != 0x00332F8Cu) [[unlikely]] return; }
L_00332F8C:
    c.f[1] = ld32((c.r[29].w[0] + 84u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42080000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.budget -= 6;
L_00332FA4:
    c.r[3].d[0] = c.r[18].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[18].w[0] + c.r[19].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00332F80u | kUnwind; return; } goto L_00332F80; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00332FD0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 168u)));
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 8;
L_00332FF0:
    set32(c.r[2], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[3], c.r[16].w[0] + c.r[17].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[18].w[0] + 208u);  if (t) { goto L_0033301C; } }
    set32(c.r[4], c.r[18].w[0] + 208u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333014u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_008B(c, 54u, depth + 1u); else { c.pc = 0x0032C720u; return; } if (c.pc != 0x00333014u) [[unlikely]] return; }
L_00333014:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_0033302C; } }
L_0033301C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333028u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008B(c, 54u, depth + 1u); else { c.pc = 0x0032C720u; return; } if (c.pc != 0x00333028u) [[unlikely]] return; }
L_00333028:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0033302C:
    c.r[3].d[0] = c.r[16].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 1;
L_00333030:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00332FF0u | kUnwind; return; } goto L_00332FF0; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00333050:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[5], 0u + 13u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033306Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x0033306Cu) [[unlikely]] return; }
L_0033306C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[17], c.r[16].w[0] + 24u);
    set32(c.r[2], c.r[2].w[0] + 22592u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[1].w[0] - 3456u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[6], ld32((c.r[1].w[0] - 3448u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[7], ld32((c.r[1].w[0] - 3440u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[8], ld32((c.r[1].w[0] - 3432u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[9], ld32((c.r[1].w[0] - 3424u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[10], ld32((c.r[1].w[0] - 3760u)));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003330B4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 214u, depth + 1u); else { c.pc = 0x0032A240u; return; } if (c.pc != 0x003330B4u) [[unlikely]] return; }
L_003330B4:
    set32(c.r[4], c.r[17].w[0] + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003330C0u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x003330C0u) [[unlikely]] return; }
L_003330C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 19872u);
    set32(c.r[2], c.r[2].w[0] + 19900u);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 64u);
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003330E4u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_0023(c, 236u, depth + 1u); else { c.pc = 0x0018E4B0u; return; } if (c.pc != 0x003330E4u) [[unlikely]] return; }
L_003330E4:
    set32(c.r[4], c.r[16].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003330F0u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_0023(c, 236u, depth + 1u); else { c.pc = 0x0018E4B0u; return; } if (c.pc != 0x003330F0u) [[unlikely]] return; }
L_003330F0:
    set32(c.r[4], c.r[16].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003330FCu); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_0023(c, 236u, depth + 1u); else { c.pc = 0x0018E4B0u; return; } if (c.pc != 0x003330FCu) [[unlikely]] return; }
L_003330FC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[16].w[0] + 400u);
    set32(c.r[5], c.r[5].w[0] - 3416u);
    set32(c.r[6], c.r[6].w[0] - 3408u);
    set32(c.r[7], c.r[7].w[0] - 3400u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333124u); set32(c.r[8], c.r[8].w[0] - 3392u);  if (depth < kMaxDepth) unit_008A(c, 48u, depth + 1u); else { c.pc = 0x003286E0u; return; } if (c.pc != 0x00333124u) [[unlikely]] return; }
L_00333124:
    set32(c.r[4], c.r[16].w[0] + 448u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333134u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008A(c, 257u, depth + 1u); else { c.pc = 0x0032AE80u; return; } if (c.pc != 0x00333134u) [[unlikely]] return; }
L_00333134:
    set32(c.r[4], 0u + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333140u); st32((c.r[16].w[0] + 20u), 0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00333140u) [[unlikely]] return; }
L_00333140:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x431D0000u);  if (t) { goto L_00333180; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43020000u);
    c.f[12] = c.r[3].w[0];
    set32(c.r[5], 0u + 1u);
    c.f[13] = c.r[4].w[0];
    set32(c.r[6], 0u + 4u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C00000u);
    c.r[7].d[0] = 0ull + 0ull;
    c.f[14] = c.r[3].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[15] = c.r[4].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[16] = c.r[3].w[0];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333180u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 46u, depth + 1u); else { c.pc = 0x002BC900u; return; } if (c.pc != 0x00333180u) [[unlikely]] return; }
L_00333180:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.f[0] = ld32((c.r[1].w[0] - 3384u));
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] - 3376u);
    st32((c.r[3].w[0] + 40u), c.f[0]);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[5].w[0]) & ~15u, c.r[2]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003331B0u); set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  if (depth < kMaxDepth) unit_006F(c, 79u, depth + 1u); else { c.pc = 0x002BCF70u; return; } if (c.pc != 0x003331B0u) [[unlikely]] return; }
L_003331B0:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003331D0u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003331D0u) [[unlikely]] return; }
L_003331D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003331D8u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003331D8u) [[unlikely]] return; }
L_003331D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00333200; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003331E8u); set32(c.r[4], 0u + 38u);  if (depth < kMaxDepth) unit_0022(c, 105u, depth + 1u); else { c.pc = 0x00188790u; return; } if (c.pc != 0x003331E8u) [[unlikely]] return; }
L_003331E8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003331F4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x003331F4u) [[unlikely]] return; }
L_003331F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 21424u);
    st32((c.r[17].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 3;
L_00333200:
    set32(c.r[4], 0u + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033320Cu); st32((c.r[16].w[0] + 12u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0033320Cu) [[unlikely]] return; }
L_0033320C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00333234; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033321Cu); set32(c.r[4], 0u + 39u);  if (depth < kMaxDepth) unit_0022(c, 105u, depth + 1u); else { c.pc = 0x00188790u; return; } if (c.pc != 0x0033321Cu) [[unlikely]] return; }
L_0033321C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333228u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x00333228u) [[unlikely]] return; }
L_00333228:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 21424u);
    st32((c.r[17].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 3;
L_00333234:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    st32((c.r[16].w[0] + 16u), c.r[17].w[0]);
    c.f[12] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = ld32((c.r[1].w[0] - 12632u));
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42820000u);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[13] = c.r[3].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[5].w[0] + 16u), c.f[1]);
    c.f[0] = ld32((c.r[1].w[0] - 12640u));
    st32((c.r[5].w[0] + 20u), c.f[0]);
    st32((c.r[5].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 23;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00333290u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00333290u) [[unlikely]] return; }
L_00333290:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42AE0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.f[1] = ld32((c.r[1].w[0] - 12648u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x434A0000u);
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.f[0] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[4].w[0] + 16u), c.f[1]);
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.f[0] = ld32((c.r[1].w[0] - 12656u));
    st32((c.r[4].w[0] + 20u), c.f[0]);
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 22;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003332E8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003332E8u) [[unlikely]] return; }
L_003332E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003332F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008C(c, 512u, depth + 1u); else { c.pc = 0x003335D0u; return; } if (c.pc != 0x003332F0u) [[unlikely]] return; }
L_003332F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003332F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008C(c, 522u, depth + 1u); else { c.pc = 0x003336F0u; return; } if (c.pc != 0x003332F8u) [[unlikely]] return; }
L_003332F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333300u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008C(c, 534u, depth + 1u); else { c.pc = 0x003337F0u; return; } if (c.pc != 0x00333300u) [[unlikely]] return; }
L_00333300:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033330Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008C(c, 510u, depth + 1u); else { c.pc = 0x003335A0u; return; } if (c.pc != 0x0033330Cu) [[unlikely]] return; }
L_0033330C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333314u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00333314u) [[unlikely]] return; }
L_00333314:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0033333C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333324u); set32(c.r[4], 0u + 9u);  if (depth < kMaxDepth) unit_0022(c, 105u, depth + 1u); else { c.pc = 0x00188790u; return; } if (c.pc != 0x00333324u) [[unlikely]] return; }
L_00333324:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333330u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x00333330u) [[unlikely]] return; }
L_00333330:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 21424u);
    st32((c.r[17].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 3;
L_0033333C:
    st32((c.r[16].w[0] + 444u), c.r[17].w[0]);
    set32(c.r[6], 0u + 255u);
    set32(c.r[7], ld32((c.r[16].w[0] + 444u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F300000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F200000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], 0u + 14u);
    st32((c.r[7].w[0] + 48u), c.r[6].w[0]);
    st32((c.r[7].w[0] + 52u), c.r[6].w[0]);
    st32((c.r[7].w[0] + 56u), c.r[6].w[0]);
    st32((c.r[7].w[0] + 60u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 444u)));
    st32((c.r[6].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[6].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033337Cu); st32((c.r[6].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x0033337Cu) [[unlikely]] return; }
L_0033337C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003333A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00333504; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 22592u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 444u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003333EC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003333EC; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003333ECu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003333ECu) [[unlikely]] return; }
L_003333EC:
    st32((c.r[17].w[0] + 444u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00333414; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00333414; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00333414u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00333414u) [[unlikely]] return; }
L_00333414:
    st32((c.r[17].w[0] + 20u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0033343C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0033343C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033343Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033343Cu) [[unlikely]] return; }
L_0033343C:
    st32((c.r[17].w[0] + 12u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00333464; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00333464; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00333464u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00333464u) [[unlikely]] return; }
L_00333464:
    set32(c.r[4], c.r[17].w[0] + 448u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333474u); st32((c.r[17].w[0] + 16u), 0u);  if (depth < kMaxDepth) unit_008A(c, 261u, depth + 1u); else { c.pc = 0x0032AF10u; return; } if (c.pc != 0x00333474u) [[unlikely]] return; }
L_00333474:
    set32(c.r[4], c.r[17].w[0] + 400u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333480u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 53u, depth + 1u); else { c.pc = 0x003287A0u; return; } if (c.pc != 0x00333480u) [[unlikely]] return; }
L_00333480:
    set32(c.r[4], c.r[17].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033348Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0023(c, 238u, depth + 1u); else { c.pc = 0x0018E4F0u; return; } if (c.pc != 0x0033348Cu) [[unlikely]] return; }
L_0033348C:
    set32(c.r[4], c.r[17].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333498u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0023(c, 238u, depth + 1u); else { c.pc = 0x0018E4F0u; return; } if (c.pc != 0x00333498u) [[unlikely]] return; }
L_00333498:
    set32(c.r[4], c.r[17].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003334A4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0023(c, 238u, depth + 1u); else { c.pc = 0x0018E4F0u; return; } if (c.pc != 0x003334A4u) [[unlikely]] return; }
L_003334A4:
    set32(c.r[2], c.r[17].w[0] + 24u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003334E4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 19872u);
    set32(c.r[2], c.r[2].w[0] + 19900u);
    st32((c.r[17].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003334D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x003334D4u) [[unlikely]] return; }
L_003334D4:
    set32(c.r[4], c.r[17].w[0] + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003334E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008A(c, 215u, depth + 1u); else { c.pc = 0x0032A270u; return; } if (c.pc != 0x003334E0u) [[unlikely]] return; }
L_003334E0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003334E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003334ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x003334ECu) [[unlikely]] return; }
L_003334EC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00333508; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333504u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00333504u) [[unlikely]] return; }
L_00333504:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00333508:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00333520:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 255u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00333550u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00333550u) [[unlikely]] return; }
L_00333550:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], 0u + 255u);
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00333570u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00333570u) [[unlikely]] return; }
L_00333570:
    set32(c.r[2], ld32((c.r[16].w[0] + 444u)));
    set32(c.r[3], 0u + 255u);
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 444u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00333590u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00333590u) [[unlikely]] return; }
L_00333590:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003335A0:
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    st8((c.r[3].w[0] + 16u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 184u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_003335B0:
    set32(c.r[4], ld32((c.r[4].w[0] + 444u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00330000u < 16384u) { entry = entries_008C[(t - 0x00330000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003335D0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[5], 0u + 6u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003335F0u); set32(c.r[4], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_0023(c, 205u, depth + 1u); else { c.pc = 0x0018DFE0u; return; } if (c.pc != 0x003335F0u) [[unlikely]] return; }
L_003335F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 440u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333604u); set32(c.r[4], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_0023(c, 203u, depth + 1u); else { c.pc = 0x0018DFC0u; return; } if (c.pc != 0x00333604u) [[unlikely]] return; }
L_00333604:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 444u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333618u); set32(c.r[4], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_0023(c, 204u, depth + 1u); else { c.pc = 0x0018DFD0u; return; } if (c.pc != 0x00333618u) [[unlikely]] return; }
L_00333618:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] - 3360u);
    set32(c.r[8], c.r[29].w[0] + 80u);
    ld128((c.r[2].w[0]) & ~15u, c.r[7]);
    set32(c.r[4], c.r[4].w[0] - 3328u);
    c.r[6].d[0] = ld64((c.r[2].w[0] + 16u));
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[3], c.r[29].w[0] + 48u);
    c.r[16].d[0] = 0ull + 0ull;
    st128((c.r[8].w[0]) & ~15u, c.r[7]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[8].w[0] + 16u), c.r[6].d[0]);
    set32(c.r[2], c.r[2].w[0] - 3312u);
    ld128((c.r[4].w[0]) & ~15u, c.r[4]);
    st128((c.r[5].w[0]) & ~15u, c.r[4]);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.budget -= 18;
L_00333660:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333670u); set32(c.r[4], ld32((c.r[2].w[0] + 80u)));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00333670u) [[unlikely]] return; }
L_00333670:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333680u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 210u, depth + 1u); else { c.pc = 0x0018E080u; return; } if (c.pc != 0x00333680u) [[unlikely]] return; }
L_00333680:
    set32(c.r[4], c.r[17].w[0] + 64u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333690u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0023(c, 211u, depth + 1u); else { c.pc = 0x0018E0B0u; return; } if (c.pc != 0x00333690u) [[unlikely]] return; }
L_00333690:
    set32(c.r[4], c.r[17].w[0] + 64u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003336A0u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0023(c, 212u, depth + 1u); else { c.pc = 0x0018E0F0u; return; } if (c.pc != 0x003336A0u) [[unlikely]] return; }
L_003336A0:
    set32(c.r[4], c.r[17].w[0] + 64u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003336B0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0023(c, 214u, depth + 1u); else { c.pc = 0x0018E160u; return; } if (c.pc != 0x003336B0u) [[unlikely]] return; }
L_003336B0:
    c.f[1] = ld32((c.r[29].w[0] + 68u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A80000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[29].w[0] + 68u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00333660u | kUnwind; return; } goto L_00333660; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003336F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 440u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333714u); set32(c.r[4], c.r[16].w[0] + 176u);  if (depth < kMaxDepth) unit_0023(c, 203u, depth + 1u); else { c.pc = 0x0018DFC0u; return; } if (c.pc != 0x00333714u) [[unlikely]] return; }
L_00333714:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 444u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333728u); set32(c.r[4], c.r[16].w[0] + 176u);  if (depth < kMaxDepth) unit_0023(c, 204u, depth + 1u); else { c.pc = 0x0018DFD0u; return; } if (c.pc != 0x00333728u) [[unlikely]] return; }
L_00333728:
    set32(c.r[4], c.r[16].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333734u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0023(c, 205u, depth + 1u); else { c.pc = 0x0018DFE0u; return; } if (c.pc != 0x00333734u) [[unlikely]] return; }
L_00333734:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033373Cu); set32(c.r[4], 0u + 462u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x0033373Cu) [[unlikely]] return; }
L_0033373C:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033374Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0023(c, 210u, depth + 1u); else { c.pc = 0x0018E080u; return; } if (c.pc != 0x0033374Cu) [[unlikely]] return; }
L_0033374C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333754u); set32(c.r[4], 0u + 179u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00333754u) [[unlikely]] return; }
L_00333754:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333764u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0023(c, 210u, depth + 1u); else { c.pc = 0x0018E080u; return; } if (c.pc != 0x00333764u) [[unlikely]] return; }
L_00333764:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[6], c.r[29].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] - 3296u);
    set32(c.r[4], c.r[16].w[0] + 176u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333784u); st128((c.r[6].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0023(c, 211u, depth + 1u); else { c.pc = 0x0018E0B0u; return; } if (c.pc != 0x00333784u) [[unlikely]] return; }
L_00333784:
    set32(c.r[4], c.r[16].w[0] + 176u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333794u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0023(c, 211u, depth + 1u); else { c.pc = 0x0018E0B0u; return; } if (c.pc != 0x00333794u) [[unlikely]] return; }
L_00333794:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[6], c.r[29].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] - 3280u);
    set32(c.r[4], c.r[16].w[0] + 176u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003337B4u); st128((c.r[6].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0023(c, 212u, depth + 1u); else { c.pc = 0x0018E0F0u; return; } if (c.pc != 0x003337B4u) [[unlikely]] return; }
L_003337B4:
    c.f[1] = ld32((c.r[29].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41980000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[16].w[0] + 176u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], c.r[29].w[0] + 32u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003337D8u); st32((c.r[29].w[0] + 36u), c.f[0]);  if (depth < kMaxDepth) unit_0023(c, 212u, depth + 1u); else { c.pc = 0x0018E0F0u; return; } if (c.pc != 0x003337D8u) [[unlikely]] return; }
L_003337D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003337F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033380Cu); set32(c.r[4], c.r[16].w[0] + 288u);  if (depth < kMaxDepth) unit_0023(c, 205u, depth + 1u); else { c.pc = 0x0018DFE0u; return; } if (c.pc != 0x0033380Cu) [[unlikely]] return; }
L_0033380C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 440u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333820u); set32(c.r[4], c.r[16].w[0] + 288u);  if (depth < kMaxDepth) unit_0023(c, 203u, depth + 1u); else { c.pc = 0x0018DFC0u; return; } if (c.pc != 0x00333820u) [[unlikely]] return; }
L_00333820:
    set32(c.r[4], c.r[16].w[0] + 288u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333830u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0023(c, 214u, depth + 1u); else { c.pc = 0x0018E160u; return; } if (c.pc != 0x00333830u) [[unlikely]] return; }
L_00333830:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033383Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008C(c, 543u, depth + 1u); else { c.pc = 0x003338D0u; return; } if (c.pc != 0x0033383Cu) [[unlikely]] return; }
L_0033383C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00333850:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00333874; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333870u);  if (depth < kMaxDepth) unit_0022(c, 256u, depth + 1u); else { c.pc = 0x00189B70u; return; } if (c.pc != 0x00333870u) [[unlikely]] return; }
L_00333870:
    set32(c.r[5], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 1;
L_00333874:
    st32((c.r[16].w[0] + 164u), c.r[5].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00333890:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003338B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003338B0u);  if (depth < kMaxDepth) unit_0022(c, 256u, depth + 1u); else { c.pc = 0x00189B70u; return; } if (c.pc != 0x003338B0u) [[unlikely]] return; }
L_003338B0:
    set32(c.r[5], ld32((c.r[2].w[0] + 68u)));
    c.budget -= 1;
L_003338B4:
    st32((c.r[16].w[0] + 276u), c.r[5].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003338D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003338F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003338F0u);  if (depth < kMaxDepth) unit_0022(c, 256u, depth + 1u); else { c.pc = 0x00189B70u; return; } if (c.pc != 0x003338F0u) [[unlikely]] return; }
L_003338F0:
    set32(c.r[5], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 1;
L_003338F4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 3264u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    ld128((c.r[3].w[0]) & ~15u, c.r[4]);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.r[3].d[0] = ld64((c.r[3].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[4]);
    st64((c.r[5].w[0] + 16u), c.r[3].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333920u); set32(c.r[4], ld32((c.r[2].w[0] + 48u)));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00333920u) [[unlikely]] return; }
L_00333920:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333930u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0023(c, 210u, depth + 1u); else { c.pc = 0x0018E080u; return; } if (c.pc != 0x00333930u) [[unlikely]] return; }
L_00333930:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[6], c.r[29].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] - 3232u);
    set32(c.r[4], c.r[16].w[0] + 288u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333950u); st128((c.r[6].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0023(c, 212u, depth + 1u); else { c.pc = 0x0018E0F0u; return; } if (c.pc != 0x00333950u) [[unlikely]] return; }
L_00333950:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00333960:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[7], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033397Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 356u, depth + 1u); else { c.pc = 0x0031F380u; return; } if (c.pc != 0x0033397Cu) [[unlikely]] return; }
L_0033397C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 22416u);
    set32(c.r[2], c.r[2].w[0] + 22504u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 208u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033399Cu); st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008C(c, 463u, depth + 1u); else { c.pc = 0x00333050u; return; } if (c.pc != 0x0033399Cu) [[unlikely]] return; }
L_0033399C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x414D0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].d[0] = c.r[2].d[0] | 21583ull;
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 180u), 0u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 548u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003339C0u); set32(c.r[4], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_0023(c, 203u, depth + 1u); else { c.pc = 0x0018DFC0u; return; } if (c.pc != 0x003339C0u) [[unlikely]] return; }
L_003339C0:
    set32(c.r[2], 0u + 4095u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st16((c.r[16].w[0] + 188u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 190u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003339D8u); set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));  if (depth < kMaxDepth) unit_002A(c, 144u, depth + 1u); else { c.pc = 0x001A9670u; return; } if (c.pc != 0x003339D8u) [[unlikely]] return; }
L_003339D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003339E0u); set32(c.r[4], 0u - 1u);  if (depth < kMaxDepth) unit_0021(c, 410u, depth + 1u); else { c.pc = 0x001873D0u; return; } if (c.pc != 0x003339E0u) [[unlikely]] return; }
L_003339E0:
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 72u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00333A00; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[3].w[0] + 72u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
L_00333A00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00333A10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00333A74; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 22416u);
    set32(c.r[2], c.r[2].w[0] + 22504u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 208u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333A50u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008C(c, 492u, depth + 1u); else { c.pc = 0x003333A0u; return; } if (c.pc != 0x00333A50u) [[unlikely]] return; }
L_00333A50:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333A5Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 359u, depth + 1u); else { c.pc = 0x0031F410u; return; } if (c.pc != 0x00333A5Cu) [[unlikely]] return; }
L_00333A5C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00333A78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333A74u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00333A74u) [[unlikely]] return; }
L_00333A74:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00333A78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00333A90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[1].w[0] - 632u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333AB0u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_009C(c, 186u, depth + 1u); else { c.pc = 0x00370F00u; return; } if (c.pc != 0x00333AB0u) [[unlikely]] return; }
L_00333AB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333AB8u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0022(c, 134u, depth + 1u); else { c.pc = 0x00188B50u; return; } if (c.pc != 0x00333AB8u) [[unlikely]] return; }
L_00333AB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333AC0u);  if (depth < kMaxDepth) unit_0022(c, 132u, depth + 1u); else { c.pc = 0x00188B30u; return; } if (c.pc != 0x00333AC0u) [[unlikely]] return; }
L_00333AC0:
    c.r[3].d[0] = c.r[2].sd[0] < 255ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00333AD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333AD4u);  if (depth < kMaxDepth) unit_0087(c, 386u, depth + 1u); else { c.pc = 0x0031F7A0u; return; } if (c.pc != 0x00333AD4u) [[unlikely]] return; }
L_00333AD4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00333AF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333B04u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 132u, depth + 1u); else { c.pc = 0x00188B30u; return; } if (c.pc != 0x00333B04u) [[unlikely]] return; }
L_00333B04:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[4], 0u - 32u);  if (t) { goto L_00333B4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333B14u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 396u, depth + 1u); else { c.pc = 0x0031F870u; return; } if (c.pc != 0x00333B14u) [[unlikely]] return; }
L_00333B14:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333B28u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002A(c, 139u, depth + 1u); else { c.pc = 0x001A95F0u; return; } if (c.pc != 0x00333B28u) [[unlikely]] return; }
L_00333B28:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 632u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333B38u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009C(c, 186u, depth + 1u); else { c.pc = 0x00370F00u; return; } if (c.pc != 0x00333B38u) [[unlikely]] return; }
L_00333B38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333B40u);  if (depth < kMaxDepth) unit_008B(c, 193u, depth + 1u); else { c.pc = 0x0032E220u; return; } if (c.pc != 0x00333B40u) [[unlikely]] return; }
L_00333B40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333B48u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0021(c, 410u, depth + 1u); else { c.pc = 0x001873D0u; return; } if (c.pc != 0x00333B48u) [[unlikely]] return; }
L_00333B48:
    set32(c.r[4], 0u - 32u);
    c.budget -= 1;
L_00333B4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333B54u);  if (depth < kMaxDepth) unit_0022(c, 134u, depth + 1u); else { c.pc = 0x00188B50u; return; } if (c.pc != 0x00333B54u) [[unlikely]] return; }
L_00333B54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00333B70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333B88u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0022(c, 256u, depth + 1u); else { c.pc = 0x00189B70u; return; } if (c.pc != 0x00333B88u) [[unlikely]] return; }
L_00333B88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333B90u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 256u, depth + 1u); else { c.pc = 0x0018E780u; return; } if (c.pc != 0x00333B90u) [[unlikely]] return; }
L_00333B90:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00333BA0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00333BA0u) [[unlikely]] return; }
L_00333BA0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 13u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333BB4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 198u, depth + 1u); else { c.pc = 0x001892F0u; return; } if (c.pc != 0x00333BB4u) [[unlikely]] return; }
L_00333BB4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 14u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333BC8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 198u, depth + 1u); else { c.pc = 0x001892F0u; return; } if (c.pc != 0x00333BC8u) [[unlikely]] return; }
L_00333BC8:
    set32(c.r[2], ld32((c.r[17].w[0] + 176u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333BD8u); st8((c.r[2].w[0] + 72u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0087(c, 375u, depth + 1u); else { c.pc = 0x0031F5E0u; return; } if (c.pc != 0x00333BD8u) [[unlikely]] return; }
L_00333BD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00333BF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00333C14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333C14u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00333C14u) [[unlikely]] return; }
L_00333C14:
    st32((c.r[16].w[0] + 28u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00333C3C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00333C3C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00333C3Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00333C3Cu) [[unlikely]] return; }
L_00333C3C:
    st32((c.r[16].w[0] + 24u), 0u);
    set32(c.r[2], 0u + 6u);
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333C50u); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x00333C50u) [[unlikely]] return; }
L_00333C50:
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333C60u); set32(c.r[5], 0u + 48u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x00333C60u) [[unlikely]] return; }
L_00333C60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333C68u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 21u, depth + 1u); else { c.pc = 0x001301E0u; return; } if (c.pc != 0x00333C68u) [[unlikely]] return; }
L_00333C68:
    set32(c.r[4], c.r[16].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333C74u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008C(c, 539u, depth + 1u); else { c.pc = 0x00333850u; return; } if (c.pc != 0x00333C74u) [[unlikely]] return; }
L_00333C74:
    set32(c.r[4], c.r[16].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333C80u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008C(c, 541u, depth + 1u); else { c.pc = 0x00333890u; return; } if (c.pc != 0x00333C80u) [[unlikely]] return; }
L_00333C80:
    set32(c.r[4], c.r[16].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333C8Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008C(c, 543u, depth + 1u); else { c.pc = 0x003338D0u; return; } if (c.pc != 0x00333C8Cu) [[unlikely]] return; }
L_00333C8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333C94u); set32(c.r[4], 0u + 14u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x00333C94u) [[unlikely]] return; }
L_00333C94:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00333CB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333CC0u);  if (depth < kMaxDepth) unit_0087(c, 380u, depth + 1u); else { c.pc = 0x0031F6A0u; return; } if (c.pc != 0x00333CC0u) [[unlikely]] return; }
L_00333CC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333CC8u);  if (depth < kMaxDepth) unit_0087(c, 346u, depth + 1u); else { c.pc = 0x0031F2D0u; return; } if (c.pc != 0x00333CC8u) [[unlikely]] return; }
L_00333CC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333CD0u); set32(c.r[4], 0u + 40u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00333CD0u) [[unlikely]] return; }
L_00333CD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 16u);  if (t) { goto L_00333CEC; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333CE8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_008B(c, 128u, depth + 1u); else { c.pc = 0x0032CE80u; return; } if (c.pc != 0x00333CE8u) [[unlikely]] return; }
L_00333CE8:
    set32(c.r[4], 0u + 16u);
    c.budget -= 1;
L_00333CEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333CF4u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x00333CF4u) [[unlikely]] return; }
L_00333CF4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00333D00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333D18u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0023(c, 169u, depth + 1u); else { c.pc = 0x0018DA60u; return; } if (c.pc != 0x00333D18u) [[unlikely]] return; }
L_00333D18:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00333D28u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00333D28u) [[unlikely]] return; }
L_00333D28:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333D38u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008C(c, 539u, depth + 1u); else { c.pc = 0x00333850u; return; } if (c.pc != 0x00333D38u) [[unlikely]] return; }
L_00333D38:
    set32(c.r[4], c.r[17].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333D44u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008C(c, 543u, depth + 1u); else { c.pc = 0x003338D0u; return; } if (c.pc != 0x00333D44u) [[unlikely]] return; }
L_00333D44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333D4Cu);  if (depth < kMaxDepth) unit_0022(c, 256u, depth + 1u); else { c.pc = 0x00189B70u; return; } if (c.pc != 0x00333D4Cu) [[unlikely]] return; }
L_00333D4C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 12u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333D60u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 198u, depth + 1u); else { c.pc = 0x001892F0u; return; } if (c.pc != 0x00333D60u) [[unlikely]] return; }
L_00333D60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] - 3216u);
    set32(c.r[4], c.r[17].w[0] + 208u);
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    set32(c.r[2], c.r[16].w[0] << 3);
    st128((c.r[5].w[0]) & ~15u, c.r[6]);
    set32(c.r[3], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 52u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333DA4u); st32((c.r[29].w[0] + 52u), c.f[0]);  if (depth < kMaxDepth) unit_008C(c, 511u, depth + 1u); else { c.pc = 0x003335B0u; return; } if (c.pc != 0x00333DA4u) [[unlikely]] return; }
L_00333DA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00333DC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], 0u + 1u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333DE4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 356u, depth + 1u); else { c.pc = 0x0031F380u; return; } if (c.pc != 0x00333DE4u) [[unlikely]] return; }
L_00333DE4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 22240u);
    set32(c.r[2], c.r[2].w[0] + 22328u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 208u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333E04u); st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008C(c, 463u, depth + 1u); else { c.pc = 0x00333050u; return; } if (c.pc != 0x00333E04u) [[unlikely]] return; }
L_00333E04:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x414D0000u);
    set32(c.r[2], 0u + 4095u);
    c.r[3].d[0] = c.r[3].d[0] | 21317ull;
    set32(c.r[4], c.r[16].w[0] + 208u);
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[16].w[0] + 180u), 0u);
    st16((c.r[16].w[0] + 188u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333E2Cu); st16((c.r[16].w[0] + 190u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008C(c, 510u, depth + 1u); else { c.pc = 0x003335A0u; return; } if (c.pc != 0x00333E2Cu) [[unlikely]] return; }
L_00333E2C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00333E40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00333EB0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 22240u);
    set32(c.r[2], c.r[2].w[0] + 22328u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 208u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333E80u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008C(c, 510u, depth + 1u); else { c.pc = 0x003335A0u; return; } if (c.pc != 0x00333E80u) [[unlikely]] return; }
L_00333E80:
    set32(c.r[4], c.r[17].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333E8Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008C(c, 492u, depth + 1u); else { c.pc = 0x003333A0u; return; } if (c.pc != 0x00333E8Cu) [[unlikely]] return; }
L_00333E8C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333E98u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 359u, depth + 1u); else { c.pc = 0x0031F410u; return; } if (c.pc != 0x00333E98u) [[unlikely]] return; }
L_00333E98:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00333EB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333EB0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00333EB0u) [[unlikely]] return; }
L_00333EB0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00333EB4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00333ED0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00333EF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333EF8u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00333EF8u) [[unlikely]] return; }
L_00333EF8:
    st32((c.r[16].w[0] + 28u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00333F20; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00333F20; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00333F20u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00333F20u) [[unlikely]] return; }
L_00333F20:
    st32((c.r[16].w[0] + 24u), 0u);
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333F34u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x00333F34u) [[unlikely]] return; }
L_00333F34:
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333F44u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x00333F44u) [[unlikely]] return; }
L_00333F44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333F4Cu);  if (depth < kMaxDepth) unit_0022(c, 256u, depth + 1u); else { c.pc = 0x00189B70u; return; } if (c.pc != 0x00333F4Cu) [[unlikely]] return; }
L_00333F4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333F54u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 256u, depth + 1u); else { c.pc = 0x0018E780u; return; } if (c.pc != 0x00333F54u) [[unlikely]] return; }
L_00333F54:
    set32(c.r[5], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[2].w[0] + 32u);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00333F88; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00333F88:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00333FA4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00333FA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333FACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 21u, depth + 1u); else { c.pc = 0x001301E0u; return; } if (c.pc != 0x00333FACu) [[unlikely]] return; }
L_00333FAC:
    set32(c.r[4], c.r[16].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333FB8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008C(c, 539u, depth + 1u); else { c.pc = 0x00333850u; return; } if (c.pc != 0x00333FB8u) [[unlikely]] return; }
L_00333FB8:
    set32(c.r[4], c.r[16].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333FC4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008C(c, 541u, depth + 1u); else { c.pc = 0x00333890u; return; } if (c.pc != 0x00333FC4u) [[unlikely]] return; }
L_00333FC4:
    set32(c.r[4], c.r[16].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333FD0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008C(c, 543u, depth + 1u); else { c.pc = 0x003338D0u; return; } if (c.pc != 0x00333FD0u) [[unlikely]] return; }
L_00333FD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00333FF0:
    set32(c.r[2], ld32((c.r[4].w[0] + 176u)));
    c.budget -= 3;
    { st8((c.r[2].w[0] + 72u), static_cast<std::uint8_t>(0u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0031F6A0u | kUnwind; return; } [[clang::musttail]] return unit_0087(c, 380u, depth); }
}

}
