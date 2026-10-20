#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00A9[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0,
    0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0,
    0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0,
    25, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0,
    0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    47, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0,
    59, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    63, 0, 64, 0, 65, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 68, 0, 69, 0, 0, 0, 70,
    0, 0, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 75, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 0, 85, 0, 0, 86, 0, 0, 87, 0, 0, 0,
    0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 91, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0,
    95, 0, 0, 0, 96, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 102,
    0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 107, 0, 0, 0, 0, 0, 0, 108, 0,
    109, 0, 0, 0, 0, 0, 110, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0,
    0, 0, 114, 0, 0, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 0,
    0, 122, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0,
    135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 138, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0,
    0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 151,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 154, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0,
    0, 163, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0,
    171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0,
    0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0,
    0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0,
    0, 0, 0, 0, 181, 0, 182, 0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0,
    0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 0, 195, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 198, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 202, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 211, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 220, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0,
    0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0,
    0, 227, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 230, 0, 231, 0, 232, 0, 233, 0, 0, 0,
    0, 234, 0, 0, 235, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 240, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 245, 0, 0, 246, 0, 247,
    0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0,
    0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    255, 0, 0, 0, 0, 0, 256, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 261,
    0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0,
    266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0,
    270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 272, 0, 0, 273, 0, 0, 274, 0, 0, 275, 0, 0, 0, 0,
    0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 278, 0, 0, 279, 0, 0, 0, 0, 0, 280, 0, 0, 0,
    281, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 285, 0, 0, 0, 0, 286, 0, 0,
    0, 287, 0, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 292, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 296,
    0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 299, 0, 300, 0, 0, 0, 0, 301, 0, 0,
    0, 302, 0, 303, 0, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 308, 0, 0,
    309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0,
    0, 0, 0, 312, 0, 0, 0, 313, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0, 316, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 318, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 321, 0, 0, 0, 0, 322, 0, 0, 0, 323,
    0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 326, 0, 0, 0, 0, 327, 0, 0, 0, 0, 328, 0, 0, 0, 0,
    0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 332, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    336, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 340, 0, 0, 0, 0,
    0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 345, 0, 0, 0,
    0, 346, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 350, 0, 0, 0, 351, 0, 0, 352,
    0, 0, 0, 353, 0, 354, 0, 355, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 358, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360,
    0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 362, 0, 0, 0, 363, 0, 0, 0, 364, 0, 0, 0, 365, 0, 0, 0, 0, 366, 0, 367, 0, 0,
    0, 0, 368, 0, 0, 0, 369, 0, 0, 0, 370, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0, 0, 0, 374, 0, 0, 0, 375, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 380, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 383, 0, 384, 0, 385, 0, 386, 0, 0, 0, 387,
    0, 0, 388, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 0, 0, 0, 392, 0,
    0, 0, 0, 0, 0, 393, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 400, 0, 401, 0, 0, 0, 0,
    0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    405, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 407, 0, 408, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0,
    0, 0, 413, 0, 414, 0, 0, 415, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0,
    418, 0, 0, 0, 0, 419, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 425, 0, 0, 0,
    426, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 430, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 434, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435,
    0, 0, 0, 436, 0, 0, 437, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0,
    0, 0, 0, 0, 0, 441, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 443, 0, 444, 0, 0, 0, 0, 0, 445, 0, 0, 0, 446, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 455, 0, 0, 0, 0, 0, 456, 0, 0, 0, 457, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0,
    459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 466, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 471, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 482, 483, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00A9(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003A4000;
    case 2u: goto L_003A4010;
    case 3u: goto L_003A4024;
    case 4u: goto L_003A4038;
    case 5u: goto L_003A40AC;
    case 6u: goto L_003A40B8;
    case 7u: goto L_003A40D4;
    case 8u: goto L_003A40E0;
    case 9u: goto L_003A4104;
    case 10u: goto L_003A4118;
    case 11u: goto L_003A412C;
    case 12u: goto L_003A4148;
    case 13u: goto L_003A4154;
    case 14u: goto L_003A4170;
    case 15u: goto L_003A4184;
    case 16u: goto L_003A4198;
    case 17u: goto L_003A41AC;
    case 18u: goto L_003A41B8;
    case 19u: goto L_003A41CC;
    case 20u: goto L_003A41F0;
    case 21u: goto L_003A422C;
    case 22u: goto L_003A423C;
    case 23u: goto L_003A4250;
    case 24u: goto L_003A4274;
    case 25u: goto L_003A4280;
    case 26u: goto L_003A4294;
    case 27u: goto L_003A42B0;
    case 28u: goto L_003A42BC;
    case 29u: goto L_003A42E0;
    case 30u: goto L_003A4328;
    case 31u: goto L_003A4340;
    case 32u: goto L_003A4350;
    case 33u: goto L_003A4384;
    case 34u: goto L_003A4398;
    case 35u: goto L_003A43BC;
    case 36u: goto L_003A43D0;
    case 37u: goto L_003A4410;
    case 38u: goto L_003A4444;
    case 39u: goto L_003A4470;
    case 40u: goto L_003A4484;
    case 41u: goto L_003A4494;
    case 42u: goto L_003A44B0;
    case 43u: goto L_003A44D8;
    case 44u: goto L_003A4550;
    case 45u: goto L_003A4574;
    case 46u: goto L_003A45D0;
    case 47u: goto L_003A4600;
    case 48u: goto L_003A4624;
    case 49u: goto L_003A4644;
    case 50u: goto L_003A4650;
    case 51u: goto L_003A4670;
    case 52u: goto L_003A46A0;
    case 53u: goto L_003A46D8;
    case 54u: goto L_003A470C;
    case 55u: goto L_003A4738;
    case 56u: goto L_003A4750;
    case 57u: goto L_003A4760;
    case 58u: goto L_003A4770;
    case 59u: goto L_003A4780;
    case 60u: goto L_003A4790;
    case 61u: goto L_003A47C4;
    case 62u: goto L_003A47D0;
    case 63u: goto L_003A4800;
    case 64u: goto L_003A4808;
    case 65u: goto L_003A4810;
    case 66u: goto L_003A481C;
    case 67u: goto L_003A4858;
    case 68u: goto L_003A4864;
    case 69u: goto L_003A486C;
    case 70u: goto L_003A487C;
    case 71u: goto L_003A488C;
    case 72u: goto L_003A48A4;
    case 73u: goto L_003A48D4;
    case 74u: goto L_003A48F0;
    case 75u: goto L_003A48F8;
    case 76u: goto L_003A4928;
    case 77u: goto L_003A4938;
    case 78u: goto L_003A4960;
    case 79u: goto L_003A49C4;
    case 80u: goto L_003A49EC;
    case 81u: goto L_003A4A14;
    case 82u: goto L_003A4A24;
    case 83u: goto L_003A4A30;
    case 84u: goto L_003A4A4C;
    case 85u: goto L_003A4A58;
    case 86u: goto L_003A4A64;
    case 87u: goto L_003A4A70;
    case 88u: goto L_003A4A88;
    case 89u: goto L_003A4AA0;
    case 90u: goto L_003A4AB8;
    case 91u: goto L_003A4AC0;
    case 92u: goto L_003A4ACC;
    case 93u: goto L_003A4AE0;
    case 94u: goto L_003A4AF4;
    case 95u: goto L_003A4B00;
    case 96u: goto L_003A4B10;
    case 97u: goto L_003A4B18;
    case 98u: goto L_003A4B30;
    case 99u: goto L_003A4B44;
    case 100u: goto L_003A4B50;
    case 101u: goto L_003A4B60;
    case 102u: goto L_003A4B7C;
    case 103u: goto L_003A4B88;
    case 104u: goto L_003A4B9C;
    case 105u: goto L_003A4BB4;
    case 106u: goto L_003A4BD0;
    case 107u: goto L_003A4BDC;
    case 108u: goto L_003A4BF8;
    case 109u: goto L_003A4C00;
    case 110u: goto L_003A4C18;
    case 111u: goto L_003A4C24;
    case 112u: goto L_003A4C58;
    case 113u: goto L_003A4C70;
    case 114u: goto L_003A4C88;
    case 115u: goto L_003A4CA0;
    case 116u: goto L_003A4CB0;
    case 117u: goto L_003A4D20;
    case 118u: goto L_003A4D38;
    case 119u: goto L_003A4D48;
    case 120u: goto L_003A4D58;
    case 121u: goto L_003A4D6C;
    case 122u: goto L_003A4D84;
    case 123u: goto L_003A4D90;
    case 124u: goto L_003A4DA0;
    case 125u: goto L_003A4DB8;
    case 126u: goto L_003A4DD0;
    case 127u: goto L_003A4DE0;
    case 128u: goto L_003A4E08;
    case 129u: goto L_003A4E30;
    case 130u: goto L_003A4E4C;
    case 131u: goto L_003A4E80;
    case 132u: goto L_003A4EAC;
    case 133u: goto L_003A4EB8;
    case 134u: goto L_003A4EEC;
    case 135u: goto L_003A4F00;
    case 136u: goto L_003A4F28;
    case 137u: goto L_003A4F9C;
    case 138u: goto L_003A4FB0;
    case 139u: goto L_003A4FB4;
    case 140u: goto L_003A4FCC;
    case 141u: goto L_003A50DC;
    case 142u: goto L_003A5140;
    case 143u: goto L_003A51A0;
    case 144u: goto L_003A51F4;
    case 145u: goto L_003A5208;
    case 146u: goto L_003A5264;
    case 147u: goto L_003A5274;
    case 148u: goto L_003A52A8;
    case 149u: goto L_003A52B8;
    case 150u: goto L_003A52EC;
    case 151u: goto L_003A52FC;
    case 152u: goto L_003A5330;
    case 153u: goto L_003A5340;
    case 154u: goto L_003A5384;
    case 155u: goto L_003A5394;
    case 156u: goto L_003A53B8;
    case 157u: goto L_003A5428;
    case 158u: goto L_003A5430;
    case 159u: goto L_003A545C;
    case 160u: goto L_003A54A4;
    case 161u: goto L_003A54C4;
    case 162u: goto L_003A54E4;
    case 163u: goto L_003A5504;
    case 164u: goto L_003A5520;
    case 165u: goto L_003A5530;
    case 166u: goto L_003A5540;
    case 167u: goto L_003A5550;
    case 168u: goto L_003A5580;
    case 169u: goto L_003A55D0;
    case 170u: goto L_003A55E4;
    case 171u: goto L_003A5600;
    case 172u: goto L_003A5628;
    case 173u: goto L_003A5660;
    case 174u: goto L_003A5684;
    case 175u: goto L_003A56B4;
    case 176u: goto L_003A56D8;
    case 177u: goto L_003A56F0;
    case 178u: goto L_003A5710;
    case 179u: goto L_003A5730;
    case 180u: goto L_003A576C;
    case 181u: goto L_003A5790;
    case 182u: goto L_003A5798;
    case 183u: goto L_003A57AC;
    case 184u: goto L_003A57BC;
    case 185u: goto L_003A57E0;
    case 186u: goto L_003A57F0;
    case 187u: goto L_003A5804;
    case 188u: goto L_003A5828;
    case 189u: goto L_003A584C;
    case 190u: goto L_003A588C;
    case 191u: goto L_003A58C0;
    case 192u: goto L_003A58D4;
    case 193u: goto L_003A5910;
    case 194u: goto L_003A5924;
    case 195u: goto L_003A5938;
    case 196u: goto L_003A5940;
    case 197u: goto L_003A5964;
    case 198u: goto L_003A5990;
    case 199u: goto L_003A5998;
    case 200u: goto L_003A59BC;
    case 201u: goto L_003A59E4;
    case 202u: goto L_003A5A10;
    case 203u: goto L_003A5A18;
    case 204u: goto L_003A5A70;
    case 205u: goto L_003A5A9C;
    case 206u: goto L_003A5AAC;
    case 207u: goto L_003A5AC4;
    case 208u: goto L_003A5AEC;
    case 209u: goto L_003A5B14;
    case 210u: goto L_003A5B34;
    case 211u: goto L_003A5B54;
    case 212u: goto L_003A5B5C;
    case 213u: goto L_003A5BA0;
    case 214u: goto L_003A5BD4;
    case 215u: goto L_003A5C10;
    case 216u: goto L_003A5C24;
    case 217u: goto L_003A5C50;
    case 218u: goto L_003A5C70;
    case 219u: goto L_003A5CB0;
    case 220u: goto L_003A5CBC;
    case 221u: goto L_003A5CD4;
    case 222u: goto L_003A5CF0;
    case 223u: goto L_003A5D14;
    case 224u: goto L_003A5D28;
    case 225u: goto L_003A5D40;
    case 226u: goto L_003A5D70;
    case 227u: goto L_003A5D84;
    case 228u: goto L_003A5D98;
    case 229u: goto L_003A5DCC;
    case 230u: goto L_003A5DD8;
    case 231u: goto L_003A5DE0;
    case 232u: goto L_003A5DE8;
    case 233u: goto L_003A5DF0;
    case 234u: goto L_003A5E04;
    case 235u: goto L_003A5E10;
    case 236u: goto L_003A5E18;
    case 237u: goto L_003A5E30;
    case 238u: goto L_003A5E50;
    case 239u: goto L_003A5E5C;
    case 240u: goto L_003A5E88;
    case 241u: goto L_003A5E94;
    case 242u: goto L_003A5ED4;
    case 243u: goto L_003A5F1C;
    case 244u: goto L_003A5F5C;
    case 245u: goto L_003A5F68;
    case 246u: goto L_003A5F74;
    case 247u: goto L_003A5F7C;
    case 248u: goto L_003A5F98;
    case 249u: goto L_003A5FB8;
    case 250u: goto L_003A5FF0;
    case 251u: goto L_003A6010;
    case 252u: goto L_003A6050;
    case 253u: goto L_003A60B0;
    case 254u: goto L_003A60D8;
    case 255u: goto L_003A6100;
    case 256u: goto L_003A6118;
    case 257u: goto L_003A6120;
    case 258u: goto L_003A614C;
    case 259u: goto L_003A6160;
    case 260u: goto L_003A6174;
    case 261u: goto L_003A617C;
    case 262u: goto L_003A6190;
    case 263u: goto L_003A61AC;
    case 264u: goto L_003A61C0;
    case 265u: goto L_003A61EC;
    case 266u: goto L_003A6200;
    case 267u: goto L_003A622C;
    case 268u: goto L_003A6240;
    case 269u: goto L_003A626C;
    case 270u: goto L_003A6280;
    case 271u: goto L_003A62AC;
    case 272u: goto L_003A62C8;
    case 273u: goto L_003A62D4;
    case 274u: goto L_003A62E0;
    case 275u: goto L_003A62EC;
    case 276u: goto L_003A6304;
    case 277u: goto L_003A6330;
    case 278u: goto L_003A634C;
    case 279u: goto L_003A6358;
    case 280u: goto L_003A6370;
    case 281u: goto L_003A6380;
    case 282u: goto L_003A63A0;
    case 283u: goto L_003A63B4;
    case 284u: goto L_003A63CC;
    case 285u: goto L_003A63E0;
    case 286u: goto L_003A63F4;
    case 287u: goto L_003A6404;
    case 288u: goto L_003A6414;
    case 289u: goto L_003A6424;
    case 290u: goto L_003A6440;
    case 291u: goto L_003A6490;
    case 292u: goto L_003A64AC;
    case 293u: goto L_003A64B8;
    case 294u: goto L_003A64C8;
    case 295u: goto L_003A64F0;
    case 296u: goto L_003A64FC;
    case 297u: goto L_003A6514;
    case 298u: goto L_003A6538;
    case 299u: goto L_003A6558;
    case 300u: goto L_003A6560;
    case 301u: goto L_003A6574;
    case 302u: goto L_003A6584;
    case 303u: goto L_003A658C;
    case 304u: goto L_003A65A0;
    case 305u: goto L_003A65B0;
    case 306u: goto L_003A65C4;
    case 307u: goto L_003A65DC;
    case 308u: goto L_003A65F4;
    case 309u: goto L_003A6600;
    case 310u: goto L_003A6638;
    case 311u: goto L_003A6674;
    case 312u: goto L_003A668C;
    case 313u: goto L_003A669C;
    case 314u: goto L_003A66A4;
    case 315u: goto L_003A66B8;
    case 316u: goto L_003A66C8;
    case 317u: goto L_003A66D0;
    case 318u: goto L_003A670C;
    case 319u: goto L_003A6714;
    case 320u: goto L_003A6750;
    case 321u: goto L_003A6758;
    case 322u: goto L_003A676C;
    case 323u: goto L_003A677C;
    case 324u: goto L_003A6794;
    case 325u: goto L_003A67BC;
    case 326u: goto L_003A67C4;
    case 327u: goto L_003A67D8;
    case 328u: goto L_003A67EC;
    case 329u: goto L_003A6804;
    case 330u: goto L_003A6828;
    case 331u: goto L_003A6844;
    case 332u: goto L_003A6884;
    case 333u: goto L_003A688C;
    case 334u: goto L_003A68D0;
    case 335u: goto L_003A68D8;
    case 336u: goto L_003A6900;
    case 337u: goto L_003A6910;
    case 338u: goto L_003A6934;
    case 339u: goto L_003A695C;
    case 340u: goto L_003A696C;
    case 341u: goto L_003A6990;
    case 342u: goto L_003A69B0;
    case 343u: goto L_003A69C4;
    case 344u: goto L_003A69DC;
    case 345u: goto L_003A69F0;
    case 346u: goto L_003A6A04;
    case 347u: goto L_003A6A1C;
    case 348u: goto L_003A6A30;
    case 349u: goto L_003A6A4C;
    case 350u: goto L_003A6A60;
    case 351u: goto L_003A6A70;
    case 352u: goto L_003A6A7C;
    case 353u: goto L_003A6A8C;
    case 354u: goto L_003A6A94;
    case 355u: goto L_003A6A9C;
    case 356u: goto L_003A6AAC;
    case 357u: goto L_003A6ADC;
    case 358u: goto L_003A6AE4;
    case 359u: goto L_003A6B40;
    case 360u: goto L_003A6B7C;
    case 361u: goto L_003A6B94;
    case 362u: goto L_003A6BA8;
    case 363u: goto L_003A6BB8;
    case 364u: goto L_003A6BC8;
    case 365u: goto L_003A6BD8;
    case 366u: goto L_003A6BEC;
    case 367u: goto L_003A6BF4;
    case 368u: goto L_003A6C08;
    case 369u: goto L_003A6C18;
    case 370u: goto L_003A6C28;
    case 371u: goto L_003A6C38;
    case 372u: goto L_003A6C9C;
    case 373u: goto L_003A6CAC;
    case 374u: goto L_003A6CC0;
    case 375u: goto L_003A6CD0;
    case 376u: goto L_003A6CE0;
    case 377u: goto L_003A6CF0;
    case 378u: goto L_003A6D54;
    case 379u: goto L_003A6D64;
    case 380u: goto L_003A6D94;
    case 381u: goto L_003A6D9C;
    case 382u: goto L_003A6DC0;
    case 383u: goto L_003A6DD4;
    case 384u: goto L_003A6DDC;
    case 385u: goto L_003A6DE4;
    case 386u: goto L_003A6DEC;
    case 387u: goto L_003A6DFC;
    case 388u: goto L_003A6E08;
    case 389u: goto L_003A6E18;
    case 390u: goto L_003A6E50;
    case 391u: goto L_003A6E60;
    case 392u: goto L_003A6E78;
    case 393u: goto L_003A6E94;
    case 394u: goto L_003A6E9C;
    case 395u: goto L_003A6EC0;
    case 396u: goto L_003A6ED8;
    case 397u: goto L_003A6F08;
    case 398u: goto L_003A6F30;
    case 399u: goto L_003A6F48;
    case 400u: goto L_003A6F64;
    case 401u: goto L_003A6F6C;
    case 402u: goto L_003A6F90;
    case 403u: goto L_003A6FA8;
    case 404u: goto L_003A6FD8;
    case 405u: goto L_003A7000;
    case 406u: goto L_003A7024;
    case 407u: goto L_003A702C;
    case 408u: goto L_003A7034;
    case 409u: goto L_003A703C;
    case 410u: goto L_003A70B0;
    case 411u: goto L_003A70C0;
    case 412u: goto L_003A70F0;
    case 413u: goto L_003A7108;
    case 414u: goto L_003A7110;
    case 415u: goto L_003A711C;
    case 416u: goto L_003A712C;
    case 417u: goto L_003A715C;
    case 418u: goto L_003A7180;
    case 419u: goto L_003A7194;
    case 420u: goto L_003A71A4;
    case 421u: goto L_003A71C0;
    case 422u: goto L_003A71F8;
    case 423u: goto L_003A7264;
    case 424u: goto L_003A72D8;
    case 425u: goto L_003A72F0;
    case 426u: goto L_003A7300;
    case 427u: goto L_003A7310;
    case 428u: goto L_003A7330;
    case 429u: goto L_003A73D8;
    case 430u: goto L_003A73F4;
    case 431u: goto L_003A7454;
    case 432u: goto L_003A7474;
    case 433u: goto L_003A74E8;
    case 434u: goto L_003A74F8;
    case 435u: goto L_003A757C;
    case 436u: goto L_003A758C;
    case 437u: goto L_003A7598;
    case 438u: goto L_003A75A8;
    case 439u: goto L_003A75D0;
    case 440u: goto L_003A75F0;
    case 441u: goto L_003A7614;
    case 442u: goto L_003A7620;
    case 443u: goto L_003A7688;
    case 444u: goto L_003A7690;
    case 445u: goto L_003A76A8;
    case 446u: goto L_003A76B8;
    case 447u: goto L_003A76D0;
    case 448u: goto L_003A7710;
    case 449u: goto L_003A7740;
    case 450u: goto L_003A77BC;
    case 451u: goto L_003A77D0;
    case 452u: goto L_003A7810;
    case 453u: goto L_003A7838;
    case 454u: goto L_003A78A4;
    case 455u: goto L_003A78AC;
    case 456u: goto L_003A78C4;
    case 457u: goto L_003A78D4;
    case 458u: goto L_003A78E8;
    case 459u: goto L_003A7900;
    case 460u: goto L_003A7940;
    case 461u: goto L_003A79BC;
    case 462u: goto L_003A79E4;
    case 463u: goto L_003A7A28;
    case 464u: goto L_003A7A40;
    case 465u: goto L_003A7A68;
    case 466u: goto L_003A7A78;
    case 467u: goto L_003A7AB0;
    case 468u: goto L_003A7AC8;
    case 469u: goto L_003A7B1C;
    case 470u: goto L_003A7B44;
    case 471u: goto L_003A7B88;
    case 472u: goto L_003A7BA0;
    case 473u: goto L_003A7BC0;
    case 474u: goto L_003A7BF4;
    case 475u: goto L_003A7D14;
    case 476u: goto L_003A7D4C;
    case 477u: goto L_003A7D64;
    case 478u: goto L_003A7DAC;
    case 479u: goto L_003A7E24;
    case 480u: goto L_003A7E38;
    case 481u: goto L_003A7EE0;
    case 482u: goto L_003A7EF4;
    case 483u: goto L_003A7EF8;
    case 484u: goto L_003A7F2C;
    case 485u: goto L_003A7F74;
    default: bad_entry(c, 0x003A4000u); return;
    }
