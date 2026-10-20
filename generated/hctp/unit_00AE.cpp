#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00AE[4096] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0,
    0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 12, 0, 0, 0, 0, 0, 13, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0,
    0, 17, 0, 0, 0, 0, 0, 0, 0, 18, 0, 19, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 0, 0,
    0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 30, 0, 31, 0, 32, 0, 33, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 36, 0, 0,
    0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 40, 0, 41, 0,
    42, 0, 43, 0, 44, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 47, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0,
    54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0,
    0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0,
    68, 0, 0, 0, 0, 0, 69, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0,
    0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0,
    80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 82, 83, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0,
    86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 91, 0, 0, 0, 0, 0,
    92, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0,
    98, 0, 99, 0, 100, 0, 101, 0, 102, 0, 103, 0, 104, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0,
    108, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0,
    118, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 125, 0, 126, 0, 0, 0,
    0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0,
    131, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0,
    0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0,
    0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0,
    0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 158,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0,
    161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 0,
    0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175,
    0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 0, 0,
    0, 0, 180, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 187, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 192, 0, 193, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 195,
    0, 0, 0, 0, 0, 0, 196, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 201, 0, 0, 202, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 205, 0,
    206, 0, 207, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 212, 0, 0, 0, 0,
    0, 0, 0, 0, 213, 0, 214, 0, 215, 0, 216, 0, 217, 0, 218, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 221, 0, 0, 0,
    222, 0, 0, 0, 223, 0, 224, 0, 225, 0, 226, 0, 227, 0, 228, 0, 229, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 0,
    0, 0, 232, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0,
    237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0,
    0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 246,
    0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0,
    250, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 253, 0, 0, 0, 0, 0, 254, 0,
    255, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 257, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0,
    0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0,
    0, 0, 0, 0, 272, 0, 273, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0,
    278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 287, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    290, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0,
    299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 305, 0,
    0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0,
    311, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 314, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    318, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 326, 0, 0,
    0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 331,
    0, 0, 0, 332, 0, 0, 333, 0, 334, 0, 0, 335, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 341, 0, 0, 0, 0, 0, 0, 342,
    0, 0, 0, 343, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 346, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 364, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0,
    0, 369, 0, 0, 0, 0, 370, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0,
    0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0,
    0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0,
    0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0,
    0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 410, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 413, 0,
    0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0,
    0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 425, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0,
    427, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0,
    0, 0, 0, 0, 0, 431, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 436, 0, 437, 0, 438, 0, 439, 0, 440, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 441, 0, 442, 0, 0, 0, 0, 0, 443, 0, 444, 0, 0, 0, 0, 0, 445, 0, 446, 0, 0, 0, 447, 0, 448, 0, 449, 0, 450, 0,
    451, 0, 452, 0, 453, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 461, 0, 0, 462, 0, 0, 0, 0, 0, 0,
    0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 467, 0,
    468, 0, 469, 0, 470, 0, 0, 0, 0, 0, 0, 0, 471, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00AE(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003B8000;
    case 2u: goto L_003B801C;
    case 3u: goto L_003B8050;
    case 4u: goto L_003B8088;
    case 5u: goto L_003B80AC;
    case 6u: goto L_003B80D0;
    case 7u: goto L_003B80F8;
    case 8u: goto L_003B8108;
    case 9u: goto L_003B8118;
    case 10u: goto L_003B8130;
    case 11u: goto L_003B8158;
    case 12u: goto L_003B8160;
    case 13u: goto L_003B8178;
    case 14u: goto L_003B81CC;
    case 15u: goto L_003B81D8;
    case 16u: goto L_003B81F0;
    case 17u: goto L_003B8204;
    case 18u: goto L_003B8224;
    case 19u: goto L_003B822C;
    case 20u: goto L_003B8234;
    case 21u: goto L_003B8258;
    case 22u: goto L_003B8270;
    case 23u: goto L_003B8288;
    case 24u: goto L_003B82C4;
    case 25u: goto L_003B82D4;
    case 26u: goto L_003B82E4;
    case 27u: goto L_003B8384;
    case 28u: goto L_003B8398;
    case 29u: goto L_003B83A8;
    case 30u: goto L_003B83B0;
    case 31u: goto L_003B83B8;
    case 32u: goto L_003B83C0;
    case 33u: goto L_003B83C8;
    case 34u: goto L_003B83D0;
    case 35u: goto L_003B83E0;
    case 36u: goto L_003B83F4;
    case 37u: goto L_003B8408;
    case 38u: goto L_003B8440;
    case 39u: goto L_003B8468;
    case 40u: goto L_003B8470;
    case 41u: goto L_003B8478;
    case 42u: goto L_003B8480;
    case 43u: goto L_003B8488;
    case 44u: goto L_003B8490;
    case 45u: goto L_003B8498;
    case 46u: goto L_003B84B0;
    case 47u: goto L_003B84BC;
    case 48u: goto L_003B84C8;
    case 49u: goto L_003B84F0;
    case 50u: goto L_003B8518;
    case 51u: goto L_003B8540;
    case 52u: goto L_003B8558;
    case 53u: goto L_003B856C;
    case 54u: goto L_003B8580;
    case 55u: goto L_003B8598;
    case 56u: goto L_003B85C4;
    case 57u: goto L_003B85D8;
    case 58u: goto L_003B8604;
    case 59u: goto L_003B8618;
    case 60u: goto L_003B863C;
    case 61u: goto L_003B8650;
    case 62u: goto L_003B8674;
    case 63u: goto L_003B8688;
    case 64u: goto L_003B86A0;
    case 65u: goto L_003B86B8;
    case 66u: goto L_003B86D0;
    case 67u: goto L_003B86E8;
    case 68u: goto L_003B8700;
    case 69u: goto L_003B8718;
    case 70u: goto L_003B8720;
    case 71u: goto L_003B8738;
    case 72u: goto L_003B8750;
    case 73u: goto L_003B875C;
    case 74u: goto L_003B8770;
    case 75u: goto L_003B8788;
    case 76u: goto L_003B87A0;
    case 77u: goto L_003B87B8;
    case 78u: goto L_003B87D0;
    case 79u: goto L_003B87E8;
    case 80u: goto L_003B8800;
    case 81u: goto L_003B8818;
    case 82u: goto L_003B882C;
    case 83u: goto L_003B8830;
    case 84u: goto L_003B8850;
    case 85u: goto L_003B8868;
    case 86u: goto L_003B8880;
    case 87u: goto L_003B8898;
    case 88u: goto L_003B88B0;
    case 89u: goto L_003B88C8;
    case 90u: goto L_003B88E0;
    case 91u: goto L_003B88E8;
    case 92u: goto L_003B8900;
    case 93u: goto L_003B8918;
    case 94u: goto L_003B8930;
    case 95u: goto L_003B8948;
    case 96u: goto L_003B8950;
    case 97u: goto L_003B8968;
    case 98u: goto L_003B8980;
    case 99u: goto L_003B8988;
    case 100u: goto L_003B8990;
    case 101u: goto L_003B8998;
    case 102u: goto L_003B89A0;
    case 103u: goto L_003B89A8;
    case 104u: goto L_003B89B0;
    case 105u: goto L_003B89C0;
    case 106u: goto L_003B89D0;
    case 107u: goto L_003B89E8;
    case 108u: goto L_003B8A00;
    case 109u: goto L_003B8A10;
    case 110u: goto L_003B8A30;
    case 111u: goto L_003B8A58;
    case 112u: goto L_003B8A90;
    case 113u: goto L_003B8AD8;
    case 114u: goto L_003B8B24;
    case 115u: goto L_003B8B30;
    case 116u: goto L_003B8B40;
    case 117u: goto L_003B8B64;
    case 118u: goto L_003B8B80;
    case 119u: goto L_003B8B98;
    case 120u: goto L_003B8BC4;
    case 121u: goto L_003B8C08;
    case 122u: goto L_003B8C30;
    case 123u: goto L_003B8C38;
    case 124u: goto L_003B8C48;
    case 125u: goto L_003B8C68;
    case 126u: goto L_003B8C70;
    case 127u: goto L_003B8C94;
    case 128u: goto L_003B8CB0;
    case 129u: goto L_003B8CC0;
    case 130u: goto L_003B8CE4;
    case 131u: goto L_003B8D00;
    case 132u: goto L_003B8D18;
    case 133u: goto L_003B8D30;
    case 134u: goto L_003B8D44;
    case 135u: goto L_003B8D60;
    case 136u: goto L_003B8D78;
    case 137u: goto L_003B8D90;
    case 138u: goto L_003B8DD4;
    case 139u: goto L_003B8E00;
    case 140u: goto L_003B8E38;
    case 141u: goto L_003B8E50;
    case 142u: goto L_003B8E6C;
    case 143u: goto L_003B8E9C;
    case 144u: goto L_003B8EC8;
    case 145u: goto L_003B8EDC;
    case 146u: goto L_003B8EF0;
    case 147u: goto L_003B8F08;
    case 148u: goto L_003B8F2C;
    case 149u: goto L_003B8F34;
    case 150u: goto L_003B8F74;
    case 151u: goto L_003B8F90;
    case 152u: goto L_003B8FA8;
    case 153u: goto L_003B8FC0;
    case 154u: goto L_003B8FE8;
    case 155u: goto L_003B9038;
    case 156u: goto L_003B9050;
    case 157u: goto L_003B9058;
    case 158u: goto L_003B907C;
    case 159u: goto L_003B9108;
    case 160u: goto L_003B915C;
    case 161u: goto L_003B9180;
    case 162u: goto L_003B91B8;
    case 163u: goto L_003B91C0;
    case 164u: goto L_003B9208;
    case 165u: goto L_003B9234;
    case 166u: goto L_003B924C;
    case 167u: goto L_003B9264;
    case 168u: goto L_003B9278;
    case 169u: goto L_003B92A0;
    case 170u: goto L_003B92D8;
    case 171u: goto L_003B92F0;
    case 172u: goto L_003B9308;
    case 173u: goto L_003B9330;
    case 174u: goto L_003B9350;
    case 175u: goto L_003B937C;
    case 176u: goto L_003B9390;
    case 177u: goto L_003B93A8;
    case 178u: goto L_003B93D8;
    case 179u: goto L_003B93E8;
    case 180u: goto L_003B9408;
    case 181u: goto L_003B9410;
    case 182u: goto L_003B9434;
    case 183u: goto L_003B9444;
    case 184u: goto L_003B944C;
    case 185u: goto L_003B9470;
    case 186u: goto L_003B94BC;
    case 187u: goto L_003B94C8;
    case 188u: goto L_003B94D4;
    case 189u: goto L_003B9500;
    case 190u: goto L_003B9518;
    case 191u: goto L_003B9530;
    case 192u: goto L_003B9538;
    case 193u: goto L_003B9540;
    case 194u: goto L_003B9560;
    case 195u: goto L_003B957C;
    case 196u: goto L_003B9598;
    case 197u: goto L_003B95A0;
    case 198u: goto L_003B9604;
    case 199u: goto L_003B9638;
    case 200u: goto L_003B9660;
    case 201u: goto L_003B966C;
    case 202u: goto L_003B9678;
    case 203u: goto L_003B96C8;
    case 204u: goto L_003B96E8;
    case 205u: goto L_003B96F8;
    case 206u: goto L_003B9700;
    case 207u: goto L_003B9708;
    case 208u: goto L_003B971C;
    case 209u: goto L_003B9770;
    case 210u: goto L_003B97B0;
    case 211u: goto L_003B97D8;
    case 212u: goto L_003B97EC;
    case 213u: goto L_003B9810;
    case 214u: goto L_003B9818;
    case 215u: goto L_003B9820;
    case 216u: goto L_003B9828;
    case 217u: goto L_003B9830;
    case 218u: goto L_003B9838;
    case 219u: goto L_003B9840;
    case 220u: goto L_003B9858;
    case 221u: goto L_003B9870;
    case 222u: goto L_003B9880;
    case 223u: goto L_003B9890;
    case 224u: goto L_003B9898;
    case 225u: goto L_003B98A0;
    case 226u: goto L_003B98A8;
    case 227u: goto L_003B98B0;
    case 228u: goto L_003B98B8;
    case 229u: goto L_003B98C0;
    case 230u: goto L_003B98D8;
    case 231u: goto L_003B98F0;
    case 232u: goto L_003B9908;
    case 233u: goto L_003B9920;
    case 234u: goto L_003B9938;
    case 235u: goto L_003B9950;
    case 236u: goto L_003B9968;
    case 237u: goto L_003B9980;
    case 238u: goto L_003B9998;
    case 239u: goto L_003B99B0;
    case 240u: goto L_003B99C8;
    case 241u: goto L_003B99F8;
    case 242u: goto L_003B9A10;
    case 243u: goto L_003B9A28;
    case 244u: goto L_003B9A40;
    case 245u: goto L_003B9A58;
    case 246u: goto L_003B9A7C;
    case 247u: goto L_003B9A98;
    case 248u: goto L_003B9AB8;
    case 249u: goto L_003B9AE0;
    case 250u: goto L_003B9B00;
    case 251u: goto L_003B9B18;
    case 252u: goto L_003B9B58;
    case 253u: goto L_003B9B60;
    case 254u: goto L_003B9B78;
    case 255u: goto L_003B9B80;
    case 256u: goto L_003B9B98;
    case 257u: goto L_003B9BB0;
    case 258u: goto L_003B9BB8;
    case 259u: goto L_003B9BD0;
    case 260u: goto L_003B9BF4;
    case 261u: goto L_003B9C08;
    case 262u: goto L_003B9C28;
    case 263u: goto L_003B9C48;
    case 264u: goto L_003B9C8C;
    case 265u: goto L_003B9CC0;
    case 266u: goto L_003B9D20;
    case 267u: goto L_003B9D80;
    case 268u: goto L_003B9E00;
    case 269u: goto L_003B9E34;
    case 270u: goto L_003B9E50;
    case 271u: goto L_003B9E70;
    case 272u: goto L_003B9E90;
    case 273u: goto L_003B9E98;
    case 274u: goto L_003B9EA8;
    case 275u: goto L_003B9ED8;
    case 276u: goto L_003B9F80;
    case 277u: goto L_003B9FE8;
    case 278u: goto L_003BA000;
    case 279u: goto L_003BA030;
    case 280u: goto L_003BA070;
    case 281u: goto L_003BA098;
    case 282u: goto L_003BA0E4;
    case 283u: goto L_003BA10C;
    case 284u: goto L_003BA138;
    case 285u: goto L_003BA1A0;
    case 286u: goto L_003BA1EC;
    case 287u: goto L_003BA1F8;
    case 288u: goto L_003BA230;
    case 289u: goto L_003BA258;
    case 290u: goto L_003BA280;
    case 291u: goto L_003BA2A0;
    case 292u: goto L_003BA2E0;
    case 293u: goto L_003BA318;
    case 294u: goto L_003BA328;
    case 295u: goto L_003BA338;
    case 296u: goto L_003BA350;
    case 297u: goto L_003BA3C8;
    case 298u: goto L_003BA3DC;
    case 299u: goto L_003BA400;
    case 300u: goto L_003BA468;
    case 301u: goto L_003BA4A0;
    case 302u: goto L_003BA4B0;
    case 303u: goto L_003BA4D8;
    case 304u: goto L_003BA4E8;
    case 305u: goto L_003BA4F8;
    case 306u: goto L_003BA508;
    case 307u: goto L_003BA518;
    case 308u: goto L_003BA540;
    case 309u: goto L_003BA600;
    case 310u: goto L_003BA670;
    case 311u: goto L_003BA680;
    case 312u: goto L_003BA698;
    case 313u: goto L_003BA6B8;
    case 314u: goto L_003BA6D0;
    case 315u: goto L_003BA6E0;
    case 316u: goto L_003BA738;
    case 317u: goto L_003BA74C;
    case 318u: goto L_003BA780;
    case 319u: goto L_003BA7A0;
    case 320u: goto L_003BA7B8;
    case 321u: goto L_003BA7D0;
    case 322u: goto L_003BA7F8;
    case 323u: goto L_003BA850;
    case 324u: goto L_003BA8C4;
    case 325u: goto L_003BA8E0;
    case 326u: goto L_003BA8F4;
    case 327u: goto L_003BA910;
    case 328u: goto L_003BA92C;
    case 329u: goto L_003BA950;
    case 330u: goto L_003BA96C;
    case 331u: goto L_003BA97C;
    case 332u: goto L_003BA98C;
    case 333u: goto L_003BA998;
    case 334u: goto L_003BA9A0;
    case 335u: goto L_003BA9AC;
    case 336u: goto L_003BA9B4;
    case 337u: goto L_003BAA38;
    case 338u: goto L_003BAA6C;
    case 339u: goto L_003BAAB0;
    case 340u: goto L_003BAB58;
    case 341u: goto L_003BAB60;
    case 342u: goto L_003BAB7C;
    case 343u: goto L_003BAB8C;
    case 344u: goto L_003BAB94;
    case 345u: goto L_003BAC2C;
    case 346u: goto L_003BAC38;
    case 347u: goto L_003BAC40;
    case 348u: goto L_003BAD38;
    case 349u: goto L_003BADA0;
    case 350u: goto L_003BADD0;
    case 351u: goto L_003BADEC;
    case 352u: goto L_003BAE48;
    case 353u: goto L_003BAE50;
    case 354u: goto L_003BAE84;
    case 355u: goto L_003BAEB0;
    case 356u: goto L_003BAEF8;
    case 357u: goto L_003BAF40;
    case 358u: goto L_003BAFB8;
    case 359u: goto L_003BAFD0;
    case 360u: goto L_003BAFEC;
    case 361u: goto L_003BB028;
    case 362u: goto L_003BB050;
    case 363u: goto L_003BB064;
    case 364u: goto L_003BB094;
    case 365u: goto L_003BB0A4;
    case 366u: goto L_003BB0D8;
    case 367u: goto L_003BB144;
    case 368u: goto L_003BB16C;
    case 369u: goto L_003BB184;
    case 370u: goto L_003BB198;
    case 371u: goto L_003BB1AC;
    case 372u: goto L_003BB1D8;
    case 373u: goto L_003BB218;
    case 374u: goto L_003BB23C;
    case 375u: goto L_003BB258;
    case 376u: goto L_003BB288;
    case 377u: goto L_003BB2B4;
    case 378u: goto L_003BB2E0;
    case 379u: goto L_003BB304;
    case 380u: goto L_003BB330;
    case 381u: goto L_003BB358;
    case 382u: goto L_003BB380;
    case 383u: goto L_003BB3A8;
    case 384u: goto L_003BB3D4;
    case 385u: goto L_003BB3FC;
    case 386u: goto L_003BB430;
    case 387u: goto L_003BB458;
    case 388u: goto L_003BB480;
    case 389u: goto L_003BB4A8;
    case 390u: goto L_003BB4D0;
    case 391u: goto L_003BB4F8;
    case 392u: goto L_003BB52C;
    case 393u: goto L_003BB554;
    case 394u: goto L_003BB570;
    case 395u: goto L_003BB588;
    case 396u: goto L_003BB5B0;
    case 397u: goto L_003BB5E4;
    case 398u: goto L_003BB608;
    case 399u: goto L_003BB62C;
    case 400u: goto L_003BB650;
    case 401u: goto L_003BB698;
    case 402u: goto L_003BB6C4;
    case 403u: goto L_003BB6EC;
    case 404u: goto L_003BB70C;
    case 405u: goto L_003BB734;
    case 406u: goto L_003BB758;
    case 407u: goto L_003BB780;
    case 408u: goto L_003BB7AC;
    case 409u: goto L_003BB7D8;
    case 410u: goto L_003BB7E8;
    case 411u: goto L_003BB818;
    case 412u: goto L_003BB868;
    case 413u: goto L_003BB878;
    case 414u: goto L_003BB898;
    case 415u: goto L_003BB8A8;
    case 416u: goto L_003BB8C8;
    case 417u: goto L_003BB900;
    case 418u: goto L_003BB960;
    case 419u: goto L_003BB9B0;
    case 420u: goto L_003BBA30;
    case 421u: goto L_003BBA3C;
    case 422u: goto L_003BBA74;
    case 423u: goto L_003BBA98;
    case 424u: goto L_003BBAB4;
    case 425u: goto L_003BBAC8;
    case 426u: goto L_003BBADC;
    case 427u: goto L_003BBB00;
    case 428u: goto L_003BBB08;
    case 429u: goto L_003BBB40;
    case 430u: goto L_003BBB70;
    case 431u: goto L_003BBB94;
    case 432u: goto L_003BBB98;
    case 433u: goto L_003BBBC0;
    case 434u: goto L_003BBBDC;
    case 435u: goto L_003BBC30;
    case 436u: goto L_003BBC40;
    case 437u: goto L_003BBC48;
    case 438u: goto L_003BBC50;
    case 439u: goto L_003BBC58;
    case 440u: goto L_003BBC60;
    case 441u: goto L_003BBC88;
    case 442u: goto L_003BBC90;
    case 443u: goto L_003BBCA8;
    case 444u: goto L_003BBCB0;
    case 445u: goto L_003BBCC8;
    case 446u: goto L_003BBCD0;
    case 447u: goto L_003BBCE0;
    case 448u: goto L_003BBCE8;
    case 449u: goto L_003BBCF0;
    case 450u: goto L_003BBCF8;
    case 451u: goto L_003BBD00;
    case 452u: goto L_003BBD08;
    case 453u: goto L_003BBD10;
    case 454u: goto L_003BBD18;
    case 455u: goto L_003BBD40;
    case 456u: goto L_003BBD70;
    case 457u: goto L_003BBDB8;
    case 458u: goto L_003BBDD8;
    case 459u: goto L_003BBE28;
    case 460u: goto L_003BBE4C;
    case 461u: goto L_003BBE58;
    case 462u: goto L_003BBE64;
    case 463u: goto L_003BBE88;
    case 464u: goto L_003BBEA8;
    case 465u: goto L_003BBEC0;
    case 466u: goto L_003BBEF0;
    case 467u: goto L_003BBEF8;
    case 468u: goto L_003BBF00;
    case 469u: goto L_003BBF08;
    case 470u: goto L_003BBF10;
    case 471u: goto L_003BBF30;
    case 472u: goto L_003BBF38;
    case 473u: goto L_003BBF70;
    case 474u: goto L_003BBFA0;
    case 475u: goto L_003BBFCC;
    default: bad_entry(c, 0x003B8000u); return;
    }