L_003A4000:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A4010:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4024u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 318u, depth + 1u); else { c.pc = 0x0012E5E0u; return; } if (c.pc != 0x003A4024u) [[unlikely]] return; }
L_003A4024:
    set32(c.r[25], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[4], c.r[16].w[0] + 48u);
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4038u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A4038u) [[unlikely]] return; }
L_003A4038:
    ld128((c.r[16].w[0] + 144u) & ~15u, c.r[4]);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x427C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st128((c.r[5].w[0]) & ~15u, c.r[4]);
    c.f[1] = ld32((c.r[29].w[0] + 64u));
    st32((c.r[16].w[0] + 144u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 68u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[16].w[0] + 148u), c.f[1]);
    st32((c.r[16].w[0] + 152u), c.f[0]);
    st32((c.r[16].w[0] + 156u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 607u));
    c.budget -= 20;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A4134; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003A40C0; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 384u)));
    set32(c.r[4], c.r[16].w[0] + 384u);
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A40ACu); set32(c.r[5], 0u + 200u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A40ACu) [[unlikely]] return; }
L_003A40AC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A40B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 51u, depth + 1u); else { c.pc = 0x003A4670u; return; } if (c.pc != 0x003A40B8u) [[unlikely]] return; }
L_003A40B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A40E0; } }
L_003A40C0:
    set32(c.r[25], ld32((c.r[16].w[0] + 384u)));
    set32(c.r[4], c.r[16].w[0] + 384u);
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A40D4u); set32(c.r[5], 0u + 201u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A40D4u) [[unlikely]] return; }
L_003A40D4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A40E0u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00A9(c, 51u, depth + 1u); else { c.pc = 0x003A4670u; return; } if (c.pc != 0x003A40E0u) [[unlikely]] return; }
L_003A40E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] + 6480u);
    set32(c.r[4], c.r[16].w[0] + 288u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4104u); st64((c.r[5].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x003A4104u) [[unlikely]] return; }
L_003A4104:
    set32(c.r[4], ld32((c.r[16].w[0] + 364u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A4118; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4118u);  if (depth < kMaxDepth) unit_000D(c, 71u, depth + 1u); else { c.pc = 0x00134900u; return; } if (c.pc != 0x003A4118u) [[unlikely]] return; }
L_003A4118:
    set32(c.r[4], ld32((c.r[16].w[0] + 220u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A4154; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A412Cu);  if (depth < kMaxDepth) unit_002A(c, 364u, depth + 1u); else { c.pc = 0x001ABD60u; return; } if (c.pc != 0x003A412Cu) [[unlikely]] return; }
L_003A412C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 208u)));  if (t) { goto L_003A4158; } }
L_003A4134:
    set32(c.r[25], ld32((c.r[16].w[0] + 384u)));
    set32(c.r[4], c.r[16].w[0] + 384u);
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4148u); set32(c.r[5], 0u + 196u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A4148u) [[unlikely]] return; }
L_003A4148:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4154u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_001B(c, 324u, depth + 1u); else { c.pc = 0x0016E7D0u; return; } if (c.pc != 0x003A4154u) [[unlikely]] return; }
L_003A4154:
    set32(c.r[3], ld32((c.r[16].w[0] + 208u)));
    c.budget -= 1;
L_003A4158:
    st32((c.r[3].w[0] + 36u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003A4170:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4184u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 320u, depth + 1u); else { c.pc = 0x0012E610u; return; } if (c.pc != 0x003A4184u) [[unlikely]] return; }
L_003A4184:
    set32(c.r[25], ld32((c.r[16].w[0] + 384u)));
    set32(c.r[4], c.r[16].w[0] + 384u);
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4198u); set32(c.r[5], 0u + 198u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A4198u) [[unlikely]] return; }
L_003A4198:
    set32(c.r[25], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[4], c.r[16].w[0] + 48u);
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A41ACu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A41ACu) [[unlikely]] return; }
L_003A41AC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A41B8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A9(c, 51u, depth + 1u); else { c.pc = 0x003A4670u; return; } if (c.pc != 0x003A41B8u) [[unlikely]] return; }
L_003A41B8:
    set32(c.r[4], ld32((c.r[16].w[0] + 220u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A41CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A41CCu);  if (depth < kMaxDepth) unit_002A(c, 367u, depth + 1u); else { c.pc = 0x001ABDD0u; return; } if (c.pc != 0x003A41CCu) [[unlikely]] return; }
L_003A41CC:
    set32(c.r[3], ld32((c.r[16].w[0] + 208u)));
    st32((c.r[3].w[0] + 36u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A41F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003A4234; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 544u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003A4234; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A422Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A422Cu) [[unlikely]] return; }
L_003A422C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003A42C8; } }
L_003A4234:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A423Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 321u, depth + 1u); else { c.pc = 0x0012E630u; return; } if (c.pc != 0x003A423Cu) [[unlikely]] return; }
L_003A423C:
    set32(c.r[25], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[4], c.r[16].w[0] + 48u);
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4250u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A4250u) [[unlikely]] return; }
L_003A4250:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003A429C; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 384u)));
    set32(c.r[4], c.r[16].w[0] + 384u);
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4274u); set32(c.r[5], 0u + 199u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A4274u) [[unlikely]] return; }
L_003A4274:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4280u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_00A9(c, 51u, depth + 1u); else { c.pc = 0x003A4670u; return; } if (c.pc != 0x003A4280u) [[unlikely]] return; }
L_003A4280:
    set32(c.r[4], ld32((c.r[16].w[0] + 220u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A42BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4294u);  if (depth < kMaxDepth) unit_002A(c, 367u, depth + 1u); else { c.pc = 0x001ABDD0u; return; } if (c.pc != 0x003A4294u) [[unlikely]] return; }
L_003A4294:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 208u)));  if (t) { goto L_003A42C0; } }
L_003A429C:
    set32(c.r[25], ld32((c.r[16].w[0] + 384u)));
    set32(c.r[4], c.r[16].w[0] + 384u);
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A42B0u); set32(c.r[5], 0u + 197u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A42B0u) [[unlikely]] return; }
L_003A42B0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A42BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001B(c, 324u, depth + 1u); else { c.pc = 0x0016E7D0u; return; } if (c.pc != 0x003A42BCu) [[unlikely]] return; }
L_003A42BC:
    set32(c.r[3], ld32((c.r[16].w[0] + 208u)));
    c.budget -= 1;
L_003A42C0:
    st32((c.r[3].w[0] + 36u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_003A42C8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A42E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 208u)));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_003A4340; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003A4330; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_003A4340; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 24u)));
    st32((c.r[4].w[0] + 544u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4328u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A4328u) [[unlikely]] return; }
L_003A4328:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003A4344; } }
L_003A4330:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 160u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4340u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A4340u) [[unlikely]] return; }
L_003A4340:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003A4344:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A4350:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 208u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003A43BC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003A438C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4384u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A4384u) [[unlikely]] return; }
L_003A4384:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003A43C0; } }
L_003A438C:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4398u); st32((c.r[16].w[0] + 544u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A9(c, 42u, depth + 1u); else { c.pc = 0x003A44B0u; return; } if (c.pc != 0x003A4398u) [[unlikely]] return; }
L_003A4398:
    set32(c.r[3], ld32((c.r[16].w[0] + 548u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 208u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 368u)));
    st32((c.r[5].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[5].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A43BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A43BCu) [[unlikely]] return; }
L_003A43BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003A43C0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A43D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 208u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003A4404; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[19].w[0] + 576u)));  if (t) { goto L_003A4408; } }
L_003A4404:
    set32(c.r[17], ld32((c.r[19].w[0] + 580u)));
    c.budget -= 1;
L_003A4408:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4410u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 19u, depth + 1u); else { c.pc = 0x0016C210u; return; } if (c.pc != 0x003A4410u) [[unlikely]] return; }
L_003A4410:
    set32(c.r[3], ld32((c.r[19].w[0] + 36u)));
    c.r[18].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1616u);
    set32(c.r[6], ld32((c.r[19].w[0] + 544u)));
    set32(c.r[4], 0u + 2u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 13;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4444u); set32(c.r[17], c.r[16].w[0] + 86u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A4444u) [[unlikely]] return; }
L_003A4444:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A4494; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 360u)));
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[5], c.r[19].w[0] + 584u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[6], 0u + 23u);
    set32(c.r[3], c.r[3].w[0] - c.r[16].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4470u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x003A4470u) [[unlikely]] return; }
L_003A4470:
    set32(c.r[3], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003A4494; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4484u);  if (depth < kMaxDepth) unit_001B(c, 6u, depth + 1u); else { c.pc = 0x0016C090u; return; } if (c.pc != 0x003A4484u) [[unlikely]] return; }
L_003A4484:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003A4494; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4494u);  if (depth < kMaxDepth) unit_001B(c, 22u, depth + 1u); else { c.pc = 0x0016C280u; return; } if (c.pc != 0x003A4494u) [[unlikely]] return; }
L_003A4494:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003A44B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_003A4524; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_003A450C; } }
L_003A44D8:
    set32(c.r[3], ld32((c.r[18].w[0] + 544u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003A44F8; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 368u)));
    set32(c.r[4], c.r[6].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_003A4508; } }
L_003A44F8:
    set32(c.r[3], ld32((c.r[18].w[0] + 368u)));
    set32(c.r[4], c.r[6].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 4;
L_003A4508:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_003A450C:
    set32(c.r[3], ld32((c.r[18].w[0] + 548u)));
    c.r[3].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A44D8u | kUnwind; return; } goto L_003A44D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003A45BC; } }
L_003A4524:
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003A4548; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003A4544; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[18].w[0] + 576u)));  if (t) { goto L_003A4548; } }
L_003A4544:
    set32(c.r[17], ld32((c.r[18].w[0] + 580u)));
    c.budget -= 1;
L_003A4548:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003A45A8; } }
L_003A4550:
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[2], c.r[2].w[0] + 1552u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4574u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A4574u) [[unlikely]] return; }
L_003A4574:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A4590; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 368u)));
    set32(c.r[4], c.r[16].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_003A45A4; } }
L_003A4590:
    set32(c.r[3], ld32((c.r[18].w[0] + 368u)));
    set32(c.r[4], c.r[16].w[0] << 3);
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 5;
L_003A45A4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_003A45A8:
    set32(c.r[3], ld32((c.r[18].w[0] + 548u)));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A4550u | kUnwind; return; } goto L_003A4550; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003A45BC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003A45D0:
    set32(c.r[3], ld32((c.r[4].w[0] + 208u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 360u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_003A4600:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003A462C; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 576u)));
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4624u); c.r[6].d[0] = 0ull | 35840ull;  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x003A4624u) [[unlikely]] return; }
L_003A4624:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003A4648; } }
L_003A462C:
    set32(c.r[4], ld32((c.r[4].w[0] + 580u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[1].d[0] = c.r[1].d[0] | 23854ull;
    set32(c.r[6], 0u + 7408u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4644u); set32(c.r[5], c.r[5].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x003A4644u) [[unlikely]] return; }
L_003A4644:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003A4648:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A4650:
    st32((c.r[4].w[0] + 544u), c.r[5].w[0]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 584u);
    c.budget -= 5;
    { set32(c.r[6], 0u + 23u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001415A0u | kUnwind; return; } [[clang::musttail]] return unit_0010(c, 107u, depth); }
L_003A4670:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003A46A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[2], c.r[2].w[0] + 6512u);
    set32(c.r[4], c.r[4].w[0] + 324u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A46A0u); st64((c.r[5].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x003A46A0u) [[unlikely]] return; }
L_003A46A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003A473C; } }
L_003A46A8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_003A46E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[2], c.r[2].w[0] + 6544u);
    set32(c.r[4], c.r[4].w[0] + 324u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A46D8u); st64((c.r[5].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x003A46D8u) [[unlikely]] return; }
L_003A46D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A4738; } }
L_003A46E0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_003A4714; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] + 6576u);
    set32(c.r[4], c.r[4].w[0] + 324u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A470Cu); st64((c.r[5].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x003A470Cu) [[unlikely]] return; }
L_003A470C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A4738; } }
L_003A4714:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[29].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] + 6608u);
    set32(c.r[4], c.r[4].w[0] + 324u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4738u); st64((c.r[5].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x003A4738u) [[unlikely]] return; }