L_003B8000:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; set32(c.r[16], c.r[3].w[0] + 28144u);  if (t) { goto L_003B8040; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B801Cu);  if (depth < kMaxDepth) unit_00AD(c, 379u, depth + 1u); else { c.pc = 0x003B71A8u; return; } if (c.pc != 0x003B801Cu) [[unlikely]] return; }
L_003B801C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003B8044; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7140u | kUnwind; return; } [[clang::musttail]] return unit_00AD(c, 375u, depth); }
L_003B8040:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003B8044:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B8050:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    set32(c.r[17], c.r[2].w[0] + 28060u);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; st64((c.r[29].w[0] + 64u), c.r[31].d[0]);  if (t) { goto L_003B80B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[16], c.r[2].w[0] + 28136u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8088u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0002(c, 468u, depth + 1u); else { c.pc = 0x0010BB20u; return; } if (c.pc != 0x003B8088u) [[unlikely]] return; }
L_003B8088:
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 12u);  if (t) { goto L_003B80A0; } }
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[4].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003B80BC; }
L_003B80A0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B80ACu);  if (depth < kMaxDepth) unit_0002(c, 474u, depth + 1u); else { c.pc = 0x0010BB50u; return; } if (c.pc != 0x003B80ACu) [[unlikely]] return; }
L_003B80AC:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { st32((c.r[17].w[0]), 0u);  goto L_003B80B8; }
L_003B80B8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003B80BC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003B80D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 28060u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7190u | kUnwind; return; } [[clang::musttail]] return unit_00AD(c, 378u, depth); }
L_003B80F8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8108u);  if (depth < kMaxDepth) unit_00AD(c, 491u, depth + 1u); else { c.pc = 0x003B7FC8u; return; } if (c.pc != 0x003B8108u) [[unlikely]] return; }
L_003B8108:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B80D0u | kUnwind; return; } goto L_003B80D0; }
L_003B8118:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B80F8u | kUnwind; return; } goto L_003B80F8; }
L_003B8130:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[2].w[0] + 28248u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_003B8164; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8158u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AF(c, 345u, depth + 1u); else { c.pc = 0x003BEDB0u; return; } if (c.pc != 0x003B8158u) [[unlikely]] return; }
L_003B8158:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8160u);  if (depth < kMaxDepth) unit_00AD(c, 177u, depth + 1u); else { c.pc = 0x003B5940u; return; } if (c.pc != 0x003B8160u) [[unlikely]] return; }
L_003B8160:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_003B8164:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B8178:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0] + 32u), c.r[31].d[0]);  if (t) { goto L_003B81C0; } }
    set32(c.r[6], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[7], 0u + 25u);
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[5], c.r[6].w[0] + 1u);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[29].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[29].w[0]), c.r[3].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[7].w[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 8u), c.r[6].w[0]);  if (t) { goto L_003B81C4; } }
L_003B81C0:
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003B81C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B81CCu); c.r[4].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 427u, depth + 1u); else { c.pc = 0x003B76F0u; return; } if (c.pc != 0x003B81CCu) [[unlikely]] return; }
L_003B81CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003B81D8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B78B8u | kUnwind; return; } [[clang::musttail]] return unit_00AD(c, 440u, depth); }
L_003B81F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8204u);  if (depth < kMaxDepth) unit_00AD(c, 479u, depth + 1u); else { c.pc = 0x003B7E30u; return; } if (c.pc != 0x003B8204u) [[unlikely]] return; }
L_003B8204:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[16], c.r[2].w[0] + 28248u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003B8248; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8224u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AD(c, 480u, depth + 1u); else { c.pc = 0x003B7E48u; return; } if (c.pc != 0x003B8224u) [[unlikely]] return; }
L_003B8224:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B822Cu);  if (depth < kMaxDepth) unit_00AF(c, 345u, depth + 1u); else { c.pc = 0x003BEDB0u; return; } if (c.pc != 0x003B822Cu) [[unlikely]] return; }
L_003B822C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8234u);  if (depth < kMaxDepth) unit_00AD(c, 177u, depth + 1u); else { c.pc = 0x003B5940u; return; } if (c.pc != 0x003B8234u) [[unlikely]] return; }
L_003B8234:
    st32((c.r[16].w[0]), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B8248:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7E48u | kUnwind; return; } [[clang::musttail]] return unit_00AD(c, 480u, depth); }
L_003B8258:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B4(c, 316u, depth); }
L_003B8270:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B4(c, 317u, depth); }
L_003B8288:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    set32(c.r[2], c.r[2].w[0] + 27984u);
    st64((c.r[29].w[0] + 72u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 27988u)));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 13;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[18].w[0] + 27988u);  goto L_003B8418; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B82C4u);  if (depth < kMaxDepth) unit_00B4(c, 394u, depth + 1u); else { c.pc = 0x003D3CA0u; return; } if (c.pc != 0x003B82C4u) [[unlikely]] return; }
L_003B82C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B82D4u); set32(c.r[4], c.r[4].w[0] + 27168u);  if (depth < kMaxDepth) unit_00B4(c, 371u, depth + 1u); else { c.pc = 0x003D3998u; return; } if (c.pc != 0x003B82D4u) [[unlikely]] return; }
L_003B82D4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[4], c.r[4].w[0] + 27304u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B82E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 372u, depth + 1u); else { c.pc = 0x003D39B0u; return; } if (c.pc != 0x003B82E4u) [[unlikely]] return; }
L_003B82E4:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 20u)));  goto L_003B8338; }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], 0u + 24u);
    set32(c.r[4], c.r[17].w[0] + 28000u);
    set32(c.r[3], 0u + 26u);
    st32((c.r[4].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[3], 0u + 8u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], 0u + 15u);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], 0u + 16u);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], 0u + 18u);
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], 0u + 25u);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_003B837C; } }
L_003B8338:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[17].w[0] + 28000u);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    st32((c.r[4].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 17;
L_003B837C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8384u); c.r[16].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (depth < kMaxDepth) unit_0002(c, 466u, depth + 1u); else { c.pc = 0x0010BB10u; return; } if (c.pc != 0x003B8384u) [[unlikely]] return; }
L_003B8384:
    set32(c.r[16], c.r[16].w[0] + 28136u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8398u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0002(c, 468u, depth + 1u); else { c.pc = 0x0010BB20u; return; } if (c.pc != 0x003B8398u) [[unlikely]] return; }
L_003B8398:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], ld32((c.r[29].w[0] + 24u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B83A8u); st32((c.r[3].w[0] - 6536u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AD(c, 385u, depth + 1u); else { c.pc = 0x003B7270u; return; } if (c.pc != 0x003B83A8u) [[unlikely]] return; }
L_003B83A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B83B0u);  if (depth < kMaxDepth) unit_00AD(c, 390u, depth + 1u); else { c.pc = 0x003B7318u; return; } if (c.pc != 0x003B83B0u) [[unlikely]] return; }
L_003B83B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B83B8u);  if (depth < kMaxDepth) unit_00AD(c, 394u, depth + 1u); else { c.pc = 0x003B73A0u; return; } if (c.pc != 0x003B83B8u) [[unlikely]] return; }
L_003B83B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B83C0u);  if (depth < kMaxDepth) unit_00AD(c, 398u, depth + 1u); else { c.pc = 0x003B7428u; return; } if (c.pc != 0x003B83C0u) [[unlikely]] return; }
L_003B83C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B83C8u);  if (depth < kMaxDepth) unit_00AD(c, 402u, depth + 1u); else { c.pc = 0x003B74B0u; return; } if (c.pc != 0x003B83C8u) [[unlikely]] return; }
L_003B83C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B83D0u);  if (depth < kMaxDepth) unit_00AD(c, 407u, depth + 1u); else { c.pc = 0x003B7548u; return; } if (c.pc != 0x003B83D0u) [[unlikely]] return; }
L_003B83D0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[17].w[0] + 28000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B83E0u); set32(c.r[5], ld32((c.r[2].w[0] + 20u)));  if (depth < kMaxDepth) unit_0002(c, 454u, depth + 1u); else { c.pc = 0x0010BAB0u; return; } if (c.pc != 0x003B83E0u) [[unlikely]] return; }
L_003B83E0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[5], c.r[5].w[0] + 27632u);
    set32(c.r[4], 0u + 6u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B83F4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 365u, depth + 1u); else { c.pc = 0x003D38C0u; return; } if (c.pc != 0x003B83F4u) [[unlikely]] return; }
L_003B83F4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[5], c.r[5].w[0] + 27672u);
    set32(c.r[4], 0u + 7u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8408u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 365u, depth + 1u); else { c.pc = 0x003D38C0u; return; } if (c.pc != 0x003B8408u) [[unlikely]] return; }
L_003B8408:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 27992u), c.r[2].w[0]);
    set32(c.r[3], c.r[18].w[0] + 27988u);
    c.budget -= 4;
L_003B8418:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 56u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003B8440:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + 27988u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_003B84E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8468u);  if (depth < kMaxDepth) unit_00AD(c, 439u, depth + 1u); else { c.pc = 0x003B7868u; return; } if (c.pc != 0x003B8468u) [[unlikely]] return; }
L_003B8468:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8470u);  if (depth < kMaxDepth) unit_00AD(c, 449u, depth + 1u); else { c.pc = 0x003B7950u; return; } if (c.pc != 0x003B8470u) [[unlikely]] return; }
L_003B8470:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8478u);  if (depth < kMaxDepth) unit_00AD(c, 454u, depth + 1u); else { c.pc = 0x003B7A20u; return; } if (c.pc != 0x003B8478u) [[unlikely]] return; }
L_003B8478:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8480u);  if (depth < kMaxDepth) unit_00AD(c, 464u, depth + 1u); else { c.pc = 0x003B7BC0u; return; } if (c.pc != 0x003B8480u) [[unlikely]] return; }
L_003B8480:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8488u);  if (depth < kMaxDepth) unit_00AD(c, 459u, depth + 1u); else { c.pc = 0x003B7AF0u; return; } if (c.pc != 0x003B8488u) [[unlikely]] return; }
L_003B8488:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8490u);  if (depth < kMaxDepth) unit_00AD(c, 469u, depth + 1u); else { c.pc = 0x003B7C90u; return; } if (c.pc != 0x003B8490u) [[unlikely]] return; }
L_003B8490:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8498u);  if (depth < kMaxDepth) unit_00AD(c, 474u, depth + 1u); else { c.pc = 0x003B7D60u; return; } if (c.pc != 0x003B8498u) [[unlikely]] return; }
L_003B8498:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] + 28136u);
    set32(c.r[5], ld32((c.r[3].w[0] - 6536u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B84B0u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0002(c, 454u, depth + 1u); else { c.pc = 0x0010BAB0u; return; } if (c.pc != 0x003B84B0u) [[unlikely]] return; }
L_003B84B0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B84BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 371u, depth + 1u); else { c.pc = 0x003D3998u; return; } if (c.pc != 0x003B84BCu) [[unlikely]] return; }
L_003B84BC:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B84C8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 372u, depth + 1u); else { c.pc = 0x003D39B0u; return; } if (c.pc != 0x003B84C8u) [[unlikely]] return; }
L_003B84C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[2].w[0] + 27992u), 0u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B4(c, 396u, depth); }
L_003B84E0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B84F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B4(c, 360u, depth); }
L_003B8518:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 7u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B4(c, 360u, depth); }
L_003B8540:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 7u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B4(c, 367u, depth); }
L_003B8558:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B856Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 251u, depth + 1u); else { c.pc = 0x003CDE90u; return; } if (c.pc != 0x003B856Cu) [[unlikely]] return; }
L_003B856C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B2(c, 422u, depth); }
L_003B8580:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B3(c, 409u, depth); }
L_003B8598:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[6].w[0] + 36u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B85C4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B85C4u) [[unlikely]] return; }
L_003B85C4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], c.r[2].w[0] >> 1);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B85D8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[6].w[0] + 36u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8604u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B8604u) [[unlikely]] return; }
L_003B8604:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], c.r[2].w[0] >> 1);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B8618:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B863Cu); set32(c.r[4], ld32((c.r[3].w[0] + 4u)));  if (depth < kMaxDepth) unit_00B4(c, 258u, depth + 1u); else { c.pc = 0x003D2978u; return; } if (c.pc != 0x003B863Cu) [[unlikely]] return; }
L_003B863C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], c.r[2].w[0] >> 1);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B8650:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[4], c.r[5].w[0] << 2);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8674u); set32(c.r[4], ld32((c.r[3].w[0] + 4u)));  if (depth < kMaxDepth) unit_00B4(c, 258u, depth + 1u); else { c.pc = 0x003D2978u; return; } if (c.pc != 0x003B8674u) [[unlikely]] return; }
L_003B8674:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], c.r[2].w[0] >> 1);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B8688:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B4(c, 8u, depth); }
L_003B86A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B4(c, 12u, depth); }
L_003B86B8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B4(c, 14u, depth); }
L_003B86D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B4(c, 16u, depth); }
L_003B86E8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B3(c, 444u, depth); }
L_003B8700:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B4(c, 17u, depth); }
L_003B8718:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B8720:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B4(c, 25u, depth); }
L_003B8738:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8750u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 59u, depth + 1u); else { c.pc = 0x003D07F8u; return; } if (c.pc != 0x003B8750u) [[unlikely]] return; }
L_003B8750:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B875Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 56u, depth + 1u); else { c.pc = 0x003D0780u; return; } if (c.pc != 0x003B875Cu) [[unlikely]] return; }
L_003B875C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B4(c, 47u, depth); }
L_003B8770:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B4(c, 53u, depth); }
L_003B8788:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B4(c, 54u, depth); }
L_003B87A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B4(c, 56u, depth); }
L_003B87B8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B4(c, 59u, depth); }
L_003B87D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B4(c, 63u, depth); }
L_003B87E8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B4(c, 64u, depth); }
L_003B8800:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B4(c, 66u, depth); }
L_003B8818:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B882Cu); set32(c.r[4], c.r[4].w[0] + 11496u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003B882Cu) [[unlikely]] return; }
L_003B882C:
    c.budget -= 1;