L_003A4738:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003A473C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003A4750:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A4350u | kUnwind; return; } goto L_003A4350; }
L_003A4760:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A42E0u | kUnwind; return; } goto L_003A42E0; }
L_003A4770:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A3AE0u | kUnwind; return; } [[clang::musttail]] return unit_00A8(c, 514u, depth); }
L_003A4780:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 24u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A3AE0u | kUnwind; return; } [[clang::musttail]] return unit_00A8(c, 514u, depth); }
L_003A4790:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[8], 0u + 2u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A47C4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 465u, depth + 1u); else { c.pc = 0x0012FE40u; return; } if (c.pc != 0x003A47C4u) [[unlikely]] return; }
L_003A47C4:
    set32(c.r[4], c.r[17].w[0] + 72u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A47D0u); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x003A47D0u) [[unlikely]] return; }
L_003A47D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 27488u);
    set32(c.r[3], c.r[3].w[0] - 27400u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[17].w[0] + 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 27352u);
    st32((c.r[17].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4800u); st32((c.r[17].w[0] + 84u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_0018(c, 27u, depth + 1u); else { c.pc = 0x00161280u; return; } if (c.pc != 0x003A4800u) [[unlikely]] return; }
L_003A4800:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4808u); set32(c.r[4], c.r[17].w[0] + 464u);  if (depth < kMaxDepth) unit_0017(c, 177u, depth + 1u); else { c.pc = 0x0015E070u; return; } if (c.pc != 0x003A4808u) [[unlikely]] return; }
L_003A4808:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4810u); set32(c.r[4], 0u + 9u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x003A4810u) [[unlikely]] return; }
L_003A4810:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A481Cu); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x003A481Cu) [[unlikely]] return; }
L_003A481C:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[17].w[0] + 800u);
    set32(c.r[5], 0u + 8u);
    set32(c.r[6], 0u + 4u);
    st128((c.r[17].w[0] + 736u) & ~15u, c.r[3]);
    set32(c.r[2], 0u + 30u);
    ld128((c.r[18].w[0]) & ~15u, c.r[3]);
    st128((c.r[17].w[0] + 752u) & ~15u, c.r[3]);
    st32((c.r[17].w[0] + 788u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 784u), 0u);
    st32((c.r[17].w[0] + 796u), 0u);
    st8((c.r[17].w[0] + 792u), static_cast<std::uint8_t>(0u));
    ld128((c.r[17].w[0] + 736u) & ~15u, c.r[2]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4858u); st128((c.r[17].w[0] + 768u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 283u, depth + 1u); else { c.pc = 0x002277A0u; return; } if (c.pc != 0x003A4858u) [[unlikely]] return; }
L_003A4858:
    set32(c.r[4], c.r[17].w[0] + 844u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4864u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 271u, depth + 1u); else { c.pc = 0x002275A0u; return; } if (c.pc != 0x003A4864u) [[unlikely]] return; }
L_003A4864:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A486Cu);  if (depth < kMaxDepth) unit_0053(c, 117u, depth + 1u); else { c.pc = 0x0024CC80u; return; } if (c.pc != 0x003A486Cu) [[unlikely]] return; }
L_003A486C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 13312u);  if (t) { goto L_003A487C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A487Cu);  if (depth < kMaxDepth) unit_0053(c, 108u, depth + 1u); else { c.pc = 0x0024CBD0u; return; } if (c.pc != 0x003A487Cu) [[unlikely]] return; }
L_003A487C:
    st32((c.r[17].w[0] + 88u), 0u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A488Cu); st32((c.r[17].w[0] + 92u), 0u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x003A488Cu) [[unlikely]] return; }
L_003A488C:
    ld128((c.r[2].w[0]) & ~15u, c.r[4]);
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[3], c.r[29].w[0] + 64u);
    set32(c.r[2], 0u + 16u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; st128((c.r[5].w[0]) & ~15u, c.r[4]);  if (t) { goto L_003A48C0; } }
L_003A48A4:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A48A4u | kUnwind; return; } goto L_003A48A4; } }
L_003A48C0:
    set32(c.r[6], c.r[29].w[0] + 80u);
    set32(c.r[4], c.r[17].w[0] + 96u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A48D4u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 14u, depth + 1u); else { c.pc = 0x001609B0u; return; } if (c.pc != 0x003A48D4u) [[unlikely]] return; }
L_003A48D4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44200000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    st32((c.r[17].w[0] + 256u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 96u);
    st32((c.r[17].w[0] + 260u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A48F0u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0018(c, 36u, depth + 1u); else { c.pc = 0x00161400u; return; } if (c.pc != 0x003A48F0u) [[unlikely]] return; }
L_003A48F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A48F8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x003A48F8u) [[unlikely]] return; }
L_003A48F8:
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x44200000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x436C0000u);
    set32(c.r[4], 0u + 72u);
    st32((c.r[17].w[0] + 512u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[17].w[0] + 516u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[17].w[0] + 520u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 624u), c.r[5].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4928u); st32((c.r[17].w[0] + 628u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003A4928u) [[unlikely]] return; }
L_003A4928:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003A4938; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4938u);  if (depth < kMaxDepth) unit_0076(c, 539u, depth + 1u); else { c.pc = 0x002DBEA0u; return; } if (c.pc != 0x003A4938u) [[unlikely]] return; }
L_003A4938:
    st32((c.r[17].w[0] + 720u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 880u), c.r[16].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[17].w[0] + 13u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003A4960:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003A4A88; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 27488u);
    set32(c.r[3], c.r[3].w[0] - 27400u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 27352u);
    st32((c.r[17].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A49C4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A49C4; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A49C4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A49C4u) [[unlikely]] return; }
L_003A49C4:
    st32((c.r[17].w[0] + 88u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 92u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A49EC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A49EC; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A49ECu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A49ECu) [[unlikely]] return; }
L_003A49EC:
    st32((c.r[17].w[0] + 92u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 720u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A4A14; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A4A14; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4A14u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A4A14u) [[unlikely]] return; }
L_003A4A14:
    set32(c.r[4], c.r[17].w[0] + 844u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4A24u); st32((c.r[17].w[0] + 720u), 0u);  if (depth < kMaxDepth) unit_0049(c, 274u, depth + 1u); else { c.pc = 0x002275F0u; return; } if (c.pc != 0x003A4A24u) [[unlikely]] return; }
L_003A4A24:
    set32(c.r[4], c.r[17].w[0] + 800u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4A30u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0049(c, 294u, depth + 1u); else { c.pc = 0x00227920u; return; } if (c.pc != 0x003A4A30u) [[unlikely]] return; }
L_003A4A30:
    set32(c.r[4], c.r[17].w[0] + 464u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);  if (t) { goto L_003A4A4C; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 17408u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4A4Cu); st32((c.r[17].w[0] + 640u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 264u, depth + 1u); else { c.pc = 0x0014ADA0u; return; } if (c.pc != 0x003A4A4Cu) [[unlikely]] return; }
L_003A4A4C:
    set32(c.r[4], c.r[17].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4A58u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0018(c, 29u, depth + 1u); else { c.pc = 0x001612C0u; return; } if (c.pc != 0x003A4A58u) [[unlikely]] return; }
L_003A4A58:
    set32(c.r[4], c.r[17].w[0] + 72u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4A64u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x003A4A64u) [[unlikely]] return; }
L_003A4A64:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4A70u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 469u, depth + 1u); else { c.pc = 0x0012FEF0u; return; } if (c.pc != 0x003A4A70u) [[unlikely]] return; }
L_003A4A70:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003A4A8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4A88u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x003A4A88u) [[unlikely]] return; }
L_003A4A88:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003A4A8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A4AA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4AB8u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x003A4AB8u) [[unlikely]] return; }
L_003A4AB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4AC0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 475u, depth + 1u); else { c.pc = 0x0012FFA0u; return; } if (c.pc != 0x003A4AC0u) [[unlikely]] return; }
L_003A4AC0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4ACCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A9(c, 127u, depth + 1u); else { c.pc = 0x003A4DE0u; return; } if (c.pc != 0x003A4ACCu) [[unlikely]] return; }
L_003A4ACC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A4AE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4AF4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 476u, depth + 1u); else { c.pc = 0x0012FFB0u; return; } if (c.pc != 0x003A4AF4u) [[unlikely]] return; }
L_003A4AF4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4B00u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 127u, depth + 1u); else { c.pc = 0x003A4DE0u; return; } if (c.pc != 0x003A4B00u) [[unlikely]] return; }
L_003A4B00:
    set32(c.r[4], ld32((c.r[16].w[0] + 720u)));
    set32(c.r[5], 0u + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4B10u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0077(c, 5u, depth + 1u); else { c.pc = 0x002DC050u; return; } if (c.pc != 0x003A4B10u) [[unlikely]] return; }
L_003A4B10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4B18u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x003A4B18u) [[unlikely]] return; }
L_003A4B18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A4B30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4B44u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 477u, depth + 1u); else { c.pc = 0x0012FFC0u; return; } if (c.pc != 0x003A4B44u) [[unlikely]] return; }
L_003A4B44:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4B50u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 127u, depth + 1u); else { c.pc = 0x003A4DE0u; return; } if (c.pc != 0x003A4B50u) [[unlikely]] return; }
L_003A4B50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A4B60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4B7Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 117u, depth + 1u); else { c.pc = 0x0024CC80u; return; } if (c.pc != 0x003A4B7Cu) [[unlikely]] return; }
L_003A4B7C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4B88u); set32(c.r[4], c.r[18].w[0] + 8u);  if (depth < kMaxDepth) unit_0011(c, 177u, depth + 1u); else { c.pc = 0x00146C10u; return; } if (c.pc != 0x003A4B88u) [[unlikely]] return; }
L_003A4B88:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[18].w[0] + 8u);  if (t) { goto L_003A4BA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4B9Cu);  if (depth < kMaxDepth) unit_0011(c, 182u, depth + 1u); else { c.pc = 0x00146C90u; return; } if (c.pc != 0x003A4B9Cu) [[unlikely]] return; }
L_003A4B9C:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003A4BA0:
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], 0u + 304u);  if (t) { goto L_003A4C58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4BB4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003A4BB4u) [[unlikely]] return; }
L_003A4BB4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003A4BE0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 880u)));
    c.r[5].d[0] = ld16((c.r[2].w[0] + 2u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4BD0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 135u, depth + 1u); else { c.pc = 0x0024CE00u; return; } if (c.pc != 0x003A4BD0u) [[unlikely]] return; }
L_003A4BD0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4BDCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 207u, depth + 1u); else { c.pc = 0x0015FE10u; return; } if (c.pc != 0x003A4BDCu) [[unlikely]] return; }
L_003A4BDC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003A4BE0:
    st32((c.r[16].w[0] + 88u), c.r[17].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    c.f[12] = ld32((c.r[1].w[0] + 4240u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4BF8u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0017(c, 209u, depth + 1u); else { c.pc = 0x0015FE60u; return; } if (c.pc != 0x003A4BF8u) [[unlikely]] return; }
L_003A4BF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4C00u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003A4C00u) [[unlikely]] return; }
L_003A4C00:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003A4C28; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4C18u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0080(c, 53u, depth + 1u); else { c.pc = 0x00300650u; return; } if (c.pc != 0x003A4C18u) [[unlikely]] return; }
L_003A4C18:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4C24u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x003A4C24u) [[unlikely]] return; }
L_003A4C24:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003A4C28:
    st32((c.r[16].w[0] + 92u), c.r[17].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 92u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[1].w[0] + 4232u));
    st32((c.r[3].w[0] + 20u), c.f[0]);
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4C58u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A4C58u) [[unlikely]] return; }
L_003A4C58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003A4C70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4C88u); set32(c.r[4], c.r[16].w[0] + 800u);  if (depth < kMaxDepth) unit_0049(c, 300u, depth + 1u); else { c.pc = 0x00227A00u; return; } if (c.pc != 0x003A4C88u) [[unlikely]] return; }
L_003A4C88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A4CA0; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4CA0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A4CA0u) [[unlikely]] return; }
L_003A4CA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A4CB0:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 792u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A4CE8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 796u)));
    set32(c.r[3], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0] + 796u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 784u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003A4D18; } }
    st32((c.r[4].w[0] + 796u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 792u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003A4D18; } }
L_003A4CE8:
    set32(c.r[2], ld32((c.r[4].w[0] + 796u)));
    set32(c.r[5], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0] + 796u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 788u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 784u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003A4D18; } }
    st32((c.r[4].w[0] + 796u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 792u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_003A4D18:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] + 736u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001AB050u | kUnwind; return; } [[clang::musttail]] return unit_002A(c, 280u, depth); }
L_003A4D20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4D38u); set32(c.r[4], c.r[16].w[0] + 800u);  if (depth < kMaxDepth) unit_0049(c, 300u, depth + 1u); else { c.pc = 0x00227A00u; return; } if (c.pc != 0x003A4D38u) [[unlikely]] return; }
L_003A4D38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A4D90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4D48u); set32(c.r[4], ld32((c.r[16].w[0] + 720u)));  if (depth < kMaxDepth) unit_0077(c, 6u, depth + 1u); else { c.pc = 0x002DC080u; return; } if (c.pc != 0x003A4D48u) [[unlikely]] return; }
L_003A4D48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A4D90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4D58u);  if (depth < kMaxDepth) unit_00AA(c, 252u, depth + 1u); else { c.pc = 0x003AA380u; return; } if (c.pc != 0x003A4D58u) [[unlikely]] return; }
L_003A4D58:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003A4D90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4D6Cu);  if (depth < kMaxDepth) unit_009E(c, 76u, depth + 1u); else { c.pc = 0x00378BC0u; return; } if (c.pc != 0x003A4D6Cu) [[unlikely]] return; }
L_003A4D6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A4D90; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4D84u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A4D84u) [[unlikely]] return; }
L_003A4D84:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4D90u); set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));  if (depth < kMaxDepth) unit_002A(c, 144u, depth + 1u); else { c.pc = 0x001A9670u; return; } if (c.pc != 0x003A4D90u) [[unlikely]] return; }
L_003A4D90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A4DA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4DB8u); set32(c.r[4], c.r[16].w[0] + 800u);  if (depth < kMaxDepth) unit_0049(c, 300u, depth + 1u); else { c.pc = 0x00227A00u; return; } if (c.pc != 0x003A4DB8u) [[unlikely]] return; }
L_003A4DB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A4DD0; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4DD0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A4DD0u) [[unlikely]] return; }
L_003A4DD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A4DE0:
    set32(c.r[29], c.r[29].w[0] - 336u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003A4E88; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    set32(c.r[6], c.r[6].w[0] + 6640u);
    set32(c.r[4], 0u + 6u);
    c.budget -= 4;
L_003A4E08:
    ld128((c.r[6].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    ld128((c.r[6].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[6], c.r[6].w[0] + 32u);
    st128((c.r[5].w[0] + 16u) & ~15u, c.r[2]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A4E08u | kUnwind; return; } goto L_003A4E08; } }
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] << 1);
    c.budget -= 2;
L_003A4E30:
    set32(c.r[4], c.r[17].w[0] + 800u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4E4Cu); set32(c.r[6], c.r[2].w[0] + 144u);  if (depth < kMaxDepth) unit_0049(c, 298u, depth + 1u); else { c.pc = 0x002279C0u; return; } if (c.pc != 0x003A4E4Cu) [[unlikely]] return; }
L_003A4E4C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A4E30u | kUnwind; return; } goto L_003A4E30; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[2], c.r[2].w[0] + 6832u);
    set32(c.r[4], c.r[17].w[0] + 844u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4E80u); st64((c.r[5].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x003A4E80u) [[unlikely]] return; }
L_003A4E80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003A4EF0; } }
L_003A4E88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[2], c.r[2].w[0] + 6864u);
    c.r[16].d[0] = 0ull + 0ull;
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    st64((c.r[4].w[0] + 16u), c.r[2].d[0]);
    set32(c.r[4], c.r[17].w[0] + 800u);
    c.budget -= 9;
L_003A4EAC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4EB8u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0049(c, 298u, depth + 1u); else { c.pc = 0x002279C0u; return; } if (c.pc != 0x003A4EB8u) [[unlikely]] return; }
L_003A4EB8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[17].w[0] + 800u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A4EACu | kUnwind; return; } goto L_003A4EAC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] + 6896u);
    set32(c.r[4], c.r[17].w[0] + 844u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4EECu); st64((c.r[5].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x003A4EECu) [[unlikely]] return; }
L_003A4EEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003A4EF0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_003A4F00:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003A5504; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4F28u);  if (depth < kMaxDepth) unit_0053(c, 117u, depth + 1u); else { c.pc = 0x0024CC80u; return; } if (c.pc != 0x003A4F28u) [[unlikely]] return; }
L_003A4F28:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[18].w[0] + 828u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42600000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], ld32((c.r[18].w[0] + 92u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[6].w[0] + 12u));
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[0]);
    c.f[13] = c.r[3].w[0];
    st32((c.r[5].w[0] + 60u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[18].w[0] + 856u));
    set32(c.r[2], ld32((c.r[18].w[0] + 92u)));
    st32((c.r[2].w[0] + 16u), c.f[1]);
    c.f[0] = ld32((c.r[1].w[0] + 4232u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[2].w[0] + 20u), c.f[0]);
    st32((c.r[2].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 92u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 29;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4F9Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A4F9Cu) [[unlikely]] return; }