L_003B8830:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8830u | kUnwind; return; } goto L_003B8830; } }
    c.budget -= 1;
L_003B8850:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B4(c, 80u, depth); }
L_003B8868:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B4(c, 86u, depth); }
L_003B8880:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B4(c, 87u, depth); }
L_003B8898:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B4(c, 88u, depth); }
L_003B88B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B4(c, 92u, depth); }
L_003B88C8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B4(c, 93u, depth); }
L_003B88E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B88E8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B4(c, 94u, depth); }
L_003B8900:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B4(c, 97u, depth); }
L_003B8918:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B4(c, 98u, depth); }
L_003B8930:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B4(c, 99u, depth); }
L_003B8948:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003B8950:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B4(c, 100u, depth); }
L_003B8968:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B4(c, 105u, depth); }
L_003B8980:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B8988:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B8990:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B8998:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B89A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B89A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003B89B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B89C0u);  if (depth < kMaxDepth) unit_00B4(c, 108u, depth + 1u); else { c.pc = 0x003D0D48u; return; } if (c.pc != 0x003B89C0u) [[unlikely]] return; }
L_003B89C0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B89D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] - 6528u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0]), c.r[2].w[0]);  c.pc = t; return; }
L_003B89E8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] - 6528u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0]), c.r[2].w[0]);  c.pc = t; return; }
L_003B8A00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8A10u);  if (depth < kMaxDepth) unit_00AC(c, 7u, depth + 1u); else { c.pc = 0x003B00C0u; return; } if (c.pc != 0x003B8A10u) [[unlikely]] return; }
L_003B8A10:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[4], c.r[4].w[0] - 6520u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 2560u);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00124ED8u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 49u, depth); }
L_003B8A30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 6520u);
    set32(c.r[6], 0u + 2560u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00124ED8u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 49u, depth); }
L_003B8A58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[3], 0u - 1u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st32((c.r[4].w[0] + 60u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 56u), c.r[2].w[0]);
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 152u), 0u);
    st32((c.r[4].w[0] + 44u), 0u);
    st32((c.r[4].w[0] + 48u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 64u), 0u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 68u), 0u);  c.pc = t; return; }
L_003B8A90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], c.r[7].w[0] - 6520u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 17;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], ld32((c.r[20].w[0])));  if (t) { goto L_003B8AFC; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_003B8AD8:
    c.r[2].d[0] = c.r[4].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 160u);  if (t) { goto L_003B8AFC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[4].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8AD8u | kUnwind; return; } goto L_003B8AD8; }
L_003B8AFC:
    set32(c.r[3], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B8BE0; } }
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[7].w[0] - 6520u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 5);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8B24u); set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00B4(c, 188u, depth + 1u); else { c.pc = 0x003D1B60u; return; } if (c.pc != 0x003B8B24u) [[unlikely]] return; }
L_003B8B24:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8B30u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 189u, depth + 1u); else { c.pc = 0x003D1B68u; return; } if (c.pc != 0x003B8B30u) [[unlikely]] return; }
L_003B8B30:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], c.r[2].w[0] >> 31);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8B40u); set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B4(c, 190u, depth + 1u); else { c.pc = 0x003D1B70u; return; } if (c.pc != 0x003B8B40u) [[unlikely]] return; }
L_003B8B40:
    set32(c.r[7], c.r[2].w[0] >> 31);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 1));
    set32(c.r[7], c.r[7].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 1));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8B64u); set32(c.r[7], c.r[6].w[0] + c.r[7].w[0]);  if (depth < kMaxDepth) unit_00AC(c, 15u, depth + 1u); else { c.pc = 0x003B0180u; return; } if (c.pc != 0x003B8B64u) [[unlikely]] return; }
L_003B8B64:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[18].w[0] + 4u), c.r[4].w[0]);  if (t) { goto L_003B8BE0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8B80u); set32(c.r[5], c.r[5].w[0] - 28696u);  if (depth < kMaxDepth) unit_00AC(c, 45u, depth + 1u); else { c.pc = 0x003B0760u; return; } if (c.pc != 0x003B8B80u) [[unlikely]] return; }
L_003B8B80:
    st32((c.r[18].w[0] + 8u), c.r[21].w[0]);
    st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(c.r[19].w[0]));
    c.budget -= 4;
    { const bool t = c.r[19].sd[0] <= 0; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_003B8BB8; } }
    set32(c.r[7], c.r[18].w[0] + 12u);
    c.budget -= 2;
L_003B8B98:
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.r[5].d[0] = c.r[6].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != 0ull; st32((c.r[2].w[0]), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8B98u | kUnwind; return; } goto L_003B8B98; } }
L_003B8BB8:
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8BC4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 111u, depth + 1u); else { c.pc = 0x003B8A58u; return; } if (c.pc != 0x003B8BC4u) [[unlikely]] return; }
L_003B8BC4:
    st32((c.r[18].w[0] + 72u), 0u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 76u), 0u);
    st32((c.r[18].w[0] + 80u), 0u);
    st32((c.r[18].w[0] + 84u), 0u);
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
L_003B8BE0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003B8C08:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_003B8C58; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003B8C30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8C30u); st32((c.r[16].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_00AC(c, 21u, depth + 1u); else { c.pc = 0x003B02C0u; return; } if (c.pc != 0x003B8C30u) [[unlikely]] return; }
L_003B8C30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8C38u);  if (depth < kMaxDepth) unit_00AC(c, 155u, depth + 1u); else { c.pc = 0x003B1E00u; return; } if (c.pc != 0x003B8C38u) [[unlikely]] return; }
L_003B8C38:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8C48u); set32(c.r[6], 0u + 160u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003B8C48u) [[unlikely]] return; }
L_003B8C48:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B1E18u | kUnwind; return; } [[clang::musttail]] return unit_00AC(c, 156u, depth); }
L_003B8C58:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B8C68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));  c.pc = t; return; }
L_003B8C70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[16].w[0] + 8u), c.r[17].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8C94u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00AB(c, 333u, depth + 1u); else { c.pc = 0x003AE910u; return; } if (c.pc != 0x003B8C94u) [[unlikely]] return; }
L_003B8C94:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE760u | kUnwind; return; } [[clang::musttail]] return unit_00AB(c, 324u, depth); }
L_003B8CB0:
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), c.r[6].w[0]);  c.pc = t; return; }
L_003B8CC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[16].w[0] + 56u), c.r[17].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8CE4u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00AB(c, 335u, depth + 1u); else { c.pc = 0x003AE940u; return; } if (c.pc != 0x003B8CE4u) [[unlikely]] return; }
L_003B8CE4:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE790u | kUnwind; return; } [[clang::musttail]] return unit_00AB(c, 326u, depth); }
L_003B8D00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8D18u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00AB(c, 339u, depth + 1u); else { c.pc = 0x003AE9D0u; return; } if (c.pc != 0x003B8D18u) [[unlikely]] return; }
L_003B8D18:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE7B0u | kUnwind; return; } [[clang::musttail]] return unit_00AB(c, 327u, depth); }
L_003B8D30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8D44u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 111u, depth + 1u); else { c.pc = 0x003B8A58u; return; } if (c.pc != 0x003B8D44u) [[unlikely]] return; }
L_003B8D44:
    set32(c.r[2], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B8D60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8D78u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00AC(c, 82u, depth + 1u); else { c.pc = 0x003B0B68u; return; } if (c.pc != 0x003B8D78u) [[unlikely]] return; }
L_003B8D78:
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B8D90:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    set32(c.r[6], 0u + 4096u);
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[31].d[0]);
    set32(c.r[16], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[19], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 17;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8DD4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B8DD4u) [[unlikely]] return; }
L_003B8DD4:
    set32(c.r[4], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003B8E24; } }
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[29].w[0] + 16u);  if (t) { goto L_003B8E28; } }
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 4;
L_003B8E00:
    c.r[2].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);  if (t) { goto L_003B8E24; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8E00u | kUnwind; return; } goto L_003B8E00; }
L_003B8E24:
    set32(c.r[20], c.r[29].w[0] + 16u);
    c.budget -= 1;
L_003B8E28:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8E38u); c.r[7].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 230u, depth + 1u); else { c.pc = 0x003D2388u; return; } if (c.pc != 0x003B8E38u) [[unlikely]] return; }
L_003B8E38:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8E50u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B8E50u) [[unlikely]] return; }
L_003B8E50:
    set32(c.r[6], ld32((c.r[29].w[0] + 4u)));
    c.r[2].d[0] = c.r[6].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0])));  goto L_003B8E88; }
    set32(c.r[5], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8E6Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 39u, depth + 1u); else { c.pc = 0x003B05F8u; return; } if (c.pc != 0x003B8E6Cu) [[unlikely]] return; }
L_003B8E6C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_003B8E84; } }
    c.r[2].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B8EA8; } }
L_003B8E84:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003B8E88:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8E9Cu); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B8E9Cu) [[unlikely]] return; }
L_003B8E9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003B8FCC; } }
    c.budget -= 1;
L_003B8EA8:
    c.budget -= 2;
    if (c.r[17].sd[0] >= 0) { st32((c.r[18].w[0] + 152u), c.r[17].w[0]);  goto L_003B8EE8; }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8EC8u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B8EC8u) [[unlikely]] return; }
L_003B8EC8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[4].w[0] + 11536u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8EDCu); set32(c.r[5], c.r[5].w[0] + 11568u);  if (depth < kMaxDepth) unit_00AC(c, 207u, depth + 1u); else { c.pc = 0x003B3A48u; return; } if (c.pc != 0x003B8EDCu) [[unlikely]] return; }
L_003B8EDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_003B8FC4; } }
    c.budget -= 1;
L_003B8EE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8EF0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 48u, depth + 1u); else { c.pc = 0x003B0788u; return; } if (c.pc != 0x003B8EF0u) [[unlikely]] return; }
L_003B8EF0:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_003B8F00; } }
    st8((c.r[18].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_003B8F00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8F08u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 48u, depth + 1u); else { c.pc = 0x003B0788u; return; } if (c.pc != 0x003B8F08u) [[unlikely]] return; }
L_003B8F08:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 64u);  if (t) { goto L_003B8F2C; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[4], c.r[18].w[0] + 88u);
    c.r[2].d[0] = c.r[6].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8F2Cu); if (c.r[2].d[0] == 0) c.r[6].d[0] = c.r[3].d[0];  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x003B8F2Cu) [[unlikely]] return; }
L_003B8F2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8F34u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 48u, depth + 1u); else { c.pc = 0x003B0788u; return; } if (c.pc != 0x003B8F34u) [[unlikely]] return; }
L_003B8F34:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] - 10u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0])));  goto L_003B8F60; }
    set32(c.r[2], 0u + 20u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 15u);  if (t) { goto L_003B8F5C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_003B8F80; } }
L_003B8F5C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003B8F60:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8F74u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B8F74u) [[unlikely]] return; }
L_003B8F74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_003B8FC4; } }
    c.budget -= 1;
L_003B8F80:
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8F90u); c.r[7].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 230u, depth + 1u); else { c.pc = 0x003D2388u; return; } if (c.pc != 0x003B8F90u) [[unlikely]] return; }
L_003B8F90:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8FA8u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B8FA8u) [[unlikely]] return; }
L_003B8FA8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8FC0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B8FC0u) [[unlikely]] return; }
L_003B8FC0:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_003B8FC4:
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 2;
L_003B8FCC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003B8FE8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[23].d[0]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    set32(c.r[17], c.r[18].w[0] + 28u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[16], c.r[18].w[0] + 12u);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; set32(c.r[20], ld32((c.r[18].w[0] + 12u)));  if (t) { goto L_003B9050; } }
    c.budget -= 1;
L_003B9038:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[8], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[8].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9050u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B9050u) [[unlikely]] return; }
L_003B9050:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9058u); set32(c.r[4], ld32((c.r[18].w[0] + 4u)));  if (depth < kMaxDepth) unit_00AC(c, 50u, depth + 1u); else { c.pc = 0x003B0798u; return; } if (c.pc != 0x003B9058u) [[unlikely]] return; }
L_003B9058:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] + 8u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], 0u + 16384u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9038u | kUnwind; return; } goto L_003B9038; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B907Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 188u, depth + 1u); else { c.pc = 0x003D1B60u; return; } if (c.pc != 0x003B907Cu) [[unlikely]] return; }
L_003B907C:
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] >> 31);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    st32((c.r[22].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[3], c.r[2].w[0] >> 31);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.r[3].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[4].d[0] = c.r[2].d[0];
    st32((c.r[23].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 17;
    if (c.r[3].sd[0] < 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x1FFF0000u);  goto L_003B90D0; }
    set32(c.r[2], ld32((c.r[18].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);  if (t) { goto L_003B90D4; } }
    c.budget -= 1;
L_003B90D0:
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 1;
L_003B90D4:
    st32((c.r[21].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 13;
    { set32(c.r[29], c.r[29].w[0] + 80u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B0780u | kUnwind; return; } [[clang::musttail]] return unit_00AC(c, 47u, depth); }
L_003B9108:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[20], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 12;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[17], ld32((c.r[18].w[0] + 8u)));  if (t) { goto L_003B915C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));  goto L_003B9160; }
    set32(c.r[2], ld32((c.r[18].w[0] + 72u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));  goto L_003B9160; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B915Cu); set32(c.r[4], ld32((c.r[18].w[0] + 76u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B915Cu) [[unlikely]] return; }
L_003B915C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    c.budget -= 1;
L_003B9160:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0])));  goto L_003B9198; }
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9180u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B9180u) [[unlikely]] return; }
L_003B9180:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0])));  goto L_003B9198; }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003B944C; } }
    c.budget -= 1;
L_003B9198:
    set32(c.r[19], c.r[18].w[0] + 20u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B91B8u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B91B8u) [[unlikely]] return; }
L_003B91B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B91C0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 48u, depth + 1u); else { c.pc = 0x003B0788u; return; } if (c.pc != 0x003B91C0u) [[unlikely]] return; }
L_003B91C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B9348; } }
    set32(c.r[6], ld32((c.r[18].w[0] + 24u)));
    c.r[2].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = 0ull | 32769ull;  if (t) { goto L_003B9348; } }
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.r[3].d[0] = ld16((c.r[4].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_003B9348; } }
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9208u); set32(c.r[6], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_00AC(c, 176u, depth + 1u); else { c.pc = 0x003B2840u; return; } if (c.pc != 0x003B9208u) [[unlikely]] return; }
L_003B9208:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 156u)));  goto L_003B9268; }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0])));  goto L_003B93C4; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9234u); c.r[7].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 230u, depth + 1u); else { c.pc = 0x003D2388u; return; } if (c.pc != 0x003B9234u) [[unlikely]] return; }
L_003B9234:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B924Cu); c.r[6].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B924Cu) [[unlikely]] return; }
L_003B924C:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9264u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B9264u) [[unlikely]] return; }
L_003B9264:
    set32(c.r[2], ld32((c.r[18].w[0] + 156u)));
    c.budget -= 1;