L_003A4F9C:
    set32(c.r[4], ld32((c.r[18].w[0] + 92u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4FB0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A4FB0u) [[unlikely]] return; }
L_003A4FB0:
    set32(c.r[16], 0u + 29u);
    c.budget -= 1;
L_003A4FB4:
    set32(c.r[2], ld32((c.r[18].w[0] + 880u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = ld16((c.r[2].w[0] + 2u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4FCCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 135u, depth + 1u); else { c.pc = 0x0024CE00u; return; } if (c.pc != 0x003A4FCCu) [[unlikely]] return; }
L_003A4FCC:
    st64((c.r[29].w[0] + 72u), c.r[2].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[9], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[8], c.r[29].w[0] + 72u);
    set32(c.r[7], c.r[29].w[0] + 64u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], c.r[16].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + 4160u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[9].w[0] + 256u), c.r[2].d[0]);
    c.r[2].d[0] = ld64((c.r[8].w[0]));
    st64((c.r[7].w[0]), c.r[2].d[0]);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 67u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[6].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[9].w[0] + 160u), c.f[0]);
    c.r[2].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[2].d[0] = c.r[2].d[0] << 30;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[6].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[9].w[0] + 164u), c.f[0]);
    c.r[4].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 800u)));
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    st32((c.r[2].w[0] + 60u), c.r[4].w[0]);
    c.f[0] = ld32((c.r[1].w[0] + 4224u));
    set32(c.r[2], ld32((c.r[18].w[0] + 88u)));
    st32((c.r[2].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] + 4224u));
    st32((c.r[2].w[0] + 20u), c.f[0]);
    c.r[1].d[0] = c.r[16].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 49;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[2].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_003A50E4; } }
    set32(c.r[2], c.r[16].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43910000u);
    set32(c.r[4], c.r[2].w[0] - c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    c.f[13] = c.r[3].w[0];
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 18u);
    c.f[1] = c.r[2].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 19;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A50DCu); c.f[12] = fp::cvt_s_w(c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A50DCu) [[unlikely]] return; }
L_003A50DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[18].w[0] + 88u)));  if (t) { goto L_003A51F8; } }
L_003A50E4:
    c.r[1].d[0] = c.r[16].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[16].sd[0] < 24ll ? 1ull : 0ull;  if (t) { goto L_003A5148; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43640000u);
    set32(c.r[3], c.r[16].w[0] - 7u);
    c.f[13] = c.r[2].w[0];
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[4], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[4], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] - 17u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[1]);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 20;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5140u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A5140u) [[unlikely]] return; }
L_003A5140:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A51F4; } }
L_003A5148:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x42D00000u);  if (t) { goto L_003A51A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43260000u);
    set32(c.r[3], c.r[16].w[0] - 15u);
    c.f[13] = c.r[2].w[0];
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[4], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[4], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] - 52u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[1]);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 20;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A51A0u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A51A0u) [[unlikely]] return; }
L_003A51A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A51F4; } }
L_003A51A8:
    set32(c.r[3], c.r[16].w[0] - 24u);
    c.f[13] = c.r[2].w[0];
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[4], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[4], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + 53u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[1]);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 19;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A51F4u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A51F4u) [[unlikely]] return; }
L_003A51F4:
    set32(c.r[4], ld32((c.r[18].w[0] + 88u)));
    c.budget -= 1;
L_003A51F8:
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5208u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A5208u) [[unlikely]] return; }
L_003A5208:
    set32(c.r[3], 0u + 24u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 15u);  if (t) { goto L_003A5304; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_003A52C0; } }
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_003A527C; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003A5238; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] - 1u);  if (t) { goto L_003A5398; } }
L_003A5238:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B60000u);
    set32(c.r[25], ld32((c.r[18].w[0] + 272u)));
    c.f[13] = c.r[2].w[0];
    set32(c.r[4], c.r[18].w[0] + 96u);
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5264u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A5264u) [[unlikely]] return; }
L_003A5264:
    set32(c.r[25], ld32((c.r[18].w[0] + 272u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5274u); set32(c.r[4], c.r[18].w[0] + 96u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A5274u) [[unlikely]] return; }
L_003A5274:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A5394; } }
L_003A527C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43970000u);
    set32(c.r[25], ld32((c.r[18].w[0] + 272u)));
    c.f[13] = c.r[2].w[0];
    set32(c.r[4], c.r[18].w[0] + 96u);
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A52A8u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A52A8u) [[unlikely]] return; }
L_003A52A8:
    set32(c.r[25], ld32((c.r[18].w[0] + 272u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A52B8u); set32(c.r[4], c.r[18].w[0] + 96u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A52B8u) [[unlikely]] return; }
L_003A52B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A5394; } }
L_003A52C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43700000u);
    set32(c.r[25], ld32((c.r[18].w[0] + 272u)));
    c.f[13] = c.r[2].w[0];
    set32(c.r[4], c.r[18].w[0] + 96u);
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A52ECu); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A52ECu) [[unlikely]] return; }
L_003A52EC:
    set32(c.r[25], ld32((c.r[18].w[0] + 272u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A52FCu); set32(c.r[4], c.r[18].w[0] + 96u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A52FCu) [[unlikely]] return; }
L_003A52FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A5394; } }
L_003A5304:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43320000u);
    set32(c.r[25], ld32((c.r[18].w[0] + 272u)));
    c.f[13] = c.r[2].w[0];
    set32(c.r[4], c.r[18].w[0] + 96u);
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5330u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A5330u) [[unlikely]] return; }
L_003A5330:
    set32(c.r[25], ld32((c.r[18].w[0] + 272u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5340u); set32(c.r[4], c.r[18].w[0] + 96u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A5340u) [[unlikely]] return; }
L_003A5340:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43540000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[5], ld32((c.r[18].w[0] + 812u)));
    c.f[0] = c.r[2].w[0];
    c.f[12] = 0u;
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    c.f[13] = c.r[3].w[0];
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[18].w[0] + 524u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[18].w[0] + 640u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 17;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5384u); set32(c.r[4], c.r[18].w[0] + 464u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A5384u) [[unlikely]] return; }
L_003A5384:
    set32(c.r[25], ld32((c.r[18].w[0] + 640u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5394u); set32(c.r[4], c.r[18].w[0] + 464u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A5394u) [[unlikely]] return; }
L_003A5394:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 1;
L_003A5398:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A4FB4u | kUnwind; return; } goto L_003A4FB4; } }
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[17], ld32((c.r[3].w[0] + 440u)));
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[16], ld32((c.r[3].w[0] + 444u)));  if (t) { goto L_003A5504; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A53B8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x003A53B8u) [[unlikely]] return; }
L_003A53B8:
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[12] = c.r[3].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43C00000u);
    c.f[13] = c.r[4].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.f[0] = c.r[3].w[0];
    st32((c.r[17].w[0] + 48u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.f[14] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 828u)));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[5].w[0]);
    st32((c.r[17].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 28;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5428u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A5428u) [[unlikely]] return; }
L_003A5428:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5430u); set32(c.r[4], 0u + 415u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x003A5430u) [[unlikely]] return; }
L_003A5430:
    st32((c.r[17].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 356u), 0u);
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003A5454; } }
    ld128((c.r[18].w[0] + 768u) & ~15u, c.r[2]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st128((c.r[16].w[0] + 48u) & ~15u, c.r[2]);  if (t) { goto L_003A547C; } }
L_003A5454:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A545Cu);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x003A545Cu) [[unlikely]] return; }
L_003A545C:
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 8;
L_003A547C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A54A4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A54A4u) [[unlikely]] return; }
L_003A54A4:
    set32(c.r[2], ld32((c.r[17].w[0] + 352u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 356u), 0u);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A54C4u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A54C4u) [[unlikely]] return; }
L_003A54C4:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A54E4u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A54E4u) [[unlikely]] return; }
L_003A54E4:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5504u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A5504u) [[unlikely]] return; }
L_003A5504:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003A5520:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A4960u | kUnwind; return; } goto L_003A4960; }
L_003A5530:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 72u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A4F00u | kUnwind; return; } goto L_003A4F00; }
L_003A5540:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 72u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A4960u | kUnwind; return; } goto L_003A4960; }
L_003A5550:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00150000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00150000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], c.r[5].w[0] - 27472u);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 27424u);
    set32(c.r[7], 0u + 36u);
    set32(c.r[8], 0u + 2u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5580u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 89u, depth + 1u); else { c.pc = 0x00100790u; return; } if (c.pc != 0x003A5580u) [[unlikely]] return; }
L_003A5580:
    st32((c.r[17].w[0] + 72u), 0u);
    set32(c.r[16], c.r[17].w[0] + 72u);
    st32((c.r[17].w[0] + 76u), 0u);
    st32((c.r[17].w[0] + 80u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[3], c.r[2].w[0] - c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));  if (t) { goto L_003A55AC; } }
    set32(c.r[2], c.r[3].w[0] + 31u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 2;
L_003A55AC:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003A5610; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A55DC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A55D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A55D0u); set32(c.r[4], c.r[4].w[0] - 16u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x003A55D0u) [[unlikely]] return; }
L_003A55D0:
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0]), 0u);
    c.budget -= 3;
L_003A55DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A55E4u); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x003A55E4u) [[unlikely]] return; }
L_003A55E4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00180000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 176u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 32u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5600u); set32(c.r[8], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 94u, depth + 1u); else { c.pc = 0x001008C0u; return; } if (c.pc != 0x003A5600u) [[unlikely]] return; }
L_003A5600:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + 64u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
L_003A5610:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 64u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 116u), 0u);
    st8((c.r[17].w[0] + 124u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_003A5628:
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[3].w[0] + 84u), 0u);
    c.r[2].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 100u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A5628u | kUnwind; return; } goto L_003A5628; } }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A5660:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003A56F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5684u);  if (depth < kMaxDepth) unit_00A9(c, 204u, depth + 1u); else { c.pc = 0x003A5A70u; return; } if (c.pc != 0x003A5684u) [[unlikely]] return; }
L_003A5684:
    set32(c.r[2], c.r[17].w[0] + 72u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A56C0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A56C0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A56C0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[2].w[0] - 16u);  if (t) { goto L_003A56B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A56B4u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x003A56B4u) [[unlikely]] return; }
L_003A56B4:
    st32((c.r[17].w[0] + 80u), 0u);
    st32((c.r[17].w[0] + 76u), 0u);
    st32((c.r[17].w[0] + 72u), 0u);
    c.budget -= 3;
L_003A56C0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00150000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 27424u);
    set32(c.r[6], 0u + 36u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A56D8u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 86u, depth + 1u); else { c.pc = 0x00100720u; return; } if (c.pc != 0x003A56D8u) [[unlikely]] return; }
L_003A56D8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003A56F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A56F0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x003A56F0u) [[unlikely]] return; }
L_003A56F0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003A56F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A5710:
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 124u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 120u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 116u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_003A5730:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[4].w[0] + 124u));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003A59E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A576Cu);  if (depth < kMaxDepth) unit_00A9(c, 204u, depth + 1u); else { c.pc = 0x003A5A70u; return; } if (c.pc != 0x003A576Cu) [[unlikely]] return; }
L_003A576C:
    set32(c.r[2], c.r[16].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 120u)));
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    c.r[16].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5790u); st32((c.r[29].w[0] + 172u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x003A5790u) [[unlikely]] return; }
L_003A5790:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5798u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003A5798u) [[unlikely]] return; }
L_003A5798:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003A57AC; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A57ACu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 127u, depth + 1u); else { c.pc = 0x0015D890u; return; } if (c.pc != 0x003A57ACu) [[unlikely]] return; }
L_003A57AC:
    st32((c.r[18].w[0] + 116u), c.r[2].w[0]);
    set32(c.r[3], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 8u);  if (t) { goto L_003A57D8; } }
L_003A57BC:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A57BCu | kUnwind; return; } goto L_003A57BC; } }
L_003A57D8:
    c.r[20].d[0] = c.r[16].d[0] & 65535ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003A57E0:
    set32(c.r[19], ld32((c.r[18].w[0] + 116u)));
    c.r[5].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A57F0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x003A57F0u) [[unlikely]] return; }
L_003A57F0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_003A580C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5804u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x003A5804u) [[unlikely]] return; }
L_003A5804:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A5810; } }
L_003A580C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A5810:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A5924; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003A5830; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5828u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 295u, depth + 1u); else { c.pc = 0x0014B6A0u; return; } if (c.pc != 0x003A5828u) [[unlikely]] return; }
L_003A5828:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003A5838; } }
L_003A5830:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_003A5838:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = ld64((c.r[2].w[0] + 24u));
    set32(c.r[5], c.r[29].w[0] + 152u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A584Cu); st64((c.r[29].w[0] + 152u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_00A9(c, 213u, depth + 1u); else { c.pc = 0x003A5BA0u; return; } if (c.pc != 0x003A584Cu) [[unlikely]] return; }
L_003A584C:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 18u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_003A5860; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[19].w[0] + 12u));  if (t) { goto L_003A5874; } }
L_003A5860:
    c.r[3].d[0] = ld16((c.r[19].w[0] + 12u));
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[8], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[19].w[0] + 12u));
    c.budget -= 5;
L_003A5874:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[6].d[0] = ld64((c.r[29].w[0] + 152u));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A588Cu); st128((c.r[29].w[0] + 112u) & ~15u, c.r[0]);  if (depth < kMaxDepth) unit_0020(c, 12u, depth + 1u); else { c.pc = 0x00180110u; return; } if (c.pc != 0x003A588Cu) [[unlikely]] return; }
L_003A588C:
    set32(c.r[7], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[8], c.r[16].w[0] << 5);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[6]);
    set32(c.r[2], c.r[20].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[29].w[0] + 128u);
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    st128((c.r[7].w[0]) & ~15u, c.r[6]);
    ld128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A58C0u); st128((c.r[7].w[0] + 16u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x003A58C0u) [[unlikely]] return; }
L_003A58C0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003A58DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A58D4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 152u, depth + 1u); else { c.pc = 0x0015DC50u; return; } if (c.pc != 0x003A58D4u) [[unlikely]] return; }
L_003A58D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003A58E4; } }
L_003A58DC:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_003A58E4:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_003A5924; } }
    set32(c.r[2], c.r[16].w[0] << 3);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[19], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5910u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 162u, depth + 1u); else { c.pc = 0x00149540u; return; } if (c.pc != 0x003A5910u) [[unlikely]] return; }
L_003A5910:
    set32(c.r[2], c.r[16].w[0] << 2);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5924u); st32((c.r[2].w[0] + 160u), c.r[19].w[0]);  if (depth < kMaxDepth) unit_0010(c, 83u, depth + 1u); else { c.pc = 0x00141160u; return; } if (c.pc != 0x003A5924u) [[unlikely]] return; }
L_003A5924:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A57E0u | kUnwind; return; } goto L_003A57E0; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A5938:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5940u); set32(c.r[4], 0u + 368u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003A5940u) [[unlikely]] return; }
L_003A5940:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] << 2);  if (t) { goto L_003A5968; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 72u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 160u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[5].d[0] = ld64((c.r[3].w[0] + 16u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5964u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0018(c, 64u, depth + 1u); else { c.pc = 0x00162170u; return; } if (c.pc != 0x003A5964u) [[unlikely]] return; }
L_003A5964:
    set32(c.r[3], c.r[16].w[0] << 2);
    c.budget -= 1;
L_003A5968:
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    st32((c.r[3].w[0] + 84u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A5938u | kUnwind; return; } goto L_003A5938; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003A59D8; } }
L_003A5990:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5998u); set32(c.r[4], 0u + 368u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003A5998u) [[unlikely]] return; }
L_003A5998:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] << 2);  if (t) { goto L_003A59C0; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 72u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 164u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[5].d[0] = ld64((c.r[3].w[0] + 48u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A59BCu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0018(c, 64u, depth + 1u); else { c.pc = 0x00162170u; return; } if (c.pc != 0x003A59BCu) [[unlikely]] return; }
L_003A59BC:
    set32(c.r[3], c.r[16].w[0] << 2);
    c.budget -= 1;
L_003A59C0:
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    st32((c.r[3].w[0] + 100u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A5990u | kUnwind; return; } goto L_003A5990; } }
L_003A59D8:
    st8((c.r[18].w[0] + 124u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A59E4u); set32(c.r[4], ld32((c.r[29].w[0] + 172u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x003A59E4u) [[unlikely]] return; }
L_003A59E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_003A5A10:
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[7].w[0] << 2);
    c.budget -= 2;
L_003A5A18:
    set32(c.r[6], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[6].w[0] + 84u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003A5A38; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 72u)));
    c.r[3].d[0] = ld64((c.r[3].w[0] + 16u));
    st64((c.r[5].w[0] + 320u), c.r[3].d[0]);
    st64((c.r[5].w[0] + 328u), 0ull);
    c.budget -= 4;
L_003A5A38:
    set32(c.r[5], ld32((c.r[6].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003A5A54; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 72u)));
    c.r[3].d[0] = ld64((c.r[3].w[0] + 48u));
    st64((c.r[5].w[0] + 320u), c.r[3].d[0]);
    st64((c.r[5].w[0] + 328u), 0ull);
    c.budget -= 4;
L_003A5A54:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[7].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A5A18u | kUnwind; return; } goto L_003A5A18; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A5A70:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 116u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003A5B84; } }
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] << 3);
    c.budget -= 2;
L_003A5A9C:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5AACu); set32(c.r[4], c.r[17].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 169u, depth + 1u); else { c.pc = 0x00149820u; return; } if (c.pc != 0x003A5AACu) [[unlikely]] return; }
L_003A5AAC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 3);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A5A9Cu | kUnwind; return; } goto L_003A5A9C; } }
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 2;
L_003A5AC4:
    set32(c.r[19], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 100u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[18], c.r[19].w[0] + 100u);  if (t) { goto L_003A5AF0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A5AEC; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5AECu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A5AECu) [[unlikely]] return; }
L_003A5AEC:
    st32((c.r[18].w[0]), 0u);
    c.budget -= 1;
L_003A5AF0:
    set32(c.r[4], ld32((c.r[19].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[18], c.r[19].w[0] + 84u);  if (t) { goto L_003A5B18; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A5B14; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5B14u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A5B14u) [[unlikely]] return; }
L_003A5B14:
    st32((c.r[18].w[0]), 0u);
    c.budget -= 1;
L_003A5B18:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A5AC4u | kUnwind; return; } goto L_003A5AC4; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 116u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5B34u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x003A5B34u) [[unlikely]] return; }
L_003A5B34:
    st32((c.r[17].w[0] + 116u), 0u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5B54u); st128((c.r[29].w[0] + 80u) & ~15u, c.r[0]);  if (depth < kMaxDepth) unit_0020(c, 12u, depth + 1u); else { c.pc = 0x00180110u; return; } if (c.pc != 0x003A5B54u) [[unlikely]] return; }
L_003A5B54:
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 2;
L_003A5B5C:
    set32(c.r[6], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[7], c.r[8].w[0] << 5);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[4]);
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[8].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    st128((c.r[6].w[0]) & ~15u, c.r[4]);
    ld128((c.r[5].w[0]) & ~15u, c.r[4]);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; st128((c.r[6].w[0] + 16u) & ~15u, c.r[4]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A5B5Cu | kUnwind; return; } goto L_003A5B5C; } }
L_003A5B84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003A5BA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 3u));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = ld16((c.r[5].w[0] + 2u));
    c.r[3].d[0] = c.r[3].d[0] << 58;
    c.r[4].d[0] = c.r[4].d[0] << 54;
    c.r[3].d[0] = c.r[3].d[0] >> 60;
    c.r[4].d[0] = c.r[4].d[0] >> 58;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5BD4u); set32(c.r[5], c.r[2].w[0] << (c.r[3].w[0] & 31u));  if (depth < kMaxDepth) unit_0013(c, 8u, depth + 1u); else { c.pc = 0x0014C060u; return; } if (c.pc != 0x003A5BD4u) [[unlikely]] return; }
L_003A5BD4:
    c.r[5].d[0] = ld64((c.r[16].w[0]));
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[4].d[0] = c.r[3].d[0] & 63ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFF00000u);
    c.r[4].d[0] = c.r[4].d[0] << 14;
    c.r[3].d[0] = c.r[3].d[0] | 16383ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st64((c.r[16].w[0]), c.r[3].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A5C10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5C24u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 39u, depth + 1u); else { c.pc = 0x001486F0u; return; } if (c.pc != 0x003A5C24u) [[unlikely]] return; }
L_003A5C24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[2], c.r[2].w[0] - 27328u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[4], c.r[16].w[0] + 36u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 21840u);
    set32(c.r[6], c.r[6].w[0] + 22112u);
    set32(c.r[7], 0u + 128u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5C50u); set32(c.r[8], 0u + 6u);  if (depth < kMaxDepth) unit_0000(c, 89u, depth + 1u); else { c.pc = 0x00100790u; return; } if (c.pc != 0x003A5C50u) [[unlikely]] return; }
L_003A5C50:
    st8((c.r[16].w[0] + 32u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A5C70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003A5CD4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[2], c.r[2].w[0] - 27328u);
    set32(c.r[4], c.r[17].w[0] + 36u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 22112u);
    set32(c.r[6], 0u + 128u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5CB0u); set32(c.r[7], 0u + 6u);  if (depth < kMaxDepth) unit_0000(c, 86u, depth + 1u); else { c.pc = 0x00100720u; return; } if (c.pc != 0x003A5CB0u) [[unlikely]] return; }
L_003A5CB0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5CBCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 42u, depth + 1u); else { c.pc = 0x00148750u; return; } if (c.pc != 0x003A5CBCu) [[unlikely]] return; }
L_003A5CBC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003A5CD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5CD4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x003A5CD4u) [[unlikely]] return; }
L_003A5CD4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003A5CD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A5CF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], c.r[5].w[0] << 7);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5D14u); set32(c.r[4], c.r[2].w[0] + 36u);  if (depth < kMaxDepth) unit_00A9(c, 178u, depth + 1u); else { c.pc = 0x003A5710u; return; } if (c.pc != 0x003A5D14u) [[unlikely]] return; }
L_003A5D14:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 4248u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5D28u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 45u, depth + 1u); else { c.pc = 0x001487B0u; return; } if (c.pc != 0x003A5D28u) [[unlikely]] return; }
L_003A5D28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A5D40:
    set32(c.r[29], c.r[29].w[0] - 2304u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5D70u); st32((c.r[29].w[0] + 2300u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003F(c, 299u, depth + 1u); else { c.pc = 0x001FF0D0u; return; } if (c.pc != 0x003A5D70u) [[unlikely]] return; }
L_003A5D70:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 2280u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5D84u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 125u, depth + 1u); else { c.pc = 0x0015D850u; return; } if (c.pc != 0x003A5D84u) [[unlikely]] return; }
L_003A5D84:
    set32(c.r[17], c.r[16].w[0] + 676u);
    set32(c.r[5], c.r[29].w[0] + 2280u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5D98u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_00A9(c, 179u, depth + 1u); else { c.pc = 0x003A5730u; return; } if (c.pc != 0x003A5D98u) [[unlikely]] return; }
L_003A5D98:
    set32(c.r[3], 0u + 4352u);
    set32(c.r[2], 0u + 6143u);
    st16((c.r[29].w[0] + 2296u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[29].w[0] + 64u);
    st16((c.r[29].w[0] + 2298u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 16328u);
    set32(c.r[2], 0u + 16335u);
    st16((c.r[29].w[0] + 2292u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[29].w[0] + 2294u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[29].w[0] + 2296u);
    set32(c.r[6], c.r[29].w[0] + 2292u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5DCCu); set32(c.r[7], 0u + 12u);  if (depth < kMaxDepth) unit_0020(c, 20u, depth + 1u); else { c.pc = 0x00180280u; return; } if (c.pc != 0x003A5DCCu) [[unlikely]] return; }
L_003A5DCC:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5DD8u); set32(c.r[5], c.r[16].w[0] + 748u);  if (depth < kMaxDepth) unit_0020(c, 43u, depth + 1u); else { c.pc = 0x00180690u; return; } if (c.pc != 0x003A5DD8u) [[unlikely]] return; }
L_003A5DD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5DE0u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0020(c, 46u, depth + 1u); else { c.pc = 0x00180720u; return; } if (c.pc != 0x003A5DE0u) [[unlikely]] return; }
L_003A5DE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5DE8u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0020(c, 48u, depth + 1u); else { c.pc = 0x00180760u; return; } if (c.pc != 0x003A5DE8u) [[unlikely]] return; }
L_003A5DE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5DF0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 202u, depth + 1u); else { c.pc = 0x003A5A10u; return; } if (c.pc != 0x003A5DF0u) [[unlikely]] return; }
L_003A5DF0:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    st8((c.r[16].w[0] + 32u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5E04u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0020(c, 26u, depth + 1u); else { c.pc = 0x00180340u; return; } if (c.pc != 0x003A5E04u) [[unlikely]] return; }
L_003A5E04:
    set32(c.r[4], c.r[29].w[0] + 2280u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5E10u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x003A5E10u) [[unlikely]] return; }
L_003A5E10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5E18u); set32(c.r[4], ld32((c.r[29].w[0] + 2300u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x003A5E18u) [[unlikely]] return; }
L_003A5E18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 2304u);  c.pc = t; return; }
L_003A5E30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5E50u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 298u, depth + 1u); else { c.pc = 0x0012E440u; return; } if (c.pc != 0x003A5E50u) [[unlikely]] return; }
L_003A5E50:
    set32(c.r[4], c.r[16].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5E5Cu); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x003A5E5Cu) [[unlikely]] return; }
L_003A5E5C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 27296u);
    set32(c.r[3], c.r[3].w[0] - 27208u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[4], 0u + 9u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5E88u); st32((c.r[16].w[0] + 36u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x003A5E88u) [[unlikely]] return; }
L_003A5E88:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5E94u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x003A5E94u) [[unlikely]] return; }
L_003A5E94:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[16].w[0] + 136u);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[16].w[0] + 48u) & ~15u, c.r[3]);
    set32(c.r[2], 0u + 30u);
    ld128((c.r[17].w[0]) & ~15u, c.r[3]);
    st128((c.r[16].w[0] + 64u) & ~15u, c.r[3]);
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    st8((c.r[16].w[0] + 104u), static_cast<std::uint8_t>(0u));
    ld128((c.r[16].w[0] + 48u) & ~15u, c.r[2]);
    st128((c.r[16].w[0] + 80u) & ~15u, c.r[2]);
    st32((c.r[16].w[0] + 112u), 0u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5ED4u); st32((c.r[16].w[0] + 132u), 0u);  if (depth < kMaxDepth) unit_0049(c, 271u, depth + 1u); else { c.pc = 0x002275A0u; return; } if (c.pc != 0x003A5ED4u) [[unlikely]] return; }
L_003A5ED4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[14] = ld32((c.r[1].w[0] + 4400u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42280000u);
    c.f[12] = c.r[2].w[0];
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[16].w[0] + 196u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], 0u + 11u);
    c.f[13] = c.r[3].w[0];
    set32(c.r[6], 0u + 766u);
    c.f[15] = c.r[2].w[0];
    set32(c.r[7], 0u + 830u);
    set32(c.r[8], c.r[8].w[0] + 4320u);
    set32(c.r[9], c.r[9].w[0] + 4352u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5F1Cu); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000D(c, 34u, depth + 1u); else { c.pc = 0x00134330u; return; } if (c.pc != 0x003A5F1Cu) [[unlikely]] return; }
L_003A5F1C:
    st32((c.r[16].w[0] + 392u), 0u);
    st32((c.r[16].w[0] + 584u), 0u);
    st8((c.r[16].w[0] + 652u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 668u), 0u);
    st32((c.r[16].w[0] + 676u), 0u);
    st32((c.r[16].w[0] + 680u), 0u);
    st32((c.r[16].w[0] + 684u), 0u);
    st32((c.r[16].w[0] + 688u), 0u);
    st32((c.r[16].w[0] + 692u), 0u);
    st32((c.r[16].w[0] + 696u), 0u);
    st32((c.r[16].w[0] + 700u), 0u);
    st8((c.r[16].w[0] + 716u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 720u), 0u);
    st32((c.r[16].w[0] + 724u), 0u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5F5Cu); st32((c.r[16].w[0] + 728u), 0u);  if (depth < kMaxDepth) unit_0087(c, 101u, depth + 1u); else { c.pc = 0x0031CBF0u; return; } if (c.pc != 0x003A5F5Cu) [[unlikely]] return; }
L_003A5F5C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 1096u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5F68u); st16((c.r[16].w[0] + 40u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0087(c, 101u, depth + 1u); else { c.pc = 0x0031CBF0u; return; } if (c.pc != 0x003A5F68u) [[unlikely]] return; }
L_003A5F68:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 1098u)));
    c.r[17].d[0] = 0ull + 0ull;
    st16((c.r[16].w[0] + 42u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_003A5F74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5F7Cu); set32(c.r[4], 0u + 2304u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x003A5F7Cu) [[unlikely]] return; }
L_003A5F7C:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[3].w[0] + 404u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].sd[0] < 18ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A5F74u | kUnwind; return; } goto L_003A5F74; } }
L_003A5F98:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 320u), 0u);
    c.r[2].d[0] = c.r[3].sd[0] < 18ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A5F98u | kUnwind; return; } goto L_003A5F98; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A5FB8:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 476u), 0u);
    c.r[2].d[0] = c.r[3].sd[0] < 18ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A5FB8u | kUnwind; return; } goto L_003A5FB8; } }
    st32((c.r[16].w[0] + 120u), 0u);
    c.r[3].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 116u), 0u);
    st32((c.r[16].w[0] + 128u), 0u);
    st32((c.r[16].w[0] + 124u), 0u);
    st32((c.r[16].w[0] + 400u), 0u);
    st32((c.r[16].w[0] + 396u), 0u);
    c.budget -= 7;
L_003A5FF0:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 704u), 0u);
    c.r[2].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A5FF0u | kUnwind; return; } goto L_003A5FF0; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A6010:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 588u), 0u);
    c.r[2].d[0] = c.r[3].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A6010u | kUnwind; return; } goto L_003A6010; } }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A6050:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003A6304; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 27296u);
    set32(c.r[2], c.r[2].w[0] - 27208u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 112u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A60B0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A60B0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A60B0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A60B0u) [[unlikely]] return; }
L_003A60B0:
    st32((c.r[17].w[0] + 112u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 132u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A60D8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A60D8; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A60D8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A60D8u) [[unlikely]] return; }
L_003A60D8:
    st32((c.r[17].w[0] + 132u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 392u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A6100; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A6100; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6100u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A6100u) [[unlikely]] return; }
L_003A6100:
    st32((c.r[17].w[0] + 392u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 584u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A6118; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6118u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x003A6118u) [[unlikely]] return; }
L_003A6118:
    st32((c.r[17].w[0] + 584u), 0u);
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003A6120:
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 320u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[18], c.r[2].w[0] + 320u);  if (t) { goto L_003A614C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A614C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A614Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A614Cu) [[unlikely]] return; }
L_003A614C:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 18ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[18].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A6120u | kUnwind; return; } goto L_003A6120; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A6160:
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 404u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[2].w[0] + 404u);  if (t) { goto L_003A617C; } }
L_003A6174:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A617Cu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x003A617Cu) [[unlikely]] return; }
L_003A617C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 18ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A6160u | kUnwind; return; } goto L_003A6160; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A6190:
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 476u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[2].w[0] + 476u);  if (t) { goto L_003A61AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A61ACu);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x003A61ACu) [[unlikely]] return; }
L_003A61AC:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 18ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A6190u | kUnwind; return; } goto L_003A6190; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A61C0:
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 588u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[2].w[0] + 588u);  if (t) { goto L_003A61EC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A61EC; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A61ECu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A61ECu) [[unlikely]] return; }
L_003A61EC:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A61C0u | kUnwind; return; } goto L_003A61C0; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A6200:
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 116u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[2].w[0] + 116u);  if (t) { goto L_003A622C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A622C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A622Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A622Cu) [[unlikely]] return; }
L_003A622C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A6200u | kUnwind; return; } goto L_003A6200; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A6240:
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 124u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[2].w[0] + 124u);  if (t) { goto L_003A626C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A626C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A626Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A626Cu) [[unlikely]] return; }
L_003A626C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A6240u | kUnwind; return; } goto L_003A6240; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A6280:
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 396u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[2].w[0] + 396u);  if (t) { goto L_003A62AC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A62AC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A62ACu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A62ACu) [[unlikely]] return; }
L_003A62AC:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A6280u | kUnwind; return; } goto L_003A6280; } }
    set32(c.r[4], c.r[17].w[0] + 196u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A62C8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000D(c, 54u, depth + 1u); else { c.pc = 0x00134720u; return; } if (c.pc != 0x003A62C8u) [[unlikely]] return; }
L_003A62C8:
    set32(c.r[4], c.r[17].w[0] + 136u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A62D4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0049(c, 274u, depth + 1u); else { c.pc = 0x002275F0u; return; } if (c.pc != 0x003A62D4u) [[unlikely]] return; }
L_003A62D4:
    set32(c.r[4], c.r[17].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A62E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x003A62E0u) [[unlikely]] return; }
L_003A62E0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A62ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 300u, depth + 1u); else { c.pc = 0x0012E490u; return; } if (c.pc != 0x003A62ECu) [[unlikely]] return; }
L_003A62EC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003A6308; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6304u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x003A6304u) [[unlikely]] return; }
L_003A6304:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003A6308:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003A6330:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = ld16((c.r[4].w[0] + 40u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A634Cu); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 101u, depth + 1u); else { c.pc = 0x0031CBF0u; return; } if (c.pc != 0x003A634Cu) [[unlikely]] return; }
L_003A634C:
    st16((c.r[2].w[0] + 1096u), static_cast<std::uint16_t>(c.r[16].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6358u); c.r[16].d[0] = ld16((c.r[17].w[0] + 42u));  if (depth < kMaxDepth) unit_0087(c, 101u, depth + 1u); else { c.pc = 0x0031CBF0u; return; } if (c.pc != 0x003A6358u) [[unlikely]] return; }
L_003A6358:
    st16((c.r[2].w[0] + 1098u), static_cast<std::uint16_t>(c.r[16].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A6370:
    c.budget -= 2;
    {  goto L_003A70C0; }
L_003A6380:
    set32(c.r[3], ld32((c.r[4].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003A6390; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 137u));
    c.budget -= 1;
L_003A6390:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A63A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A63B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 80u, depth + 1u); else { c.pc = 0x0037CE90u; return; } if (c.pc != 0x003A63B4u) [[unlikely]] return; }
L_003A63B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A63CC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A63CCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A63CCu) [[unlikely]] return; }
L_003A63CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A63E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A63F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 281u, depth + 1u); else { c.pc = 0x003A6380u; return; } if (c.pc != 0x003A63F4u) [[unlikely]] return; }
L_003A63F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A6424; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6404u);  if (depth < kMaxDepth) unit_00AA(c, 252u, depth + 1u); else { c.pc = 0x003AA380u; return; } if (c.pc != 0x003A6404u) [[unlikely]] return; }
L_003A6404:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 11u);  if (t) { goto L_003A6424; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6414u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x003A6414u) [[unlikely]] return; }
L_003A6414:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6424u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A6424u) [[unlikely]] return; }
L_003A6424:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A6440:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[16], ld32((c.r[1].w[0] - 1536u)));  if (t) { goto L_003A64C0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 25376u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A6990; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_003A6990; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6490u);  if (depth < kMaxDepth) unit_001A(c, 231u, depth + 1u); else { c.pc = 0x0016A360u; return; } if (c.pc != 0x003A6490u) [[unlikely]] return; }
L_003A6490:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_003A64AC; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A64ACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A64ACu) [[unlikely]] return; }
L_003A64AC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A64B8u); st32((c.r[17].w[0] + 32u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001A(c, 271u, depth + 1u); else { c.pc = 0x0016A9E0u; return; } if (c.pc != 0x003A64B8u) [[unlikely]] return; }
L_003A64B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003A6994; } }
L_003A64C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A64C8u);  if (depth < kMaxDepth) unit_00AA(c, 252u, depth + 1u); else { c.pc = 0x003AA380u; return; } if (c.pc != 0x003A64C8u) [[unlikely]] return; }
L_003A64C8:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003A6990; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 652u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003A64F4; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A64F0u); st8((c.r[17].w[0] + 652u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00AA(c, 22u, depth + 1u); else { c.pc = 0x003A8550u; return; } if (c.pc != 0x003A64F0u) [[unlikely]] return; }
L_003A64F0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003A64F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A64FCu);  if (depth < kMaxDepth) unit_00AA(c, 13u, depth + 1u); else { c.pc = 0x003A83B0u; return; } if (c.pc != 0x003A64FCu) [[unlikely]] return; }
L_003A64FC:
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003A6990; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6514u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 71u, depth + 1u); else { c.pc = 0x003A8C30u; return; } if (c.pc != 0x003A6514u) [[unlikely]] return; }
L_003A6514:
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003A6990; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 680u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003A667C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6538u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 314u, depth + 1u); else { c.pc = 0x0013F0C0u; return; } if (c.pc != 0x003A6538u) [[unlikely]] return; }
L_003A6538:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A6598; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 676u)));
    c.r[1].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003A656C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6558u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 11u, depth + 1u); else { c.pc = 0x003A8370u; return; } if (c.pc != 0x003A6558u) [[unlikely]] return; }