L_003B9268:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[20].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_003B944C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0])));  if (t) { goto L_003B9314; } }
L_003B9278:
    c.r[16].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_003B92CC; }
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_003B92CC; }
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 3;
L_003B92A0:
    c.r[2].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;  goto L_003B92C8; }
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B92A0u | kUnwind; return; } goto L_003B92A0; }
    c.r[16].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003B92C8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_003B92CC:
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B92D8u); c.r[7].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 230u, depth + 1u); else { c.pc = 0x003D2388u; return; } if (c.pc != 0x003B92D8u) [[unlikely]] return; }
L_003B92D8:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B92F0u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B92F0u) [[unlikely]] return; }
L_003B92F0:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9308u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B9308u) [[unlikely]] return; }
L_003B9308:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003B9450; } }
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_003B9314:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9330u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B9330u) [[unlikely]] return; }
L_003B9330:
    set32(c.r[4], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9278u | kUnwind; return; } goto L_003B9278; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003B9450; } }
    c.budget -= 1;
L_003B9348:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9350u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 235u, depth + 1u); else { c.pc = 0x003B9950u; return; } if (c.pc != 0x003B9350u) [[unlikely]] return; }
L_003B9350:
    set32(c.r[3], ld32((c.r[18].w[0] + 52u)));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_003B9388; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B937Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B937Cu) [[unlikely]] return; }
L_003B937C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003B9450; } }
    c.budget -= 1;
L_003B9388:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9390u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 233u, depth + 1u); else { c.pc = 0x003B9920u; return; } if (c.pc != 0x003B9390u) [[unlikely]] return; }
L_003B9390:
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B93A8u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B93A8u) [[unlikely]] return; }
L_003B93A8:
    set32(c.r[3], c.r[2].w[0] >> 31);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B93E0; } }
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_003B93C4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B93D8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B93D8u) [[unlikely]] return; }
L_003B93D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003B9450; } }
L_003B93E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B93E8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 48u, depth + 1u); else { c.pc = 0x003B0788u; return; } if (c.pc != 0x003B93E8u) [[unlikely]] return; }
L_003B93E8:
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_003B9408; } }
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9408u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B9408u) [[unlikely]] return; }
L_003B9408:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9410u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 48u, depth + 1u); else { c.pc = 0x003B0788u; return; } if (c.pc != 0x003B9410u) [[unlikely]] return; }
L_003B9410:
    set32(c.r[3], 0u + 15u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[6], ld32((c.r[18].w[0] + 24u)));  goto L_003B9438; }
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9434u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B9434u) [[unlikely]] return; }
L_003B9434:
    set32(c.r[6], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 1;
L_003B9438:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9444u); set32(c.r[5], ld32((c.r[18].w[0] + 20u)));  if (depth < kMaxDepth) unit_00AC(c, 80u, depth + 1u); else { c.pc = 0x003B0AC8u; return; } if (c.pc != 0x003B9444u) [[unlikely]] return; }
L_003B9444:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B944Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 81u, depth + 1u); else { c.pc = 0x003B0B50u; return; } if (c.pc != 0x003B944Cu) [[unlikely]] return; }
L_003B944C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003B9450:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003B9470:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    set32(c.r[20], c.r[18].w[0] + 12u);
    st64((c.r[29].w[0] + 88u), c.r[21].d[0]);
    set32(c.r[21], c.r[18].w[0] + 28u);
    st64((c.r[29].w[0] + 96u), c.r[22].d[0]);
    c.r[22].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 104u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 120u), c.r[31].d[0]);
    set32(c.r[23], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[17], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B94BCu); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0818u; return; } if (c.pc != 0x003B94BCu) [[unlikely]] return; }
L_003B94BC:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B94C8u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 86u, depth + 1u); else { c.pc = 0x003B0BD8u; return; } if (c.pc != 0x003B94C8u) [[unlikely]] return; }
L_003B94C8:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B94D4u); st32((c.r[29].w[0] + 32u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AC(c, 87u, depth + 1u); else { c.pc = 0x003B0BE0u; return; } if (c.pc != 0x003B94D4u) [[unlikely]] return; }
L_003B94D4:
    set32(c.r[4], c.r[18].w[0] + 20u);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[30], c.r[29].w[0] + 16u);
    set32(c.r[5], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[16], c.r[16].w[0] - c.r[2].w[0]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[2].d[0] = c.r[19].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.r[7].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9500u); if (c.r[2].d[0] == 0) c.r[19].d[0] = c.r[16].d[0];  if (depth < kMaxDepth) unit_00B4(c, 230u, depth + 1u); else { c.pc = 0x003D2388u; return; } if (c.pc != 0x003B9500u) [[unlikely]] return; }
L_003B9500:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9518u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B9518u) [[unlikely]] return; }
L_003B9518:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9530u); c.r[6].d[0] = c.r[30].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B9530u) [[unlikely]] return; }
L_003B9530:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B9598; } }
L_003B9538:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9540u);  if (depth < kMaxDepth) unit_00B4(c, 230u, depth + 1u); else { c.pc = 0x003D2388u; return; } if (c.pc != 0x003B9540u) [[unlikely]] return; }
L_003B9540:
    set32(c.r[2], ld32((c.r[18].w[0] + 80u)));
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[22], c.r[22].w[0] + 1u);  if (t) { goto L_003B9560; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[6], ld32((c.r[29].w[0])));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9560u); set32(c.r[7], ld32((c.r[29].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B9560u) [[unlikely]] return; }
L_003B9560:
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B957Cu); set32(c.r[21], c.r[21].w[0] + 8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B957Cu) [[unlikely]] return; }
L_003B957C:
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9598u); set32(c.r[20], c.r[20].w[0] + 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B9598u) [[unlikely]] return; }
L_003B9598:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B95A0u); set32(c.r[4], ld32((c.r[18].w[0] + 4u)));  if (depth < kMaxDepth) unit_00AC(c, 50u, depth + 1u); else { c.pc = 0x003B0798u; return; } if (c.pc != 0x003B95A0u) [[unlikely]] return; }
L_003B95A0:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[2].d[0] = c.r[22].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    set32(c.r[5], c.r[19].w[0] << 1);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[7].d[0] = c.r[30].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9538u | kUnwind; return; } goto L_003B9538; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 48u)));
    st32((c.r[18].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[6], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[7], c.r[7].w[0] + c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 68u)));
    set32(c.r[6], c.r[6].w[0] + c.r[19].w[0]);
    st32((c.r[18].w[0] + 48u), c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 52u), c.r[7].w[0]);
    st32((c.r[18].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9604u); st32((c.r[18].w[0] + 64u), c.r[6].w[0]);  if (depth < kMaxDepth) unit_00AC(c, 84u, depth + 1u); else { c.pc = 0x003B0B98u; return; } if (c.pc != 0x003B9604u) [[unlikely]] return; }
L_003B9604:
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
L_003B9638:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9660u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0818u; return; } if (c.pc != 0x003B9660u) [[unlikely]] return; }
L_003B9660:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B966Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 86u, depth + 1u); else { c.pc = 0x003B0BD8u; return; } if (c.pc != 0x003B966Cu) [[unlikely]] return; }
L_003B966C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9678u); c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 87u, depth + 1u); else { c.pc = 0x003B0BE0u; return; } if (c.pc != 0x003B9678u) [[unlikely]] return; }
L_003B9678:
    set32(c.r[4], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[6], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[16], c.r[16].w[0] - c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 48u)));
    c.r[3].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    if (c.r[3].d[0] != 0) c.r[16].d[0] = c.r[2].d[0];
    set32(c.r[5], c.r[5].w[0] + c.r[19].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[16].w[0]);
    st32((c.r[18].w[0] + 52u), c.r[4].w[0]);
    st32((c.r[18].w[0] + 44u), c.r[6].w[0]);
    st32((c.r[18].w[0] + 48u), c.r[5].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003B96C8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[16], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B96E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 79u, depth + 1u); else { c.pc = 0x003B0AC0u; return; } if (c.pc != 0x003B96E8u) [[unlikely]] return; }
L_003B96E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003B96F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B96F8u);  if (depth < kMaxDepth) unit_00AE(c, 159u, depth + 1u); else { c.pc = 0x003B9108u; return; } if (c.pc != 0x003B96F8u) [[unlikely]] return; }
L_003B96F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9700u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 110u, depth + 1u); else { c.pc = 0x003B1088u; return; } if (c.pc != 0x003B9700u) [[unlikely]] return; }
L_003B9700:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9708u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 79u, depth + 1u); else { c.pc = 0x003B0AC0u; return; } if (c.pc != 0x003B9708u) [[unlikely]] return; }
L_003B9708:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003B971C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B971Cu);  if (depth < kMaxDepth) unit_00AE(c, 185u, depth + 1u); else { c.pc = 0x003B9470u; return; } if (c.pc != 0x003B971Cu) [[unlikely]] return; }
L_003B971C:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 152u)));
    set32(c.r[2], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 20u);  if (t) { goto L_003B9744; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 11u);  if (t) { goto L_003B9744; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 15u);  if (t) { goto L_003B9744; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003B9760; } }
L_003B9744:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9638u | kUnwind; return; } goto L_003B9638; }
L_003B9760:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B9770:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_003B9798; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B96C8u | kUnwind; return; } goto L_003B96C8; }
L_003B9798:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003B97A8; } }
    c.budget -= 2;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8D90u | kUnwind; return; } goto L_003B8D90; }
L_003B97A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B97B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[2].w[0] - 6520u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], 0u + 15u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], 0u + 1u);
    c.budget -= 10;
L_003B97D8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_003B97F0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B97ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 209u, depth + 1u); else { c.pc = 0x003B9770u; return; } if (c.pc != 0x003B97ECu) [[unlikely]] return; }
L_003B97EC:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_003B97F0:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] + 160u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B97D8u | kUnwind; return; } goto L_003B97D8; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B9810:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 48u)));  c.pc = t; return; }
L_003B9818:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 44u)));  c.pc = t; return; }
L_003B9820:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 52u), c.r[5].w[0]);  c.pc = t; return; }
L_003B9828:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 52u)));  c.pc = t; return; }
L_003B9830:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 156u), c.r[5].w[0]);  c.pc = t; return; }
L_003B9838:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 156u)));  c.pc = t; return; }
L_003B9840:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B0910u | kUnwind; return; } [[clang::musttail]] return unit_00AC(c, 71u, depth); }
L_003B9858:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B0978u | kUnwind; return; } [[clang::musttail]] return unit_00AC(c, 74u, depth); }
L_003B9870:
    st32((c.r[4].w[0] + 84u), c.r[6].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 80u), c.r[5].w[0]);  c.pc = t; return; }
L_003B9880:
    st32((c.r[4].w[0] + 76u), c.r[6].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 72u), c.r[5].w[0]);  c.pc = t; return; }
L_003B9890:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 60u), c.r[5].w[0]);  c.pc = t; return; }
L_003B9898:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 60u)));  c.pc = t; return; }
L_003B98A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 64u), c.r[5].w[0]);  c.pc = t; return; }
L_003B98A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 64u)));  c.pc = t; return; }
L_003B98B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 68u), c.r[5].w[0]);  c.pc = t; return; }
L_003B98B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 68u)));  c.pc = t; return; }
L_003B98C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B0788u | kUnwind; return; } [[clang::musttail]] return unit_00AC(c, 48u, depth); }
L_003B98D8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B0790u | kUnwind; return; } [[clang::musttail]] return unit_00AC(c, 49u, depth); }
L_003B98F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B0798u | kUnwind; return; } [[clang::musttail]] return unit_00AC(c, 50u, depth); }
L_003B9908:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B07A8u | kUnwind; return; } [[clang::musttail]] return unit_00AC(c, 52u, depth); }
L_003B9920:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B0808u | kUnwind; return; } [[clang::musttail]] return unit_00AC(c, 53u, depth); }
L_003B9938:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B0810u | kUnwind; return; } [[clang::musttail]] return unit_00AC(c, 54u, depth); }
L_003B9950:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B0818u | kUnwind; return; } [[clang::musttail]] return unit_00AC(c, 55u, depth); }
L_003B9968:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B0820u | kUnwind; return; } [[clang::musttail]] return unit_00AC(c, 56u, depth); }
L_003B9980:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B0830u | kUnwind; return; } [[clang::musttail]] return unit_00AC(c, 58u, depth); }
L_003B9998:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B0828u | kUnwind; return; } [[clang::musttail]] return unit_00AC(c, 57u, depth); }
L_003B99B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B0838u | kUnwind; return; } [[clang::musttail]] return unit_00AC(c, 59u, depth); }
L_003B99C8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003B99E8; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B0840u | kUnwind; return; } [[clang::musttail]] return unit_00AC(c, 60u, depth); }
L_003B99E8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B99F8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B0858u | kUnwind; return; } [[clang::musttail]] return unit_00AC(c, 61u, depth); }
L_003B9A10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B0860u | kUnwind; return; } [[clang::musttail]] return unit_00AC(c, 62u, depth); }
L_003B9A28:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B0868u | kUnwind; return; } [[clang::musttail]] return unit_00AC(c, 63u, depth); }
L_003B9A40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9A58u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00AC(c, 63u, depth + 1u); else { c.pc = 0x003B0868u; return; } if (c.pc != 0x003B9A58u) [[unlikely]] return; }
L_003B9A58:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B9A88; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003B9A88; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9A7Cu); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00AC(c, 64u, depth + 1u); else { c.pc = 0x003B0870u; return; } if (c.pc != 0x003B9A7Cu) [[unlikely]] return; }
L_003B9A7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003B9A8C; } }
    c.budget -= 1;
L_003B9A88:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003B9A8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B9A98:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9AB8u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00AC(c, 63u, depth + 1u); else { c.pc = 0x003B0868u; return; } if (c.pc != 0x003B9AB8u) [[unlikely]] return; }
L_003B9AB8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[2], 0u - 128u);  if (t) { goto L_003B9AE8; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u - 128u);  goto L_003B9AE8; }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9AE0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 65u, depth + 1u); else { c.pc = 0x003B0878u; return; } if (c.pc != 0x003B9AE0u) [[unlikely]] return; }
L_003B9AE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003B9AEC; } }
L_003B9AE8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003B9AEC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B9B00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9B18u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00AC(c, 63u, depth + 1u); else { c.pc = 0x003B0868u; return; } if (c.pc != 0x003B9B18u) [[unlikely]] return; }
L_003B9B18:
    c.budget -= 2;
    if (c.r[2].sd[0] <= 0) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003B9B48; }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003B9B48; }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B0888u | kUnwind; return; } [[clang::musttail]] return unit_00AC(c, 66u, depth); }
L_003B9B48:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B9B58:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 152u)));  c.pc = t; return; }
L_003B9B60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B07A0u | kUnwind; return; } [[clang::musttail]] return unit_00AC(c, 51u, depth); }
L_003B9B78:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 88u);  c.pc = t; return; }
L_003B9B80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B0890u | kUnwind; return; } [[clang::musttail]] return unit_00AC(c, 67u, depth); }
L_003B9B98:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B08D0u | kUnwind; return; } [[clang::musttail]] return unit_00AC(c, 69u, depth); }
L_003B9BB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003B9BB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st32((c.r[2].w[0] - 3956u), c.r[4].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] - 3952u), c.r[5].w[0]);  c.pc = t; return; }
L_003B9BD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], ld32((c.r[2].w[0] - 3956u)));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003B9BF4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9BF4u); set32(c.r[4], ld32((c.r[2].w[0] - 3952u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B9BF4u) [[unlikely]] return; }
L_003B9BF4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B9C08:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 3960u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_003B9C28:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 3960u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_003B9C48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], ld32((c.r[2].w[0] - 3960u)));
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull; st64((c.r[29].w[0] + 40u), c.r[31].d[0]);  if (t) { goto L_003B9C8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9C8Cu);  if (depth < kMaxDepth) unit_00AE(c, 261u, depth + 1u); else { c.pc = 0x003B9C08u; return; } if (c.pc != 0x003B9C8Cu) [[unlikely]] return; }
L_003B9C8C:
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != 0ull; st16((c.r[20].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_003B9CA4; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B9DDC; } }
L_003B9CA4:
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[11].w[0] + 4712u);
    c.budget -= 5;
    { const bool t = c.r[16].sd[0] <= 0; c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 512u)));  if (t) { goto L_003B9D14; } }
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_003B9CC0:
    set32(c.r[3], c.r[17].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[6].d[0] = c.r[7].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 256u)));
    mmi::mult(c, 0, c.r[10].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[3].w[0] + 1023u);
    c.r[4].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    if (c.r[4].d[0] != 0) c.r[2].d[0] = c.r[5].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 10));
    set32(c.r[2], c.r[2].w[0] << 10);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    c.budget -= 19;
    { const bool t = c.r[6].d[0] != 0ull; c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9CC0u | kUnwind; return; } goto L_003B9CC0; } }
    set32(c.r[2], c.r[11].w[0] + 4712u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003B9D14:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0; c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 1024u)));  if (t) { goto L_003B9D6C; } }
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003B9D20:
    set32(c.r[3], c.r[17].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[6].d[0] = c.r[7].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[9].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 256u)));
    mmi::mult(c, 0, c.r[8].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[3].w[0] + 1023u);
    c.r[4].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    if (c.r[4].d[0] != 0) c.r[2].d[0] = c.r[5].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 10));
    set32(c.r[2], c.r[2].w[0] << 10);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    c.budget -= 19;
    { const bool t = c.r[6].d[0] != 0ull; c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9D20u | kUnwind; return; } goto L_003B9D20; } }