L_003A6558:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6560u); set32(c.r[4], 0u + 432u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x003A6560u) [[unlikely]] return; }
L_003A6560:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A6990; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003A656C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6574u);  if (depth < kMaxDepth) unit_00A9(c, 277u, depth + 1u); else { c.pc = 0x003A6330u; return; } if (c.pc != 0x003A6574u) [[unlikely]] return; }
L_003A6574:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6584u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A6584u) [[unlikely]] return; }
L_003A6584:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A658Cu); set32(c.r[4], 0u + 400u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x003A658Cu) [[unlikely]] return; }
L_003A658C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A6990; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003A6598:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A65A0u);  if (depth < kMaxDepth) unit_000F(c, 315u, depth + 1u); else { c.pc = 0x0013F0D0u; return; } if (c.pc != 0x003A65A0u) [[unlikely]] return; }
L_003A65A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A6608; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A65B0u); c.r[16].d[0] = ld16((c.r[17].w[0] + 40u));  if (depth < kMaxDepth) unit_0087(c, 101u, depth + 1u); else { c.pc = 0x0031CBF0u; return; } if (c.pc != 0x003A65B0u) [[unlikely]] return; }
L_003A65B0:
    c.r[2].d[0] = ld16((c.r[2].w[0] + 1096u));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003A65D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A65C4u); c.r[16].d[0] = ld16((c.r[17].w[0] + 42u));  if (depth < kMaxDepth) unit_0087(c, 101u, depth + 1u); else { c.pc = 0x0031CBF0u; return; } if (c.pc != 0x003A65C4u) [[unlikely]] return; }
L_003A65C4:
    c.r[2].d[0] = ld16((c.r[2].w[0] + 1098u));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_003A65E4; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003A65D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A65DCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 96u, depth + 1u); else { c.pc = 0x003A9220u; return; } if (c.pc != 0x003A65DCu) [[unlikely]] return; }
L_003A65DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 401u);  if (t) { goto L_003A65F8; } }
L_003A65E4:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A65F4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A65F4u) [[unlikely]] return; }
L_003A65F4:
    set32(c.r[4], 0u + 401u);
    c.budget -= 1;
L_003A65F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6600u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x003A6600u) [[unlikely]] return; }
L_003A6600:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A6990; } }
L_003A6608:
    c.r[4].d[0] = ld16((c.r[16].w[0] + 168u));
    c.r[3].d[0] = c.r[4].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] & 16384ull;  if (t) { goto L_003A6644; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 676u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[17].w[0] + 676u), c.r[2].w[0]);  if (t) { goto L_003A6630; } }
    set32(c.r[2], 0u + 2u);
    st32((c.r[17].w[0] + 676u), c.r[2].w[0]);
    c.budget -= 2;
L_003A6630:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6638u); set32(c.r[4], 0u + 402u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x003A6638u) [[unlikely]] return; }
L_003A6638:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A6990; } }
    c.r[3].d[0] = c.r[4].d[0] & 16384ull;
    c.budget -= 1;
L_003A6644:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003A6990; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 676u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 676u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 402u);  if (t) { goto L_003A666C; } }
    st32((c.r[17].w[0] + 676u), 0u);
    set32(c.r[4], 0u + 402u);
    c.budget -= 2;
L_003A666C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6674u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x003A6674u) [[unlikely]] return; }
L_003A6674:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A6990; } }
L_003A667C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A6764; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A668Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 314u, depth + 1u); else { c.pc = 0x0013F0C0u; return; } if (c.pc != 0x003A668Cu) [[unlikely]] return; }
L_003A668C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A66B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A669Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 17u, depth + 1u); else { c.pc = 0x003A84B0u; return; } if (c.pc != 0x003A669Cu) [[unlikely]] return; }
L_003A669C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A66A4u); set32(c.r[4], 0u + 400u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x003A66A4u) [[unlikely]] return; }
L_003A66A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A6990; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003A66B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A66B8u);  if (depth < kMaxDepth) unit_000F(c, 315u, depth + 1u); else { c.pc = 0x0013F0D0u; return; } if (c.pc != 0x003A66B8u) [[unlikely]] return; }
L_003A66B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A66D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A66C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 12u, depth + 1u); else { c.pc = 0x003A83A0u; return; } if (c.pc != 0x003A66C8u) [[unlikely]] return; }
L_003A66C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A66D0u); set32(c.r[4], 0u + 433u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x003A66D0u) [[unlikely]] return; }
L_003A66D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A6990; } }
L_003A66D8:
    c.r[4].d[0] = ld16((c.r[16].w[0] + 168u));
    c.r[3].d[0] = c.r[4].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] & 16384ull;  if (t) { goto L_003A6720; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 688u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[17].w[0] + 688u), c.r[2].w[0]);  if (t) { goto L_003A6700; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 688u), c.r[2].w[0]);
    c.budget -= 2;
L_003A6700:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A670Cu); st32((c.r[17].w[0] + 684u), 0u);  if (depth < kMaxDepth) unit_00A9(c, 421u, depth + 1u); else { c.pc = 0x003A71C0u; return; } if (c.pc != 0x003A670Cu) [[unlikely]] return; }
L_003A670C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6714u); set32(c.r[4], 0u + 402u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x003A6714u) [[unlikely]] return; }
L_003A6714:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A6990; } }
    c.r[3].d[0] = c.r[4].d[0] & 16384ull;
    c.budget -= 1;
L_003A6720:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003A6990; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 688u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 688u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003A6748; } }
    st32((c.r[17].w[0] + 688u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_003A6748:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6750u); st32((c.r[17].w[0] + 684u), 0u);  if (depth < kMaxDepth) unit_00A9(c, 421u, depth + 1u); else { c.pc = 0x003A71C0u; return; } if (c.pc != 0x003A6750u) [[unlikely]] return; }
L_003A6750:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6758u); set32(c.r[4], 0u + 402u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x003A6758u) [[unlikely]] return; }
L_003A6758:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A6990; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003A6764:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A676Cu);  if (depth < kMaxDepth) unit_000F(c, 314u, depth + 1u); else { c.pc = 0x0013F0C0u; return; } if (c.pc != 0x003A676Cu) [[unlikely]] return; }
L_003A676C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A67E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A677Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 86u, depth + 1u); else { c.pc = 0x003A90E0u; return; } if (c.pc != 0x003A677Cu) [[unlikely]] return; }
L_003A677C:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 403u);  if (t) { goto L_003A67D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6794u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 58u, depth + 1u); else { c.pc = 0x003A8A80u; return; } if (c.pc != 0x003A6794u) [[unlikely]] return; }
L_003A6794:
    set32(c.r[3], ld32((c.r[17].w[0] + 692u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 676u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 552u));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A67BCu); st16((c.r[2].w[0] + 40u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_00AA(c, 44u, depth + 1u); else { c.pc = 0x003A8860u; return; } if (c.pc != 0x003A67BCu) [[unlikely]] return; }
L_003A67BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A67C4u); set32(c.r[4], 0u + 400u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x003A67C4u) [[unlikely]] return; }
L_003A67C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A6990; } }
    set32(c.r[4], 0u + 403u);
    c.budget -= 1;
L_003A67D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A67D8u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x003A67D8u) [[unlikely]] return; }
L_003A67D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A6990; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003A67E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A67ECu);  if (depth < kMaxDepth) unit_000F(c, 315u, depth + 1u); else { c.pc = 0x0013F0D0u; return; } if (c.pc != 0x003A67ECu) [[unlikely]] return; }
L_003A67EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A684C; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6804u); st32((c.r[17].w[0] + 680u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x003A6804u) [[unlikely]] return; }
L_003A6804:
    set32(c.r[4], ld32((c.r[17].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A6828; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A6828; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6828u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A6828u) [[unlikely]] return; }
L_003A6828:
    st32((c.r[17].w[0] + 132u), 0u);
    set32(c.r[4], 0u + 401u);
    set32(c.r[2], ld32((c.r[17].w[0] + 116u)));
    st8((c.r[2].w[0] + 16u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[17].w[0] + 120u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6844u); st8((c.r[2].w[0] + 16u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x003A6844u) [[unlikely]] return; }
L_003A6844:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A6990; } }
L_003A684C:
    c.r[4].d[0] = ld16((c.r[16].w[0] + 168u));
    c.r[3].d[0] = c.r[4].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] & 16384ull;  if (t) { goto L_003A6898; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 692u)));
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[17].w[0] + 692u), c.r[2].w[0]);  if (t) { goto L_003A6878; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 692u)));
    set32(c.r[2], c.r[2].w[0] + 16u);
    st32((c.r[17].w[0] + 692u), c.r[2].w[0]);
    c.budget -= 3;
L_003A6878:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6884u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 79u, depth + 1u); else { c.pc = 0x003A8E50u; return; } if (c.pc != 0x003A6884u) [[unlikely]] return; }
L_003A6884:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A688Cu); set32(c.r[4], 0u + 402u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x003A688Cu) [[unlikely]] return; }
L_003A688C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A6990; } }
    c.r[3].d[0] = c.r[4].d[0] & 16384ull;
    c.budget -= 1;
L_003A6898:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] & 32768ull;  if (t) { goto L_003A68E4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 692u)));
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[17].w[0] + 692u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003A68C8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 692u)));
    set32(c.r[2], c.r[2].w[0] - 16u);
    st32((c.r[17].w[0] + 692u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
L_003A68C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A68D0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00AA(c, 79u, depth + 1u); else { c.pc = 0x003A8E50u; return; } if (c.pc != 0x003A68D0u) [[unlikely]] return; }
L_003A68D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A68D8u); set32(c.r[4], 0u + 402u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x003A68D8u) [[unlikely]] return; }
L_003A68D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A6990; } }
    c.r[3].d[0] = c.r[4].d[0] & 32768ull;
    c.budget -= 1;
L_003A68E4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] & 8192ull;  if (t) { goto L_003A6940; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 692u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6900u); st32((c.r[17].w[0] + 692u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AA(c, 72u, depth + 1u); else { c.pc = 0x003A8C40u; return; } if (c.pc != 0x003A6900u) [[unlikely]] return; }
L_003A6900:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6910u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00AA(c, 79u, depth + 1u); else { c.pc = 0x003A8E50u; return; } if (c.pc != 0x003A6910u) [[unlikely]] return; }
L_003A6910:
    c.r[3].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 402u);  if (t) { goto L_003A692C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 437u);  if (t) { goto L_003A692C; } }
    set32(c.r[4], 0u + 402u);
    c.budget -= 1;
L_003A692C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6934u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x003A6934u) [[unlikely]] return; }
L_003A6934:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A6990; } }
    c.r[3].d[0] = c.r[4].d[0] & 8192ull;
    c.budget -= 1;
L_003A6940:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003A6990; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 692u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A695Cu); st32((c.r[17].w[0] + 692u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AA(c, 75u, depth + 1u); else { c.pc = 0x003A8D20u; return; } if (c.pc != 0x003A695Cu) [[unlikely]] return; }
L_003A695C:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A696Cu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_00AA(c, 79u, depth + 1u); else { c.pc = 0x003A8E50u; return; } if (c.pc != 0x003A696Cu) [[unlikely]] return; }
L_003A696C:
    c.r[3].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 402u);  if (t) { goto L_003A6988; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 437u);  if (t) { goto L_003A6988; } }
    set32(c.r[4], 0u + 402u);
    c.budget -= 1;
L_003A6988:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6990u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x003A6990u) [[unlikely]] return; }
L_003A6990:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003A6994:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A69B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A69C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 281u, depth + 1u); else { c.pc = 0x003A6380u; return; } if (c.pc != 0x003A69C4u) [[unlikely]] return; }
L_003A69C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A69DC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A69DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A69DCu) [[unlikely]] return; }
L_003A69DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A69F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6A04u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 281u, depth + 1u); else { c.pc = 0x003A6380u; return; } if (c.pc != 0x003A6A04u) [[unlikely]] return; }
L_003A6A04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A6A1C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6A1Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A6A1Cu) [[unlikely]] return; }
L_003A6A1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A6A30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6A4Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000B(c, 318u, depth + 1u); else { c.pc = 0x0012E5E0u; return; } if (c.pc != 0x003A6A4Cu) [[unlikely]] return; }
L_003A6A4C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], 0u + 256u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6A60u); set32(c.r[16], c.r[2].w[0] + 624u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003A6A60u) [[unlikely]] return; }
L_003A6A60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003A6A70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6A70u);  if (depth < kMaxDepth) unit_0017(c, 177u, depth + 1u); else { c.pc = 0x0015E070u; return; } if (c.pc != 0x003A6A70u) [[unlikely]] return; }
L_003A6A70:
    st32((c.r[18].w[0] + 124u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6A7Cu); set32(c.r[4], 0u + 256u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003A6A7Cu) [[unlikely]] return; }
L_003A6A7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003A6A8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6A8Cu);  if (depth < kMaxDepth) unit_0017(c, 177u, depth + 1u); else { c.pc = 0x0015E070u; return; } if (c.pc != 0x003A6A8Cu) [[unlikely]] return; }
L_003A6A8C:
    st32((c.r[18].w[0] + 128u), c.r[2].w[0]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003A6A94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6A9Cu); set32(c.r[4], 0u + 256u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003A6A9Cu) [[unlikely]] return; }
L_003A6A9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] << 2);  if (t) { goto L_003A6AB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6AACu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 177u, depth + 1u); else { c.pc = 0x0015E070u; return; } if (c.pc != 0x003A6AACu) [[unlikely]] return; }
L_003A6AAC:
    set32(c.r[3], c.r[17].w[0] << 2);
    c.budget -= 1;
L_003A6AB0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x42AC0000u);
    set32(c.r[5], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[5].w[0] + 588u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x428A0000u);
    set32(c.r[5], ld32((c.r[5].w[0] + 588u)));
    c.r[2].d[0] = c.r[17].sd[0] < 16ll ? 1ull : 0ull;
    st32((c.r[5].w[0] + 160u), c.r[4].w[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[5].w[0] + 164u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A6A94u | kUnwind; return; } goto L_003A6A94; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A6ADC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6AE4u); set32(c.r[4], 0u + 192u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003A6AE4u) [[unlikely]] return; }
L_003A6AE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] << 2);  if (t) { goto L_003A6B44; } }
    c.f[1] = c.r[17].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[2] = c.r[4].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[5], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x42200000u);
    set32(c.r[6], 0u + 5u);
    c.r[7].d[0] = 0ull + 0ull;
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = c.r[3].w[0];
    c.f[12] = c.r[4].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43220000u);
    c.f[14] = c.r[3].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[15] = c.r[4].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[13] = fp::add(c.f[0], c.f[1]);
    c.f[16] = c.r[3].w[0];
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6B40u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 46u, depth + 1u); else { c.pc = 0x002BC900u; return; } if (c.pc != 0x003A6B40u) [[unlikely]] return; }
L_003A6B40:
    set32(c.r[3], c.r[17].w[0] << 2);
    c.budget -= 1;
L_003A6B44:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[5], 0u + 20u);
    st32((c.r[3].w[0] + 396u), c.r[2].w[0]);
    c.f[12] = 0u;
    c.f[0] = ld32((c.r[1].w[0] + 6920u));
    set32(c.r[2], ld32((c.r[3].w[0] + 396u)));
    set32(c.r[6], 0u + 5u);
    st32((c.r[2].w[0] + 40u), c.f[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 396u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6B7Cu); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A6B7Cu) [[unlikely]] return; }
L_003A6B7C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 160u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A6ADCu | kUnwind; return; } goto L_003A6ADC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6B94u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003A6B94u) [[unlikely]] return; }
L_003A6B94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003A6BA8; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6BA8u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_002A(c, 287u, depth + 1u); else { c.pc = 0x001AB200u; return; } if (c.pc != 0x003A6BA8u) [[unlikely]] return; }
L_003A6BA8:
    st32((c.r[18].w[0] + 112u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6BB8u); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x003A6BB8u) [[unlikely]] return; }
L_003A6BB8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6BC8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x003A6BC8u) [[unlikely]] return; }
L_003A6BC8:
    set32(c.r[4], ld32((c.r[18].w[0] + 112u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6BD8u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x003A6BD8u) [[unlikely]] return; }
L_003A6BD8:
    set32(c.r[4], ld32((c.r[18].w[0] + 112u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6BECu); set32(c.r[5], 0u + 202u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A6BECu) [[unlikely]] return; }
L_003A6BEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6BF4u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003A6BF4u) [[unlikely]] return; }
L_003A6BF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003A6C08; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6C08u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0025(c, 304u, depth + 1u); else { c.pc = 0x00196C90u; return; } if (c.pc != 0x003A6C08u) [[unlikely]] return; }
L_003A6C08:
    st32((c.r[18].w[0] + 116u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6C18u); set32(c.r[5], 0u + 10011u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x003A6C18u) [[unlikely]] return; }