L_003B9D6C:
    set32(c.r[2], c.r[11].w[0] + 4712u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].sd[0] <= 0; c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 1536u)));  if (t) { goto L_003B9DCC; } }
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003B9D80:
    set32(c.r[3], c.r[17].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[6].d[0] = c.r[7].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[9].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 256u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[5], c.r[3].w[0] + 1023u);
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    if (c.r[4].d[0] != 0) c.r[2].d[0] = c.r[5].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 10));
    set32(c.r[2], c.r[2].w[0] << 10);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    c.budget -= 19;
    { const bool t = c.r[6].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9D80u | kUnwind; return; } goto L_003B9D80; } }
L_003B9DCC:
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[10].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[8].w[0]));
    st16((c.r[20].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 4;
L_003B9DDC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003B9E00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], ld32((c.r[2].w[0] - 3960u)));
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; st64((c.r[29].w[0] + 24u), c.r[31].d[0]);  if (t) { goto L_003B9E34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9E34u);  if (depth < kMaxDepth) unit_00AE(c, 261u, depth + 1u); else { c.pc = 0x003B9C08u; return; } if (c.pc != 0x003B9E34u) [[unlikely]] return; }
L_003B9E34:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 11608u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9E50u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_00AE(c, 263u, depth + 1u); else { c.pc = 0x003B9C48u; return; } if (c.pc != 0x003B9E50u) [[unlikely]] return; }
L_003B9E50:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B9E70:
    c.r[7].d[0] = ld16((c.r[5].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.r[5].d[0] = ld16((c.r[4].w[0]));
    c.r[3].d[0] = ld16((c.r[6].w[0]));
    mmi::mult(c, 0, c.r[5].w[0], c.r[7].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003B9E90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 256u);  c.pc = t; return; }
L_003B9E98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 11672u);  c.pc = t; return; }
L_003B9EA8:
    set32(c.r[3], c.r[6].w[0] + 31u);
    set32(c.r[6], c.r[6].w[0] + 62u);
    c.r[2].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[3].d[0] = c.r[6].d[0];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 4u);  c.pc = t; return; }
L_003B9ED8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[11], 0u + 32u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[18].d[0] ^ 1ull;
    set32(c.r[3], 0u + 64u);
    if (c.r[2].d[0] != 0) c.r[3].d[0] = c.r[11].d[0];
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    mmi::div(c, 0, c.r[17].w[0], c.r[3].w[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[9].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[10].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[23].d[0]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 25;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x003B9F38u);  goto L_003B9F3C; }
L_003B9F3C:
    set32(c.r[4], 0u + 1u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 4u);
    c.r[11].d[0] = c.hi.d[0];
    set32(c.r[11], c.r[3].w[0] - c.r[11].w[0]);
    mmi::div(c, 0, c.r[11].w[0], c.r[3].w[0]);
    c.r[8].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[17].w[0] + c.r[8].w[0]);
    st32((c.r[19].w[0]), c.r[8].w[0]);
    set32(c.r[9], c.r[2].w[0] + 31u);
    c.r[3].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[9].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[2].w[0] << 3);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9F80u); set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AC(c, 177u, depth + 1u); else { c.pc = 0x003B28A0u; return; } if (c.pc != 0x003B9F80u) [[unlikely]] return; }
L_003B9F80:
    set32(c.r[16], c.r[16].w[0] << 1);
    set32(c.r[6], 0u + 2048u);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[16].w[0] + 4u);
    set32(c.r[16], c.r[16].w[0] + 2051u);
    c.r[4].d[0] = c.r[5].sd[0] < 0ll ? 1ull : 0ull;
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    if (c.r[4].d[0] != 0) c.r[3].d[0] = c.r[16].d[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 11));
    set32(c.r[3], c.r[3].w[0] << 11);
    set32(c.r[5], c.r[5].w[0] - c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] - c.r[5].w[0]);
    set32(c.r[7], c.r[6].w[0] + 2047u);
    c.r[5].d[0] = c.r[6].sd[0] < 0ll ? 1ull : 0ull;
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    if (c.r[5].d[0] != 0) c.r[3].d[0] = c.r[7].d[0];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 11));
    set32(c.r[5], c.r[3].w[0] << 11);
    set32(c.r[3], c.r[6].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[19].w[0])));
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9FE8u); set32(c.r[6], c.r[17].w[0] + c.r[6].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 274u, depth + 1u); else { c.pc = 0x003B9EA8u; return; } if (c.pc != 0x003B9FE8u) [[unlikely]] return; }
L_003B9FE8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[21].w[0]), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[19].w[0])));
    set32(c.r[5], ld32((c.r[20].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA000u); set32(c.r[6], c.r[23].w[0] + c.r[6].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 274u, depth + 1u); else { c.pc = 0x003B9EA8u; return; } if (c.pc != 0x003BA000u) [[unlikely]] return; }
L_003BA000:
    st32((c.r[22].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003BA030:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[11].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[9].w[0]);
    set32(c.r[9], c.r[29].w[0] + 20u);
    set32(c.r[2], c.r[29].w[0] + 24u);
    set32(c.r[8], c.r[29].w[0] + 19u);
    set32(c.r[6], c.r[29].w[0] + 16u);
    set32(c.r[7], c.r[29].w[0] + 18u);
    set32(c.r[10], c.r[29].w[0] + 21u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA070u); st32((c.r[29].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AC(c, 167u, depth + 1u); else { c.pc = 0x003B20B8u; return; } if (c.pc != 0x003BA070u) [[unlikely]] return; }
L_003BA070:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 21u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 19u)));
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    st32((c.r[17].w[0]), c.r[4].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003BA098:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    mmi::mult(c, 0, c.r[17].w[0], c.r[18].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 19;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA0E4u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BA0E4u) [[unlikely]] return; }
L_003BA0E4:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_003BA118; } }
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA10Cu); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BA10Cu) [[unlikely]] return; }
L_003BA10C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003BA234; } }
    c.budget -= 1;
L_003BA118:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_003BA180; } }
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0])));
    c.budget -= 4;
    { const bool t = c.r[18].sd[0] <= 0; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_003BA218; } }
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.budget -= 2;
L_003BA138:
    set32(c.r[4], ld32((c.r[7].w[0])));
    set32(c.r[7], c.r[7].w[0] + 4u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 8));
    set32(c.r[3], c.r[4].w[0] << 8);
    set32(c.r[2], c.r[4].w[0] >> 24);
    set32(c.r[4], c.r[4].w[0] << 24);
    c.r[3].d[0] = c.r[3].d[0] & c.r[9].d[0];
    c.r[5].d[0] = c.r[5].d[0] & 65280ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[4].d[0] = c.r[8].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 16;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BA138u | kUnwind; return; } goto L_003BA138; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[20].w[0])));  if (t) { goto L_003BA21C; } }
L_003BA180:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_003BA1D8; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0])));
    c.budget -= 4;
    { const bool t = c.r[18].sd[0] <= 0; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_003BA218; } }
    set32(c.r[7], 0u - 256u);
    c.budget -= 2;
L_003BA1A0:
    c.r[2].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 1u));
    set32(c.r[5], c.r[5].w[0] + 2u);
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[4].d[0] = c.r[8].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BA1A0u | kUnwind; return; } goto L_003BA1A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[20].w[0])));  if (t) { goto L_003BA21C; } }
    c.budget -= 1;
L_003BA1D8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[4], ld32((c.r[29].w[0])));  if (t) { goto L_003BA1F8; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA1ECu); c.r[6].d[0] = c.r[18].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x003BA1ECu) [[unlikely]] return; }
L_003BA1EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[20].w[0])));  if (t) { goto L_003BA21C; } }
    c.budget -= 1;
L_003BA1F8:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BA1F8u | kUnwind; return; } goto L_003BA1F8; } }
    c.budget -= 1;
L_003BA218:
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.budget -= 1;
L_003BA21C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA230u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BA230u) [[unlikely]] return; }
L_003BA230:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_003BA234:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003BA258:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 2080u);
    set32(c.r[6], 0u + 192u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00124ED8u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 49u, depth); }
L_003BA280:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] + 2080u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003BA2D0; } }
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
L_003BA2A0:
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] + 12u);
    c.r[4].d[0] = c.r[7].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], c.r[5].w[0] + 12u);  if (t) { goto L_003BA2D4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[5].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BA2A0u | kUnwind; return; } goto L_003BA2A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003BA2D8; } }
    c.budget -= 1;
L_003BA2D0:
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_003BA2D4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003BA2D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; if (c.r[4].d[0] != 0) c.r[2].d[0] = c.r[3].d[0];  c.pc = t; return; }
L_003BA2E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003BA308; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 12u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00124ED8u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 49u, depth); }
L_003BA308:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BA318:
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(c.r[5].w[0]));  c.pc = t; return; }
L_003BA328:
    st16((c.r[4].w[0] + 10u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 8u), static_cast<std::uint16_t>(c.r[5].w[0]));  c.pc = t; return; }
L_003BA338:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 8u));
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 10u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003BA350:
    set32(c.r[5], c.r[5].w[0] << 16);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));  if (t) { goto L_003BA3C0; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 8u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 6u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[4].d[0] = ld16((c.r[6].w[0] + 8u));
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 12));
    set32(c.r[5], c.r[2].w[0] + c.r[7].w[0]);
    c.r[2].d[0] = c.r[5].sd[0] < 32767ll ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[5].sd[0] < -32768ll ? 1ull : 0ull;  if (t) { goto L_003BA3A8; } }
    set32(c.r[2], 0u - 32768u);
    if (c.r[3].d[0] == 0) c.r[2].d[0] = c.r[5].d[0];
    set32(c.r[2], c.r[2].w[0] << 16);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));  if (t) { goto L_003BA3AC; } }
L_003BA3A8:
    set32(c.r[3], 0u + 32767u);
    c.budget -= 1;
L_003BA3AC:
    st16((c.r[6].w[0] + 10u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[6].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003BA3C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[7].d[0] + 0ull;  c.pc = t; return; }
L_003BA3C8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA3DCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 290u, depth + 1u); else { c.pc = 0x003BA280u; return; } if (c.pc != 0x003BA3DCu) [[unlikely]] return; }
L_003BA3DC:
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);  if (t) { goto L_003BA454; } }
    set32(c.r[4], c.r[3].w[0] + 2272u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003BA430; } }
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 2;
L_003BA400:
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] + 144u);
    c.r[3].d[0] = c.r[7].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], c.r[5].w[0] + 144u);  if (t) { goto L_003BA434; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BA400u | kUnwind; return; } goto L_003BA400; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 20u), c.r[16].w[0]);  if (t) { goto L_003BA438; } }
    c.budget -= 1;
L_003BA430:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_003BA434:
    st32((c.r[4].w[0] + 20u), c.r[16].w[0]);
    c.budget -= 1;
L_003BA438:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0] + 136u), c.r[8].w[0]);  if (t) { goto L_003BA450; } }
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003BA454; } }
L_003BA450:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003BA454:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BA468:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003BA490; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 144u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00124ED8u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 49u, depth); }
L_003BA490:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BA4A0:
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(c.r[5].w[0]));  c.pc = t; return; }
L_003BA4B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], c.r[5].w[0] << 16);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 2u);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA4D8u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 157u, depth + 1u); else { c.pc = 0x003B1E30u; return; } if (c.pc != 0x003BA4D8u) [[unlikely]] return; }
L_003BA4D8:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA4E8u); c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 2u)));  if (depth < kMaxDepth) unit_00AE(c, 301u, depth + 1u); else { c.pc = 0x003BA4A0u; return; } if (c.pc != 0x003BA4E8u) [[unlikely]] return; }
L_003BA4E8:
    set32(c.r[4], ld32((c.r[16].w[0] + 136u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA4F8u); c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 2u)));  if (depth < kMaxDepth) unit_00AE(c, 293u, depth + 1u); else { c.pc = 0x003BA318u; return; } if (c.pc != 0x003BA4F8u) [[unlikely]] return; }
L_003BA4F8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003BA508:
    st16((c.r[4].w[0] + 10u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 8u), static_cast<std::uint16_t>(c.r[5].w[0]));  c.pc = t; return; }
L_003BA518:
    set32(c.r[6], c.r[6].w[0] << 16);
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 16));  if (t) { goto L_003BA560; } }
    set32(c.r[3], ld32((c.r[8].w[0] + 20u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[8].w[0] + 120u), 0u);  goto L_003BA560; }
    set32(c.r[2], c.r[8].w[0] + 24u);
    c.budget -= 2;
L_003BA540:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[2].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BA540u | kUnwind; return; } goto L_003BA540; } }
    st32((c.r[8].w[0] + 120u), 0u);
    c.budget -= 1;
L_003BA560:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_003BA5F4; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 4u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 8u)));
    set32(c.r[5], 0u + 32767u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 10u)));
    set32(c.r[4], c.r[4].w[0] + c.r[8].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 6u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[7].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[6].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 12));
    set32(c.r[2], c.r[9].w[0] - c.r[2].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 12));
    set32(c.r[6], c.r[2].w[0] - c.r[3].w[0]);
    c.r[5].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 24u);  if (t) { goto L_003BA5C0; } }
    set32(c.r[2], 0u - 32768u);
    c.r[3].d[0] = c.r[6].sd[0] < -32768ll ? 1ull : 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; if (c.r[3].d[0] == 0) c.r[5].d[0] = c.r[6].d[0];  if (t) { goto L_003BA5C4; } }
    c.budget -= 1;
L_003BA5C0:
    set32(c.r[5], 0u + 32767u);
    c.budget -= 1;
L_003BA5C4:
    set32(c.r[2], c.r[5].w[0] << 16);
    set32(c.r[3], ld32((c.r[8].w[0] + 120u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.budget -= 5;
    if (c.r[2].sd[0] < 0) { set32(c.r[2], 0u - c.r[2].w[0]);  goto L_003BA5D8; }
L_003BA5D8:
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { goto L_003BA5E8; } }
    st32((c.r[8].w[0] + 120u), c.r[2].w[0]);
    c.budget -= 1;
L_003BA5E8:
    c.r[2].d[0] = ld16((c.r[8].w[0] + 8u));
    st16((c.r[8].w[0] + 8u), static_cast<std::uint16_t>(c.r[9].w[0]));
    st16((c.r[8].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_003BA5F4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003BA600:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 7u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 7;
    if (c.r[5].d[0] == 0ull) { breakpoint(c, 0x003BA618u);  goto L_003BA61C; }
L_003BA61C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[8], 0u + 1u);
    set32(c.r[7], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[3], ld32((c.r[4].w[0] - 3944u)));
    set32(c.r[2], c.r[7].w[0] - 1u);
    c.r[4].d[0] = c.r[7].d[0] + 0ull;
    mmi::div(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[5].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    if (c.r[5].d[0] != 0) c.r[3].d[0] = c.r[2].d[0];
    c.r[6].d[0] = c.r[3].sd[0] < 1ll ? 1ull : 0ull;
    if (c.r[6].d[0] != 0) c.r[3].d[0] = c.r[8].d[0];
    c.budget -= 15;
    { const bool t = c.r[7].d[0] != 0ull; st16((c.r[16].w[0] + 124u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003BA668; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld64((c.r[1].w[0] + 11704u));  if (t) { goto L_003BA680; } }
    c.budget -= 1;
L_003BA668:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA670u);  if (depth < kMaxDepth) unit_0007(c, 75u, depth + 1u); else { c.pc = 0x0011CEF8u; return; } if (c.pc != 0x003BA670u) [[unlikely]] return; }
L_003BA670:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[4].d[0] = ld64((c.r[1].w[0] + 11712u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA680u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 65u, depth + 1u); else { c.pc = 0x0011CC10u; return; } if (c.pc != 0x003BA680u) [[unlikely]] return; }
L_003BA680:
    st64((c.r[16].w[0] + 128u), c.r[2].d[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BA698:
    set32(c.r[5], c.r[5].w[0] << 1);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);  if (t) { goto L_003BA6AC; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 24u)));
    c.budget -= 1;
L_003BA6AC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003BA6B8:
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003BA6C8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 88u)));
    c.budget -= 1;
L_003BA6C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003BA6D0:
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 88u), static_cast<std::uint8_t>(c.r[6].w[0]));  c.pc = t; return; }
L_003BA6E0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[20].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 88u), c.r[23].d[0]);
    c.r[23].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[30].d[0]);
    set32(c.r[30], c.r[23].w[0] + 4u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 104u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[23].w[0] + 88u)));
    c.budget -= 19;
    { const bool t = c.r[3].sd[0] <= 0; st32((c.r[29].w[0] + 16u), c.r[7].w[0]);  if (t) { goto L_003BA770; } }
    c.r[16].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
L_003BA738:
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA74Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BA74Cu) [[unlikely]] return; }
L_003BA74C:
    set32(c.r[17], c.r[2].w[0] >> 1);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003BA81C; } }
    set32(c.r[3], ld32((c.r[23].w[0] + 88u)));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BA738u | kUnwind; return; } goto L_003BA738; }