L_003A6C18:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6C28u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x003A6C28u) [[unlikely]] return; }
L_003A6C28:
    set32(c.r[4], ld32((c.r[18].w[0] + 116u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6C38u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x003A6C38u) [[unlikely]] return; }
L_003A6C38:
    set32(c.r[7], ld32((c.r[18].w[0] + 116u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43B70000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42B80000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[7].w[0] + 112u), c.r[6].w[0]);
    st32((c.r[7].w[0] + 116u), c.r[6].w[0]);
    st32((c.r[7].w[0] + 120u), c.r[6].w[0]);
    st32((c.r[7].w[0] + 124u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 116u)));
    st32((c.r[2].w[0] + 96u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 100u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 104u), c.f[0]);
    st32((c.r[2].w[0] + 108u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 116u)));
    st32((c.r[2].w[0] + 104u), c.f[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 116u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 25;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6C9Cu); set32(c.r[5], 0u + 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A6C9Cu) [[unlikely]] return; }
L_003A6C9C:
    set32(c.r[2], ld32((c.r[18].w[0] + 116u)));
    set32(c.r[4], 0u + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6CACu); st8((c.r[2].w[0] + 16u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003A6CACu) [[unlikely]] return; }
L_003A6CAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003A6CC0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6CC0u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0025(c, 304u, depth + 1u); else { c.pc = 0x00196C90u; return; } if (c.pc != 0x003A6CC0u) [[unlikely]] return; }
L_003A6CC0:
    st32((c.r[18].w[0] + 120u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6CD0u); set32(c.r[5], 0u + 10011u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x003A6CD0u) [[unlikely]] return; }
L_003A6CD0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6CE0u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x003A6CE0u) [[unlikely]] return; }
L_003A6CE0:
    set32(c.r[4], ld32((c.r[18].w[0] + 120u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6CF0u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x003A6CF0u) [[unlikely]] return; }
L_003A6CF0:
    set32(c.r[7], ld32((c.r[18].w[0] + 120u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43EB0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42B80000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[7].w[0] + 112u), c.r[6].w[0]);
    st32((c.r[7].w[0] + 116u), c.r[6].w[0]);
    st32((c.r[7].w[0] + 120u), c.r[6].w[0]);
    st32((c.r[7].w[0] + 124u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 120u)));
    st32((c.r[2].w[0] + 96u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 100u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 104u), c.f[0]);
    st32((c.r[2].w[0] + 108u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 120u)));
    st32((c.r[2].w[0] + 104u), c.f[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 120u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 25;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6D54u); set32(c.r[5], 0u + 5u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A6D54u) [[unlikely]] return; }
L_003A6D54:
    set32(c.r[2], ld32((c.r[18].w[0] + 120u)));
    set32(c.r[4], c.r[18].w[0] + 196u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6D64u); st8((c.r[2].w[0] + 16u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000D(c, 68u, depth + 1u); else { c.pc = 0x001348C0u; return; } if (c.pc != 0x003A6D64u) [[unlikely]] return; }
L_003A6D64:
    st32((c.r[18].w[0] + 172u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    st32((c.r[18].w[0] + 176u), 0u);
    set32(c.r[3], 0u + 5u);
    st32((c.r[18].w[0] + 180u), c.r[2].w[0]);
    set32(c.r[4], c.r[18].w[0] + 136u);
    set32(c.r[2], 0u + 20u);
    st32((c.r[18].w[0] + 184u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 188u), c.r[2].w[0]);
    set32(c.r[5], c.r[18].w[0] + 172u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6D94u); st32((c.r[18].w[0] + 192u), 0u);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x003A6D94u) [[unlikely]] return; }
L_003A6D94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6D9Cu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x003A6D9Cu) [[unlikely]] return; }
L_003A6D9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003A6DC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6DD4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 319u, depth + 1u); else { c.pc = 0x0012E600u; return; } if (c.pc != 0x003A6DD4u) [[unlikely]] return; }
L_003A6DD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6DDCu);  if (depth < kMaxDepth) unit_00AA(c, 258u, depth + 1u); else { c.pc = 0x003AA430u; return; } if (c.pc != 0x003A6DDCu) [[unlikely]] return; }
L_003A6DDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6DE4u); st32((c.r[16].w[0] + 656u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AA(c, 262u, depth + 1u); else { c.pc = 0x003AA4A0u; return; } if (c.pc != 0x003A6DE4u) [[unlikely]] return; }
L_003A6DE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6DECu); st32((c.r[16].w[0] + 660u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AA(c, 266u, depth + 1u); else { c.pc = 0x003AA510u; return; } if (c.pc != 0x003A6DECu) [[unlikely]] return; }
L_003A6DEC:
    st32((c.r[16].w[0] + 664u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 656u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6DFCu); set32(c.r[4], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x003A6DFCu) [[unlikely]] return; }
L_003A6DFC:
    st32((c.r[16].w[0] + 584u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6E08u); set32(c.r[4], ld32((c.r[16].w[0] + 584u)));  if (depth < kMaxDepth) unit_00AA(c, 270u, depth + 1u); else { c.pc = 0x003AA580u; return; } if (c.pc != 0x003A6E08u) [[unlikely]] return; }
L_003A6E08:
    set32(c.r[5], ld32((c.r[16].w[0] + 656u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1000u);  if (t) { goto L_003A6E3C; } }
L_003A6E18:
    set32(c.r[2], ld32((c.r[16].w[0] + 584u)));
    set32(c.r[4], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_003A6E38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 668u), c.r[6].w[0]);  if (t) { goto L_003A6E48; } }
L_003A6E38:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_003A6E3C:
    c.r[2].d[0] = c.r[6].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A6E18u | kUnwind; return; } goto L_003A6E18; } }
L_003A6E48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6E50u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 22u, depth + 1u); else { c.pc = 0x003A8550u; return; } if (c.pc != 0x003A6E50u) [[unlikely]] return; }
L_003A6E50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A6E60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6E78u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 320u, depth + 1u); else { c.pc = 0x0012E610u; return; } if (c.pc != 0x003A6E78u) [[unlikely]] return; }
L_003A6E78:
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003A6E98; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6E94u); set32(c.r[5], 0u + 203u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A6E94u) [[unlikely]] return; }
L_003A6E94:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A6E98:
    set32(c.r[2], c.r[17].w[0] << 2);
    c.budget -= 1;
L_003A6E9C:
    set32(c.r[5], 0u + 5u);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[6], 0u + 3u);
    set32(c.r[4], ld32((c.r[2].w[0] + 396u)));
    c.f[12] = 0u;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6EC0u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A6EC0u) [[unlikely]] return; }
L_003A6EC0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A6E9Cu | kUnwind; return; } goto L_003A6E9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6ED8u); set32(c.r[4], c.r[16].w[0] + 196u);  if (depth < kMaxDepth) unit_000D(c, 69u, depth + 1u); else { c.pc = 0x001348D0u; return; } if (c.pc != 0x003A6ED8u) [[unlikely]] return; }
L_003A6ED8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[3], 0u + 3u);
    st32((c.r[16].w[0] + 172u), c.r[4].w[0]);
    set32(c.r[2], 0u + 5u);
    st32((c.r[16].w[0] + 176u), c.r[4].w[0]);
    set32(c.r[5], c.r[16].w[0] + 172u);
    st32((c.r[16].w[0] + 180u), 0u);
    set32(c.r[4], c.r[16].w[0] + 136u);
    st32((c.r[16].w[0] + 184u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 188u), c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6F08u); st32((c.r[16].w[0] + 192u), 0u);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x003A6F08u) [[unlikely]] return; }
L_003A6F08:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 716u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A6F30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6F48u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 321u, depth + 1u); else { c.pc = 0x0012E630u; return; } if (c.pc != 0x003A6F48u) [[unlikely]] return; }
L_003A6F48:
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003A6F68; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6F64u); set32(c.r[5], 0u + 203u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A6F64u) [[unlikely]] return; }
L_003A6F64:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A6F68:
    set32(c.r[2], c.r[17].w[0] << 2);
    c.budget -= 1;
L_003A6F6C:
    set32(c.r[5], 0u + 5u);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[6], 0u + 3u);
    set32(c.r[4], ld32((c.r[2].w[0] + 396u)));
    c.f[12] = 0u;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6F90u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A6F90u) [[unlikely]] return; }
L_003A6F90:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A6F6Cu | kUnwind; return; } goto L_003A6F6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6FA8u); set32(c.r[4], c.r[16].w[0] + 196u);  if (depth < kMaxDepth) unit_000D(c, 69u, depth + 1u); else { c.pc = 0x001348D0u; return; } if (c.pc != 0x003A6FA8u) [[unlikely]] return; }
L_003A6FA8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[3], 0u + 3u);
    st32((c.r[16].w[0] + 172u), c.r[4].w[0]);
    set32(c.r[2], 0u + 5u);
    st32((c.r[16].w[0] + 176u), c.r[4].w[0]);
    set32(c.r[5], c.r[16].w[0] + 172u);
    st32((c.r[16].w[0] + 180u), 0u);
    set32(c.r[4], c.r[16].w[0] + 136u);
    st32((c.r[16].w[0] + 184u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 188u), c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6FD8u); st32((c.r[16].w[0] + 192u), 0u);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x003A6FD8u) [[unlikely]] return; }
L_003A6FD8:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 716u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A7000:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[0] = ld32((c.r[4].w[0] + 148u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7024u); st32((c.r[4].w[0] + 672u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A9(c, 428u, depth + 1u); else { c.pc = 0x003A7330u; return; } if (c.pc != 0x003A7024u) [[unlikely]] return; }
L_003A7024:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A702Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 473u, depth + 1u); else { c.pc = 0x003A7BC0u; return; } if (c.pc != 0x003A702Cu) [[unlikely]] return; }
L_003A702C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7034u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 460u, depth + 1u); else { c.pc = 0x003A7940u; return; } if (c.pc != 0x003A7034u) [[unlikely]] return; }
L_003A7034:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A703Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 5u, depth + 1u); else { c.pc = 0x003A80F0u; return; } if (c.pc != 0x003A703Cu) [[unlikely]] return; }
L_003A703C:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 104u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A7074; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[3], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 108u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 48u);  if (t) { goto L_003A70A8; } }
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 104u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003A70A4; } }
L_003A7074:
    set32(c.r[2], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[4], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 108u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003A70A4; } }
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 104u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_003A70A4:
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.budget -= 1;
L_003A70A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A70B0u);  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x003A70B0u) [[unlikely]] return; }
L_003A70B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A70C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld16((c.r[4].w[0] + 40u));
    st16((c.r[4].w[0] + 548u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 42u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A70F0u); st16((c.r[4].w[0] + 550u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AA(c, 252u, depth + 1u); else { c.pc = 0x003AA380u; return; } if (c.pc != 0x003A70F0u) [[unlikely]] return; }
L_003A70F0:
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[3].d[0] = c.r[17].d[0] & 255ull;  if (t) { goto L_003A7184; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7108u);  if (depth < kMaxDepth) unit_00AA(c, 258u, depth + 1u); else { c.pc = 0x003AA430u; return; } if (c.pc != 0x003A7108u) [[unlikely]] return; }
L_003A7108:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7110u); set32(c.r[4], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x003A7110u) [[unlikely]] return; }
L_003A7110:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A711Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 270u, depth + 1u); else { c.pc = 0x003AA580u; return; } if (c.pc != 0x003A711Cu) [[unlikely]] return; }
L_003A711C:
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[5], 0u + 2u);  if (t) { goto L_003A7170; } }
L_003A712C:
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[4].d[0] = ld16((c.r[2].w[0] - 4u));
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[5].sd[0] < 18ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st16((c.r[3].w[0] + 548u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A712Cu | kUnwind; return; } goto L_003A712C; } }
    set32(c.r[4], c.r[18].w[0] + 404u);
    set32(c.r[5], c.r[18].w[0] + 548u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A715Cu); set32(c.r[6], 0u + 18u);  if (depth < kMaxDepth) unit_00AA(c, 281u, depth + 1u); else { c.pc = 0x003AA710u; return; } if (c.pc != 0x003A715Cu) [[unlikely]] return; }
L_003A715C:
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003A7170; } }
    c.r[17].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_003A7170:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A7180; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7180u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x003A7180u) [[unlikely]] return; }
L_003A7180:
    c.r[3].d[0] = c.r[17].d[0] & 255ull;
    c.budget -= 1;
L_003A7184:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003A71A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7194u);  if (depth < kMaxDepth) unit_00AA(c, 247u, depth + 1u); else { c.pc = 0x003AA2F0u; return; } if (c.pc != 0x003A7194u) [[unlikely]] return; }
L_003A7194:
    set32(c.r[4], c.r[18].w[0] + 404u);
    set32(c.r[5], c.r[18].w[0] + 548u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A71A4u); set32(c.r[6], 0u + 18u);  if (depth < kMaxDepth) unit_00AA(c, 242u, depth + 1u); else { c.pc = 0x003AA260u; return; } if (c.pc != 0x003A71A4u) [[unlikely]] return; }
L_003A71A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003A71C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = ld16((c.r[4].w[0] + 40u));
    st16((c.r[4].w[0] + 548u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 42u));
    st16((c.r[4].w[0] + 550u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[4].w[0] + 688u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], 0u + 2u);  if (t) { goto L_003A725C; } }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 2;
L_003A71F8:
    set32(c.r[5], ld32((c.r[17].w[0] + 684u)));
    set32(c.r[4], c.r[6].w[0] - 2u);
    set32(c.r[2], ld32((c.r[17].w[0] + 660u)));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[1].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[6].w[0] << 1);  if (t) { goto L_003A723C; } }
    set32(c.r[5], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[6].w[0] << 1);
    set32(c.r[4], ld32((c.r[17].w[0] + 584u)));
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = ld16((c.r[4].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0] + 548u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_003A7244; } }
L_003A723C:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0] + 548u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003A7244:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 18ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A71F8u | kUnwind; return; } goto L_003A71F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 404u);  if (t) { goto L_003A72CC; } }
L_003A725C:
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 2;
L_003A7264:
    set32(c.r[6], ld32((c.r[17].w[0] + 684u)));
    set32(c.r[4], c.r[7].w[0] - 2u);
    set32(c.r[5], ld32((c.r[17].w[0] + 668u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 656u)));
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[1].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[7].w[0] << 1);  if (t) { goto L_003A72B0; } }
    set32(c.r[5], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[7].w[0] << 1);
    set32(c.r[4], ld32((c.r[17].w[0] + 584u)));
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = ld16((c.r[4].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0] + 548u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_003A72B8; } }
L_003A72B0:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0] + 548u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003A72B8:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[7].sd[0] < 18ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A7264u | kUnwind; return; } goto L_003A7264; } }
    set32(c.r[4], c.r[17].w[0] + 404u);
    c.budget -= 1;
L_003A72CC:
    set32(c.r[5], c.r[17].w[0] + 548u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A72D8u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 281u, depth + 1u); else { c.pc = 0x003AA710u; return; } if (c.pc != 0x003A72D8u) [[unlikely]] return; }
L_003A72D8:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003A72F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A72F0u);  if (depth < kMaxDepth) unit_00AA(c, 22u, depth + 1u); else { c.pc = 0x003A8550u; return; } if (c.pc != 0x003A72F0u) [[unlikely]] return; }
L_003A72F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003A7314; } }
L_003A72F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7300u); st8((c.r[17].w[0] + 652u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AA(c, 247u, depth + 1u); else { c.pc = 0x003AA2F0u; return; } if (c.pc != 0x003A7300u) [[unlikely]] return; }
L_003A7300:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 404u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7310u); set32(c.r[5], c.r[17].w[0] + 548u);  if (depth < kMaxDepth) unit_00AA(c, 242u, depth + 1u); else { c.pc = 0x003AA260u; return; } if (c.pc != 0x003A7310u) [[unlikely]] return; }
L_003A7310:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003A7314:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A7330:
    set32(c.r[29], c.r[29].w[0] - 240u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    set32(c.r[8], c.r[29].w[0] + 224u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    set32(c.r[3], c.r[3].w[0] + 6944u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    set32(c.r[6], c.r[29].w[0] + 216u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    set32(c.r[5], c.r[5].w[0] + 6952u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[4], c.r[4].w[0] + 6928u);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[7].d[0] = ld64((c.r[4].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    st64((c.r[8].w[0]), c.r[7].d[0]);
    set32(c.r[4], c.r[29].w[0] + 200u);
    st32((c.r[8].w[0] + 8u), c.f[0]);
    c.r[3].d[0] = ld64((c.r[3].w[0]));
    st64((c.r[6].w[0]), c.r[3].d[0]);
    c.r[3].d[0] = ld64((c.r[5].w[0]));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st64((c.r[4].w[0]), c.r[3].d[0]);
    st32((c.r[4].w[0] + 8u), c.f[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[17], ld32((c.r[3].w[0] + 440u)));
    c.budget -= 35;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[16], ld32((c.r[3].w[0] + 444u)));  if (t) { goto L_003A7910; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[4], 0u + 23u);  if (t) { goto L_003A73D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  if (t) { goto L_003A7914; } }
    set32(c.r[4], 0u + 23u);
    c.budget -= 1;
L_003A73D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A73D8u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x003A73D8u) [[unlikely]] return; }
L_003A73D8:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[29].w[0] + 176u);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[19].w[0] + 672u)));
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    c.r[1].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 7;
L_003A73F4:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_003A7458; } }
    c.f[2] = c.r[18].w[0];
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[4], c.r[19].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[0] = ld32((c.r[4].w[0] + 704u));
    c.f[3] = c.r[3].w[0];
    c.f[1] = c.r[2].w[0];
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 396u)));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    c.f[12] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[13] = fp::add(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 72u)));
    c.budget -= 22;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7454u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A7454u) [[unlikely]] return; }
L_003A7454:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_003A7458:
    set32(c.r[20], c.r[18].w[0] << 2);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[2], c.r[20].w[0] + c.r[29].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7474u); set32(c.r[4], ld32((c.r[2].w[0] + 200u)));  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x003A7474u) [[unlikely]] return; }