L_003BA770:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] <= 0; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_003BA818; } }
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003BA780:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003BA808; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[22], c.r[18].w[0] << 1);
    set32(c.r[16], c.r[21].w[0] + c.r[30].w[0]);
    set32(c.r[19], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 6;
L_003BA7A0:
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA7B8u); c.r[6].d[0] = c.r[22].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BA7B8u) [[unlikely]] return; }
L_003BA7B8:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[4], c.r[17].w[0] << 1);
    set32(c.r[6], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA7D0u); set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x003BA7D0u) [[unlikely]] return; }
L_003BA7D0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[7], ld32((c.r[4].w[0])));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 15);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA7F8u); set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BA7F8u) [[unlikely]] return; }
L_003BA7F8:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BA7A0u | kUnwind; return; } goto L_003BA7A0; }
    set32(c.r[3], ld32((c.r[23].w[0] + 88u)));
    c.budget -= 1;
L_003BA808:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BA780u | kUnwind; return; } goto L_003BA780; } }
L_003BA818:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003BA81C:
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
L_003BA850:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[22].d[0]);
    set32(c.r[22], c.r[19].w[0] + 12u);
    st64((c.r[29].w[0] + 72u), c.r[23].d[0]);
    set32(c.r[23], c.r[19].w[0] + 8u);
    st64((c.r[29].w[0] + 80u), c.r[30].d[0]);
    set32(c.r[30], c.r[20].w[0] << 1);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[3], c.r[20].w[0] << 2);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    set32(c.r[2], c.r[30].w[0] + 128u);
    st64((c.r[29].w[0] + 88u), c.r[31].d[0]);
    set32(c.r[4], c.r[22].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[23].w[0] + c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[3].w[0] + 128u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 136u)));
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA8C4u); st32((c.r[29].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 306u, depth + 1u); else { c.pc = 0x003BA508u; return; } if (c.pc != 0x003BA8C4u) [[unlikely]] return; }
L_003BA8C4:
    set32(c.r[2], ld32((c.r[19].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003BA908; } }
    set32(c.r[21], c.r[20].w[0] << 6);
    set32(c.r[2], c.r[21].w[0] + c.r[19].w[0]);
    set32(c.r[16], c.r[2].w[0] + 144u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 4;
L_003BA8E0:
    set32(c.r[16], c.r[16].w[0] + 2u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA8F4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 307u, depth + 1u); else { c.pc = 0x003BA518u; return; } if (c.pc != 0x003BA8F4u) [[unlikely]] return; }
L_003BA8F4:
    set32(c.r[2], ld32((c.r[19].w[0] + 68u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BA8E0u | kUnwind; return; } goto L_003BA8E0; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003BA908:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA910u); c.r[18].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 309u, depth + 1u); else { c.pc = 0x003BA600u; return; } if (c.pc != 0x003BA910u) [[unlikely]] return; }
L_003BA910:
    set32(c.r[2], c.r[30].w[0] + 128u);
    set32(c.r[3], c.r[22].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[23].w[0] + c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA92Cu); set32(c.r[4], ld32((c.r[17].w[0] + 136u)));  if (depth < kMaxDepth) unit_00AE(c, 294u, depth + 1u); else { c.pc = 0x003BA328u; return; } if (c.pc != 0x003BA92Cu) [[unlikely]] return; }
L_003BA92C:
    set32(c.r[2], ld32((c.r[19].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003BAA80; } }
    set32(c.r[21], c.r[20].w[0] << 6);
    set32(c.r[20], 0u + 4681u);
    set32(c.r[30], c.r[29].w[0] + 2u);
    set32(c.r[23], 0u + 32767u);
    set32(c.r[22], 0u - 32768u);
    set32(c.r[4], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 6;
L_003BA950:
    set32(c.r[2], c.r[21].w[0] + c.r[19].w[0]);
    set32(c.r[3], c.r[18].w[0] << 1);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA96Cu); c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 144u)));  if (depth < kMaxDepth) unit_00AE(c, 295u, depth + 1u); else { c.pc = 0x003BA338u; return; } if (c.pc != 0x003BA96Cu) [[unlikely]] return; }
L_003BA96C:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA97Cu); c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 2u)));  if (depth < kMaxDepth) unit_00AE(c, 306u, depth + 1u); else { c.pc = 0x003BA508u; return; } if (c.pc != 0x003BA97Cu) [[unlikely]] return; }
L_003BA97C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA98Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 307u, depth + 1u); else { c.pc = 0x003BA518u; return; } if (c.pc != 0x003BA98Cu) [[unlikely]] return; }
L_003BA98C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA998u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 312u, depth + 1u); else { c.pc = 0x003BA698u; return; } if (c.pc != 0x003BA998u) [[unlikely]] return; }
L_003BA998:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA9A0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 75u, depth + 1u); else { c.pc = 0x0011CEF8u; return; } if (c.pc != 0x003BA9A0u) [[unlikely]] return; }
L_003BA9A0:
    c.r[5].d[0] = ld64((c.r[17].w[0] + 128u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA9ACu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x003BA9ACu) [[unlikely]] return; }
L_003BA9AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA9B4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 78u, depth + 1u); else { c.pc = 0x0011CFB0u; return; } if (c.pc != 0x003BA9B4u) [[unlikely]] return; }
L_003BA9B4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[23].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 32767u);  goto L_003BA9D8; }
    c.r[3].d[0] = c.r[16].sd[0] < -32768ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[22].d[0] + 0ull;
    if (c.r[3].d[0] == 0) c.r[2].d[0] = c.r[16].d[0];
    set32(c.r[2], c.r[2].w[0] << 16);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.budget -= 5;
L_003BA9D8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].sd[0] >= 0) { set32(c.r[2], c.r[16].w[0] + 2340u);  goto L_003BA9E8; }
    set32(c.r[2], c.r[16].w[0] - 2340u);
    c.budget -= 1;
L_003BA9E8:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { breakpoint(c, 0x003BA9ECu);  goto L_003BA9F0; }
L_003BA9F0:
    mmi::div(c, 0, c.r[2].w[0], c.r[20].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[16].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 7u);  if (t) { goto L_003BAA20; } }
    c.r[3].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].sd[0] < -8ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], 0u - 8u);  goto L_003BAA20; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_003BAA24; } }
L_003BAA20:
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_003BAA24:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[16].w[0] << 24);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BAA38u); set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 24));  if (depth < kMaxDepth) unit_00AE(c, 314u, depth + 1u); else { c.pc = 0x003BA6D0u; return; } if (c.pc != 0x003BAA38u) [[unlikely]] return; }
L_003BAA38:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 124u)));
    mmi::mult(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[23].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], 0u + 32767u);  goto L_003BAA60; }
    c.r[3].d[0] = c.r[16].sd[0] < -32768ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[22].d[0] + 0ull;
    if (c.r[3].d[0] == 0) c.r[2].d[0] = c.r[16].d[0];
    set32(c.r[2], c.r[2].w[0] << 16);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.budget -= 5;
L_003BAA60:
    set32(c.r[4], ld32((c.r[17].w[0] + 136u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BAA6Cu); set32(c.r[18], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_00AE(c, 296u, depth + 1u); else { c.pc = 0x003BA350u; return; } if (c.pc != 0x003BAA6Cu) [[unlikely]] return; }
L_003BAA6C:
    set32(c.r[3], ld32((c.r[19].w[0] + 68u)));
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 4u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BA950u | kUnwind; return; } goto L_003BA950; } }
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003BAA80:
    c.r[2].d[0] = 0ull + 0ull;
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
L_003BAAB0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[6], 0u + 8u);
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[20].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[22].d[0]);
    set32(c.r[4], c.r[5].w[0] << 2);
    st64((c.r[29].w[0] + 88u), c.r[23].d[0]);
    set32(c.r[3], c.r[5].w[0] << 6);
    st64((c.r[29].w[0] + 96u), c.r[30].d[0]);
    set32(c.r[30], 0u - 1u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    set32(c.r[5], c.r[5].w[0] << 4);
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    set32(c.r[5], c.r[19].w[0] + c.r[5].w[0]);
    st64((c.r[29].w[0] + 72u), c.r[21].d[0]);
    set32(c.r[5], c.r[5].w[0] + 680u);
    st64((c.r[29].w[0] + 104u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 84u)));
    mmi::div(c, 0, c.r[6].w[0], c.r[2].w[0]);
    set32(c.r[6], c.r[3].w[0] + 528u);
    c.r[7].d[0] = c.lo.d[0];
    st32((c.r[29].w[0] + 20u), c.r[7].w[0]);
    c.budget -= 29;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x003BAB20u);  goto L_003BAB24; }
L_003BAB24:
    set32(c.r[2], ld32((c.r[19].w[0] + 68u)));
    set32(c.r[7], c.r[3].w[0] + 272u);
    st32((c.r[29].w[0] + 12u), c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + 400u);
    st32((c.r[29].w[0] + 16u), c.r[5].w[0]);
    set32(c.r[22], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[23], ld32((c.r[4].w[0] + 128u)));
    st32((c.r[29].w[0]), 0u);
    st32((c.r[29].w[0] + 4u), c.r[7].w[0]);
    c.budget -= 11;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[29].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_003BAD04; } }
    set32(c.r[21], 0u + 4681u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 2;
L_003BAB58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BAB60u); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 312u, depth + 1u); else { c.pc = 0x003BA698u; return; } if (c.pc != 0x003BAB60u) [[unlikely]] return; }
L_003BAB60:
    set32(c.r[17], c.r[20].w[0] << 1);
    set32(c.r[4], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[3], c.r[17].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[2].w[0] << 16);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BAB7Cu); set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 16));  if (depth < kMaxDepth) unit_0007(c, 75u, depth + 1u); else { c.pc = 0x0011CEF8u; return; } if (c.pc != 0x003BAB7Cu) [[unlikely]] return; }
L_003BAB7C:
    c.r[18].d[0] = ld64((c.r[23].w[0] + 128u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BAB8Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x003BAB8Cu) [[unlikely]] return; }
L_003BAB8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BAB94u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 78u, depth + 1u); else { c.pc = 0x0011CFB0u; return; } if (c.pc != 0x003BAB94u) [[unlikely]] return; }
L_003BAB94:
    set32(c.r[5], 0u + 32767u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 32767u);  if (t) { goto L_003BABC0; } }
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].sd[0] < -32768ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], 0u - 32768u);  goto L_003BABC0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[29].w[0] + 8u)));  if (t) { goto L_003BABC4; } }
L_003BABC0:
    set32(c.r[6], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 1;
L_003BABC4:
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[3], c.r[4].w[0] << 16);
    set32(c.r[2], c.r[17].w[0] + c.r[6].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] >= 0; st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_003BABE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[4].w[0] - 2340u);  if (t) { goto L_003BABE4; } }
L_003BABE0:
    set32(c.r[2], c.r[4].w[0] + 2340u);
    c.budget -= 1;
L_003BABE4:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { breakpoint(c, 0x003BABE8u);  goto L_003BABEC; }
L_003BABEC:
    mmi::div(c, 0, c.r[2].w[0], c.r[21].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[4].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], 0u + 7u);  if (t) { goto L_003BAC20; } }
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[16].sd[0] < -8ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], 0u - 8u);  goto L_003BAC20; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[23].w[0] + 124u)));  if (t) { goto L_003BAC24; } }
    c.budget -= 1;
L_003BAC20:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[23].w[0] + 124u)));
    c.budget -= 1;
L_003BAC24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BAC2Cu); mmi::mult(c, 0, c.r[16].w[0], c.r[4].w[0]); c.r[4].d[0] = c.lo.d[0];  if (depth < kMaxDepth) unit_0007(c, 75u, depth + 1u); else { c.pc = 0x0011CEF8u; return; } if (c.pc != 0x003BAC2Cu) [[unlikely]] return; }
L_003BAC2C:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BAC38u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x003BAC38u) [[unlikely]] return; }
L_003BAC38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BAC40u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 78u, depth + 1u); else { c.pc = 0x0011CFB0u; return; } if (c.pc != 0x003BAC40u) [[unlikely]] return; }
L_003BAC40:
    set32(c.r[3], 0u + 32767u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 32767u);  goto L_003BAC68; }
    c.r[2].d[0] = c.r[4].sd[0] < -32768ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u - 32768u);  goto L_003BAC68; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::div(c, 0, c.r[20].w[0], c.r[22].w[0]);  if (t) { goto L_003BAC6C; } }
L_003BAC68:
    mmi::div(c, 0, c.r[20].w[0], c.r[22].w[0]);
    c.budget -= 1;
L_003BAC6C:
    set32(c.r[5], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[2], c.r[17].w[0] + c.r[5].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 5;
    if (c.r[22].d[0] == 0ull) { breakpoint(c, 0x003BAC7Cu);  goto L_003BAC80; }
L_003BAC80:
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 16u)));  if (t) { goto L_003BACA8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[30], c.r[30].w[0] + 1u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[2].w[0] + c.r[30].w[0]);
    st32((c.r[29].w[0]), c.r[6].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_003BACAC; } }
L_003BACA8:
    set32(c.r[7], c.r[3].w[0] + c.r[30].w[0]);
    c.budget -= 1;
L_003BACAC:
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[3], 0u + 8u);
    set32(c.r[6], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[5], ld32((c.r[19].w[0] + 84u)));
    set32(c.r[4], c.r[6].w[0] - c.r[2].w[0]);
    c.r[6].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    mmi::mult(c, 0, c.r[4].w[0], c.r[5].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[16].w[0] << (c.r[3].w[0] & 31u));
    set32(c.r[5], ld32((c.r[29].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> (c.r[3].w[0] & 31u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[16].w[0] << (c.r[4].w[0] & 31u));
    st32((c.r[29].w[0]), c.r[5].w[0]);
    c.r[6].d[0] = c.r[6].d[0] | c.r[4].d[0];
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[2], ld32((c.r[19].w[0] + 68u)));
    c.r[2].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 22;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BAB58u | kUnwind; return; } goto L_003BAB58; } }
L_003BAD04:
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
L_003BAD38:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    set32(c.r[8], c.r[16].w[0] + 144u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    set32(c.r[9], c.r[16].w[0] + 208u);
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 104u), c.r[31].d[0]);
    st32((c.r[29].w[0]), c.r[8].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 68u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[17], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[9].w[0]);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[17].d[0] = c.r[6].d[0];
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BADA0u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 315u, depth + 1u); else { c.pc = 0x003BA6E0u; return; } if (c.pc != 0x003BADA0u) [[unlikely]] return; }
L_003BADA0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_003BAECC; }
    set32(c.r[6], ld32((c.r[16].w[0] + 68u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 88u)));  if (t) { goto L_003BAE10; } }
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] <= 0; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_003BAE10; } }
    set32(c.r[20], c.r[17].w[0] << 1);
    c.r[18].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 4;
L_003BADD0:
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[20].w[0] + c.r[2].w[0]);  if (t) { goto L_003BADF4; } }
    set32(c.r[6], c.r[6].w[0] - c.r[17].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BADECu); set32(c.r[6], c.r[6].w[0] << 1);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003BADECu) [[unlikely]] return; }
L_003BADEC:
    set32(c.r[6], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 2;
L_003BADF4:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BADD0u | kUnwind; return; } goto L_003BADD0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 48u)));  if (t) { goto L_003BAE14; } }
    c.budget -= 1;
L_003BAE10:
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 1;
L_003BAE14:
    c.r[21].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; st32((c.r[16].w[0] + 48u), c.r[2].w[0]);  if (t) { goto L_003BAEC4; } }
    set32(c.r[30], c.r[29].w[0] + 18u);
    set32(c.r[23], c.r[16].w[0] + 12u);
    set32(c.r[22], c.r[16].w[0] + 8u);
    set32(c.r[20], c.r[16].w[0] + 664u);
    set32(c.r[19], c.r[16].w[0] + 656u);
    set32(c.r[17], c.r[16].w[0] + 128u);
    set32(c.r[18], 0u + 128u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 9;
L_003BAE48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BAE50u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 323u, depth + 1u); else { c.pc = 0x003BA850u; return; } if (c.pc != 0x003BAE50u) [[unlikely]] return; }
L_003BAE50:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[29].w[0] + 16u);
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.r[7].d[0] = ld64((c.r[3].w[0] + 128u));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = ld16((c.r[3].w[0] + 124u));
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[4], ld32((c.r[3].w[0] + 136u)));
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[19], c.r[19].w[0] + 2u);
    st64((c.r[20].w[0]), c.r[7].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BAE84u); set32(c.r[20], c.r[20].w[0] + 8u);  if (depth < kMaxDepth) unit_00AE(c, 295u, depth + 1u); else { c.pc = 0x003BA338u; return; } if (c.pc != 0x003BAE84u) [[unlikely]] return; }
L_003BAE84:
    set32(c.r[4], c.r[22].w[0] + c.r[18].w[0]);
    c.r[2].d[0] = ld16((c.r[29].w[0] + 16u));
    set32(c.r[6], c.r[23].w[0] + c.r[18].w[0]);
    c.r[3].d[0] = ld16((c.r[29].w[0] + 18u));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BAEB0u); set32(c.r[18], c.r[18].w[0] + 2u);  if (depth < kMaxDepth) unit_00AE(c, 339u, depth + 1u); else { c.pc = 0x003BAAB0u; return; } if (c.pc != 0x003BAEB0u) [[unlikely]] return; }
L_003BAEB0:
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    c.r[2].d[0] = c.r[21].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BAE48u | kUnwind; return; } goto L_003BAE48; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 1;
L_003BAEC4:
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 2;
L_003BAECC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 88u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 104u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003BAEF8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    c.r[21].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[22].d[0]);
    c.r[22].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 88u)));
    c.budget -= 15;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[20], ld32((c.r[18].w[0] + 12u)));  if (t) { goto L_003BAFFC; } }
    set32(c.r[17], c.r[18].w[0] + 680u);
    set32(c.r[19], c.r[18].w[0] + 656u);
    c.r[4].d[0] = ld16((c.r[18].w[0] + 720u));
    c.budget -= 3;
L_003BAF40:
    c.r[5].d[0] = ld16((c.r[18].w[0] + 722u));
    c.r[3].d[0] = ld16((c.r[19].w[0]));
    set32(c.r[19], c.r[19].w[0] + 2u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[2].d[0] = ld16((c.r[18].w[0] + 724u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[6], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[4].d[0] ^ c.r[3].d[0];
    set32(c.r[4], c.r[4].w[0] << 16);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 16));
    c.r[2].d[0] = c.r[2].d[0] & 32767ull;
    c.budget -= 14;
    { const bool t = c.r[6].d[0] != 0ull; st16((c.r[18].w[0] + 720u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003BAF98; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_003BAF9C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_003BAFA0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    if (c.r[2].d[0] == 0) c.r[16].d[0] = 0ull;
    c.budget -= 2;
L_003BAF98:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 1;
L_003BAF9C:
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_003BAFA0:
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 8));
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BAFB8u); st8((c.r[29].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AE(c, 281u, depth + 1u); else { c.pc = 0x003BA098u; return; } if (c.pc != 0x003BAFB8u) [[unlikely]] return; }
L_003BAFB8:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BAFD0u); st8((c.r[29].w[0]), static_cast<std::uint8_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_00AE(c, 281u, depth + 1u); else { c.pc = 0x003BA098u; return; } if (c.pc != 0x003BAFD0u) [[unlikely]] return; }
L_003BAFD0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] + 16u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 16u);
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BAFECu); set32(c.r[22], c.r[22].w[0] + 18u);  if (depth < kMaxDepth) unit_00AE(c, 281u, depth + 1u); else { c.pc = 0x003BA098u; return; } if (c.pc != 0x003BAFECu) [[unlikely]] return; }
L_003BAFEC:
    set32(c.r[3], ld32((c.r[18].w[0] + 88u)));
    c.r[3].d[0] = c.r[21].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = ld16((c.r[18].w[0] + 720u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BAF40u | kUnwind; return; } goto L_003BAF40; }
L_003BAFFC:
    c.r[2].d[0] = c.r[22].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003BB028:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], 0u + 18u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[17], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 10;
L_003BB050:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB064u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BB064u) [[unlikely]] return; }
L_003BB064:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    mmi::div(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.budget -= 4;
    if (c.r[18].d[0] == 0ull) { breakpoint(c, 0x003BB070u);  goto L_003BB074; }
L_003BB074:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    c.r[2].d[0] = c.lo.d[0];
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_003BB0BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB094u);  if (depth < kMaxDepth) unit_00AE(c, 348u, depth + 1u); else { c.pc = 0x003BAD38u; return; } if (c.pc != 0x003BB094u) [[unlikely]] return; }
L_003BB094:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_003BB0BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB0A4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 356u, depth + 1u); else { c.pc = 0x003BAEF8u; return; } if (c.pc != 0x003BB0A4u) [[unlikely]] return; }
L_003BB0A4:
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB050u | kUnwind; return; } goto L_003BB050; } }
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_003BB0BC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003BB0D8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 108u)));
    set32(c.r[18], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 10;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[5], ld32((c.r[4].w[0] + 44u)));  if (t) { goto L_003BB108; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[4].w[0] + 80u)));  if (t) { goto L_003BB12C; } }
L_003BB108:
    set32(c.r[2], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] + 2047u);
    set32(c.r[2], c.r[2].w[0] + 4094u);
    c.r[4].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[4].d[0] != 0) c.r[3].d[0] = c.r[2].d[0];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 11));
    set32(c.r[3], c.r[3].w[0] << 11);
    set32(c.r[17], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 9;
L_003BB12C:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB144u); set32(c.r[16], c.r[17].w[0] - 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BB144u) [[unlikely]] return; }
L_003BB144:
    c.r[3].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003BB1B8; } }
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = 0ull | 32769ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB16Cu); st16((c.r[29].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AE(c, 281u, depth + 1u); else { c.pc = 0x003BA098u; return; } if (c.pc != 0x003BB16Cu) [[unlikely]] return; }
L_003BB16C:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB184u); st16((c.r[29].w[0]), static_cast<std::uint16_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_00AE(c, 281u, depth + 1u); else { c.pc = 0x003BA098u; return; } if (c.pc != 0x003BB184u) [[unlikely]] return; }
L_003BB184:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0; st8((c.r[29].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003BB1B4; } }
    set32(c.r[19], c.r[29].w[0] + 2u);
    set32(c.r[16], c.r[17].w[0] - 4u);
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 3;
L_003BB198:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB1ACu); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 281u, depth + 1u); else { c.pc = 0x003BA098u; return; } if (c.pc != 0x003BB1ACu) [[unlikely]] return; }
L_003BB1AC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB198u | kUnwind; return; } goto L_003BB198; } }
L_003BB1B4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003BB1B8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003BB1D8:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] - 3940u)));
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 104u), c.r[31].d[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB218u); c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 237u, depth + 1u); else { c.pc = 0x00127D00u; return; } if (c.pc != 0x003BB218u) [[unlikely]] return; }
L_003BB218:
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB23Cu); c.r[6].d[0] = c.r[6].d[0] | 65535ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BB23Cu) [[unlikely]] return; }
L_003BB23C:
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[7], ld32((c.r[2].w[0] + 28u)));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 7;
    { const std::uint32_t t = c.r[7].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB258u); set32(c.r[16], ld32((c.r[29].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BB258u) [[unlikely]] return; }
L_003BB258:
    set32(c.r[3], ld32((c.r[20].w[0] + 72u)));
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[16].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003BB834; } }
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[29].w[0] + 16u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB288u); st16((c.r[29].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AE(c, 281u, depth + 1u); else { c.pc = 0x003BA098u; return; } if (c.pc != 0x003BB288u) [[unlikely]] return; }
L_003BB288:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003BB834; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 72u)));
    set32(c.r[4], c.r[29].w[0] + 18u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB2B4u); st16((c.r[29].w[0] + 18u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AE(c, 281u, depth + 1u); else { c.pc = 0x003BA098u; return; } if (c.pc != 0x003BB2B4u) [[unlikely]] return; }
L_003BB2B4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[17].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003BB834; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 76u)));
    set32(c.r[23], c.r[29].w[0] + 20u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB2E0u); st8((c.r[29].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AE(c, 281u, depth + 1u); else { c.pc = 0x003BA098u; return; } if (c.pc != 0x003BB2E0u) [[unlikely]] return; }
L_003BB2E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[16].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003BB834; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 80u));
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB304u); st8((c.r[29].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AE(c, 281u, depth + 1u); else { c.pc = 0x003BA098u; return; } if (c.pc != 0x003BB304u) [[unlikely]] return; }
L_003BB304:
    set32(c.r[18], 0u + 1u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[18].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003BB834; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 84u));
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB330u); st8((c.r[29].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AE(c, 281u, depth + 1u); else { c.pc = 0x003BA098u; return; } if (c.pc != 0x003BB330u) [[unlikely]] return; }
L_003BB330:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[17].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003BB834; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 88u));
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB358u); st8((c.r[29].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AE(c, 281u, depth + 1u); else { c.pc = 0x003BA098u; return; } if (c.pc != 0x003BB358u) [[unlikely]] return; }
L_003BB358:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[16].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003BB834; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 92u)));
    set32(c.r[4], c.r[29].w[0] + 24u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB380u); st32((c.r[29].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 281u, depth + 1u); else { c.pc = 0x003BA098u; return; } if (c.pc != 0x003BB380u) [[unlikely]] return; }
L_003BB380:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[17].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003BB834; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[4], c.r[29].w[0] + 24u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB3A8u); st32((c.r[29].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 281u, depth + 1u); else { c.pc = 0x003BA098u; return; } if (c.pc != 0x003BB3A8u) [[unlikely]] return; }
L_003BB3A8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[16].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003BB834; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 100u)));
    set32(c.r[22], c.r[29].w[0] + 22u);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB3D4u); st16((c.r[29].w[0] + 22u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AE(c, 281u, depth + 1u); else { c.pc = 0x003BA098u; return; } if (c.pc != 0x003BB3D4u) [[unlikely]] return; }
L_003BB3D4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[17].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003BB834; } }
    set32(c.r[2], 0u + 4u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB3FCu); st8((c.r[29].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AE(c, 281u, depth + 1u); else { c.pc = 0x003BA098u; return; } if (c.pc != 0x003BB3FCu) [[unlikely]] return; }
L_003BB3FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[16].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003BB834; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 720u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 8u);  if (t) { goto L_003BB418; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 20u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003BB41C; } }
L_003BB418:
    st8((c.r[29].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_003BB41C:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB430u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 281u, depth + 1u); else { c.pc = 0x003BA098u; return; } if (c.pc != 0x003BB430u) [[unlikely]] return; }
L_003BB430:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003BB834; } }
    set32(c.r[4], c.r[29].w[0] + 24u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB458u); st32((c.r[29].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_00AE(c, 281u, depth + 1u); else { c.pc = 0x003BA098u; return; } if (c.pc != 0x003BB458u) [[unlikely]] return; }
L_003BB458:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[16].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003BB834; } }
    c.r[2].d[0] = ld16((c.r[20].w[0] + 712u));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB480u); st16((c.r[29].w[0] + 22u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AE(c, 281u, depth + 1u); else { c.pc = 0x003BA098u; return; } if (c.pc != 0x003BB480u) [[unlikely]] return; }
L_003BB480:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[17].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003BB834; } }
    c.r[2].d[0] = ld16((c.r[20].w[0] + 716u));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB4A8u); st16((c.r[29].w[0] + 22u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AE(c, 281u, depth + 1u); else { c.pc = 0x003BA098u; return; } if (c.pc != 0x003BB4A8u) [[unlikely]] return; }
L_003BB4A8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[16].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003BB834; } }
    c.r[2].d[0] = ld16((c.r[20].w[0] + 714u));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB4D0u); st16((c.r[29].w[0] + 22u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AE(c, 281u, depth + 1u); else { c.pc = 0x003BA098u; return; } if (c.pc != 0x003BB4D0u) [[unlikely]] return; }
L_003BB4D0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[17].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003BB834; } }
    c.r[2].d[0] = ld16((c.r[20].w[0] + 718u));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB4F8u); st16((c.r[29].w[0] + 22u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AE(c, 281u, depth + 1u); else { c.pc = 0x003BA098u; return; } if (c.pc != 0x003BB4F8u) [[unlikely]] return; }
L_003BB4F8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[16].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003BB834; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 108u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; set32(c.r[18], 0u + 28u);  if (t) { goto L_003BB668; } }
    c.r[2].d[0] = ld16((c.r[20].w[0] + 104u));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB52Cu); st16((c.r[29].w[0] + 22u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AE(c, 281u, depth + 1u); else { c.pc = 0x003BA098u; return; } if (c.pc != 0x003BB52Cu) [[unlikely]] return; }
L_003BB52C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[17].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003BB834; } }
    c.r[2].d[0] = ld16((c.r[20].w[0] + 108u));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB554u); st16((c.r[29].w[0] + 22u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AE(c, 281u, depth + 1u); else { c.pc = 0x003BA098u; return; } if (c.pc != 0x003BB554u) [[unlikely]] return; }
L_003BB554:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[16].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003BB834; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 108u)));
    set32(c.r[18], 0u + 32u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_003BB668; } }
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 1;
L_003BB570:
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    st16((c.r[29].w[0] + 22u), static_cast<std::uint16_t>(c.r[21].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB588u); set32(c.r[21], c.r[21].w[0] + 1u);  if (depth < kMaxDepth) unit_00AE(c, 281u, depth + 1u); else { c.pc = 0x003BA098u; return; } if (c.pc != 0x003BB588u) [[unlikely]] return; }
L_003BB588:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != c.r[6].d[0]; c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_003BB830; } }
    set32(c.r[18], c.r[18].w[0] + 2u);
    st16((c.r[29].w[0] + 22u), static_cast<std::uint16_t>(c.r[16].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB5B0u); set32(c.r[18], c.r[18].w[0] + 2u);  if (depth < kMaxDepth) unit_00AE(c, 281u, depth + 1u); else { c.pc = 0x003BA098u; return; } if (c.pc != 0x003BB5B0u) [[unlikely]] return; }
L_003BB5B0:
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] + 4u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[18], c.r[18].w[0] + 4u);
    set32(c.r[4], c.r[29].w[0] + 24u);
    set32(c.r[18], c.r[18].w[0] + 4u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 10;
    { const bool t = c.r[17].d[0] != c.r[16].d[0]; c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_003BB830; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 112u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB5E4u); st32((c.r[29].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 281u, depth + 1u); else { c.pc = 0x003BA098u; return; } if (c.pc != 0x003BB5E4u) [[unlikely]] return; }
L_003BB5E4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 24u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != c.r[17].d[0]; c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_003BB830; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 116u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB608u); st32((c.r[29].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 281u, depth + 1u); else { c.pc = 0x003BA098u; return; } if (c.pc != 0x003BB608u) [[unlikely]] return; }
L_003BB608:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 24u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[17].d[0] != c.r[16].d[0]; c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_003BB830; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 120u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB62Cu); st32((c.r[29].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 281u, depth + 1u); else { c.pc = 0x003BA098u; return; } if (c.pc != 0x003BB62Cu) [[unlikely]] return; }
L_003BB62C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 24u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != c.r[17].d[0]; c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_003BB830; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 124u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB650u); st32((c.r[29].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 281u, depth + 1u); else { c.pc = 0x003BA098u; return; } if (c.pc != 0x003BB650u) [[unlikely]] return; }
L_003BB650:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[16].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003BB834; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 108u)));
    c.r[2].d[0] = c.r[21].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB570u | kUnwind; return; } goto L_003BB570; } }
L_003BB668:
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 726u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[20].w[0] + 72u)));  goto L_003BB7BC; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41490000u);  if (t) { goto L_003BB6A8; } }
    set32(c.r[4], c.r[29].w[0] + 24u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB698u); st32((c.r[29].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_00AE(c, 281u, depth + 1u); else { c.pc = 0x003BA098u; return; } if (c.pc != 0x003BB698u) [[unlikely]] return; }
L_003BB698:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[16].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003BB834; } }
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41490000u);
    c.budget -= 2;
L_003BB6A8:
    set32(c.r[4], c.r[29].w[0] + 24u);
    c.r[2].d[0] = c.r[2].d[0] | 20038ull;
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB6C4u); st32((c.r[29].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 281u, depth + 1u); else { c.pc = 0x003BA098u; return; } if (c.pc != 0x003BB6C4u) [[unlikely]] return; }
L_003BB6C4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[16].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003BB834; } }
    set32(c.r[2], 0u + 24u);
    set32(c.r[4], c.r[29].w[0] + 24u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB6ECu); st32((c.r[29].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 281u, depth + 1u); else { c.pc = 0x003BA098u; return; } if (c.pc != 0x003BB6ECu) [[unlikely]] return; }
L_003BB6EC:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != c.r[17].d[0]; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { goto L_003BB830; } }
    set32(c.r[4], c.r[20].w[0] + 727u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB70Cu); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 281u, depth + 1u); else { c.pc = 0x003BA098u; return; } if (c.pc != 0x003BB70Cu) [[unlikely]] return; }
L_003BB70C:
    set32(c.r[3], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { goto L_003BB830; } }
    c.r[2].d[0] = ld16((c.r[20].w[0] + 744u));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB734u); st16((c.r[29].w[0] + 22u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AE(c, 281u, depth + 1u); else { c.pc = 0x003BA098u; return; } if (c.pc != 0x003BB734u) [[unlikely]] return; }
L_003BB734:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[21].d[0]; set32(c.r[18], c.r[18].w[0] + 16u);  if (t) { goto L_003BB830; } }
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB758u); st16((c.r[29].w[0] + 22u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_00AE(c, 281u, depth + 1u); else { c.pc = 0x003BA098u; return; } if (c.pc != 0x003BB758u) [[unlikely]] return; }
L_003BB758:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[16].d[0]; set32(c.r[18], c.r[18].w[0] + 2u);  if (t) { goto L_003BB830; } }
    c.r[2].d[0] = ld16((c.r[20].w[0] + 746u));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB780u); st16((c.r[29].w[0] + 22u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AE(c, 281u, depth + 1u); else { c.pc = 0x003BA098u; return; } if (c.pc != 0x003BB780u) [[unlikely]] return; }
L_003BB780:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[17].d[0]; set32(c.r[18], c.r[18].w[0] + 2u);  if (t) { goto L_003BB830; } }
    c.r[2].d[0] = ld16((c.r[20].w[0] + 748u));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    st16((c.r[29].w[0] + 22u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB7ACu); set32(c.r[18], c.r[18].w[0] + 2u);  if (depth < kMaxDepth) unit_00AE(c, 281u, depth + 1u); else { c.pc = 0x003BA098u; return; } if (c.pc != 0x003BB7ACu) [[unlikely]] return; }