L_003A7474:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[21], c.r[19].w[0] + c.r[20].w[0]);
    c.f[2] = c.r[18].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[22], c.r[21].w[0] + 704u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st128((c.r[17].w[0] + 48u) & ~15u, c.r[3]);
    c.f[3] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42DC0000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42F00000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 672u)));
    c.f[0] = fp::cvt_s_w(c.f[2]);
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 672u)));
    c.f[2] = fp::mul(c.f[3], c.f[0]);
    st32((c.r[17].w[0] + 300u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.f[0] = ld32((c.r[21].w[0] + 704u));
    c.f[20] = fp::add(c.f[1], c.f[2]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 29;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A74E8u); c.f[13] = fp::add(c.f[20], c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A74E8u) [[unlikely]] return; }
L_003A74E8:
    set32(c.r[2], c.r[20].w[0] + c.r[29].w[0]);
    set32(c.r[20], ld32((c.r[2].w[0] + 224u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A74F8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x003A74F8u) [[unlikely]] return; }
L_003A74F8:
    st32((c.r[17].w[0] + 352u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[17].w[0] + 356u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 304u), c.r[3].w[0]);
    c.f[1] = c.r[3].w[0];
    st32((c.r[17].w[0] + 308u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 312u), 0u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[17].w[0] + 316u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[19].w[0] + 168u));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_003A76C0; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 676u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[4].d[0]; c.r[1].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_003A7554; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 680u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_003A7550; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 716u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[1].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_003A75FC; } }
L_003A7550:
    c.r[1].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 1;
L_003A7554:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003A75B0; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 680u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A7570; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[4].d[0];  if (t) { goto L_003A7584; } }
L_003A7570:
    set32(c.r[4], ld32((c.r[21].w[0] + 396u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A757Cu); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_006F(c, 79u, depth + 1u); else { c.pc = 0x002BCF70u; return; } if (c.pc != 0x003A757Cu) [[unlikely]] return; }
L_003A757C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[17].w[0] + 176u)));  if (t) { goto L_003A759C; } }
L_003A7584:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A758Cu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x003A758Cu) [[unlikely]] return; }
L_003A758C:
    set32(c.r[4], ld32((c.r[21].w[0] + 396u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7598u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 79u, depth + 1u); else { c.pc = 0x002BCF70u; return; } if (c.pc != 0x003A7598u) [[unlikely]] return; }
L_003A7598:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.budget -= 1;
L_003A759C:
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A75A8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A75A8u) [[unlikely]] return; }
L_003A75A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_003A76D4; } }
L_003A75B0:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A75D0u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A75D0u) [[unlikely]] return; }
L_003A75D0:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A75F0u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A75F0u) [[unlikely]] return; }
L_003A75F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A76D0; } }
    c.r[1].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 1;
L_003A75FC:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);  if (t) { goto L_003A762C; } }
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7614u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A7614u) [[unlikely]] return; }
L_003A7614:
    set32(c.r[4], ld32((c.r[21].w[0] + 396u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7620u); set32(c.r[5], c.r[19].w[0] + 80u);  if (depth < kMaxDepth) unit_006F(c, 79u, depth + 1u); else { c.pc = 0x002BCF70u; return; } if (c.pc != 0x003A7620u) [[unlikely]] return; }
L_003A7620:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A76D0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.budget -= 1;
L_003A762C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42F00000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    ld128((c.r[17].w[0] + 16u) & ~15u, c.r[5]);
    c.f[0] = c.r[2].w[0];
    set32(c.r[6], c.r[29].w[0] + 160u);
    c.f[12] = c.r[3].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[14] = fp::cvt_s_w(c.f[0]);
    st128((c.r[6].w[0]) & ~15u, c.r[5]);
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 164u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 168u));
    st32((c.r[16].w[0] + 24u), c.f[0]);
    ld128((c.r[19].w[0] + 80u) & ~15u, c.r[2]);
    st128((c.r[16].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.f[0] = ld32((c.r[22].w[0]));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 23;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7688u); c.f[13] = fp::add(c.f[20], c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A7688u) [[unlikely]] return; }
L_003A7688:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7690u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x003A7690u) [[unlikely]] return; }
L_003A7690:
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 356u), 0u);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A76A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A76A8u) [[unlikely]] return; }
L_003A76A8:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A76B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A76B8u) [[unlikely]] return; }
L_003A76B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A76D0; } }
L_003A76C0:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A76D0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A76D0u) [[unlikely]] return; }
L_003A76D0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_003A76D4:
    c.r[3].d[0] = c.r[18].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A73F4u | kUnwind; return; } goto L_003A73F4; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 680u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003A7910; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 700u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003A7910; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 696u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003A7910; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 2;
L_003A7710:
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 680u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 2u);  if (t) { goto L_003A7738; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003A7738; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 1;
L_003A7738:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7740u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x003A7740u) [[unlikely]] return; }
L_003A7740:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.f[3] = c.r[18].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    st128((c.r[17].w[0] + 48u) & ~15u, c.r[3]);
    c.f[4] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x430A0000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42F00000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 672u)));
    c.f[0] = fp::cvt_s_w(c.f[3]);
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 672u)));
    c.f[20] = fp::mul(c.f[4], c.f[0]);
    st32((c.r[17].w[0] + 300u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.f[0] = ld32((c.r[19].w[0] + 700u));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 31;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A77BCu); c.f[13] = fp::add(c.f[0], c.f[20]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A77BCu) [[unlikely]] return; }
L_003A77BC:
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[20], ld32((c.r[2].w[0] + 216u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A77D0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x003A77D0u) [[unlikely]] return; }
L_003A77D0:
    st32((c.r[17].w[0] + 352u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[17].w[0] + 356u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 304u), c.r[3].w[0]);
    c.f[3] = c.r[3].w[0];
    st32((c.r[17].w[0] + 308u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 312u), 0u);
    st32((c.r[17].w[0] + 316u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 688u)));
    c.budget -= 12;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_003A7818; } }
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7810u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A7810u) [[unlikely]] return; }
L_003A7810:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_003A7904; } }
L_003A7818:
    set32(c.r[3], ld32((c.r[19].w[0] + 680u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003A78E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x430A0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    ld128((c.r[17].w[0] + 16u) & ~15u, c.r[5]);
    c.budget -= 4;
L_003A7838:
    set32(c.r[6], c.r[29].w[0] + 144u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    c.f[2] = c.r[3].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    st128((c.r[6].w[0]) & ~15u, c.r[5]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42F00000u);
    c.f[0] = ld32((c.r[29].w[0] + 144u));
    c.f[12] = c.r[3].w[0];
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 148u));
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    st32((c.r[16].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 152u));
    st32((c.r[16].w[0] + 24u), c.f[0]);
    ld128((c.r[19].w[0] + 80u) & ~15u, c.r[2]);
    st128((c.r[16].w[0] + 48u) & ~15u, c.r[2]);
    c.f[0] = ld32((c.r[19].w[0] + 700u));
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 27;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A78A4u); c.f[13] = fp::add(c.f[0], c.f[20]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A78A4u) [[unlikely]] return; }
L_003A78A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A78ACu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x003A78ACu) [[unlikely]] return; }
L_003A78AC:
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 356u), 0u);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A78C4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A78C4u) [[unlikely]] return; }
L_003A78C4:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A78D4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A78D4u) [[unlikely]] return; }
L_003A78D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A7900; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A78E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A78E8u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x003A78E8u) [[unlikely]] return; }
L_003A78E8:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[17].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7900u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A7900u) [[unlikely]] return; }
L_003A7900:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_003A7904:
    c.r[3].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A7710u | kUnwind; return; } goto L_003A7710; } }
L_003A7910:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_003A7914:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_003A7940:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 680u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_003A7BA0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 116u)));
    set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 440u)));
    set32(c.r[4], c.r[3].w[0] + 8u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 16u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_003A7984; } }
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_003A7984:
    set32(c.r[3], ld32((c.r[17].w[0] + 120u)));
    set32(c.r[4], c.r[3].w[0] + 8u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 16u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_003A799C; } }
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_003A799C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003A7BA0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 684u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[5].w[0] + 4376u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A79BCu); set32(c.r[6], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x003A79BCu) [[unlikely]] return; }
L_003A79BC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[1].w[0] + 4400u));
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] + 4400u));
    st32((c.r[16].w[0] + 20u), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A79E4u); st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x003A79E4u) [[unlikely]] return; }
L_003A79E4:
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42B80000u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = c.r[3].w[0];
    st128((c.r[16].w[0] + 48u) & ~15u, c.r[6]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C30000u);
    st32((c.r[16].w[0] + 352u), c.r[5].w[0]);
    c.f[12] = c.r[2].w[0];
    st32((c.r[16].w[0] + 356u), 0u);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 17;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7A28u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A7A28u) [[unlikely]] return; }
L_003A7A28:
    set32(c.r[2], ld32((c.r[17].w[0] + 672u)));
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7A40u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A7A40u) [[unlikely]] return; }
L_003A7A40:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[1].w[0] + 4400u));
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] + 4400u));
    st32((c.r[16].w[0] + 20u), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7A68u); st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x003A7A68u) [[unlikely]] return; }
L_003A7A68:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 715u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7A78u); st128((c.r[16].w[0] + 48u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x003A7A78u) [[unlikely]] return; }
L_003A7A78:
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42B80000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43D00000u);
    st32((c.r[16].w[0] + 356u), 0u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.f[13] = c.r[3].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7AB0u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A7AB0u) [[unlikely]] return; }
L_003A7AB0:
    set32(c.r[2], ld32((c.r[17].w[0] + 672u)));
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7AC8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A7AC8u) [[unlikely]] return; }
L_003A7AC8:
    set32(c.r[2], ld32((c.r[17].w[0] + 688u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003A7AE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 660u)));  if (t) { goto L_003A7AEC; } }
L_003A7AE8:
    set32(c.r[2], ld32((c.r[17].w[0] + 664u)));
    c.budget -= 1;
L_003A7AEC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[6], c.r[2].w[0] >> 4);  if (t) { goto L_003A7AFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 660u)));  if (t) { goto L_003A7B00; } }
L_003A7AFC:
    set32(c.r[2], ld32((c.r[17].w[0] + 664u)));
    c.budget -= 1;
L_003A7B00:
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_003A7B10; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_003A7B10:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7B1Cu); set32(c.r[5], c.r[5].w[0] + 4376u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x003A7B1Cu) [[unlikely]] return; }
L_003A7B1C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[1].w[0] + 4400u));
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] + 4400u));
    st32((c.r[16].w[0] + 20u), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7B44u); st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x003A7B44u) [[unlikely]] return; }
L_003A7B44:
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42B80000u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = c.r[3].w[0];
    st128((c.r[16].w[0] + 48u) & ~15u, c.r[6]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43DF0000u);
    st32((c.r[16].w[0] + 352u), c.r[5].w[0]);
    c.f[12] = c.r[2].w[0];
    st32((c.r[16].w[0] + 356u), 0u);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 17;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7B88u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A7B88u) [[unlikely]] return; }
L_003A7B88:
    set32(c.r[2], ld32((c.r[17].w[0] + 672u)));
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7BA0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A7BA0u) [[unlikely]] return; }
L_003A7BA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003A7BC0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], c.r[18].w[0] << 2);
    c.budget -= 13;
L_003A7BF4:
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 320u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[17], c.r[3].w[0] + 320u);  if (t) { goto L_003A7D4C; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 676u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_003A7C30; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 476u)));
    set32(c.r[2], ld32((c.r[4].w[0])));
    st32((c.r[6].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[6].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 56u), c.r[2].w[0]);  if (t) { goto L_003A7CC0; } }
L_003A7C30:
    set32(c.r[2], ld32((c.r[3].w[0] + 476u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = ld32((c.r[1].w[0] + 4392u));
    set32(c.r[5], c.r[29].w[0] + 148u);
    set32(c.r[4], c.r[29].w[0] + 152u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[2]);
    c.f[0] = ld32((c.r[29].w[0] + 144u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[29].w[0] + 144u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[1].w[0] + 4392u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    st32((c.r[6].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    st32((c.r[6].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    st32((c.r[6].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 36;
L_003A7CC0:
    c.f[2] = c.r[18].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[3] = c.r[2].w[0];
    set32(c.r[4], ld32((c.r[3].w[0] + 320u)));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    set32(c.r[16], c.r[3].w[0] + 320u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43280000u);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.f[1] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[0] = ld32((c.r[3].w[0] + 708u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[13] = fp::add(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42F00000u);
    c.f[0] = c.r[2].w[0];
    c.f[12] = c.r[3].w[0];
    c.budget -= 21;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7D14u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A7D14u) [[unlikely]] return; }
L_003A7D14:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[4], ld32((c.r[21].w[0] + 672u)));
    st32((c.r[3].w[0] + 60u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 676u)));
    c.budget -= 6;
    { const bool t = c.r[18].d[0] != c.r[3].d[0];  if (t) { goto L_003A7D38; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 720u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003A7D4C; } }
L_003A7D38:
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7D4Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A7D4Cu) [[unlikely]] return; }
L_003A7D4C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[18].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A7BF4u | kUnwind; return; } goto L_003A7BF4; } }
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[16].w[0] << 2);
    c.budget -= 2;
L_003A7D64:
    set32(c.r[17], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[5], c.r[17].w[0] + 124u);  if (t) { goto L_003A7E38; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    st32((c.r[6].w[0] + 16u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    st32((c.r[6].w[0] + 20u), c.r[4].w[0]);
    st32((c.r[6].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    st32((c.r[2].w[0] + 132u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 676u)));
    c.budget -= 11;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 22u);  if (t) { goto L_003A7DA4; } }
    set32(c.r[4], 0u + 4u);
    c.budget -= 1;
L_003A7DA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7DACu);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x003A7DACu) [[unlikely]] return; }
L_003A7DAC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 124u)));
    c.f[2] = c.r[3].w[0];
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.f[1] = c.r[16].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42FA0000u);
    set32(c.r[18], c.r[17].w[0] + 124u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42820000u);
    st32((c.r[5].w[0] + 48u), c.r[4].w[0]);
    c.f[12] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.f[1] = fp::add(c.f[0], c.f[1]);
    st32((c.r[5].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[5].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 672u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 124u)));
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 124u)));
    c.f[0] = ld32((c.r[17].w[0] + 708u));
    c.f[14] = ld32((c.r[1].w[0] + 4384u));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 30;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7E24u); c.f[13] = fp::add(c.f[1], c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A7E24u) [[unlikely]] return; }
L_003A7E24:
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[5], 0u + 108u);
    set32(c.r[6], 0u + 84u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7E38u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_0062(c, 298u, depth + 1u); else { c.pc = 0x0028B8C0u; return; } if (c.pc != 0x003A7E38u) [[unlikely]] return; }
L_003A7E38:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A7D64u | kUnwind; return; } goto L_003A7D64; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003A7EF8; } }
    ld128((c.r[21].w[0] + 80u) & ~15u, c.r[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42B80000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x438A0000u);
    c.f[0] = c.r[2].w[0];
    st128((c.r[4].w[0] + 48u) & ~15u, c.r[3]);
    set32(c.r[4], ld32((c.r[21].w[0] + 692u)));
    c.r[3].d[0] = c.r[4].d[0] & 3ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 2));
    c.f[2] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.budget -= 15;
    { const bool t = c.r[4].sd[0] >= 0; c.f[12] = fp::add(c.f[0], c.f[1]);  if (t) { goto L_003A7E98; } }
    set32(c.r[2], c.r[4].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_003A7E98:
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], ld32((c.r[21].w[0] + 132u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x430E0000u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42960000u);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::mul(c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[0] = c.r[2].w[0];
    c.f[1] = c.r[3].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7EE0u); c.f[13] = fp::add(c.f[1], c.f[2]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A7EE0u) [[unlikely]] return; }
L_003A7EE0:
    set32(c.r[4], ld32((c.r[21].w[0] + 132u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7EF4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A7EF4u) [[unlikely]] return; }
L_003A7EF4:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A7EF8:
    c.f[1] = c.r[16].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42960000u);
    c.f[2] = c.r[3].w[0];
    set32(c.r[19], c.r[16].w[0] << 2);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[20].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x430E0000u);
    set32(c.r[22], c.r[21].w[0] + c.r[19].w[0]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = c.r[3].w[0];
    c.f[20] = fp::add(c.f[0], c.f[1]);
    set32(c.r[3], c.r[20].w[0] + c.r[19].w[0]);
    c.budget -= 13;
L_003A7F2C:
    set32(c.r[4], c.r[3].w[0] + 2u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[18], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 320u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[17], c.r[18].w[0] + 320u);  if (t) { [[clang::musttail]] return unit_00AA(c, 4u, depth); } }
    set32(c.r[3], ld32((c.r[21].w[0] + 680u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003A7FA8; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 692u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[4].w[0] << 1);  if (t) { goto L_003A7FA8; } }
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = ld16((c.r[2].w[0] + 548u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7F74u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 88u, depth + 1u); else { c.pc = 0x003A9120u; return; } if (c.pc != 0x003A7F74u) [[unlikely]] return; }
L_003A7F74:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003A7FA8; } }
    set32(c.r[3], ld32((c.r[22].w[0] + 476u)));
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0])));
    st32((c.r[4].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[4].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 56u), c.r[2].w[0]);  if (t) { [[clang::musttail]] return unit_00AA(c, 2u, depth); } }
L_003A7FA8:
    set32(c.r[2], ld32((c.r[18].w[0] + 476u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = ld32((c.r[1].w[0] + 4392u));
    set32(c.r[4], c.r[29].w[0] + 148u);
    set32(c.r[3], c.r[29].w[0] + 152u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[2]);
    c.f[0] = ld32((c.r[29].w[0] + 144u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[29].w[0] + 144u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 22;
    [[clang::musttail]] return unit_00AA(c, 1u, depth);
}

}