L_003BB7AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[16].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003BB834; } }
    set32(c.r[18], c.r[18].w[0] + 2u);
    set32(c.r[3], ld32((c.r[20].w[0] + 72u)));
    c.budget -= 2;
L_003BB7BC:
    set32(c.r[16], c.r[3].w[0] - c.r[30].w[0]);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st8((c.r[29].w[0] + 20u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003BB800; } }
    set32(c.r[17], 0u + 1u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 3;
L_003BB7D8:
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB7E8u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 281u, depth + 1u); else { c.pc = 0x003BA098u; return; } if (c.pc != 0x003BB7E8u) [[unlikely]] return; }
L_003BB7E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[17].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003BB834; } }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB7D8u | kUnwind; return; } goto L_003BB7D8; } }
L_003BB800:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] - 3940u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB818u); c.r[6].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 281u, depth + 1u); else { c.pc = 0x003BA098u; return; } if (c.pc != 0x003BB818u) [[unlikely]] return; }
L_003BB818:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[30].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_003BB834; }
    set32(c.r[18], c.r[18].w[0] + c.r[30].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[18].w[0] + 4u);  if (t) { goto L_003BB834; } }
    c.budget -= 1;
L_003BB830:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003BB834:
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
L_003BB868:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB878u);  if (depth < kMaxDepth) unit_00AE(c, 261u, depth + 1u); else { c.pc = 0x003B9C08u; return; } if (c.pc != 0x003BB878u) [[unlikely]] return; }
L_003BB878:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[4], c.r[4].w[0] - 3936u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 6016u);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00124ED8u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 49u, depth); }
L_003BB898:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB8A8u);  if (depth < kMaxDepth) unit_00AE(c, 262u, depth + 1u); else { c.pc = 0x003B9C28u; return; } if (c.pc != 0x003BB8A8u) [[unlikely]] return; }
L_003BB8A8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[4], c.r[4].w[0] - 3936u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 6016u);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00124ED8u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 49u, depth); }
L_003BB8C8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], c.r[7].w[0] - 3936u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.r[9].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003BB924; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_003BB900:
    c.r[2].d[0] = c.r[5].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 752u);  if (t) { goto L_003BB924; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB900u | kUnwind; return; } goto L_003BB900; }
L_003BB924:
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003BBA80; } }
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[7].w[0] - 3936u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = c.r[18].sd[0] <= 0; st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[18].w[0]));  if (t) { goto L_003BB980; } }
    set32(c.r[7], c.r[17].w[0] + 4u);
    c.budget -= 2;
L_003BB960:
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.r[5].d[0] = c.r[6].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != 0ull; st32((c.r[2].w[0]), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB960u | kUnwind; return; } goto L_003BB960; } }
L_003BB980:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    st32((c.r[17].w[0] + 12u), c.r[9].w[0]);
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 40u), 0u);
    set32(c.r[6], 0u + 4u);
    st32((c.r[17].w[0] + 44u), 0u);
    set32(c.r[7], 0u + 4u);
    st32((c.r[17].w[0] + 48u), 0u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB9B0u); st32((c.r[17].w[0] + 52u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_00AC(c, 177u, depth + 1u); else { c.pc = 0x003B28A0u; return; } if (c.pc != 0x003BB9B0u) [[unlikely]] return; }
L_003BB9B0:
    set32(c.r[3], 0u + 4u);
    set32(c.r[5], 0u + 128u);
    set32(c.r[6], 0u + 3u);
    mmi::div(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[7].d[0] = 0ull | 44100ull;
    set32(c.r[8], 0u + 18u);
    set32(c.r[9], 0u + 4u);
    set32(c.r[10], 0u + 500u);
    set32(c.r[11], 0u + 32u);
    st32((c.r[17].w[0] + 76u), c.r[6].w[0]);
    set32(c.r[4], 0u + 32u);
    st32((c.r[17].w[0] + 92u), c.r[7].w[0]);
    st32((c.r[17].w[0] + 80u), c.r[8].w[0]);
    st32((c.r[17].w[0] + 84u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 72u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 88u), c.r[18].w[0]);
    c.budget -= 18;
    if (c.r[9].d[0] == 0ull) { breakpoint(c, 0x003BB9F4u);  goto L_003BB9F8; }
L_003BB9F8:
    st32((c.r[17].w[0] + 100u), c.r[10].w[0]);
    st32((c.r[17].w[0] + 96u), c.r[16].w[0]);
    st32((c.r[17].w[0] + 104u), 0u);
    st32((c.r[17].w[0] + 108u), 0u);
    st32((c.r[17].w[0] + 112u), 0u);
    st32((c.r[17].w[0] + 116u), 0u);
    st32((c.r[17].w[0] + 120u), 0u);
    st32((c.r[17].w[0] + 124u), 0u);
    st32((c.r[17].w[0] + 56u), 0u);
    st32((c.r[17].w[0] + 60u), 0u);
    c.r[5].d[0] = c.lo.d[0];
    st32((c.r[17].w[0] + 68u), c.r[5].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBA30u); st32((c.r[17].w[0] + 64u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 297u, depth + 1u); else { c.pc = 0x003BA3C8u; return; } if (c.pc != 0x003BBA30u) [[unlikely]] return; }
L_003BBA30:
    set32(c.r[4], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBA3Cu); st32((c.r[17].w[0] + 128u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 297u, depth + 1u); else { c.pc = 0x003BA3C8u; return; } if (c.pc != 0x003BBA3Cu) [[unlikely]] return; }
L_003BBA3C:
    st16((c.r[17].w[0] + 716u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], 0u - 128u);
    st32((c.r[17].w[0] + 132u), c.r[2].w[0]);
    st16((c.r[17].w[0] + 748u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[17].w[0] + 727u);
    st16((c.r[17].w[0] + 746u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    st16((c.r[17].w[0] + 712u), static_cast<std::uint16_t>(0u));
    set32(c.r[6], 0u + 16u);
    st16((c.r[17].w[0] + 718u), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0] + 714u), static_cast<std::uint16_t>(0u));
    st8((c.r[17].w[0] + 726u), static_cast<std::uint8_t>(0u));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBA74u); st16((c.r[17].w[0] + 744u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003BBA74u) [[unlikely]] return; }
L_003BBA74:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
L_003BBA80:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003BBA98:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_003BBAF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBAB4u);  if (depth < kMaxDepth) unit_00AC(c, 155u, depth + 1u); else { c.pc = 0x003B1E00u; return; } if (c.pc != 0x003BBAB4u) [[unlikely]] return; }
L_003BBAB4:
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003BBAC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBAC8u);  if (depth < kMaxDepth) unit_00AE(c, 300u, depth + 1u); else { c.pc = 0x003BA468u; return; } if (c.pc != 0x003BBAC8u) [[unlikely]] return; }
L_003BBAC8:
    set32(c.r[4], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0]), 0u);  goto L_003BBAE0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBADCu);  if (depth < kMaxDepth) unit_00AE(c, 300u, depth + 1u); else { c.pc = 0x003BA468u; return; } if (c.pc != 0x003BBADCu) [[unlikely]] return; }
L_003BBADC:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_003BBAE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B1E18u | kUnwind; return; } [[clang::musttail]] return unit_00AC(c, 156u, depth); }
L_003BBAF0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BBB00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));  c.pc = t; return; }
L_003BBB08:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    c.budget -= 12;
    { const bool t = c.r[3].sd[0] <= 0; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_003BBBF0; } }
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003BBB40:
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[16], c.r[2].w[0] << 1);
    c.budget -= 4;
    { const bool t = c.r[16].sd[0] <= 0; c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003BBBE0; } }
    set32(c.r[19], c.r[17].w[0] + 4u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[18], c.r[19].w[0] + c.r[20].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBB70u); c.r[7].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BBB70u) [[unlikely]] return; }
L_003BBB70:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[16].d[0]; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003BBBB8; } }
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBB94u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BBB94u) [[unlikely]] return; }
L_003BBB94:
    c.budget -= 1;
L_003BBB98:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BBB98u | kUnwind; return; } goto L_003BBB98; } }
    c.budget -= 1;
L_003BBBB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBBC0u); set32(c.r[4], ld32((c.r[29].w[0])));  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003BBBC0u) [[unlikely]] return; }
L_003BBBC0:
    set32(c.r[3], c.r[19].w[0] + c.r[20].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBBDCu); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BBBDCu) [[unlikely]] return; }
L_003BBBDC:
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    c.budget -= 1;
L_003BBBE0:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BBB40u | kUnwind; return; } goto L_003BBB40; } }
L_003BBBF0:
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 40u), 0u);
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[17].w[0] + 44u), 0u);
    st32((c.r[17].w[0] + 48u), 0u);
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003BBC30:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  c.pc = t; return; }
L_003BBC40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 92u), c.r[5].w[0]);  c.pc = t; return; }
L_003BBC48:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 72u), c.r[5].w[0]);  c.pc = t; return; }
L_003BBC50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 88u), c.r[5].w[0]);  c.pc = t; return; }
L_003BBC58:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 84u), c.r[5].w[0]);  c.pc = t; return; }
L_003BBC60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    st32((c.r[16].w[0] + 68u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003BBC88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBC88u);  if (depth < kMaxDepth) unit_00AE(c, 300u, depth + 1u); else { c.pc = 0x003BA468u; return; } if (c.pc != 0x003BBC88u) [[unlikely]] return; }
L_003BBC88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBC90u); set32(c.r[4], ld32((c.r[16].w[0] + 68u)));  if (depth < kMaxDepth) unit_00AE(c, 297u, depth + 1u); else { c.pc = 0x003BA3C8u; return; } if (c.pc != 0x003BBC90u) [[unlikely]] return; }
L_003BBC90:
    set32(c.r[3], ld32((c.r[16].w[0] + 132u)));
    st32((c.r[16].w[0] + 128u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_003BBCA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBCA8u);  if (depth < kMaxDepth) unit_00AE(c, 300u, depth + 1u); else { c.pc = 0x003BA468u; return; } if (c.pc != 0x003BBCA8u) [[unlikely]] return; }
L_003BBCA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBCB0u); set32(c.r[4], ld32((c.r[16].w[0] + 68u)));  if (depth < kMaxDepth) unit_00AE(c, 297u, depth + 1u); else { c.pc = 0x003BA3C8u; return; } if (c.pc != 0x003BBCB0u) [[unlikely]] return; }
L_003BBCB0:
    st32((c.r[16].w[0] + 132u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BBCC8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 80u), c.r[5].w[0]);  c.pc = t; return; }
L_003BBCD0:
    st32((c.r[4].w[0] + 96u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 60u), c.r[5].w[0]);  c.pc = t; return; }
L_003BBCE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 100u), c.r[5].w[0]);  c.pc = t; return; }
L_003BBCE8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 108u), c.r[5].w[0]);  c.pc = t; return; }
L_003BBCF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 104u), c.r[5].w[0]);  c.pc = t; return; }
L_003BBCF8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 112u), c.r[5].w[0]);  c.pc = t; return; }
L_003BBD00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 116u), c.r[5].w[0]);  c.pc = t; return; }
L_003BBD08:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 120u), c.r[5].w[0]);  c.pc = t; return; }
L_003BBD10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 124u), c.r[5].w[0]);  c.pc = t; return; }
L_003BBD18:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 726u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003BBD38; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 72u)));
    st8((c.r[4].w[0] + 726u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] + 36u);
    st32((c.r[4].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 4;
L_003BBD38:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 744u), static_cast<std::uint16_t>(c.r[5].w[0]));  c.pc = t; return; }
L_003BBD40:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 726u)));
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);  if (t) { goto L_003BBD64; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 72u)));
    st8((c.r[4].w[0] + 726u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] + 36u);
    st32((c.r[4].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 4;
L_003BBD64:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[5].w[0] + 746u), static_cast<std::uint16_t>(c.r[6].w[0]));  c.pc = t; return; }
L_003BBD70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[3].w[0] + 727u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 726u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == c.r[6].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003BBDB0; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 72u)));
    st8((c.r[3].w[0] + 726u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[2], c.r[2].w[0] + 36u);
    st32((c.r[3].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 4;
L_003BBDB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBDB8u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003BBDB8u) [[unlikely]] return; }
L_003BBDB8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[6], 0u + 16u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001281F0u | kUnwind; return; } [[clang::musttail]] return unit_000A(c, 12u, depth); }
L_003BBDD8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 726u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[7].w[0] + 727u);  if (t) { goto L_003BBE04; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 72u)));
    st8((c.r[7].w[0] + 726u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + 36u);
    st32((c.r[7].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 4;
L_003BBE04:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u - 128u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 16u);
    st16((c.r[7].w[0] + 744u), static_cast<std::uint16_t>(0u));
    st16((c.r[7].w[0] + 748u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[7].w[0] + 746u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00124ED8u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 49u, depth); }
L_003BBE28:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBE4Cu); c.r[18].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 438u, depth + 1u); else { c.pc = 0x003BBC50u; return; } if (c.pc != 0x003BBE4Cu) [[unlikely]] return; }
L_003BBE4C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBE58u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 436u, depth + 1u); else { c.pc = 0x003BBC40u; return; } if (c.pc != 0x003BBE58u) [[unlikely]] return; }
L_003BBE58:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBE64u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 446u, depth + 1u); else { c.pc = 0x003BBCD0u; return; } if (c.pc != 0x003BBE64u) [[unlikely]] return; }
L_003BBE64:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[5], 0u + 284u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BBC48u | kUnwind; return; } goto L_003BBC48; }
L_003BBE88:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBEA8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 237u, depth + 1u); else { c.pc = 0x00127D00u; return; } if (c.pc != 0x003BBEA8u) [[unlikely]] return; }
L_003BBEA8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBEC0u); set32(c.r[8], c.r[29].w[0] + 4u);  if (depth < kMaxDepth) unit_00AE(c, 263u, depth + 1u); else { c.pc = 0x003B9C48u; return; } if (c.pc != 0x003BBEC0u) [[unlikely]] return; }
L_003BBEC0:
    c.r[3].d[0] = ld16((c.r[29].w[0]));
    c.r[4].d[0] = ld16((c.r[29].w[0] + 2u));
    c.r[2].d[0] = ld16((c.r[29].w[0] + 4u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    st16((c.r[17].w[0] + 720u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[17].w[0] + 724u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[17].w[0] + 722u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003BBEF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 44u)));  c.pc = t; return; }
L_003BBEF8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 48u)));  c.pc = t; return; }
L_003BBF00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 48u), c.r[5].w[0]);  c.pc = t; return; }
L_003BBF08:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 48u)));  c.pc = t; return; }
L_003BBF10:
    set32(c.r[2], c.r[5].w[0] << 2);
    c.r[5].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);  if (t) { goto L_003BBF24; } }
    st32((c.r[4].w[0] + 4u), c.r[6].w[0]);
    c.budget -= 1;
L_003BBF24:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003BBF30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), c.r[5].w[0]);  c.pc = t; return; }
L_003BBF38:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[18], c.r[17].w[0] + 712u);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    set32(c.r[16], c.r[17].w[0] + 4u);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; set32(c.r[20], ld32((c.r[17].w[0] + 12u)));  if (t) { goto L_003BBFA0; } }
    c.budget -= 1;
L_003BBF70:
    set32(c.r[7], ld32((c.r[16].w[0])));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[8], ld32((c.r[7].w[0])));
    c.r[4].d[0] = c.r[7].d[0] + 0ull;
    c.r[2].d[0] = ld16((c.r[3].w[0]));
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[18].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[8].w[0] + 28u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBFA0u); set32(c.r[18], c.r[18].w[0] + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BBFA0u) [[unlikely]] return; }
L_003BBFA0:
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    c.r[2].d[0] = c.r[19].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_003BBFEC; } }
    set32(c.r[8], ld32((c.r[16].w[0])));
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[2], ld32((c.r[8].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBFCCu); c.r[4].d[0] = c.r[8].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BBFCCu) [[unlikely]] return; }
L_003BBFCC:
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BBF70u | kUnwind; return; } goto L_003BBF70; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    c.r[2].d[0] = c.r[19].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  [[clang::musttail]] return unit_00AF(c, 6u, depth); }
L_003BBFEC:
    c.budget -= 2;
    if (c.r[3].sd[0] <= 0) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  [[clang::musttail]] return unit_00AF(c, 2u, depth); }
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[3], c.r[17].w[0] + 136u);
    set32(c.r[4], c.r[17].w[0] + 140u);
    c.budget -= 3;
    [[clang::musttail]] return unit_00AF(c, 1u, depth);
}

}
