#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0057[4096] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0,
    10, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0,
    24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 31, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 37, 0, 0, 0,
    38, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0,
    0, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 46, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 54, 0, 55, 0, 0, 0, 56, 0, 57, 0, 58, 0, 0, 0, 0, 0, 59, 0, 0, 0,
    0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 65, 0,
    66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 71, 0, 0,
    0, 72, 0, 0, 0, 0, 0, 73, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83,
    0, 0, 84, 0, 0, 0, 85, 0, 86, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 93, 0,
    94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0,
    98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 101, 0, 102, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0,
    0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0,
    0, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 111,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0,
    114, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 118,
    0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0,
    0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 129, 0, 0, 0,
    0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0,
    0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0,
    0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 148, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 154, 0, 0,
    0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 0,
    0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0,
    0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 166, 0, 0, 0, 0, 167,
    0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 0, 175, 0, 0,
    0, 176, 0, 0, 177, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0,
    0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 187, 0,
    0, 188, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 192, 0, 0, 0,
    193, 0, 194, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 198, 0, 0, 199, 0, 0, 0, 0, 0, 200, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 202, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204,
    0, 0, 205, 0, 206, 0, 207, 0, 0, 0, 0, 0, 0, 208, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 211, 0,
    0, 212, 0, 0, 213, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0,
    0, 0, 220, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0,
    0, 224, 0, 0, 225, 0, 0, 226, 0, 0, 227, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 0,
    0, 231, 0, 0, 0, 0, 0, 232, 0, 233, 0, 0, 0, 234, 0, 235, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0,
    0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0,
    0, 242, 0, 0, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0,
    252, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0,
    255, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 259, 0, 260,
    0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0,
    266, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 268, 0, 269, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 273, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0,
    278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 281, 0, 282, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 287, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 294, 0, 0, 0,
    0, 295, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 297, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 306, 0, 0, 307,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 310, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 318, 0, 319, 0, 320, 0, 0, 0, 0, 321, 0, 0, 0, 322,
    0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0,
    0, 0, 0, 327, 0, 328, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    330, 0, 0, 331, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 335, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 347, 0,
    0, 0, 0, 0, 0, 348, 0, 0, 349, 0, 0, 350, 0, 351, 0, 0, 0, 352, 0, 353, 0, 354, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0,
    356, 0, 0, 0, 357, 0, 0, 0, 358, 0, 0, 0, 359, 0, 0, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 362,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 366, 0, 0, 367, 0, 0, 0, 0, 0,
    368, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 372, 0, 0, 0,
    0, 0, 0, 373, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 380,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    383, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    388, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0,
    0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 394, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 398, 0, 0, 0, 0, 399, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 402, 0, 0,
    0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0,
    406, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 409,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 413, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    417, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 420, 0, 0, 0, 0, 421, 0, 0, 0, 0, 422, 0,
    0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0,
    425, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 428, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 430,
    0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0,
    435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0,
    0, 438, 0, 0, 0, 0, 439, 0, 0, 0, 440, 0, 0, 0, 0, 441, 0, 0, 442, 0, 0, 0, 0, 443, 0, 0, 0, 0, 444, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 448, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0,
    0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 460, 0,
    0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 466, 0, 467, 0, 0, 0, 0, 0, 468, 0, 0, 0, 469,
    0, 470, 0, 0, 0, 0, 0, 471, 0, 0, 0, 472, 0, 0, 0, 473, 0, 0, 0, 0, 0, 474, 0, 0, 0, 475, 0, 476, 0, 0, 0, 0,
    477, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 481, 0, 0, 0,
    0, 482, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 490, 0, 0, 0, 0, 0, 491, 0, 492, 0, 0, 493, 0, 0, 494, 0, 0, 0, 495, 0, 0, 496, 0, 497, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    501, 0, 0, 0, 0, 502, 0, 0, 503, 0, 504, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0, 506, 0, 507, 0, 508, 0, 0, 509, 0, 0, 0,
    0, 0, 0, 0, 510, 0, 511, 0, 512, 0, 0, 513, 0, 0, 514, 0, 0, 515, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0,
    517, 0, 518, 0, 0, 0, 519, 0, 520, 0, 0, 521, 0, 522, 0, 0, 0, 523, 0, 524, 0, 0, 525, 0, 526, 0, 0, 0, 527, 0, 528, 0,
    529, 0, 0, 530, 0, 0, 531, 0, 0, 532, 0, 0, 533, 0, 534, 0, 535, 0, 0, 536, 0, 0, 537, 0, 0, 0, 538, 0, 0, 539, 0, 540,
    0, 541, 0, 0, 542, 0, 0, 543, 0, 0, 544, 0, 0, 545, 0, 546, 0, 547, 0, 0, 548, 0, 0, 0, 0, 549, 0, 0, 550, 0, 0, 0,
};

void unit_0057(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0025C000;
    case 2u: goto L_0025C00C;
    case 3u: goto L_0025C034;
    case 4u: goto L_0025C040;
    case 5u: goto L_0025C058;
    case 6u: goto L_0025C080;
    case 7u: goto L_0025C090;
    case 8u: goto L_0025C0B0;
    case 9u: goto L_0025C0E8;
    case 10u: goto L_0025C100;
    case 11u: goto L_0025C110;
    case 12u: goto L_0025C14C;
    case 13u: goto L_0025C158;
    case 14u: goto L_0025C16C;
    case 15u: goto L_0025C1AC;
    case 16u: goto L_0025C1BC;
    case 17u: goto L_0025C1C8;
    case 18u: goto L_0025C1E0;
    case 19u: goto L_0025C210;
    case 20u: goto L_0025C22C;
    case 21u: goto L_0025C240;
    case 22u: goto L_0025C25C;
    case 23u: goto L_0025C270;
    case 24u: goto L_0025C280;
    case 25u: goto L_0025C29C;
    case 26u: goto L_0025C2B0;
    case 27u: goto L_0025C2CC;
    case 28u: goto L_0025C2E0;
    case 29u: goto L_0025C2F0;
    case 30u: goto L_0025C334;
    case 31u: goto L_0025C344;
    case 32u: goto L_0025C348;
    case 33u: goto L_0025C398;
    case 34u: goto L_0025C3C0;
    case 35u: goto L_0025C3D0;
    case 36u: goto L_0025C3E8;
    case 37u: goto L_0025C3F0;
    case 38u: goto L_0025C400;
    case 39u: goto L_0025C410;
    case 40u: goto L_0025C468;
    case 41u: goto L_0025C478;
    case 42u: goto L_0025C48C;
    case 43u: goto L_0025C4A4;
    case 44u: goto L_0025C4B4;
    case 45u: goto L_0025C4D8;
    case 46u: goto L_0025C4E4;
    case 47u: goto L_0025C50C;
    case 48u: goto L_0025C51C;
    case 49u: goto L_0025C534;
    case 50u: goto L_0025C570;
    case 51u: goto L_0025C5C0;
    case 52u: goto L_0025C5E8;
    case 53u: goto L_0025C620;
    case 54u: goto L_0025C630;
    case 55u: goto L_0025C638;
    case 56u: goto L_0025C648;
    case 57u: goto L_0025C650;
    case 58u: goto L_0025C658;
    case 59u: goto L_0025C670;
    case 60u: goto L_0025C68C;
    case 61u: goto L_0025C6A0;
    case 62u: goto L_0025C6AC;
    case 63u: goto L_0025C6C0;
    case 64u: goto L_0025C6EC;
    case 65u: goto L_0025C6F8;
    case 66u: goto L_0025C700;
    case 67u: goto L_0025C714;
    case 68u: goto L_0025C72C;
    case 69u: goto L_0025C734;
    case 70u: goto L_0025C76C;
    case 71u: goto L_0025C774;
    case 72u: goto L_0025C784;
    case 73u: goto L_0025C79C;
    case 74u: goto L_0025C7A4;
    case 75u: goto L_0025C7C0;
    case 76u: goto L_0025C80C;
    case 77u: goto L_0025C81C;
    case 78u: goto L_0025C834;
    case 79u: goto L_0025C850;
    case 80u: goto L_0025C88C;
    case 81u: goto L_0025C8A4;
    case 82u: goto L_0025C8C0;
    case 83u: goto L_0025C8FC;
    case 84u: goto L_0025C908;
    case 85u: goto L_0025C918;
    case 86u: goto L_0025C920;
    case 87u: goto L_0025C930;
    case 88u: goto L_0025C954;
    case 89u: goto L_0025C96C;
    case 90u: goto L_0025C9C4;
    case 91u: goto L_0025C9CC;
    case 92u: goto L_0025C9DC;
    case 93u: goto L_0025C9F8;
    case 94u: goto L_0025CA00;
    case 95u: goto L_0025CA40;
    case 96u: goto L_0025CA50;
    case 97u: goto L_0025CA6C;
    case 98u: goto L_0025CA80;
    case 99u: goto L_0025CA98;
    case 100u: goto L_0025CAB0;
    case 101u: goto L_0025CAC8;
    case 102u: goto L_0025CAD0;
    case 103u: goto L_0025CAEC;
    case 104u: goto L_0025CB10;
    case 105u: goto L_0025CB40;
    case 106u: goto L_0025CB58;
    case 107u: goto L_0025CB70;
    case 108u: goto L_0025CB94;
    case 109u: goto L_0025CBA4;
    case 110u: goto L_0025CBE4;
    case 111u: goto L_0025CBFC;
    case 112u: goto L_0025CC44;
    case 113u: goto L_0025CC64;
    case 114u: goto L_0025CC80;
    case 115u: goto L_0025CCA0;
    case 116u: goto L_0025CCB0;
    case 117u: goto L_0025CCDC;
    case 118u: goto L_0025CCFC;
    case 119u: goto L_0025CD10;
    case 120u: goto L_0025CD34;
    case 121u: goto L_0025CD44;
    case 122u: goto L_0025CD5C;
    case 123u: goto L_0025CD70;
    case 124u: goto L_0025CD84;
    case 125u: goto L_0025CD98;
    case 126u: goto L_0025CDB4;
    case 127u: goto L_0025CDD8;
    case 128u: goto L_0025CDE8;
    case 129u: goto L_0025CDF0;
    case 130u: goto L_0025CE10;
    case 131u: goto L_0025CE28;
    case 132u: goto L_0025CE50;
    case 133u: goto L_0025CE80;
    case 134u: goto L_0025CE94;
    case 135u: goto L_0025CEB0;
    case 136u: goto L_0025CED0;
    case 137u: goto L_0025CEF0;
    case 138u: goto L_0025CF10;
    case 139u: goto L_0025CF38;
    case 140u: goto L_0025CF40;
    case 141u: goto L_0025CF80;
    case 142u: goto L_0025CFCC;
    case 143u: goto L_0025CFF4;
    case 144u: goto L_0025D004;
    case 145u: goto L_0025D01C;
    case 146u: goto L_0025D040;
    case 147u: goto L_0025D064;
    case 148u: goto L_0025D06C;
    case 149u: goto L_0025D0A0;
    case 150u: goto L_0025D0B8;
    case 151u: goto L_0025D0C8;
    case 152u: goto L_0025D0D8;
    case 153u: goto L_0025D0E8;
    case 154u: goto L_0025D0F4;
    case 155u: goto L_0025D110;
    case 156u: goto L_0025D138;
    case 157u: goto L_0025D158;
    case 158u: goto L_0025D16C;
    case 159u: goto L_0025D18C;
    case 160u: goto L_0025D1F8;
    case 161u: goto L_0025D214;
    case 162u: goto L_0025D248;
    case 163u: goto L_0025D25C;
    case 164u: goto L_0025D288;
    case 165u: goto L_0025D2DC;
    case 166u: goto L_0025D2E8;
    case 167u: goto L_0025D2FC;
    case 168u: goto L_0025D310;
    case 169u: goto L_0025D330;
    case 170u: goto L_0025D350;
    case 171u: goto L_0025D36C;
    case 172u: goto L_0025D3B0;
    case 173u: goto L_0025D3CC;
    case 174u: goto L_0025D3E8;
    case 175u: goto L_0025D3F4;
    case 176u: goto L_0025D404;
    case 177u: goto L_0025D410;
    case 178u: goto L_0025D418;
    case 179u: goto L_0025D468;
    case 180u: goto L_0025D488;
    case 181u: goto L_0025D4A8;
    case 182u: goto L_0025D4C0;
    case 183u: goto L_0025D4D8;
    case 184u: goto L_0025D538;
    case 185u: goto L_0025D54C;
    case 186u: goto L_0025D55C;
    case 187u: goto L_0025D578;
    case 188u: goto L_0025D584;
    case 189u: goto L_0025D58C;
    case 190u: goto L_0025D5B8;
    case 191u: goto L_0025D5E8;
    case 192u: goto L_0025D5F0;
    case 193u: goto L_0025D600;
    case 194u: goto L_0025D608;
    case 195u: goto L_0025D618;
    case 196u: goto L_0025D628;
    case 197u: goto L_0025D644;
    case 198u: goto L_0025D64C;
    case 199u: goto L_0025D658;
    case 200u: goto L_0025D670;
    case 201u: goto L_0025D6A0;
    case 202u: goto L_0025D6B8;
    case 203u: goto L_0025D6C4;
    case 204u: goto L_0025D6FC;
    case 205u: goto L_0025D708;
    case 206u: goto L_0025D710;
    case 207u: goto L_0025D718;
    case 208u: goto L_0025D734;
    case 209u: goto L_0025D73C;
    case 210u: goto L_0025D760;
    case 211u: goto L_0025D778;
    case 212u: goto L_0025D784;
    case 213u: goto L_0025D790;
    case 214u: goto L_0025D7AC;
    case 215u: goto L_0025D7C0;
    case 216u: goto L_0025D7E0;
    case 217u: goto L_0025D838;
    case 218u: goto L_0025D850;
    case 219u: goto L_0025D864;
    case 220u: goto L_0025D888;
    case 221u: goto L_0025D894;
    case 222u: goto L_0025D8BC;
    case 223u: goto L_0025D8F4;
    case 224u: goto L_0025D904;
    case 225u: goto L_0025D910;
    case 226u: goto L_0025D91C;
    case 227u: goto L_0025D928;
    case 228u: goto L_0025D940;
    case 229u: goto L_0025D960;
    case 230u: goto L_0025D974;
    case 231u: goto L_0025D984;
    case 232u: goto L_0025D99C;
    case 233u: goto L_0025D9A4;
    case 234u: goto L_0025D9B4;
    case 235u: goto L_0025D9BC;
    case 236u: goto L_0025D9D0;
    case 237u: goto L_0025D9F4;
    case 238u: goto L_0025DA0C;
    case 239u: goto L_0025DA28;
    case 240u: goto L_0025DA54;
    case 241u: goto L_0025DAE0;
    case 242u: goto L_0025DB04;
    case 243u: goto L_0025DB18;
    case 244u: goto L_0025DB2C;
    case 245u: goto L_0025DB58;
    case 246u: goto L_0025DBA0;
    case 247u: goto L_0025DBAC;
    case 248u: goto L_0025DBD0;
    case 249u: goto L_0025DC0C;
    case 250u: goto L_0025DC44;
    case 251u: goto L_0025DC60;
    case 252u: goto L_0025DC80;
    case 253u: goto L_0025DCA4;
    case 254u: goto L_0025DCDC;
    case 255u: goto L_0025DD00;
    case 256u: goto L_0025DD14;
    case 257u: goto L_0025DD40;
    case 258u: goto L_0025DD60;
    case 259u: goto L_0025DD74;
    case 260u: goto L_0025DD7C;
    case 261u: goto L_0025DD9C;
    case 262u: goto L_0025DDD4;
    case 263u: goto L_0025DE10;
    case 264u: goto L_0025DE50;
    case 265u: goto L_0025DE5C;
    case 266u: goto L_0025DE80;
    case 267u: goto L_0025DEA0;
    case 268u: goto L_0025DEB8;
    case 269u: goto L_0025DEC0;
    case 270u: goto L_0025DEE0;
    case 271u: goto L_0025DF18;
    case 272u: goto L_0025DF54;
    case 273u: goto L_0025DF94;
    case 274u: goto L_0025DFA0;
    case 275u: goto L_0025DFC0;
    case 276u: goto L_0025DFD4;
    case 277u: goto L_0025DFEC;
    case 278u: goto L_0025E000;
    case 279u: goto L_0025E034;
    case 280u: goto L_0025E044;
    case 281u: goto L_0025E04C;
    case 282u: goto L_0025E054;
    case 283u: goto L_0025E074;
    case 284u: goto L_0025E0AC;
    case 285u: goto L_0025E0E8;
    case 286u: goto L_0025E128;
    case 287u: goto L_0025E134;
    case 288u: goto L_0025E150;
    case 289u: goto L_0025E168;
    case 290u: goto L_0025E198;
    case 291u: goto L_0025E1B0;
    case 292u: goto L_0025E1C4;
    case 293u: goto L_0025E1DC;
    case 294u: goto L_0025E1F0;
    case 295u: goto L_0025E204;
    case 296u: goto L_0025E21C;
    case 297u: goto L_0025E230;
    case 298u: goto L_0025E23C;
    case 299u: goto L_0025E280;
    case 300u: goto L_0025E2B8;
    case 301u: goto L_0025E304;
    case 302u: goto L_0025E33C;
    case 303u: goto L_0025E35C;
    case 304u: goto L_0025E36C;
    case 305u: goto L_0025E3DC;
    case 306u: goto L_0025E3F0;
    case 307u: goto L_0025E3FC;
    case 308u: goto L_0025E470;
    case 309u: goto L_0025E49C;
    case 310u: goto L_0025E4A8;
    case 311u: goto L_0025E4B4;
    case 312u: goto L_0025E528;
    case 313u: goto L_0025E540;
    case 314u: goto L_0025E55C;
    case 315u: goto L_0025E58C;
    case 316u: goto L_0025E59C;
    case 317u: goto L_0025E5C0;
    case 318u: goto L_0025E5C8;
    case 319u: goto L_0025E5D0;
    case 320u: goto L_0025E5D8;
    case 321u: goto L_0025E5EC;
    case 322u: goto L_0025E5FC;
    case 323u: goto L_0025E610;
    case 324u: goto L_0025E628;
    case 325u: goto L_0025E64C;
    case 326u: goto L_0025E668;
    case 327u: goto L_0025E68C;
    case 328u: goto L_0025E694;
    case 329u: goto L_0025E6B0;
    case 330u: goto L_0025E700;
    case 331u: goto L_0025E70C;
    case 332u: goto L_0025E724;
    case 333u: goto L_0025E73C;
    case 334u: goto L_0025E760;
    case 335u: goto L_0025E770;
    case 336u: goto L_0025E7A4;
    case 337u: goto L_0025E7D4;
    case 338u: goto L_0025E7F0;
    case 339u: goto L_0025E834;
    case 340u: goto L_0025E84C;
    case 341u: goto L_0025E878;
    case 342u: goto L_0025E8A0;
    case 343u: goto L_0025E914;
    case 344u: goto L_0025E980;
    case 345u: goto L_0025E9C0;
    case 346u: goto L_0025E9E0;
    case 347u: goto L_0025E9F8;
    case 348u: goto L_0025EA14;
    case 349u: goto L_0025EA20;
    case 350u: goto L_0025EA2C;
    case 351u: goto L_0025EA34;
    case 352u: goto L_0025EA44;
    case 353u: goto L_0025EA4C;
    case 354u: goto L_0025EA54;
    case 355u: goto L_0025EA70;
    case 356u: goto L_0025EA80;
    case 357u: goto L_0025EA90;
    case 358u: goto L_0025EAA0;
    case 359u: goto L_0025EAB0;
    case 360u: goto L_0025EAC8;
    case 361u: goto L_0025EAD8;
    case 362u: goto L_0025EAFC;
    case 363u: goto L_0025EB7C;
    case 364u: goto L_0025EBB0;
    case 365u: goto L_0025EBD8;
    case 366u: goto L_0025EBDC;
    case 367u: goto L_0025EBE8;
    case 368u: goto L_0025EC00;
    case 369u: goto L_0025EC10;
    case 370u: goto L_0025EC38;
    case 371u: goto L_0025EC60;
    case 372u: goto L_0025EC70;
    case 373u: goto L_0025EC8C;
    case 374u: goto L_0025ECA4;
    case 375u: goto L_0025ECC0;
    case 376u: goto L_0025ECDC;
    case 377u: goto L_0025ED10;
    case 378u: goto L_0025ED2C;
    case 379u: goto L_0025ED60;
    case 380u: goto L_0025ED7C;
    case 381u: goto L_0025EDB0;
    case 382u: goto L_0025EDCC;
    case 383u: goto L_0025EE00;
    case 384u: goto L_0025EE1C;
    case 385u: goto L_0025EE40;
    case 386u: goto L_0025EE80;
    case 387u: goto L_0025EEC0;
    case 388u: goto L_0025EF00;
    case 389u: goto L_0025EF20;
    case 390u: goto L_0025EF40;
    case 391u: goto L_0025EF70;
    case 392u: goto L_0025EF94;
    case 393u: goto L_0025EFC0;
    case 394u: goto L_0025F004;
    case 395u: goto L_0025F020;
    case 396u: goto L_0025F034;
    case 397u: goto L_0025F050;
    case 398u: goto L_0025F060;
    case 399u: goto L_0025F074;
    case 400u: goto L_0025F0A0;
    case 401u: goto L_0025F0E8;
    case 402u: goto L_0025F0F4;
    case 403u: goto L_0025F108;
    case 404u: goto L_0025F14C;
    case 405u: goto L_0025F168;
    case 406u: goto L_0025F180;
    case 407u: goto L_0025F19C;
    case 408u: goto L_0025F1E0;
    case 409u: goto L_0025F1FC;
    case 410u: goto L_0025F228;
    case 411u: goto L_0025F244;
    case 412u: goto L_0025F25C;
    case 413u: goto L_0025F284;
    case 414u: goto L_0025F28C;
    case 415u: goto L_0025F2B8;
    case 416u: goto L_0025F2CC;
    case 417u: goto L_0025F300;
    case 418u: goto L_0025F324;
    case 419u: goto L_0025F340;
    case 420u: goto L_0025F350;
    case 421u: goto L_0025F364;
    case 422u: goto L_0025F378;
    case 423u: goto L_0025F394;
    case 424u: goto L_0025F3EC;
    case 425u: goto L_0025F400;
    case 426u: goto L_0025F414;
    case 427u: goto L_0025F444;
    case 428u: goto L_0025F450;
    case 429u: goto L_0025F464;
    case 430u: goto L_0025F47C;
    case 431u: goto L_0025F490;
    case 432u: goto L_0025F4A8;
    case 433u: goto L_0025F4C4;
    case 434u: goto L_0025F4EC;
    case 435u: goto L_0025F500;
    case 436u: goto L_0025F554;
    case 437u: goto L_0025F56C;
    case 438u: goto L_0025F584;
    case 439u: goto L_0025F598;
    case 440u: goto L_0025F5A8;
    case 441u: goto L_0025F5BC;
    case 442u: goto L_0025F5C8;
    case 443u: goto L_0025F5DC;
    case 444u: goto L_0025F5F0;
    case 445u: goto L_0025F618;
    case 446u: goto L_0025F634;
    case 447u: goto L_0025F658;
    case 448u: goto L_0025F660;
    case 449u: goto L_0025F688;
    case 450u: goto L_0025F6E8;
    case 451u: goto L_0025F704;
    case 452u: goto L_0025F740;
    case 453u: goto L_0025F750;
    case 454u: goto L_0025F794;
    case 455u: goto L_0025F7B0;
    case 456u: goto L_0025F7E0;
    case 457u: goto L_0025F810;
    case 458u: goto L_0025F82C;
    case 459u: goto L_0025F858;
    case 460u: goto L_0025F878;
    case 461u: goto L_0025F88C;
    case 462u: goto L_0025F8BC;
    case 463u: goto L_0025F8E8;
    case 464u: goto L_0025F920;
    case 465u: goto L_0025F944;
    case 466u: goto L_0025F94C;
    case 467u: goto L_0025F954;
    case 468u: goto L_0025F96C;
    case 469u: goto L_0025F97C;
    case 470u: goto L_0025F984;
    case 471u: goto L_0025F99C;
    case 472u: goto L_0025F9AC;
    case 473u: goto L_0025F9BC;
    case 474u: goto L_0025F9D4;
    case 475u: goto L_0025F9E4;
    case 476u: goto L_0025F9EC;
    case 477u: goto L_0025FA00;
    case 478u: goto L_0025FA24;
    case 479u: goto L_0025FA3C;
    case 480u: goto L_0025FA58;
    case 481u: goto L_0025FA70;
    case 482u: goto L_0025FA84;
    case 483u: goto L_0025FA94;
    case 484u: goto L_0025FB10;
    case 485u: goto L_0025FB40;
    case 486u: goto L_0025FB50;
    case 487u: goto L_0025FBDC;
    case 488u: goto L_0025FC44;
    case 489u: goto L_0025FC5C;
    case 490u: goto L_0025FC88;
    case 491u: goto L_0025FCA0;
    case 492u: goto L_0025FCA8;
    case 493u: goto L_0025FCB4;
    case 494u: goto L_0025FCC0;
    case 495u: goto L_0025FCD0;
    case 496u: goto L_0025FCDC;
    case 497u: goto L_0025FCE4;
    case 498u: goto L_0025FD10;
    case 499u: goto L_0025FD2C;
    case 500u: goto L_0025FD4C;
    case 501u: goto L_0025FD80;
    case 502u: goto L_0025FD94;
    case 503u: goto L_0025FDA0;
    case 504u: goto L_0025FDA8;
    case 505u: goto L_0025FDB4;
    case 506u: goto L_0025FDD4;
    case 507u: goto L_0025FDDC;
    case 508u: goto L_0025FDE4;
    case 509u: goto L_0025FDF0;
    case 510u: goto L_0025FE10;
    case 511u: goto L_0025FE18;
    case 512u: goto L_0025FE20;
    case 513u: goto L_0025FE2C;
    case 514u: goto L_0025FE38;
    case 515u: goto L_0025FE44;
    case 516u: goto L_0025FE70;
    case 517u: goto L_0025FE80;
    case 518u: goto L_0025FE88;
    case 519u: goto L_0025FE98;
    case 520u: goto L_0025FEA0;
    case 521u: goto L_0025FEAC;
    case 522u: goto L_0025FEB4;
    case 523u: goto L_0025FEC4;
    case 524u: goto L_0025FECC;
    case 525u: goto L_0025FED8;
    case 526u: goto L_0025FEE0;
    case 527u: goto L_0025FEF0;
    case 528u: goto L_0025FEF8;
    case 529u: goto L_0025FF00;
    case 530u: goto L_0025FF0C;
    case 531u: goto L_0025FF18;
    case 532u: goto L_0025FF24;
    case 533u: goto L_0025FF30;
    case 534u: goto L_0025FF38;
    case 535u: goto L_0025FF40;
    case 536u: goto L_0025FF4C;
    case 537u: goto L_0025FF58;
    case 538u: goto L_0025FF68;
    case 539u: goto L_0025FF74;
    case 540u: goto L_0025FF7C;
    case 541u: goto L_0025FF84;
    case 542u: goto L_0025FF90;
    case 543u: goto L_0025FF9C;
    case 544u: goto L_0025FFA8;
    case 545u: goto L_0025FFB4;
    case 546u: goto L_0025FFBC;
    case 547u: goto L_0025FFC4;
    case 548u: goto L_0025FFD0;
    case 549u: goto L_0025FFE4;
    case 550u: goto L_0025FFF0;
    default: bad_entry(c, 0x0025C000u); return;
    }
L_0025C000:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C00Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0083(c, 329u, depth + 1u); else { c.pc = 0x0030F040u; return; } if (c.pc != 0x0025C00Cu) [[unlikely]] return; }
L_0025C00C:
    set32(c.r[3], 0u + 118u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[3].d[0]; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0025C020; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0025C028; } }
L_0025C020:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025C038; } }
L_0025C028:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C034u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0083(c, 402u, depth + 1u); else { c.pc = 0x0030F9C0u; return; } if (c.pc != 0x0025C034u) [[unlikely]] return; }
L_0025C034:
    c.r[19].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_0025C038:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C040u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0025C040u) [[unlikely]] return; }
L_0025C040:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[16], ld32((c.r[1].w[0] - 25584u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C058u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0025C058u) [[unlikely]] return; }
L_0025C058:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0025C084; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[16].d[0];  if (t) { goto L_0025C070; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[16].d[0];  if (t) { goto L_0025C080; } }
L_0025C070:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 353u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C080u); set32(c.r[5], 0u + 885u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0025C080u) [[unlikely]] return; }
L_0025C080:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0025C084:
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C090u); set32(c.r[5], 0u + 902u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0025C090u) [[unlikely]] return; }
L_0025C090:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0025C0B0:
    set32(c.r[29], c.r[29].w[0] - 592u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[17], c.r[6].w[0] - 1u);
    c.budget -= 12;
    { const bool t = c.r[17].sd[0] <= 0; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0025C0F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C0E8u); set32(c.r[4], c.r[17].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0025C0E8u) [[unlikely]] return; }
L_0025C0E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0025C0F8; } }
L_0025C0F0:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_0025C0F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0025C120; } }
L_0025C100:
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C110u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008E(c, 352u, depth + 1u); else { c.pc = 0x0033B590u; return; } if (c.pc != 0x0025C110u) [[unlikely]] return; }
L_0025C110:
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_0025C120:
    c.r[2].d[0] = c.r[19].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[19].w[0] << 3);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025C100u | kUnwind; return; } goto L_0025C100; } }
    set32(c.r[5], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[6], 0u + 118u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C14Cu); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0083(c, 263u, depth + 1u); else { c.pc = 0x0030E6B0u; return; } if (c.pc != 0x0025C14Cu) [[unlikely]] return; }
L_0025C14C:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0025C180; } }
L_0025C158:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 112u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C16Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 345u, depth + 1u); else { c.pc = 0x0030F2B0u; return; } if (c.pc != 0x0025C16Cu) [[unlikely]] return; }
L_0025C16C:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 118u);
    c.budget -= 4;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { goto L_0025C18C; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0025C180:
    c.r[2].d[0] = c.r[19].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[19].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025C158u | kUnwind; return; } goto L_0025C158; } }
L_0025C18C:
    set32(c.r[2], c.r[19].w[0] << 2);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[17], c.r[2].w[0] + 112u);
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C1ACu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 369u, depth + 1u); else { c.pc = 0x0030F640u; return; } if (c.pc != 0x0025C1ACu) [[unlikely]] return; }
L_0025C1AC:
    set32(c.r[6], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C1BCu); set32(c.r[5], 0u + 902u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0025C1BCu) [[unlikely]] return; }
L_0025C1BC:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C1C8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x0025C1C8u) [[unlikely]] return; }
L_0025C1C8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0025C1E0; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025C1E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C1E0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0025C1E0u) [[unlikely]] return; }
L_0025C1E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 592u);  c.pc = t; return; }
L_0025C210:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C22Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_008E(c, 352u, depth + 1u); else { c.pc = 0x0033B590u; return; } if (c.pc != 0x0025C22Cu) [[unlikely]] return; }
L_0025C22C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C240u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0083(c, 314u, depth + 1u); else { c.pc = 0x0030EE00u; return; } if (c.pc != 0x0025C240u) [[unlikely]] return; }
L_0025C240:
    set32(c.r[3], 0u + 118u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025C264; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 902u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C25Cu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0025C25Cu) [[unlikely]] return; }
L_0025C25C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0025C274; } }
L_0025C264:
    set32(c.r[5], 0u + 902u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C270u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0025C270u) [[unlikely]] return; }
L_0025C270:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0025C274:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025C280:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C29Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_008E(c, 352u, depth + 1u); else { c.pc = 0x0033B590u; return; } if (c.pc != 0x0025C29Cu) [[unlikely]] return; }
L_0025C29C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C2B0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0083(c, 329u, depth + 1u); else { c.pc = 0x0030F040u; return; } if (c.pc != 0x0025C2B0u) [[unlikely]] return; }
L_0025C2B0:
    set32(c.r[3], 0u + 118u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025C2D4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 902u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C2CCu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0025C2CCu) [[unlikely]] return; }
L_0025C2CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0025C2E4; } }
L_0025C2D4:
    set32(c.r[5], 0u + 902u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C2E0u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0025C2E0u) [[unlikely]] return; }
L_0025C2E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0025C2E4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025C2F0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 21808u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    st64((c.r[4].w[0] + 16u), c.r[2].d[0]);
    set32(c.r[17], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C334u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_008E(c, 352u, depth + 1u); else { c.pc = 0x0033B590u; return; } if (c.pc != 0x0025C334u) [[unlikely]] return; }
L_0025C334:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C344u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0083(c, 419u, depth + 1u); else { c.pc = 0x0030FBD0u; return; } if (c.pc != 0x0025C344u) [[unlikely]] return; }
L_0025C344:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0025C348:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0025C37C; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0025C374; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0025C36C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[17].w[0] << 2);  if (t) { goto L_0025C384; } }
L_0025C36C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(836ll);  if (t) { goto L_0025C380; } }
L_0025C374:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(837ll);  if (t) { goto L_0025C380; } }
L_0025C37C:
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(838ll);
    c.budget -= 1;
L_0025C380:
    set32(c.r[2], c.r[17].w[0] << 2);
    c.budget -= 1;
L_0025C384:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C398u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0025C398u) [[unlikely]] return; }
L_0025C398:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025C348u | kUnwind; return; } goto L_0025C348; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0025C3C0:
    set32(c.r[6], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 4;
    { set32(c.r[5], ld32((c.r[5].w[0] + 12u)));  [[clang::musttail]] return unit_0083(c, 424u, depth); }
L_0025C3D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C3E8u); set32(c.r[4], ld32((c.r[5].w[0] + 4u)));  if (depth < kMaxDepth) unit_0083(c, 430u, depth + 1u); else { c.pc = 0x0030FDD0u; return; } if (c.pc != 0x0025C3E8u) [[unlikely]] return; }
L_0025C3E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C3F0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 344u, depth + 1u); else { c.pc = 0x0033B460u; return; } if (c.pc != 0x0025C3F0u) [[unlikely]] return; }
L_0025C3F0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 902u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C400u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0025C400u) [[unlikely]] return; }
L_0025C400:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025C410:
    set32(c.r[29], c.r[29].w[0] - 640u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    set32(c.r[3], c.r[29].w[0] + 624u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[4], c.r[4].w[0] - 21784u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld64((c.r[4].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    st64((c.r[3].w[0]), c.r[2].d[0]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C468u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 345u, depth + 1u); else { c.pc = 0x0033B480u; return; } if (c.pc != 0x0025C468u) [[unlikely]] return; }
L_0025C468:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C478u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x0025C478u) [[unlikely]] return; }
L_0025C478:
    set32(c.r[17], c.r[16].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] <= 0; c.r[18].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_0025C494; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C48Cu); set32(c.r[4], c.r[17].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0025C48Cu) [[unlikely]] return; }
L_0025C48C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0025C49C; } }
L_0025C494:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_0025C49C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0025C4C4; } }
L_0025C4A4:
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C4B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008E(c, 352u, depth + 1u); else { c.pc = 0x0033B590u; return; } if (c.pc != 0x0025C4B4u) [[unlikely]] return; }
L_0025C4B4:
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[20], c.r[20].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_0025C4C4:
    c.r[2].d[0] = c.r[20].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[20].w[0] << 3);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025C4A4u | kUnwind; return; } goto L_0025C4A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C4D8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 299u, depth + 1u); else { c.pc = 0x00251F40u; return; } if (c.pc != 0x0025C4D8u) [[unlikely]] return; }
L_0025C4D8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C4E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0025C4E4u) [[unlikely]] return; }
L_0025C4E4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 354u)));
    set32(c.r[8], 0u + 1u);
    c.r[7].d[0] = c.r[8].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[10].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[6], 0u + 50u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C50Cu); if (c.r[2].d[0] != 0) c.r[8].d[0] = 0ull;  if (depth < kMaxDepth) unit_008E(c, 131u, depth + 1u); else { c.pc = 0x00339460u; return; } if (c.pc != 0x0025C50Cu) [[unlikely]] return; }
L_0025C50C:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0025C560; } }
L_0025C51C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] << 2);  if (t) { goto L_0025C56C; } }
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[18], c.r[2].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C534u); set32(c.r[22], ld32((c.r[18].w[0])));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0025C534u) [[unlikely]] return; }
L_0025C534:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] - 25584u)));
    c.budget -= 5;
    { const bool t = c.r[22].d[0] == c.r[2].d[0];  if (t) { goto L_0025C55C; } }
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    st32((c.r[2].w[0] + 624u), c.r[3].w[0]);
    c.budget -= 5;
L_0025C55C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0025C560:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[19].sd[0] < 3ll ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025C51Cu | kUnwind; return; } goto L_0025C51C; } }
L_0025C56C:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0025C570:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0025C5A4; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0025C59C; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0025C594; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[17].w[0] << 2);  if (t) { goto L_0025C5AC; } }
L_0025C594:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = 0ull + static_cast<std::uint64_t>(839ll);  if (t) { goto L_0025C5A8; } }
L_0025C59C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = 0ull + static_cast<std::uint64_t>(840ll);  if (t) { goto L_0025C5A8; } }
L_0025C5A4:
    c.r[21].d[0] = 0ull + static_cast<std::uint64_t>(841ll);
    c.budget -= 1;
L_0025C5A8:
    set32(c.r[2], c.r[17].w[0] << 2);
    c.budget -= 1;
L_0025C5AC:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 624u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C5C0u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0025C5C0u) [[unlikely]] return; }
L_0025C5C0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025C570u | kUnwind; return; } goto L_0025C570; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0025C5E8; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025C5E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C5E8u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0025C5E8u) [[unlikely]] return; }
L_0025C5E8:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 640u);  c.pc = t; return; }
L_0025C620:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C630u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0025C630u) [[unlikely]] return; }
L_0025C630:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C638u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0025C638u) [[unlikely]] return; }
L_0025C638:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0025C648; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C648u);  if (depth < kMaxDepth) unit_0057(c, 59u, depth + 1u); else { c.pc = 0x0025C670u; return; } if (c.pc != 0x0025C648u) [[unlikely]] return; }
L_0025C648:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C650u);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x0025C650u) [[unlikely]] return; }
L_0025C650:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C658u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0025C658u) [[unlikely]] return; }
L_0025C658:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0025C670:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[5], 0u + 41u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C68Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 29u, depth + 1u); else { c.pc = 0x00140690u; return; } if (c.pc != 0x0025C68Cu) [[unlikely]] return; }
L_0025C68C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1808u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C6A0u); st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0002(c, 580u, depth + 1u); else { c.pc = 0x0010BEA0u; return; } if (c.pc != 0x0025C6A0u) [[unlikely]] return; }
L_0025C6A0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C6ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 156u, depth + 1u); else { c.pc = 0x00101770u; return; } if (c.pc != 0x0025C6ACu) [[unlikely]] return; }
L_0025C6AC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C6C0u); st32((c.r[29].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0025C6C0u) [[unlikely]] return; }
L_0025C6C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[9], 0u + 1u);
    set32(c.r[17], ld32((c.r[1].w[0] + 20144u)));
    set32(c.r[5], 0u + 640u);
    set32(c.r[6], 0u + 224u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 49u);
    set32(c.r[10], 0u + 2u);
    c.r[11].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C6ECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 63u, depth + 1u); else { c.pc = 0x0014CB60u; return; } if (c.pc != 0x0025C6ECu) [[unlikely]] return; }
L_0025C6EC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C6F8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0013(c, 67u, depth + 1u); else { c.pc = 0x0014CEA0u; return; } if (c.pc != 0x0025C6F8u) [[unlikely]] return; }
L_0025C6F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C700u); set32(c.r[4], ld32((c.r[29].w[0] + 60u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0025C700u) [[unlikely]] return; }
L_0025C700:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C714u); st32((c.r[29].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0025C714u) [[unlikely]] return; }
L_0025C714:
    set32(c.r[6], 0u + 64u);
    set32(c.r[4], 0u + 5u);
    set32(c.r[5], 0u + 17u);
    set32(c.r[8], 0u + 128u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C72Cu); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 113u, depth + 1u); else { c.pc = 0x0013CEC0u; return; } if (c.pc != 0x0025C72Cu) [[unlikely]] return; }
L_0025C72C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C734u); set32(c.r[4], ld32((c.r[29].w[0] + 56u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0025C734u) [[unlikely]] return; }
L_0025C734:
    st32((c.r[16].w[0] + 12u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 27648u)));
    set32(c.r[3], c.r[2].w[0] + 228u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 228u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_0025C75C; } }
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), 0u);  if (t) { goto L_0025C7A4; } }
L_0025C75C:
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C76Cu); st32((c.r[29].w[0] + 52u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0025C76Cu) [[unlikely]] return; }
L_0025C76C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C774u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0025C774u) [[unlikely]] return; }
L_0025C774:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0025C784; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C784u);  if (depth < kMaxDepth) unit_0069(c, 30u, depth + 1u); else { c.pc = 0x002A43D0u; return; } if (c.pc != 0x0025C784u) [[unlikely]] return; }
L_0025C784:
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C79Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025C79Cu) [[unlikely]] return; }
L_0025C79C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C7A4u); set32(c.r[4], ld32((c.r[29].w[0] + 52u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0025C7A4u) [[unlikely]] return; }
L_0025C7A4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0025C7C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0025C834; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 1808u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0025C80C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0025C80C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C80Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025C80Cu) [[unlikely]] return; }
L_0025C80C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C81Cu); st32((c.r[17].w[0] + 16u), 0u);  if (depth < kMaxDepth) unit_0010(c, 31u, depth + 1u); else { c.pc = 0x00140700u; return; } if (c.pc != 0x0025C81Cu) [[unlikely]] return; }
L_0025C81C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0025C838; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C834u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0025C834u) [[unlikely]] return; }
L_0025C834:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0025C838:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0025C850:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0025C8A4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 7088u);
    set32(c.r[2], c.r[2].w[0] + 7120u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C88Cu); st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0068(c, 256u, depth + 1u); else { c.pc = 0x002A3970u; return; } if (c.pc != 0x0025C88Cu) [[unlikely]] return; }
L_0025C88C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0025C8A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C8A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0025C8A4u) [[unlikely]] return; }
L_0025C8A4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0025C8A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0025C8C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0025C8E8; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0025C920; } }
L_0025C8E8:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_0025C920; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C8FCu);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0025C8FCu) [[unlikely]] return; }
L_0025C8FC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C908u); set32(c.r[4], ld32((c.r[1].w[0] - 27648u)));  if (depth < kMaxDepth) unit_0056(c, 41u, depth + 1u); else { c.pc = 0x00258700u; return; } if (c.pc != 0x0025C908u) [[unlikely]] return; }
L_0025C908:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C918u); st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x0025C918u) [[unlikely]] return; }
L_0025C918:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C920u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0025C920u) [[unlikely]] return; }
L_0025C920:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025C930:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0025C954; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C954u);  if (depth < kMaxDepth) unit_0068(c, 213u, depth + 1u); else { c.pc = 0x002A32D0u; return; } if (c.pc != 0x0025C954u) [[unlikely]] return; }
L_0025C954:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0025C974; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C96Cu);  if (depth < kMaxDepth) unit_002A(c, 135u, depth + 1u); else { c.pc = 0x001A9560u; return; } if (c.pc != 0x0025C96Cu) [[unlikely]] return; }
L_0025C96C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025CA40; } }
L_0025C974:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0025C998; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0025C9AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_0025C9AC; } }
L_0025C998:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[1].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0025C9AC; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_0025C9AC:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_0025CA08; } }
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C9C4u); st32((c.r[29].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0025C9C4u) [[unlikely]] return; }
L_0025C9C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C9CCu); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0025C9CCu) [[unlikely]] return; }
L_0025C9CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0025C9DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C9DCu);  if (depth < kMaxDepth) unit_0057(c, 96u, depth + 1u); else { c.pc = 0x0025CA50u; return; } if (c.pc != 0x0025C9DCu) [[unlikely]] return; }
L_0025C9DC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0025C9F8; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C9F8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025C9F8u) [[unlikely]] return; }
L_0025C9F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CA00u); set32(c.r[4], ld32((c.r[29].w[0] + 44u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0025CA00u) [[unlikely]] return; }
L_0025CA00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0025CA44; } }
L_0025CA08:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0025CA1C; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 2;
L_0025CA1C:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], 0u + 300u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0025CA40; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0025CA40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CA40u);  if (depth < kMaxDepth) unit_0068(c, 226u, depth + 1u); else { c.pc = 0x002A3500u; return; } if (c.pc != 0x0025CA40u) [[unlikely]] return; }
L_0025CA40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0025CA44:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0025CA50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 33u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CA6Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 29u, depth + 1u); else { c.pc = 0x00140690u; return; } if (c.pc != 0x0025CA6Cu) [[unlikely]] return; }
L_0025CA6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[17], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - 1856u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CA80u); st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0025CA80u) [[unlikely]] return; }
L_0025CA80:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] - 25569u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[2], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CA98u); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x0025CA98u) [[unlikely]] return; }
L_0025CA98:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 17268u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 4ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CAB0u); c.r[4].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0054(c, 301u, depth + 1u); else { c.pc = 0x00251F60u; return; } if (c.pc != 0x0025CAB0u) [[unlikely]] return; }
L_0025CAB0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 27648u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0025CAD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CAC8u);  if (depth < kMaxDepth) unit_0054(c, 331u, depth + 1u); else { c.pc = 0x002521A0u; return; } if (c.pc != 0x0025CAC8u) [[unlikely]] return; }
L_0025CAC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CAD0u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0025CAD0u) [[unlikely]] return; }
L_0025CAD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), 0u);  if (t) { goto L_0025CADC; } }
L_0025CAD8:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 1;
L_0025CADC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27648u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CAECu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 601u, depth + 1u); else { c.pc = 0x00253D90u; return; } if (c.pc != 0x0025CAECu) [[unlikely]] return; }
L_0025CAEC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0025CB10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0025CB58; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1856u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CB40u); st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 31u, depth + 1u); else { c.pc = 0x00140700u; return; } if (c.pc != 0x0025CB40u) [[unlikely]] return; }
L_0025CB40:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0025CB5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CB58u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0025CB58u) [[unlikely]] return; }
L_0025CB58:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0025CB5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0025CB70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0025CB9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CB94u);  if (depth < kMaxDepth) unit_002A(c, 135u, depth + 1u); else { c.pc = 0x001A9560u; return; } if (c.pc != 0x0025CB94u) [[unlikely]] return; }
L_0025CB94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025CC64; } }
L_0025CB9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CBA4u);  if (depth < kMaxDepth) unit_002B(c, 379u, depth + 1u); else { c.pc = 0x001AEE20u; return; } if (c.pc != 0x0025CBA4u) [[unlikely]] return; }
L_0025CBA4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0025CC64; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_0025CC08; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_0025CBCC; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 2;
L_0025CBCC:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0025CC64; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CBE4u); st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0025CBE4u) [[unlikely]] return; }
L_0025CBE4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[5].d[0] = ld16((c.r[1].w[0] - 25580u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CBFCu); set32(c.r[4], ld32((c.r[1].w[0] - 27648u)));  if (depth < kMaxDepth) unit_0054(c, 493u, depth + 1u); else { c.pc = 0x00253160u; return; } if (c.pc != 0x0025CBFCu) [[unlikely]] return; }
L_0025CBFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0025CC68; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_0025CC08:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 4u);  if (t) { goto L_0025CC50; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_0025CC24; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 2;
L_0025CC24:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0025CC64; } }
    set32(c.r[2], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CC44u); set32(c.r[4], ld32((c.r[1].w[0] - 27648u)));  if (depth < kMaxDepth) unit_0054(c, 604u, depth + 1u); else { c.pc = 0x00253E00u; return; } if (c.pc != 0x0025CC44u) [[unlikely]] return; }
L_0025CC44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025CC64; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_0025CC50:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0025CC64; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CC64u); set32(c.r[4], ld32((c.r[1].w[0] - 27648u)));  if (depth < kMaxDepth) unit_0054(c, 520u, depth + 1u); else { c.pc = 0x00253490u; return; } if (c.pc != 0x0025CC64u) [[unlikely]] return; }
L_0025CC64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0025CC68:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025CC80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_0025CCA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CCA0u); set32(c.r[4], ld32((c.r[1].w[0] - 27648u)));  if (depth < kMaxDepth) unit_0054(c, 529u, depth + 1u); else { c.pc = 0x002535F0u; return; } if (c.pc != 0x0025CCA0u) [[unlikely]] return; }
L_0025CCA0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0025CCB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0025CDBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CCDCu);  if (depth < kMaxDepth) unit_002A(c, 135u, depth + 1u); else { c.pc = 0x001A9560u; return; } if (c.pc != 0x0025CCDCu) [[unlikely]] return; }
L_0025CCDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025CEB0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0025CD14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CCFCu); set32(c.r[4], 0u + 404u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x0025CCFCu) [[unlikely]] return; }
L_0025CCFC:
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CD10u); set32(c.r[7], 0u + 12u);  if (depth < kMaxDepth) unit_001B(c, 394u, depth + 1u); else { c.pc = 0x0016F220u; return; } if (c.pc != 0x0025CD10u) [[unlikely]] return; }
L_0025CD10:
    st32((c.r[16].w[0] + 16u), 0u);
    c.budget -= 1;
L_0025CD14:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 25384u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0025CDBC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CD34u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025CD34u) [[unlikely]] return; }
L_0025CD34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025CDBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CD44u);  if (depth < kMaxDepth) unit_001B(c, 397u, depth + 1u); else { c.pc = 0x0016F2B0u; return; } if (c.pc != 0x0025CD44u) [[unlikely]] return; }
L_0025CD44:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 36u);  if (t) { goto L_0025CD7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CD5Cu); set32(c.r[4], 0u + 36u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0025CD5Cu) [[unlikely]] return; }
L_0025CD5C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0025CD98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CD70u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0057(c, 136u, depth + 1u); else { c.pc = 0x0025CED0u; return; } if (c.pc != 0x0025CD70u) [[unlikely]] return; }
L_0025CD70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025CD98; } }
    set32(c.r[4], 0u + 36u);
    c.budget -= 1;
L_0025CD7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CD84u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0025CD84u) [[unlikely]] return; }
L_0025CD84:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0025CD98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CD98u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0057(c, 136u, depth + 1u); else { c.pc = 0x0025CED0u; return; } if (c.pc != 0x0025CD98u) [[unlikely]] return; }
L_0025CD98:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0025CEB0; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CDB4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025CDB4u) [[unlikely]] return; }
L_0025CDB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0025CEB4; } }
L_0025CDBC:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0025CEB0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CDD8u); set32(c.r[4], ld32((c.r[1].w[0] - 27648u)));  if (depth < kMaxDepth) unit_0054(c, 595u, depth + 1u); else { c.pc = 0x00253BF0u; return; } if (c.pc != 0x0025CDD8u) [[unlikely]] return; }
L_0025CDD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025CEB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CDE8u);  if (depth < kMaxDepth) unit_0054(c, 337u, depth + 1u); else { c.pc = 0x00252210u; return; } if (c.pc != 0x0025CDE8u) [[unlikely]] return; }
L_0025CDE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CDF0u); st32((c.r[16].w[0] + 20u), 0u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0025CDF0u) [[unlikely]] return; }
L_0025CDF0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25568u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0025CE48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CE10u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0025CE10u) [[unlikely]] return; }
L_0025CE10:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[17], 0u + 1u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25568u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CE28u); st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0025CE28u) [[unlikely]] return; }
L_0025CE28:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], 0u + 4u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] - 25568u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_0025CEB0; } }
L_0025CE48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CE50u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0025CE50u) [[unlikely]] return; }
L_0025CE50:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25573u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0025CE78; } }
    set32(c.r[3], 0u + 4u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[4].w[0]);  if (t) { goto L_0025CEB0; } }
L_0025CE78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CE80u); set32(c.r[4], 0u + 36u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0025CE80u) [[unlikely]] return; }
L_0025CE80:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0025CE94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CE94u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0057(c, 136u, depth + 1u); else { c.pc = 0x0025CED0u; return; } if (c.pc != 0x0025CE94u) [[unlikely]] return; }
L_0025CE94:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0025CEB0; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CEB0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025CEB0u) [[unlikely]] return; }
L_0025CEB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0025CEB4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0025CED0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CEF0u); set32(c.r[5], 0u + 23u);  if (depth < kMaxDepth) unit_0010(c, 29u, depth + 1u); else { c.pc = 0x00140690u; return; } if (c.pc != 0x0025CEF0u) [[unlikely]] return; }
L_0025CEF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 1904u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 12u), c.r[16].w[0]);
    st32((c.r[17].w[0] + 20u), 0u);
    st32((c.r[17].w[0] + 24u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CF10u); st8((c.r[17].w[0] + 28u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0051(c, 11u, depth + 1u); else { c.pc = 0x002440A0u; return; } if (c.pc != 0x0025CF10u) [[unlikely]] return; }
L_0025CF10:
    set32(c.r[2], 0u + 15811u);
    set32(c.r[3], 0u + 13312u);
    st16((c.r[29].w[0] + 62u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x63500000u);
    st16((c.r[29].w[0] + 60u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] + 31688u);
    set32(c.r[5], c.r[29].w[0] + 60u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CF38u); c.r[6].d[0] = c.r[2].d[0] | 20566ull;  if (depth < kMaxDepth) unit_0087(c, 54u, depth + 1u); else { c.pc = 0x0031C5D0u; return; } if (c.pc != 0x0025CF38u) [[unlikely]] return; }
L_0025CF38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CF40u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0025CF40u) [[unlikely]] return; }
L_0025CF40:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 25576u));
    c.r[3].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[1].w[0] - 21752u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 32u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0025CF80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0025D01C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 1904u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0025CFCC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0025CFCC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CFCCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025CFCCu) [[unlikely]] return; }
L_0025CFCC:
    st32((c.r[17].w[0] + 16u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0025CFF4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0025CFF4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CFF4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025CFF4u) [[unlikely]] return; }
L_0025CFF4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D004u); st32((c.r[17].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_0010(c, 31u, depth + 1u); else { c.pc = 0x00140700u; return; } if (c.pc != 0x0025D004u) [[unlikely]] return; }
L_0025D004:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0025D020; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D01Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0025D01Cu) [[unlikely]] return; }
L_0025D01C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0025D020:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0025D040:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x63500000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D064u); c.r[4].d[0] = c.r[2].d[0] | 20566ull;  if (depth < kMaxDepth) unit_0087(c, 63u, depth + 1u); else { c.pc = 0x0031C6B0u; return; } if (c.pc != 0x0025D064u) [[unlikely]] return; }
L_0025D064:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D06Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 65u, depth + 1u); else { c.pc = 0x0031C700u; return; } if (c.pc != 0x0025D06Cu) [[unlikely]] return; }
L_0025D06C:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0025D658; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0025D19C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[4].w[0] + 624u);  if (t) { goto L_0025D110; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D0A0u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0025D0A0u) [[unlikely]] return; }
L_0025D0A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025D0B8; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D0B8u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_002A(c, 287u, depth + 1u); else { c.pc = 0x001AB200u; return; } if (c.pc != 0x0025D0B8u) [[unlikely]] return; }
L_0025D0B8:
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D0C8u); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x0025D0C8u) [[unlikely]] return; }
L_0025D0C8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D0D8u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x0025D0D8u) [[unlikely]] return; }
L_0025D0D8:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D0E8u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x0025D0E8u) [[unlikely]] return; }
L_0025D0E8:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D0F4u); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_0076(c, 180u, depth + 1u); else { c.pc = 0x002D9860u; return; } if (c.pc != 0x0025D0F4u) [[unlikely]] return; }
L_0025D0F4:
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0025D110; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D110u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_002A(c, 147u, depth + 1u); else { c.pc = 0x001A96C0u; return; } if (c.pc != 0x0025D110u) [[unlikely]] return; }
L_0025D110:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0025D164; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0025D130; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0025D198; } }
L_0025D130:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D138u); set32(c.r[4], 0u + 144u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0025D138u) [[unlikely]] return; }
L_0025D138:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0025D15C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[6], 0u + 3u);
    set32(c.r[5], c.r[5].w[0] - 21760u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D158u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0057(c, 201u, depth + 1u); else { c.pc = 0x0025D6A0u; return; } if (c.pc != 0x0025D158u) [[unlikely]] return; }
L_0025D158:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0025D15C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 16u), c.r[4].w[0]);  if (t) { goto L_0025D194; } }
L_0025D164:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D16Cu); set32(c.r[4], 0u + 528u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0025D16Cu) [[unlikely]] return; }
L_0025D16C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0025D190; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[5], c.r[5].w[0] - 21728u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D18Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005A(c, 264u, depth + 1u); else { c.pc = 0x0026A7F0u; return; } if (c.pc != 0x0025D18Cu) [[unlikely]] return; }
L_0025D18C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0025D190:
    st32((c.r[17].w[0] + 16u), c.r[4].w[0]);
    c.budget -= 1;
L_0025D194:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0025D198:
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 1;
L_0025D19C:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0025D21C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0025D1C4; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0025D658; } }
L_0025D1C4:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0025D200; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0025D1E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_0025D218; } }
L_0025D1E4:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D1F8u); set32(c.r[5], 0u + 59u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025D1F8u) [[unlikely]] return; }
L_0025D1F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025D214; } }
L_0025D200:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D214u); set32(c.r[5], 0u + 73u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025D214u) [[unlikely]] return; }
L_0025D214:
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_0025D218:
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 1;
L_0025D21C:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0025D4C4; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0025D4C4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D248u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025D248u) [[unlikely]] return; }
L_0025D248:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D25Cu); c.r[18].d[0] = c.r[2].d[0] & 255ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025D25Cu) [[unlikely]] return; }
L_0025D25C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[17].w[0] + 32u), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0025D288; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0025D288; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D288u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025D288u) [[unlikely]] return; }
L_0025D288:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 16u), 0u);  if (t) { goto L_0025D420; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_0025D37C; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_0025D358; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[5].d[0]; set32(c.r[4], 0u + 528u);  if (t) { goto L_0025D308; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0025D2C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[17].w[0] + 28u));  if (t) { goto L_0025D4C8; } }
L_0025D2C4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[4], 0u + 20u);  if (t) { goto L_0025D2E0; } }
    set32(c.r[25], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D2DCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025D2DCu) [[unlikely]] return; }
L_0025D2DC:
    set32(c.r[4], 0u + 20u);
    c.budget -= 1;
L_0025D2E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D2E8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0025D2E8u) [[unlikely]] return; }
L_0025D2E8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0025D658; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D2FCu);  if (depth < kMaxDepth) unit_0090(c, 167u, depth + 1u); else { c.pc = 0x00341580u; return; } if (c.pc != 0x0025D2FCu) [[unlikely]] return; }
L_0025D2FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0025D65C; } }
    set32(c.r[4], 0u + 528u);
    c.budget -= 1;
L_0025D308:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D310u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0025D310u) [[unlikely]] return; }
L_0025D310:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025D330; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 21728u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D330u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005A(c, 264u, depth + 1u); else { c.pc = 0x0026A7F0u; return; } if (c.pc != 0x0025D330u) [[unlikely]] return; }
L_0025D330:
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D350u); set32(c.r[5], 0u + 61u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025D350u) [[unlikely]] return; }
L_0025D350:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025D4C4; } }
L_0025D358:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D36Cu); set32(c.r[5], 0u + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025D36Cu) [[unlikely]] return; }
L_0025D36C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 28u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0025D4C4; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_0025D37C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0025D4C4; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[4].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0025D3C0; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0025D39C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025D3CC; } }
L_0025D39C:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D3B0u); set32(c.r[5], 0u + 72u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025D3B0u) [[unlikely]] return; }
L_0025D3B0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 28u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0025D658; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0025D3C0:
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D3CCu); set32(c.r[7], 0u + 12u);  if (depth < kMaxDepth) unit_001B(c, 394u, depth + 1u); else { c.pc = 0x0016F220u; return; } if (c.pc != 0x0025D3CCu) [[unlikely]] return; }
L_0025D3CC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[4], 0u + 16u);  if (t) { goto L_0025D3EC; } }
    set32(c.r[25], ld32((c.r[17].w[0] + 8u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D3E8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025D3E8u) [[unlikely]] return; }
L_0025D3E8:
    set32(c.r[4], 0u + 16u);
    c.budget -= 1;
L_0025D3EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D3F4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0025D3F4u) [[unlikely]] return; }
L_0025D3F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025D404; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D404u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 4u, depth + 1u); else { c.pc = 0x00138030u; return; } if (c.pc != 0x0025D404u) [[unlikely]] return; }
L_0025D404:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x63500000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D410u); c.r[4].d[0] = c.r[2].d[0] | 20566ull;  if (depth < kMaxDepth) unit_0087(c, 60u, depth + 1u); else { c.pc = 0x0031C670u; return; } if (c.pc != 0x0025D410u) [[unlikely]] return; }
L_0025D410:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D418u);  if (depth < kMaxDepth) unit_0053(c, 75u, depth + 1u); else { c.pc = 0x0024C780u; return; } if (c.pc != 0x0025D418u) [[unlikely]] return; }
L_0025D418:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025D658; } }
L_0025D420:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0025D478; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_0025D454; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_0025D454; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0025D454; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025D4C4; } }
L_0025D454:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D468u); set32(c.r[5], 0u + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025D468u) [[unlikely]] return; }
L_0025D468:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 28u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0025D4C4; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0025D478:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0025D4C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D488u); set32(c.r[4], 0u + 144u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0025D488u) [[unlikely]] return; }
L_0025D488:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025D4A8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 21760u);
    set32(c.r[6], 0u + 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D4A8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0057(c, 201u, depth + 1u); else { c.pc = 0x0025D6A0u; return; } if (c.pc != 0x0025D4A8u) [[unlikely]] return; }
L_0025D4A8:
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D4C0u); set32(c.r[5], 0u + 62u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025D4C0u) [[unlikely]] return; }
L_0025D4C0:
    st32((c.r[17].w[0] + 12u), 0u);
    c.budget -= 1;
L_0025D4C4:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 28u));
    c.budget -= 1;
L_0025D4C8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0025D658; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D4D8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 200u, depth + 1u); else { c.pc = 0x0025D670u; return; } if (c.pc != 0x0025D4D8u) [[unlikely]] return; }
L_0025D4D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025D658; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_0025D598; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0025D544; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0025D524; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0025D524; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0025D524; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025D658; } }
L_0025D524:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D538u); set32(c.r[5], 0u + 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025D538u) [[unlikely]] return; }
L_0025D538:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 32u), c.r[3].w[0]);  if (t) { goto L_0025D658; } }
L_0025D544:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D54Cu); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0025D54Cu) [[unlikely]] return; }
L_0025D54C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025D55C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D55Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 4u, depth + 1u); else { c.pc = 0x00138030u; return; } if (c.pc != 0x0025D55Cu) [[unlikely]] return; }
L_0025D55C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x63500000u);  if (t) { goto L_0025D57C; } }
    set32(c.r[25], ld32((c.r[17].w[0] + 8u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D578u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025D578u) [[unlikely]] return; }
L_0025D578:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x63500000u);
    c.budget -= 1;
L_0025D57C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D584u); c.r[4].d[0] = c.r[2].d[0] | 20566ull;  if (depth < kMaxDepth) unit_0087(c, 60u, depth + 1u); else { c.pc = 0x0031C670u; return; } if (c.pc != 0x0025D584u) [[unlikely]] return; }
L_0025D584:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D58Cu);  if (depth < kMaxDepth) unit_0053(c, 75u, depth + 1u); else { c.pc = 0x0024C780u; return; } if (c.pc != 0x0025D58Cu) [[unlikely]] return; }
L_0025D58C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025D658; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_0025D598:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_0025D658; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0025D5B8; } }
    set32(c.r[25], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D5B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025D5B8u) [[unlikely]] return; }
L_0025D5B8:
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0025D610; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0025D5D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025D658; } }
L_0025D5D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D5E8u); st32((c.r[29].w[0] + 76u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0025D5E8u) [[unlikely]] return; }
L_0025D5E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D5F0u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0025D5F0u) [[unlikely]] return; }
L_0025D5F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025D600; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D600u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 96u, depth + 1u); else { c.pc = 0x0025CA50u; return; } if (c.pc != 0x0025D600u) [[unlikely]] return; }
L_0025D600:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D608u); set32(c.r[4], ld32((c.r[29].w[0] + 76u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0025D608u) [[unlikely]] return; }
L_0025D608:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025D658; } }
L_0025D610:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D618u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0025D618u) [[unlikely]] return; }
L_0025D618:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025D628; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D628u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 4u, depth + 1u); else { c.pc = 0x00138030u; return; } if (c.pc != 0x0025D628u) [[unlikely]] return; }
L_0025D628:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0025D644; } }
    set32(c.r[25], ld32((c.r[17].w[0] + 8u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D644u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025D644u) [[unlikely]] return; }
L_0025D644:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D64Cu);  if (depth < kMaxDepth) unit_0053(c, 75u, depth + 1u); else { c.pc = 0x0024C780u; return; } if (c.pc != 0x0025D64Cu) [[unlikely]] return; }
L_0025D64C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x63500000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D658u); c.r[4].d[0] = c.r[2].d[0] | 20566ull;  if (depth < kMaxDepth) unit_0087(c, 60u, depth + 1u); else { c.pc = 0x0031C670u; return; } if (c.pc != 0x0025D658u) [[unlikely]] return; }
L_0025D658:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0025D65C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0025D670:
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025D68C; } }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 137u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0025D68C; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0025D68C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0025D6A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D6B8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 12u, depth + 1u); else { c.pc = 0x001300B0u; return; } if (c.pc != 0x0025D6B8u) [[unlikely]] return; }
L_0025D6B8:
    set32(c.r[4], c.r[16].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D6C4u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x0025D6C4u) [[unlikely]] return; }
L_0025D6C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 2080u);
    set32(c.r[3], c.r[3].w[0] - 1992u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 72u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1932u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), 0u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D6FCu); st32((c.r[16].w[0] + 68u), 0u);  if (depth < kMaxDepth) unit_0049(c, 271u, depth + 1u); else { c.pc = 0x002275A0u; return; } if (c.pc != 0x0025D6FCu) [[unlikely]] return; }
L_0025D6FC:
    set32(c.r[4], c.r[16].w[0] + 108u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D708u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 271u, depth + 1u); else { c.pc = 0x002275A0u; return; } if (c.pc != 0x0025D708u) [[unlikely]] return; }
L_0025D708:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D710u);  if (depth < kMaxDepth) unit_00A5(c, 374u, depth + 1u); else { c.pc = 0x00397140u; return; } if (c.pc != 0x0025D710u) [[unlikely]] return; }
L_0025D710:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D718u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0025D718u) [[unlikely]] return; }
L_0025D718:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] - 25569u), static_cast<std::uint8_t>(0u));
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D734u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025D734u) [[unlikely]] return; }
L_0025D734:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0025D74C; } }
L_0025D73C:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 56u), 0u);
    c.budget -= 4;
L_0025D74C:
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025D73Cu | kUnwind; return; } goto L_0025D73C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D760u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0025D760u) [[unlikely]] return; }
L_0025D760:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0025D794; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x63500000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D778u); c.r[4].d[0] = c.r[2].d[0] | 20566ull;  if (depth < kMaxDepth) unit_0087(c, 63u, depth + 1u); else { c.pc = 0x0031C6B0u; return; } if (c.pc != 0x0025D778u) [[unlikely]] return; }
L_0025D778:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D784u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 68u, depth + 1u); else { c.pc = 0x0031C750u; return; } if (c.pc != 0x0025D784u) [[unlikely]] return; }
L_0025D784:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D790u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x0025D790u) [[unlikely]] return; }
L_0025D790:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0025D794:
    st32((c.r[16].w[0] + 68u), c.r[17].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x6D6E0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D7ACu); c.r[5].d[0] = c.r[2].d[0] | 18512ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x0025D7ACu) [[unlikely]] return; }
L_0025D7AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0025D7B8; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_0025D7B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D7C0u); set32(c.r[5], 0u + 32u);  if (depth < kMaxDepth) unit_0076(c, 195u, depth + 1u); else { c.pc = 0x002D99C0u; return; } if (c.pc != 0x0025D7C0u) [[unlikely]] return; }
L_0025D7C0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0025D7E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0025D940; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 2080u);
    set32(c.r[3], c.r[3].w[0] - 1992u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1932u);
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D838u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025D838u) [[unlikely]] return; }
L_0025D838:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025D85C; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D850u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025D850u) [[unlikely]] return; }
L_0025D850:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025D864; } }
L_0025D85C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D864u);  if (depth < kMaxDepth) unit_00A5(c, 380u, depth + 1u); else { c.pc = 0x003971B0u; return; } if (c.pc != 0x0025D864u) [[unlikely]] return; }
L_0025D864:
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0025D888; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0025D888; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D888u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025D888u) [[unlikely]] return; }
L_0025D888:
    st32((c.r[17].w[0] + 52u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0025D8C4; } }
L_0025D894:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[18], c.r[2].w[0] + 56u);  if (t) { goto L_0025D8BC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0025D8BC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D8BCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025D8BCu) [[unlikely]] return; }
L_0025D8BC:
    st32((c.r[18].w[0]), 0u);
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 2;
L_0025D8C4:
    c.r[2].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[19].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025D894u | kUnwind; return; } goto L_0025D894; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0025D8F4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0025D8F4; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D8F4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025D8F4u) [[unlikely]] return; }
L_0025D8F4:
    set32(c.r[4], c.r[17].w[0] + 108u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D904u); st32((c.r[17].w[0] + 68u), 0u);  if (depth < kMaxDepth) unit_0049(c, 274u, depth + 1u); else { c.pc = 0x002275F0u; return; } if (c.pc != 0x0025D904u) [[unlikely]] return; }
L_0025D904:
    set32(c.r[4], c.r[17].w[0] + 72u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D910u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0049(c, 274u, depth + 1u); else { c.pc = 0x002275F0u; return; } if (c.pc != 0x0025D910u) [[unlikely]] return; }
L_0025D910:
    set32(c.r[4], c.r[17].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D91Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x0025D91Cu) [[unlikely]] return; }
L_0025D91C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D928u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 15u, depth + 1u); else { c.pc = 0x00130130u; return; } if (c.pc != 0x0025D928u) [[unlikely]] return; }
L_0025D928:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0025D944; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D940u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0025D940u) [[unlikely]] return; }
L_0025D940:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0025D944:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0025D960:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D974u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 135u, depth + 1u); else { c.pc = 0x001A9560u; return; } if (c.pc != 0x0025D974u) [[unlikely]] return; }
L_0025D974:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025D9BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D984u);  if (depth < kMaxDepth) unit_00A5(c, 382u, depth + 1u); else { c.pc = 0x00397200u; return; } if (c.pc != 0x0025D984u) [[unlikely]] return; }
L_0025D984:
    set32(c.r[4], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0025D9BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D99Cu);  if (depth < kMaxDepth) unit_00A5(c, 382u, depth + 1u); else { c.pc = 0x00397200u; return; } if (c.pc != 0x0025D99Cu) [[unlikely]] return; }
L_0025D99C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D9A4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 409u, depth + 1u); else { c.pc = 0x003974C0u; return; } if (c.pc != 0x0025D9A4u) [[unlikely]] return; }
L_0025D9A4:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D9B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025D9B4u) [[unlikely]] return; }
L_0025D9B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D9BCu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0053(c, 59u, depth + 1u); else { c.pc = 0x0024C560u; return; } if (c.pc != 0x0025D9BCu) [[unlikely]] return; }
L_0025D9BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025D9D0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D9F4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000C(c, 25u, depth + 1u); else { c.pc = 0x00130270u; return; } if (c.pc != 0x0025D9F4u) [[unlikely]] return; }
L_0025D9F4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[19], ld32((c.r[2].w[0] + 224u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 228u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0025DAE4; } }
L_0025DA0C:
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[2].w[0] + 56u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 208u);  if (t) { goto L_0025DACC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DA28u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0025DA28u) [[unlikely]] return; }
L_0025DA28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { goto L_0025DA54; } }
    set32(c.r[4], c.r[18].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - 21760u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[7], 0u + 10017u);
    set32(c.r[6], ld32((c.r[3].w[0] + 4u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DA54u); set32(c.r[8], 0u + 16u);  if (depth < kMaxDepth) unit_000E(c, 56u, depth + 1u); else { c.pc = 0x00138450u; return; } if (c.pc != 0x0025DA54u) [[unlikely]] return; }
L_0025DA54:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x42DC0000u);
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[8], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x43F50000u);
    set32(c.r[3], c.r[2].w[0] << 3);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.r[5].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[2], c.r[3].w[0] << 1);
    c.f[1] = c.r[2].w[0];
    st32((c.r[8].w[0] + 96u), c.r[7].w[0]);
    c.f[0] = c.r[6].w[0];
    set32(c.r[3], c.r[18].w[0] << 3);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] - 21760u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[8].w[0] + 100u), c.f[0]);
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[8].w[0] + 104u), c.f[0]);
    st32((c.r[8].w[0] + 108u), c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0])));
    st8((c.r[2].w[0] + 200u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 30;
L_0025DACC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DAE0u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025DAE0u) [[unlikely]] return; }
L_0025DAE0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0025DAE4:
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[18].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025DA0Cu | kUnwind; return; } goto L_0025DA0C; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025DB60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DB04u); set32(c.r[4], 0u + 384u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0025DB04u) [[unlikely]] return; }
L_0025DB04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0025DB18; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DB18u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 75u, depth + 1u); else { c.pc = 0x00138690u; return; } if (c.pc != 0x0025DB18u) [[unlikely]] return; }
L_0025DB18:
    st32((c.r[20].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[16], ld32((c.r[20].w[0] + 56u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DB2Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 340u, depth + 1u); else { c.pc = 0x00197030u; return; } if (c.pc != 0x0025DB2Cu) [[unlikely]] return; }
L_0025DB2C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0025DB48; } }
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 4;
L_0025DB48:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[6], ld32((c.r[1].w[0] - 21756u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DB58u); set32(c.r[4], ld32((c.r[20].w[0] + 52u)));  if (depth < kMaxDepth) unit_000E(c, 87u, depth + 1u); else { c.pc = 0x00138900u; return; } if (c.pc != 0x0025DB58u) [[unlikely]] return; }
L_0025DB58:
    set32(c.r[2], ld32((c.r[20].w[0] + 52u)));
    st8((c.r[2].w[0] + 16u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0025DB60:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[3].w[0] - 21712u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    ld128((c.r[3].w[0]) & ~15u, c.r[7]);
    set32(c.r[2], c.r[2].w[0] - 21680u);
    set32(c.r[6], c.r[29].w[0] + 96u);
    set32(c.r[4], c.r[20].w[0] + 108u);
    c.r[3].d[0] = ld64((c.r[3].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[7]);
    st64((c.r[5].w[0] + 16u), c.r[3].d[0]);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[6].w[0]) & ~15u, c.r[3]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DBA0u); st64((c.r[6].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x0025DBA0u) [[unlikely]] return; }
L_0025DBA0:
    set32(c.r[4], c.r[20].w[0] + 72u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DBACu); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x0025DBACu) [[unlikely]] return; }
L_0025DBAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0025DBD0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[16], ld32((c.r[5].w[0] + 24u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0025DC48; } }
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DC0Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 340u, depth + 1u); else { c.pc = 0x00197030u; return; } if (c.pc != 0x0025DC0Cu) [[unlikely]] return; }
L_0025DC0C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0025DC28; } }
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 4;
L_0025DC28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - 21756u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DC44u); set32(c.r[4], ld32((c.r[17].w[0] + 52u)));  if (depth < kMaxDepth) unit_000E(c, 87u, depth + 1u); else { c.pc = 0x00138900u; return; } if (c.pc != 0x0025DC44u) [[unlikely]] return; }
L_0025DC44:
    st32((c.r[17].w[0] + 36u), c.r[16].w[0]);
    c.budget -= 1;
L_0025DC48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0025DC60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DC80u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 29u, depth + 1u); else { c.pc = 0x001302B0u; return; } if (c.pc != 0x0025DC80u) [[unlikely]] return; }
L_0025DC80:
    set32(c.r[3], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0025DCDC; } }
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DCA4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 340u, depth + 1u); else { c.pc = 0x00197030u; return; } if (c.pc != 0x0025DCA4u) [[unlikely]] return; }
L_0025DCA4:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0025DCC0; } }
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 4;
L_0025DCC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - 21756u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DCDCu); set32(c.r[4], ld32((c.r[17].w[0] + 52u)));  if (depth < kMaxDepth) unit_000E(c, 87u, depth + 1u); else { c.pc = 0x00138900u; return; } if (c.pc != 0x0025DCDCu) [[unlikely]] return; }
L_0025DCDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0025DD00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DD14u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 24u, depth + 1u); else { c.pc = 0x00130260u; return; } if (c.pc != 0x0025DD14u) [[unlikely]] return; }
L_0025DD14:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0025DD24; } }
    st8((c.r[4].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0025DD24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025DD40:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DD60u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025DD60u) [[unlikely]] return; }
L_0025DD60:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025DE64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DD74u);  if (depth < kMaxDepth) unit_000C(c, 26u, depth + 1u); else { c.pc = 0x00130280u; return; } if (c.pc != 0x0025DD74u) [[unlikely]] return; }
L_0025DD74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0025DDA0; } }
L_0025DD7C:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0025DD9C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DD9Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025DD9Cu) [[unlikely]] return; }
L_0025DD9C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0025DDA0:
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025DD7Cu | kUnwind; return; } goto L_0025DD7C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025DE10; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DDD4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 340u, depth + 1u); else { c.pc = 0x00197030u; return; } if (c.pc != 0x0025DDD4u) [[unlikely]] return; }
L_0025DDD4:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0025DDF0; } }
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 4;
L_0025DDF0:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] - 21756u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DE10u); set32(c.r[4], ld32((c.r[16].w[0] + 52u)));  if (depth < kMaxDepth) unit_000E(c, 87u, depth + 1u); else { c.pc = 0x00138900u; return; } if (c.pc != 0x0025DE10u) [[unlikely]] return; }
L_0025DE10:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[3].w[0] - 21648u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    ld128((c.r[3].w[0]) & ~15u, c.r[7]);
    set32(c.r[2], c.r[2].w[0] - 21616u);
    set32(c.r[6], c.r[29].w[0] + 48u);
    set32(c.r[4], c.r[16].w[0] + 108u);
    c.r[3].d[0] = ld64((c.r[3].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[7]);
    st64((c.r[5].w[0] + 16u), c.r[3].d[0]);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[6].w[0]) & ~15u, c.r[3]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DE50u); st64((c.r[6].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x0025DE50u) [[unlikely]] return; }
L_0025DE50:
    set32(c.r[4], c.r[16].w[0] + 72u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DE5Cu); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x0025DE5Cu) [[unlikely]] return; }
L_0025DE5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0025DE84; } }
L_0025DE64:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], 0u + 12u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DE80u); st32((c.r[2].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_001B(c, 394u, depth + 1u); else { c.pc = 0x0016F220u; return; } if (c.pc != 0x0025DE80u) [[unlikely]] return; }
L_0025DE80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0025DE84:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0025DEA0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DEB8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 27u, depth + 1u); else { c.pc = 0x00130290u; return; } if (c.pc != 0x0025DEB8u) [[unlikely]] return; }
L_0025DEB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0025DEE4; } }
L_0025DEC0:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0025DEE0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DEE0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025DEE0u) [[unlikely]] return; }
L_0025DEE0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0025DEE4:
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025DEC0u | kUnwind; return; } goto L_0025DEC0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025DF54; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DF18u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 340u, depth + 1u); else { c.pc = 0x00197030u; return; } if (c.pc != 0x0025DF18u) [[unlikely]] return; }
L_0025DF18:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0025DF34; } }
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 4;
L_0025DF34:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] - 21756u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DF54u); set32(c.r[4], ld32((c.r[16].w[0] + 52u)));  if (depth < kMaxDepth) unit_000E(c, 87u, depth + 1u); else { c.pc = 0x00138900u; return; } if (c.pc != 0x0025DF54u) [[unlikely]] return; }
L_0025DF54:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[3].w[0] - 21584u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    ld128((c.r[3].w[0]) & ~15u, c.r[7]);
    set32(c.r[2], c.r[2].w[0] - 21552u);
    set32(c.r[6], c.r[29].w[0] + 48u);
    set32(c.r[4], c.r[16].w[0] + 108u);
    c.r[3].d[0] = ld64((c.r[3].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[7]);
    st64((c.r[5].w[0] + 16u), c.r[3].d[0]);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[6].w[0]) & ~15u, c.r[3]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DF94u); st64((c.r[6].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x0025DF94u) [[unlikely]] return; }
L_0025DF94:
    set32(c.r[4], c.r[16].w[0] + 72u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DFA0u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x0025DFA0u) [[unlikely]] return; }
L_0025DFA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0025DFC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DFD4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 297u, depth + 1u); else { c.pc = 0x0025E230u; return; } if (c.pc != 0x0025DFD4u) [[unlikely]] return; }
L_0025DFD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025DFEC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DFECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025DFECu) [[unlikely]] return; }
L_0025DFEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025E000:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[1].w[0] + 25384u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0025E134; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E034u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025E034u) [[unlikely]] return; }
L_0025E034:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025E134; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E044u);  if (depth < kMaxDepth) unit_001B(c, 397u, depth + 1u); else { c.pc = 0x0016F2B0u; return; } if (c.pc != 0x0025E044u) [[unlikely]] return; }
L_0025E044:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E04Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 26u, depth + 1u); else { c.pc = 0x00130280u; return; } if (c.pc != 0x0025E04Cu) [[unlikely]] return; }
L_0025E04C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0025E078; } }
L_0025E054:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0025E074; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E074u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025E074u) [[unlikely]] return; }
L_0025E074:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0025E078:
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025E054u | kUnwind; return; } goto L_0025E054; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025E0E8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E0ACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 340u, depth + 1u); else { c.pc = 0x00197030u; return; } if (c.pc != 0x0025E0ACu) [[unlikely]] return; }
L_0025E0AC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0025E0C8; } }
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 4;
L_0025E0C8:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] - 21756u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E0E8u); set32(c.r[4], ld32((c.r[16].w[0] + 52u)));  if (depth < kMaxDepth) unit_000E(c, 87u, depth + 1u); else { c.pc = 0x00138900u; return; } if (c.pc != 0x0025E0E8u) [[unlikely]] return; }
L_0025E0E8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[3].w[0] - 21520u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    ld128((c.r[3].w[0]) & ~15u, c.r[7]);
    set32(c.r[2], c.r[2].w[0] - 21488u);
    set32(c.r[6], c.r[29].w[0] + 48u);
    set32(c.r[4], c.r[16].w[0] + 108u);
    c.r[3].d[0] = ld64((c.r[3].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[7]);
    st64((c.r[5].w[0] + 16u), c.r[3].d[0]);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[6].w[0]) & ~15u, c.r[3]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E128u); st64((c.r[6].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x0025E128u) [[unlikely]] return; }
L_0025E128:
    set32(c.r[4], c.r[16].w[0] + 72u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E134u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x0025E134u) [[unlikely]] return; }
L_0025E134:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0025E150:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E168u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0025E168u) [[unlikely]] return; }
L_0025E168:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025E198; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0025E17C; } }
    set32(c.r[7], c.r[7].w[0] + 20u);
    c.budget -= 1;
L_0025E17C:
    set32(c.r[8], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[9], ld32((c.r[16].w[0] + 32u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E198u); c.r[10].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 371u, depth + 1u); else { c.pc = 0x0012EBA0u; return; } if (c.pc != 0x0025E198u) [[unlikely]] return; }
L_0025E198:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025E1B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E1C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 297u, depth + 1u); else { c.pc = 0x0025E230u; return; } if (c.pc != 0x0025E1C4u) [[unlikely]] return; }
L_0025E1C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025E1DC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E1DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025E1DCu) [[unlikely]] return; }
L_0025E1DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025E1F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E204u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 297u, depth + 1u); else { c.pc = 0x0025E230u; return; } if (c.pc != 0x0025E204u) [[unlikely]] return; }
L_0025E204:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025E21C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E21Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025E21Cu) [[unlikely]] return; }
L_0025E21C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025E230:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0025E264; } }
L_0025E23C:
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 56u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0025E260; } }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 137u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0025E260; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025E270; } }
L_0025E260:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0025E264:
    c.r[3].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025E23Cu | kUnwind; return; } goto L_0025E23C; } }
L_0025E270:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0025E280:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[0] = ld32((c.r[4].w[0] + 120u));
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 224u)));
    set32(c.r[17], c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E2B8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0025E2B8u) [[unlikely]] return; }
L_0025E2B8:
    set32(c.r[8], ld32((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], c.r[5].w[0] - 21456u);
    set32(c.r[3], c.r[29].w[0] + 96u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 48u), c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[16].w[0] + 52u), c.r[8].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 304u), c.r[7].w[0]);
    st32((c.r[16].w[0] + 308u), c.r[7].w[0]);
    st32((c.r[16].w[0] + 312u), 0u);
    st32((c.r[16].w[0] + 316u), c.r[6].w[0]);
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E304u); st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0025E304u) [[unlikely]] return; }
L_0025E304:
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], 0u + 4u);
    st32((c.r[16].w[0] + 48u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[16].w[0] + 52u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[1].w[0] + 31744u));
    st32((c.r[16].w[0] + 20u), c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E33Cu); st32((c.r[16].w[0] + 24u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x0025E33Cu) [[unlikely]] return; }
L_0025E33C:
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 356u), 0u);
    st32((c.r[16].w[0] + 60u), c.r[17].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E35Cu); set32(c.r[5], c.r[29].w[0] + 96u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025E35Cu) [[unlikely]] return; }
L_0025E35C:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E36Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025E36Cu) [[unlikely]] return; }
L_0025E36C:
    set32(c.r[3], ld32((c.r[18].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0025E528; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] - 21440u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    set32(c.r[3], c.r[3].w[0] - 21424u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st128((c.r[5].w[0]) & ~15u, c.r[6]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    ld128((c.r[3].w[0]) & ~15u, c.r[3]);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    c.f[1] = ld32((c.r[18].w[0] + 84u));
    set32(c.r[3], ld32((c.r[18].w[0] + 68u)));
    c.f[0] = ld32((c.r[1].w[0] + 31736u));
    c.f[1] = fp::cvt_w_s(c.f[1]);
    st32((c.r[3].w[0] + 16u), c.f[0]);
    st32((c.r[3].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[16], c.f[1]);
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 68u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 25;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E3DCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025E3DCu) [[unlikely]] return; }
L_0025E3DC:
    set32(c.r[3], ld32((c.r[18].w[0] + 68u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x63500000u);
    c.r[4].d[0] = c.r[2].d[0] | 20566ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E3F0u); st32((c.r[3].w[0] + 60u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0087(c, 63u, depth + 1u); else { c.pc = 0x0031C6B0u; return; } if (c.pc != 0x0025E3F0u) [[unlikely]] return; }
L_0025E3F0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E3FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 68u, depth + 1u); else { c.pc = 0x0031C750u; return; } if (c.pc != 0x0025E3FCu) [[unlikely]] return; }
L_0025E3FC:
    st64((c.r[29].w[0] + 136u), c.r[2].d[0]);
    set32(c.r[5], c.r[29].w[0] + 136u);
    set32(c.r[6], ld32((c.r[18].w[0] + 68u)));
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[6].w[0] + 256u), c.r[2].d[0]);
    c.r[2].d[0] = ld64((c.r[5].w[0]));
    st64((c.r[4].w[0]), c.r[2].d[0]);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 131u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[6].w[0] + 160u), c.f[0]);
    c.r[2].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[2].d[0] = c.r[2].d[0] << 30;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[6].w[0] + 164u), c.f[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 68u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 29;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E470u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025E470u) [[unlikely]] return; }
L_0025E470:
    set32(c.r[4], ld32((c.r[18].w[0] + 68u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FE00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 68u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E49Cu); set32(c.r[5], c.r[29].w[0] + 64u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025E49Cu) [[unlikely]] return; }
L_0025E49C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x63500000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E4A8u); c.r[4].d[0] = c.r[2].d[0] | 20566ull;  if (depth < kMaxDepth) unit_0087(c, 63u, depth + 1u); else { c.pc = 0x0031C6B0u; return; } if (c.pc != 0x0025E4A8u) [[unlikely]] return; }
L_0025E4A8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E4B4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0087(c, 68u, depth + 1u); else { c.pc = 0x0031C750u; return; } if (c.pc != 0x0025E4B4u) [[unlikely]] return; }
L_0025E4B4:
    st64((c.r[29].w[0] + 120u), c.r[2].d[0]);
    set32(c.r[5], c.r[29].w[0] + 120u);
    set32(c.r[6], ld32((c.r[18].w[0] + 68u)));
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[6].w[0] + 256u), c.r[2].d[0]);
    c.r[2].d[0] = ld64((c.r[5].w[0]));
    st64((c.r[4].w[0]), c.r[2].d[0]);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 115u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[6].w[0] + 160u), c.f[0]);
    c.r[2].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[2].d[0] = c.r[2].d[0] << 30;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[6].w[0] + 164u), c.f[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 68u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 29;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E528u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025E528u) [[unlikely]] return; }
L_0025E528:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0025E540:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[5], 0u + 40u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E55Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 29u, depth + 1u); else { c.pc = 0x00140690u; return; } if (c.pc != 0x0025E55Cu) [[unlikely]] return; }
L_0025E55C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] - 2128u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[2], 0u + 128u);
    st32((c.r[16].w[0] + 20u), 0u);
    st8((c.r[16].w[0] + 24u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 25u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 28u), 0u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E58Cu); st32((c.r[16].w[0] + 32u), 0u);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x0025E58Cu) [[unlikely]] return; }
L_0025E58C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E59Cu); st32((c.r[1].w[0] + 17268u), 0u);  if (depth < kMaxDepth) unit_0011(c, 196u, depth + 1u); else { c.pc = 0x00146E30u; return; } if (c.pc != 0x0025E59Cu) [[unlikely]] return; }
L_0025E59C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[2], c.r[2].w[0] - 21408u);
    st32((c.r[1].w[0] - 3400u), c.r[4].w[0]);
    set32(c.r[5], c.r[29].w[0] + 72u);
    c.r[2].d[0] = ld64((c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E5C0u); st64((c.r[5].w[0]), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0010(c, 62u, depth + 1u); else { c.pc = 0x00140C90u; return; } if (c.pc != 0x0025E5C0u) [[unlikely]] return; }
L_0025E5C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E5C8u);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x0025E5C8u) [[unlikely]] return; }
L_0025E5C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E5D0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0025E5D0u) [[unlikely]] return; }
L_0025E5D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E5D8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_002B(c, 465u, depth + 1u); else { c.pc = 0x001AF560u; return; } if (c.pc != 0x0025E5D8u) [[unlikely]] return; }
L_0025E5D8:
    set32(c.r[2], 0u + 10752u);
    st32((c.r[29].w[0] + 56u), 0u);
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E5ECu); st32((c.r[29].w[0] + 60u), 0u);  if (depth < kMaxDepth) unit_0011(c, 139u, depth + 1u); else { c.pc = 0x00146880u; return; } if (c.pc != 0x0025E5ECu) [[unlikely]] return; }
L_0025E5EC:
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    set32(c.r[4], 0u + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E5FCu); c.r[17].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0025E5FCu) [[unlikely]] return; }
L_0025E5FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0025E610; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E610u); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_002C(c, 41u, depth + 1u); else { c.pc = 0x001B0720u; return; } if (c.pc != 0x0025E610u) [[unlikely]] return; }
L_0025E610:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E628u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025E628u) [[unlikely]] return; }
L_0025E628:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0025E654; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[5].w[0] + 31712u);
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E64Cu); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025E64Cu) [[unlikely]] return; }
L_0025E64C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld8((c.r[16].w[0] + 24u));  if (t) { goto L_0025E66C; } }
L_0025E654:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[5], 0u + 9u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E668u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 66u, depth + 1u); else { c.pc = 0x001B0C20u; return; } if (c.pc != 0x0025E668u) [[unlikely]] return; }
L_0025E668:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 24u));
    c.budget -= 1;
L_0025E66C:
    set32(c.r[2], 0u + 128u);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[3].w[0] + 32u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 36u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 40u), c.r[5].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E68Cu); st32((c.r[3].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0016(c, 293u, depth + 1u); else { c.pc = 0x0015A8F0u; return; } if (c.pc != 0x0025E68Cu) [[unlikely]] return; }
L_0025E68C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E694u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0016(c, 293u, depth + 1u); else { c.pc = 0x0015A8F0u; return; } if (c.pc != 0x0025E694u) [[unlikely]] return; }
L_0025E694:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0025E6B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0025E73C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 2128u);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0025E700; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0025E700; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E700u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025E700u) [[unlikely]] return; }
L_0025E700:
    st32((c.r[18].w[0] + 12u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E70Cu); set32(c.r[16], 0u + 2u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0025E70Cu) [[unlikely]] return; }
L_0025E70C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E724u); st8((c.r[1].w[0] - 25568u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_0010(c, 31u, depth + 1u); else { c.pc = 0x00140700u; return; } if (c.pc != 0x0025E724u) [[unlikely]] return; }
L_0025E724:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0025E740; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E73Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0025E73Cu) [[unlikely]] return; }
L_0025E73C:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0025E740:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0025E760:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0025E770:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0025E7D4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E7A4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025E7A4u) [[unlikely]] return; }
L_0025E7A4:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0025E7D4; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 24u));
    set32(c.r[2], 0u + 128u);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[3].w[0] + 32u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 36u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 40u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E7D4u); set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  if (depth < kMaxDepth) unit_002C(c, 58u, depth + 1u); else { c.pc = 0x001B0B50u; return; } if (c.pc != 0x0025E7D4u) [[unlikely]] return; }
L_0025E7D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025E7F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 10;
    { const bool t = c.r[3].sd[0] <= 0; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0025E854; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0025E834; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E834u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025E834u) [[unlikely]] return; }
L_0025E834:
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[17].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_0025E9A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E84Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 346u, depth + 1u); else { c.pc = 0x0025E9E0u; return; } if (c.pc != 0x0025E84Cu) [[unlikely]] return; }
L_0025E84C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0025E9A8; } }
L_0025E854:
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025E8A8; } }
    st32((c.r[17].w[0] + 28u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E878u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025E878u) [[unlikely]] return; }
L_0025E878:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0025E9A4; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E8A0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025E8A0u) [[unlikely]] return; }
L_0025E8A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025E9A4; } }
L_0025E8A8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 1536u)));
    c.r[2].d[0] = ld16((c.r[2].w[0] + 4u));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025E8C8; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 2;
L_0025E8C8:
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0025E8E4; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 24u));
    c.r[2].d[0] = c.r[2].d[0] ^ 128ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_0025E8E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025E900; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.r[1].d[0] = c.r[2].sd[0] < 61ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0025E900; } }
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0025E900:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E914u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025E914u) [[unlikely]] return; }
L_0025E914:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 24u));
    set32(c.r[3], 0u + 128u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0025E964; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0025E93C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0025E944; } }
L_0025E93C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0025E9A4; } }
L_0025E944:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0025E954; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 24u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0025E9A4; } }
L_0025E954:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 24u));
    set32(c.r[3], c.r[3].w[0] - 4u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 24u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0025E9A4; } }
L_0025E964:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; c.r[1].d[0] = c.r[4].sd[0] < 5ll ? 1ull : 0ull;  if (t) { goto L_0025E98C; } }
    st8((c.r[17].w[0] + 24u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 32u), 0u);
    c.r[5].d[0] = ld8((c.r[17].w[0] + 25u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E980u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 345u, depth + 1u); else { c.pc = 0x0025E9C0u; return; } if (c.pc != 0x0025E980u) [[unlikely]] return; }
L_0025E980:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 25u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0025E9A4; } }
    c.r[1].d[0] = c.r[4].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 1;
L_0025E98C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0025E9A0; } }
    set32(c.r[3], c.r[4].w[0] - 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 24u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0025E9A4; } }
L_0025E9A0:
    st8((c.r[17].w[0] + 24u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0025E9A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0025E9A8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0025E9C0:
    st32((c.r[4].w[0] + 28u), 0u);
    set32(c.r[2], 0u + 10u);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x0025C000u < 16384u) { entry = entries_0057[(t - 0x0025C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0025E9E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E9F8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0025E9F8u) [[unlikely]] return; }
L_0025E9F8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[4], 0u + 255u);  if (t) { goto L_0025EA18; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EA14u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025EA14u) [[unlikely]] return; }
L_0025EA14:
    set32(c.r[4], 0u + 255u);
    c.budget -= 1;
L_0025EA18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EA20u);  if (depth < kMaxDepth) unit_002C(c, 23u, depth + 1u); else { c.pc = 0x001B0420u; return; } if (c.pc != 0x0025EA20u) [[unlikely]] return; }
L_0025EA20:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EA2Cu); set32(c.r[4], ld32((c.r[1].w[0] - 27648u)));  if (depth < kMaxDepth) unit_0056(c, 41u, depth + 1u); else { c.pc = 0x00258700u; return; } if (c.pc != 0x0025EA2Cu) [[unlikely]] return; }
L_0025EA2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EA34u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0025EA34u) [[unlikely]] return; }
L_0025EA34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0025EA44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EA44u);  if (depth < kMaxDepth) unit_0057(c, 96u, depth + 1u); else { c.pc = 0x0025CA50u; return; } if (c.pc != 0x0025EA44u) [[unlikely]] return; }
L_0025EA44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EA4Cu);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x0025EA4Cu) [[unlikely]] return; }
L_0025EA4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EA54u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0025EA54u) [[unlikely]] return; }
L_0025EA54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025EA70:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0025DBD0u | kUnwind; return; } goto L_0025DBD0; }
L_0025EA80:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0025D7E0u | kUnwind; return; } goto L_0025D7E0; }
L_0025EA90:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0025E280u | kUnwind; return; } goto L_0025E280; }
L_0025EAA0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0025D7E0u | kUnwind; return; } goto L_0025D7E0; }
L_0025EAB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
L_0025EAC8:
    set32(c.r[2], c.r[17].w[0] << 3);
    set32(c.r[5], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EAD8u); set32(c.r[4], c.r[16].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x0025EAD8u) [[unlikely]] return; }
L_0025EAD8:
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[3].w[0] + 5140u), 0u);
    c.r[2].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 5156u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025EAC8u | kUnwind; return; } goto L_0025EAC8; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u - 1u);
    c.budget -= 2;
L_0025EAFC:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.r[2].d[0] = c.r[5].sd[0] < 24ll ? 1ull : 0ull;
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 68u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025EAFCu | kUnwind; return; } goto L_0025EAFC; } }
    st8((c.r[16].w[0] + 4868u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = 0ull + 0ull;
    st8((c.r[16].w[0] + 32u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 33u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 34u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 60u), 0u);
    st32((c.r[16].w[0] + 64u), 0u);
    st32((c.r[16].w[0] + 5172u), 0u);
    st32((c.r[16].w[0] + 5176u), 0u);
    st32((c.r[16].w[0] + 5180u), 0u);
    st32((c.r[16].w[0] + 5184u), 0u);
    st32((c.r[16].w[0] + 5188u), 0u);
    st32((c.r[16].w[0] + 5192u), 0u);
    st32((c.r[16].w[0] + 5196u), 0u);
    st32((c.r[16].w[0] + 5200u), 0u);
    st8((c.r[16].w[0] + 5268u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 5128u), 0u);
    st8((c.r[16].w[0] + 5136u), static_cast<std::uint8_t>(0u));
    c.budget -= 22;
L_0025EB7C:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 5000u), 0u);
    c.r[2].d[0] = c.r[3].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025EB7Cu | kUnwind; return; } goto L_0025EB7C; } }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0025EBB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0025EC38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EBD8u);  if (depth < kMaxDepth) unit_0057(c, 477u, depth + 1u); else { c.pc = 0x0025FA00u; return; } if (c.pc != 0x0025EBD8u) [[unlikely]] return; }
L_0025EBD8:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0025EBDC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EBE8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 453u, depth + 1u); else { c.pc = 0x0025F750u; return; } if (c.pc != 0x0025EBE8u) [[unlikely]] return; }
L_0025EBE8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025EBDCu | kUnwind; return; } goto L_0025EBDC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[18].w[0] + 5192u)));  if (t) { goto L_0025EC1C; } }
L_0025EC00:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], ld32((c.r[4].w[0])));  if (t) { goto L_0025EC10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EC10u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0025EC10u) [[unlikely]] return; }
L_0025EC10:
    st32((c.r[18].w[0] + 5192u), 0u);
    st32((c.r[18].w[0] + 5192u), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 5192u)));
    c.budget -= 3;
L_0025EC1C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; c.r[2].d[0] = c.r[17].d[0] << 48;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025EC00u | kUnwind; return; } goto L_0025EC00; } }
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0025EC38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EC38u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0025EC38u) [[unlikely]] return; }
L_0025EC38:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0025EC60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0025EC70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EC8Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 371u, depth + 1u); else { c.pc = 0x0025EC60u; return; } if (c.pc != 0x0025EC8Cu) [[unlikely]] return; }
L_0025EC8C:
    set32(c.r[4], ld32((c.r[17].w[0] + 60u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 8u);
    set32(c.r[2], c.r[4].w[0] + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025ECA4u); st32((c.r[17].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0025ECA4u) [[unlikely]] return; }
L_0025ECA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0025ECC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025ECDCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 371u, depth + 1u); else { c.pc = 0x0025EC60u; return; } if (c.pc != 0x0025ECDCu) [[unlikely]] return; }
L_0025ECDC:
    set32(c.r[3], ld32((c.r[17].w[0] + 60u)));
    st32((c.r[3].w[0]), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[3], c.r[4].w[0] + 8u);
    st32((c.r[17].w[0] + 60u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0025ED10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025ED2Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 371u, depth + 1u); else { c.pc = 0x0025EC60u; return; } if (c.pc != 0x0025ED2Cu) [[unlikely]] return; }
L_0025ED2C:
    set32(c.r[3], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[4], 0u + 1u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[3], c.r[4].w[0] + 8u);
    st32((c.r[17].w[0] + 60u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0025ED60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025ED7Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 371u, depth + 1u); else { c.pc = 0x0025EC60u; return; } if (c.pc != 0x0025ED7Cu) [[unlikely]] return; }
L_0025ED7C:
    set32(c.r[3], ld32((c.r[17].w[0] + 60u)));
    c.r[5].d[0] = c.r[16].d[0] & 255ull;
    st32((c.r[3].w[0]), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[3], c.r[4].w[0] + 8u);
    st32((c.r[17].w[0] + 60u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[5].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0025EDB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EDCCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 371u, depth + 1u); else { c.pc = 0x0025EC60u; return; } if (c.pc != 0x0025EDCCu) [[unlikely]] return; }
L_0025EDCC:
    set32(c.r[3], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[4], 0u + 2u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[3], c.r[4].w[0] + 8u);
    st32((c.r[17].w[0] + 60u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0025EE00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EE1Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 371u, depth + 1u); else { c.pc = 0x0025EC60u; return; } if (c.pc != 0x0025EE1Cu) [[unlikely]] return; }
L_0025EE1C:
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[4], 0u + 1u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 5196u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0025EE4C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 5200u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EE40u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025EE40u) [[unlikely]] return; }
L_0025EE40:
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0025EE5C; } }
L_0025EE4C:
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[4].w[0] + 31752u);
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 4;
L_0025EE5C:
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[3], c.r[3].w[0] + 8u);
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0025EE80:
    set32(c.r[2], ld32((c.r[4].w[0] + 60u)));
    set32(c.r[3], c.r[2].w[0] - 8u);
    st32((c.r[4].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0025EEA8; } }
    st32((c.r[4].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025EEAC; } }
L_0025EEA8:
    set32(c.r[2], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 1;
L_0025EEAC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0025EEC0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[3], ld32((c.r[4].w[0] + 5128u)));  if (t) { goto L_0025EECC; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 1;
L_0025EECC:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 4872u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 5128u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 5000u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 5128u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 5128u), c.r[3].w[0]);  c.pc = t; return; }
L_0025EF00:
    set32(c.r[2], ld32((c.r[4].w[0] + 5128u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0025EF14; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0] + 5128u), c.r[2].w[0]);
    c.budget -= 2;
L_0025EF14:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0025EF20:
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025EF30; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 1;
L_0025EF30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0025EF40:
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025EF5C; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_0025EF5C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0025EF70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[6].w[0])));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EF94u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0025EF94u) [[unlikely]] return; }
L_0025EF94:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0025EFC0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[2], c.r[6].w[0] << 3);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0025EFFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025F078; } }
L_0025EFFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F004u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 255u, depth + 1u); else { c.pc = 0x001475B0u; return; } if (c.pc != 0x0025F004u) [[unlikely]] return; }
L_0025F004:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0025F018; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025F078; } }
L_0025F018:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F020u);  if (depth < kMaxDepth) unit_0011(c, 290u, depth + 1u); else { c.pc = 0x00147BB0u; return; } if (c.pc != 0x0025F020u) [[unlikely]] return; }
L_0025F020:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 92u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F034u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0011(c, 302u, depth + 1u); else { c.pc = 0x00147D10u; return; } if (c.pc != 0x0025F034u) [[unlikely]] return; }
L_0025F034:
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00260000u);
    set32(c.r[19], ld32((c.r[18].w[0] + 5188u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 4240u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F050u); set32(c.r[6], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_0057(c, 452u, depth + 1u); else { c.pc = 0x0025F740u; return; } if (c.pc != 0x0025F050u) [[unlikely]] return; }
L_0025F050:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F060u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 400u, depth + 1u); else { c.pc = 0x0025F0A0u; return; } if (c.pc != 0x0025F060u) [[unlikely]] return; }
L_0025F060:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F074u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 452u, depth + 1u); else { c.pc = 0x0025F740u; return; } if (c.pc != 0x0025F074u) [[unlikely]] return; }
L_0025F074:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0025F078:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0025F0A0:
    set32(c.r[29], c.r[29].w[0] - 224u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[4], 0u + 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F0E8u); st32((c.r[29].w[0] + 216u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0025F0E8u) [[unlikely]] return; }
L_0025F0E8:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F0F4u); c.r[5].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 453u, depth + 1u); else { c.pc = 0x0025F750u; return; } if (c.pc != 0x0025F0F4u) [[unlikely]] return; }
L_0025F0F4:
    set32(c.r[6], ld32((c.r[21].w[0] + 5188u)));
    set32(c.r[4], c.r[29].w[0] + 212u);
    set32(c.r[2], ld32((c.r[21].w[0] + 5184u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F108u); set32(c.r[5], 0u + 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025F108u) [[unlikely]] return; }
L_0025F108:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 212u));
    set32(c.r[2], 0u + 84u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0025F144; } }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 213u));
    set32(c.r[3], 0u + 83u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0025F144; } }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 214u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0025F144; } }
    c.r[3].d[0] = ld8((c.r[29].w[0] + 215u));
    set32(c.r[2], 0u + 88u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0025F154; } }
L_0025F144:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F14Cu); set32(c.r[4], ld32((c.r[29].w[0] + 216u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0025F14Cu) [[unlikely]] return; }
L_0025F14C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025F708; } }
L_0025F154:
    set32(c.r[6], ld32((c.r[21].w[0] + 5188u)));
    set32(c.r[4], c.r[29].w[0] + 220u);
    set32(c.r[2], ld32((c.r[21].w[0] + 5184u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F168u); set32(c.r[5], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025F168u) [[unlikely]] return; }
L_0025F168:
    c.r[2].d[0] = ld16((c.r[29].w[0] + 220u));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(513ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0025F188; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F180u); set32(c.r[4], ld32((c.r[29].w[0] + 216u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0025F180u) [[unlikely]] return; }
L_0025F180:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025F708; } }
L_0025F188:
    set32(c.r[6], ld32((c.r[21].w[0] + 5188u)));
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[2], ld32((c.r[21].w[0] + 5184u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F19Cu); set32(c.r[5], 0u + 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025F19Cu) [[unlikely]] return; }
L_0025F19C:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 208u));
    set32(c.r[4], 0u + 83u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_0025F1D8; } }
    c.r[3].d[0] = ld8((c.r[29].w[0] + 209u));
    set32(c.r[2], 0u + 68u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0025F1D8; } }
    c.r[3].d[0] = ld8((c.r[29].w[0] + 210u));
    set32(c.r[2], 0u + 53u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0025F1D8; } }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 211u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_0025F1E8; } }
L_0025F1D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F1E0u); set32(c.r[4], ld32((c.r[29].w[0] + 216u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0025F1E0u) [[unlikely]] return; }
L_0025F1E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025F708; } }
L_0025F1E8:
    set32(c.r[6], ld32((c.r[21].w[0] + 5188u)));
    set32(c.r[4], c.r[29].w[0] + 223u);
    set32(c.r[2], ld32((c.r[21].w[0] + 5184u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F1FCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025F1FCu) [[unlikely]] return; }
L_0025F1FC:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 223u));
    set32(c.r[16], c.r[23].w[0] << 3);
    set32(c.r[22], c.r[21].w[0] + c.r[16].w[0]);
    set32(c.r[5], 0u + 4u);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st8((c.r[21].w[0] + 32u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], ld32((c.r[21].w[0] + 5188u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 5184u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F228u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025F228u) [[unlikely]] return; }
L_0025F228:
    set32(c.r[3], ld32((c.r[22].w[0])));
    c.r[2].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[17], c.r[2].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F244u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0025F244u) [[unlikely]] return; }
L_0025F244:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0025F264; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F25Cu); set32(c.r[4], ld32((c.r[29].w[0] + 216u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0025F25Cu) [[unlikely]] return; }
L_0025F25C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025F708; } }
L_0025F264:
    c.r[2].d[0] = c.r[22].d[0] + 0ull;
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F284u); set32(c.r[5], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x0025F284u) [[unlikely]] return; }
L_0025F284:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0025F518; } }
L_0025F28C:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[4], c.r[20].w[0] << 1);
    set32(c.r[6], ld32((c.r[21].w[0] + 5188u)));
    set32(c.r[5], 0u + 2u);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], c.r[4].w[0] + c.r[20].w[0]);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[21].w[0] + 5184u)));
    set32(c.r[19], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F2B8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025F2B8u) [[unlikely]] return; }
L_0025F2B8:
    set32(c.r[6], ld32((c.r[21].w[0] + 5188u)));
    set32(c.r[4], c.r[19].w[0] + 4u);
    set32(c.r[2], ld32((c.r[21].w[0] + 5184u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F2CCu); set32(c.r[5], 0u + 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025F2CCu) [[unlikely]] return; }
L_0025F2CC:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_0025F2F8; } }
    c.r[1].d[0] = c.r[1].d[0] | 24465ull;
    c.r[1].d[0] = c.r[3].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0025F2F8; } }
    c.r[2].d[0] = ld16((c.r[19].w[0]));
    c.r[1].d[0] = c.r[2].sd[0] < 6001ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0025F308; } }
L_0025F2F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F300u); set32(c.r[4], ld32((c.r[29].w[0] + 216u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0025F300u) [[unlikely]] return; }
L_0025F300:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025F708; } }
L_0025F308:
    c.r[2].d[0] = ld8((c.r[21].w[0] + 32u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] << 4);  if (t) { goto L_0025F348; } }
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F324u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0025F324u) [[unlikely]] return; }
L_0025F324:
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F340u); set32(c.r[5], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x0025F340u) [[unlikely]] return; }
L_0025F340:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[19].w[0] + 8u)));  if (t) { goto L_0025F368; } }
L_0025F348:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F350u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0025F350u) [[unlikely]] return; }
L_0025F350:
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F364u); set32(c.r[5], c.r[2].w[0] << 4);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x0025F364u) [[unlikely]] return; }
L_0025F364:
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_0025F368:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025F380; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F378u); set32(c.r[4], ld32((c.r[29].w[0] + 216u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0025F378u) [[unlikely]] return; }
L_0025F378:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025F708; } }
L_0025F380:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.r[30].d[0] = 0ull + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 176u), c.r[2].w[0]);  if (t) { goto L_0025F504; } }
L_0025F394:
    c.r[2].d[0] = ld8((c.r[21].w[0] + 32u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025F3B8; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_0025F3C4; } }
L_0025F3B8:
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[3], c.r[18].w[0] << 4);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 3;
L_0025F3C4:
    c.budget -= 2;
    { const bool t = c.r[30].d[0] == 0ull;  if (t) { goto L_0025F3D0; } }
    st32((c.r[30].w[0]), c.r[17].w[0]);
    c.budget -= 1;
L_0025F3D0:
    st32((c.r[17].w[0]), 0u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[6], ld32((c.r[21].w[0] + 5188u)));
    set32(c.r[5], 0u + 2u);
    set32(c.r[2], ld32((c.r[21].w[0] + 5184u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F3ECu); c.r[30].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025F3ECu) [[unlikely]] return; }
L_0025F3EC:
    set32(c.r[6], ld32((c.r[21].w[0] + 5188u)));
    set32(c.r[4], c.r[17].w[0] + 8u);
    set32(c.r[2], ld32((c.r[21].w[0] + 5184u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F400u); set32(c.r[5], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025F400u) [[unlikely]] return; }
L_0025F400:
    set32(c.r[6], ld32((c.r[21].w[0] + 5188u)));
    set32(c.r[4], c.r[17].w[0] + 10u);
    set32(c.r[2], ld32((c.r[21].w[0] + 5184u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F414u); set32(c.r[5], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025F414u) [[unlikely]] return; }
L_0025F414:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[1].d[0] = c.r[4].sd[0] < 23ll ? 1ull : 0ull;  if (t) { goto L_0025F498; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0025F498; } }
    set32(c.r[6], ld32((c.r[21].w[0] + 5188u)));
    set32(c.r[4], c.r[29].w[0] + 204u);
    set32(c.r[2], ld32((c.r[21].w[0] + 5184u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F444u); set32(c.r[5], 0u + 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025F444u) [[unlikely]] return; }
L_0025F444:
    set32(c.r[2], ld32((c.r[29].w[0] + 204u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F450u); set32(c.r[4], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0025F450u) [[unlikely]] return; }
L_0025F450:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0025F46C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F464u); set32(c.r[4], ld32((c.r[29].w[0] + 216u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0025F464u) [[unlikely]] return; }
L_0025F464:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025F708; } }
L_0025F46C:
    set32(c.r[2], ld32((c.r[29].w[0] + 204u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F47Cu); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x0025F47Cu) [[unlikely]] return; }
L_0025F47C:
    set32(c.r[5], ld32((c.r[29].w[0] + 204u)));
    set32(c.r[6], ld32((c.r[21].w[0] + 5188u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 5184u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F490u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025F490u) [[unlikely]] return; }
L_0025F490:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 12u), c.r[16].w[0]);  if (t) { goto L_0025F4CC; } }
L_0025F498:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0025F4B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F4A8u); set32(c.r[4], ld32((c.r[29].w[0] + 216u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0025F4A8u) [[unlikely]] return; }
L_0025F4A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025F708; } }
L_0025F4B0:
    set32(c.r[6], ld32((c.r[21].w[0] + 5188u)));
    set32(c.r[4], c.r[29].w[0] + 200u);
    set32(c.r[2], ld32((c.r[21].w[0] + 5184u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F4C4u); set32(c.r[5], 0u + 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025F4C4u) [[unlikely]] return; }
L_0025F4C4:
    set32(c.r[2], ld32((c.r[29].w[0] + 200u)));
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 2;
L_0025F4CC:
    c.r[2].d[0] = ld8((c.r[21].w[0] + 32u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025F500; } }
    set32(c.r[6], ld32((c.r[21].w[0] + 5188u)));
    set32(c.r[4], c.r[17].w[0] + 16u);
    set32(c.r[2], ld32((c.r[21].w[0] + 5184u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F4ECu); set32(c.r[5], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025F4ECu) [[unlikely]] return; }
L_0025F4EC:
    set32(c.r[6], ld32((c.r[21].w[0] + 5188u)));
    set32(c.r[4], c.r[17].w[0] + 18u);
    set32(c.r[2], ld32((c.r[21].w[0] + 5184u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F500u); set32(c.r[5], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025F500u) [[unlikely]] return; }
L_0025F500:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0025F504:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025F394u | kUnwind; return; } goto L_0025F394; } }
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_0025F518:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025F28Cu | kUnwind; return; } goto L_0025F28C; } }
    c.r[2].d[0] = ld8((c.r[21].w[0] + 32u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_0025F610; } }
    set32(c.r[6], ld32((c.r[21].w[0] + 5188u)));
    set32(c.r[16], c.r[23].w[0] << 2);
    set32(c.r[2], ld32((c.r[21].w[0] + 5184u)));
    set32(c.r[19], c.r[21].w[0] + c.r[16].w[0]);
    set32(c.r[5], 0u + 4u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F554u); set32(c.r[4], c.r[19].w[0] + 5156u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025F554u) [[unlikely]] return; }
L_0025F554:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[17], c.r[2].w[0] + 5156u);
    set32(c.r[18], c.r[2].w[0] + 5140u);
    set32(c.r[2], ld32((c.r[2].w[0] + 5156u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F56Cu); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0025F56Cu) [[unlikely]] return; }
L_0025F56C:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0025F58C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F584u); set32(c.r[4], ld32((c.r[29].w[0] + 216u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0025F584u) [[unlikely]] return; }
L_0025F584:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025F708; } }
L_0025F58C:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F598u); set32(c.r[5], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x0025F598u) [[unlikely]] return; }
L_0025F598:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[2].w[0] + 5140u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0025F5F8; } }
L_0025F5A8:
    set32(c.r[6], ld32((c.r[21].w[0] + 5188u)));
    set32(c.r[4], c.r[29].w[0] + 196u);
    set32(c.r[2], ld32((c.r[21].w[0] + 5184u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F5BCu); set32(c.r[5], 0u + 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025F5BCu) [[unlikely]] return; }
L_0025F5BC:
    set32(c.r[2], ld32((c.r[29].w[0] + 196u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F5C8u); set32(c.r[4], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0025F5C8u) [[unlikely]] return; }
L_0025F5C8:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 196u)));
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F5DCu); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x0025F5DCu) [[unlikely]] return; }
L_0025F5DC:
    set32(c.r[5], ld32((c.r[29].w[0] + 196u)));
    set32(c.r[6], ld32((c.r[21].w[0] + 5188u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 5184u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F5F0u); set32(c.r[4], ld32((c.r[17].w[0])));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025F5F0u) [[unlikely]] return; }
L_0025F5F0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 2;
L_0025F5F8:
    set32(c.r[2], ld32((c.r[19].w[0] + 5156u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025F5A8u | kUnwind; return; } goto L_0025F5A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0025F62C; } }
L_0025F610:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F618u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0025F618u) [[unlikely]] return; }
L_0025F618:
    st32((c.r[21].w[0] + 5172u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 5172u)));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    st32((c.r[21].w[0] + 5176u), 0u);
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 5;
L_0025F62C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[22].w[0])));  if (t) { goto L_0025F6F0; } }
L_0025F634:
    set32(c.r[2], ld32((c.r[22].w[0] + 4u)));
    set32(c.r[3], c.r[19].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[16], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F658u); set32(c.r[4], c.r[17].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0025F658u) [[unlikely]] return; }
L_0025F658:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0025F674; } }
L_0025F660:
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[16].w[0]);
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.budget -= 5;
L_0025F674:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025F660u | kUnwind; return; } goto L_0025F660; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 13u);  if (t) { goto L_0025F6D0; } }
L_0025F688:
    set32(c.r[6], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[3], c.r[6].w[0] - 11u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0025F6A4; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[4].d[0];  if (t) { goto L_0025F6CC; } }
L_0025F6A4:
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0025F6C4; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[3].w[0])));  if (t) { goto L_0025F6C8; } }
L_0025F6C4:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0025F6C8:
    st32((c.r[5].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 1;
L_0025F6CC:
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.budget -= 1;
L_0025F6D0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025F688u | kUnwind; return; } goto L_0025F688; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0025F6E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F6E8u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0025F6E8u) [[unlikely]] return; }
L_0025F6E8:
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[2], ld32((c.r[22].w[0])));
    c.budget -= 2;
L_0025F6F0:
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025F634u | kUnwind; return; } goto L_0025F634; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F704u); set32(c.r[4], ld32((c.r[29].w[0] + 216u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0025F704u) [[unlikely]] return; }
L_0025F704:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0025F708:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_0025F740:
    set32(c.r[2], ld32((c.r[4].w[0] + 5184u)));
    st32((c.r[4].w[0] + 5184u), c.r[5].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 5188u), c.r[6].w[0]);  c.pc = t; return; }
L_0025F750:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[17], c.r[5].w[0] << 3);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0025F8EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_0025F834; } }
L_0025F794:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[4], c.r[21].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[21].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[20], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[19], ld32((c.r[20].w[0] + 8u)));  if (t) { goto L_0025F7E8; } }
L_0025F7B0:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0025F7E4; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0025F7E4; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0025F7E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F7E0u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0025F7E0u) [[unlikely]] return; }
L_0025F7E0:
    st32((c.r[19].w[0] + 12u), 0u);
    c.budget -= 1;
L_0025F7E4:
    set32(c.r[19], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_0025F7E8:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025F7B0u | kUnwind; return; } goto L_0025F7B0; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 32u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0025F818; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0025F830; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F810u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0025F810u) [[unlikely]] return; }
L_0025F810:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 8u), 0u);  if (t) { goto L_0025F830; } }
L_0025F818:
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0025F830; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F82Cu);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0025F82Cu) [[unlikely]] return; }
L_0025F82C:
    st32((c.r[20].w[0] + 8u), 0u);
    c.budget -= 1;
L_0025F830:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_0025F834:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[3].d[0] = c.r[21].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[17].w[0] + c.r[16].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025F794u | kUnwind; return; } goto L_0025F794; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[17], c.r[3].w[0] + 4u);  if (t) { goto L_0025F858; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F858u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0025F858u) [[unlikely]] return; }
L_0025F858:
    st32((c.r[17].w[0]), 0u);
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[22].w[0] << 2);
    st32((c.r[18].w[0]), 0u);
    set32(c.r[19], c.r[17].w[0] + c.r[16].w[0]);
    set32(c.r[21], ld32((c.r[19].w[0] + 5140u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[19].w[0] + 5140u);  if (t) { goto L_0025F898; } }
L_0025F878:
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0025F88C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F88Cu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0025F88Cu) [[unlikely]] return; }
L_0025F88C:
    st32((c.r[21].w[0]), 0u);
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[21], c.r[21].w[0] + 4u);
    c.budget -= 3;
L_0025F898:
    set32(c.r[3], ld32((c.r[19].w[0] + 5156u)));
    c.r[3].d[0] = c.r[20].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025F878u | kUnwind; return; } goto L_0025F878; } }
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0025F8BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F8BCu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0025F8BCu) [[unlikely]] return; }
L_0025F8BC:
    st32((c.r[18].w[0]), 0u);
    set32(c.r[3], c.r[17].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0] + 5156u), 0u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 32u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0025F8EC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 5172u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0025F8E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F8E8u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0025F8E8u) [[unlikely]] return; }
L_0025F8E8:
    st32((c.r[16].w[0] + 5172u), 0u);
    c.budget -= 1;
L_0025F8EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0025F920:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F944u); st32((c.r[29].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0025F944u) [[unlikely]] return; }
L_0025F944:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F94Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 477u, depth + 1u); else { c.pc = 0x0025FA00u; return; } if (c.pc != 0x0025F94Cu) [[unlikely]] return; }
L_0025F94C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F954u); set32(c.r[4], 0u + 8192u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0025F954u) [[unlikely]] return; }
L_0025F954:
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[5], 0u + 8192u);  if (t) { goto L_0025F974; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F96Cu); set32(c.r[4], ld32((c.r[29].w[0] + 44u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0025F96Cu) [[unlikely]] return; }
L_0025F96C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025F9F0; } }
L_0025F974:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F97Cu);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x0025F97Cu) [[unlikely]] return; }
L_0025F97C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F984u); set32(c.r[4], 0u + 16384u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0025F984u) [[unlikely]] return; }
L_0025F984:
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[5], 0u + 16384u);  if (t) { goto L_0025F9A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F99Cu); set32(c.r[4], ld32((c.r[29].w[0] + 44u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0025F99Cu) [[unlikely]] return; }
L_0025F99C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025F9F0; } }
L_0025F9A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F9ACu);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x0025F9ACu) [[unlikely]] return; }
L_0025F9AC:
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F9BCu); st32((c.r[16].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0025F9BCu) [[unlikely]] return; }
L_0025F9BC:
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[5], 0u + 8u);  if (t) { goto L_0025F9DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F9D4u); set32(c.r[4], ld32((c.r[29].w[0] + 44u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0025F9D4u) [[unlikely]] return; }
L_0025F9D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025F9F0; } }
L_0025F9DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F9E4u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x0025F9E4u) [[unlikely]] return; }
L_0025F9E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F9ECu); set32(c.r[4], ld32((c.r[29].w[0] + 44u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0025F9ECu) [[unlikely]] return; }
L_0025F9EC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0025F9F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0025FA00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0025FA24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FA24u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0025FA24u) [[unlikely]] return; }
L_0025FA24:
    st32((c.r[16].w[0] + 52u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0025FA3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FA3Cu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0025FA3Cu) [[unlikely]] return; }
L_0025FA3C:
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 60u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0025FA58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FA58u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0025FA58u) [[unlikely]] return; }
L_0025FA58:
    st32((c.r[16].w[0] + 64u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025FA70:
    st32((c.r[4].w[0] + 48u), 0u);
    c.r[12].d[0] = 0ull + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = c.r[5].d[0] & 65535ull;  if (t) { goto L_0025FAF8; } }
L_0025FA84:
    set32(c.r[8], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[8].w[0])));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = 0ull + 0ull;  if (t) { goto L_0025FADC; } }
L_0025FA94:
    set32(c.r[2], ld32((c.r[8].w[0] + 4u)));
    c.r[6].d[0] = c.r[10].d[0] & 65535ull;
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[3].w[0]));
    c.budget -= 9;
    { const bool t = c.r[9].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[10].w[0] + 1u);  if (t) { goto L_0025FAD8; } }
    st8((c.r[4].w[0] + 5268u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[12].d[0] = c.r[3].d[0] + 0ull;
    st16((c.r[4].w[0] + 5270u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 5272u), static_cast<std::uint16_t>(c.r[10].w[0]));
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    st32((c.r[4].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 40u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { goto L_0025FAEC; } }
L_0025FAD8:
    c.r[10].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_0025FADC:
    c.r[2].d[0] = c.r[10].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025FA94u | kUnwind; return; } goto L_0025FA94; } }
L_0025FAEC:
    c.budget -= 2;
    { const bool t = c.r[12].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0025FB08; } }
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.budget -= 1;
L_0025FAF8:
    c.r[2].d[0] = c.r[11].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[11].w[0] << 3);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025FA84u | kUnwind; return; } goto L_0025FA84; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_0025FB08:
    c.budget -= 2;
    { st32((c.r[4].w[0] + 36u), c.r[2].w[0]);  goto L_0025FB50; }
L_0025FB10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 5128u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0025FB40; } }
    st32((c.r[4].w[0] + 5132u), c.r[3].w[0]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[4].w[0] + 5128u), 0u);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull; st8((c.r[4].w[0] + 5136u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0025FB40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FB40u);  if (depth < kMaxDepth) unit_0057(c, 486u, depth + 1u); else { c.pc = 0x0025FB50u; return; } if (c.pc != 0x0025FB40u) [[unlikely]] return; }
L_0025FB40:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0025FB50:
    set32(c.r[29], c.r[29].w[0] - 160u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 15;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[21].d[0] = c.r[4].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_0058(c, 35u, depth); } }
    c.r[3].d[0] = ld8((c.r[21].w[0] + 5136u));
    set32(c.r[19], 0u - 1u);
    set32(c.r[20], ld32((c.r[21].w[0] + 48u)));
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0025FBDC; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 5128u)));
    set32(c.r[5], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[21].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[20], ld32((c.r[5].w[0] + 4872u)));
    set32(c.r[19], ld32((c.r[5].w[0] + 5000u)));
    st32((c.r[21].w[0] + 5128u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[21].w[0] + 5128u)));
    set32(c.r[3], ld32((c.r[21].w[0] + 5132u)));
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0025FBDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FBDCu); st8((c.r[21].w[0] + 5136u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0057(c, 388u, depth + 1u); else { c.pc = 0x0025EF00u; return; } if (c.pc != 0x0025FBDCu) [[unlikely]] return; }
L_0025FBDC:
    c.r[3].d[0] = ld8((c.r[21].w[0] + 32u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0025FC1C; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 5268u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 16u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[5], c.r[21].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[3], ld32((c.r[5].w[0] + 5140u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[21].w[0] + 5172u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 18u)));
    st32((c.r[21].w[0] + 5176u), c.r[3].w[0]);
    c.budget -= 11;
L_0025FC1C:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(23ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { [[clang::musttail]] return unit_0058(c, 33u, depth); } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 31792u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0025C000u < 16384u) { entry = entries_0057[(t - 0x0025C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0025FC44:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 8u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[21].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FC5Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0057(c, 372u, depth + 1u); else { c.pc = 0x0025EC70u; return; } if (c.pc != 0x0025FC5Cu) [[unlikely]] return; }
L_0025FC5C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0025FC70; } }
    set32(c.r[18], 0u + 15u);
    c.budget -= 1;
L_0025FC70:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0058(c, 33u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 15u);  if (t) { [[clang::musttail]] return unit_0058(c, 33u, depth); } }
L_0025FC88:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 8u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[21].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FCA0u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0057(c, 381u, depth + 1u); else { c.pc = 0x0025EDB0u; return; } if (c.pc != 0x0025FCA0u) [[unlikely]] return; }
L_0025FCA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], ld32((c.r[20].w[0])));  if (t) { [[clang::musttail]] return unit_0058(c, 34u, depth); } }
L_0025FCA8:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FCB4u); c.r[17].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0057(c, 386u, depth + 1u); else { c.pc = 0x0025EE80u; return; } if (c.pc != 0x0025FCB4u) [[unlikely]] return; }
L_0025FCB4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FCC0u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 386u, depth + 1u); else { c.pc = 0x0025EE80u; return; } if (c.pc != 0x0025FCC0u) [[unlikely]] return; }
L_0025FCC0:
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FCD0u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0025FCD0u) [[unlikely]] return; }
L_0025FCD0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FCDCu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 372u, depth + 1u); else { c.pc = 0x0025EC70u; return; } if (c.pc != 0x0025FCDCu) [[unlikely]] return; }
L_0025FCDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0058(c, 33u, depth); } }
L_0025FCE4:
    set32(c.r[4], c.r[18].w[0] << 2);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[21].w[0] + c.r[4].w[0]);
    st32((c.r[4].w[0] + 5204u), 0u);
    set32(c.r[16], c.r[4].w[0] + 5204u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 8u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0025FD18; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 10u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FD10u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 375u, depth + 1u); else { c.pc = 0x0025ECC0u; return; } if (c.pc != 0x0025FD10u) [[unlikely]] return; }
L_0025FD10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_0025FD58; } }
L_0025FD18:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0025FD34; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FD2Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 377u, depth + 1u); else { c.pc = 0x0025ED10u; return; } if (c.pc != 0x0025FD2Cu) [[unlikely]] return; }
L_0025FD2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025FD54; } }
L_0025FD34:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0025FD54; } }
    c.r[5].d[0] = ld16((c.r[20].w[0] + 10u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FD4Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 383u, depth + 1u); else { c.pc = 0x0025EE00u; return; } if (c.pc != 0x0025FD4Cu) [[unlikely]] return; }
L_0025FD4C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 10u)));
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_0025FD54:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0025FD58:
    c.r[3].d[0] = c.r[18].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0025FD68; } }
    set32(c.r[18], 0u + 15u);
    c.budget -= 1;
L_0025FD68:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0058(c, 33u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 15u);  if (t) { [[clang::musttail]] return unit_0058(c, 33u, depth); } }
L_0025FD80:
    set32(c.r[3], ld32((c.r[21].w[0] + 60u)));
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] - 8u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 60u), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_0058(c, 33u, depth); } }
L_0025FD94:
    set32(c.r[20], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025FBDCu | kUnwind; return; } goto L_0025FBDC; } }
L_0025FDA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FDA8u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 386u, depth + 1u); else { c.pc = 0x0025EE80u; return; } if (c.pc != 0x0025FDA8u) [[unlikely]] return; }
L_0025FDA8:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FDB4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 390u, depth + 1u); else { c.pc = 0x0025EF40u; return; } if (c.pc != 0x0025FDB4u) [[unlikely]] return; }
L_0025FDB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0058(c, 33u, depth); } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 10u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0025FDD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FDD4u);  if (depth < kMaxDepth) unit_0057(c, 379u, depth + 1u); else { c.pc = 0x0025ED60u; return; } if (c.pc != 0x0025FDD4u) [[unlikely]] return; }
L_0025FDD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], ld32((c.r[20].w[0] + 12u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025FBDCu | kUnwind; return; } goto L_0025FBDC; } }
L_0025FDDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FDE4u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 386u, depth + 1u); else { c.pc = 0x0025EE80u; return; } if (c.pc != 0x0025FDE4u) [[unlikely]] return; }
L_0025FDE4:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FDF0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 390u, depth + 1u); else { c.pc = 0x0025EF40u; return; } if (c.pc != 0x0025FDF0u) [[unlikely]] return; }
L_0025FDF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0058(c, 33u, depth); } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 10u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0025FE10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FE10u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0057(c, 379u, depth + 1u); else { c.pc = 0x0025ED60u; return; } if (c.pc != 0x0025FE10u) [[unlikely]] return; }
L_0025FE10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], ld32((c.r[20].w[0] + 12u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025FBDCu | kUnwind; return; } goto L_0025FBDC; } }
L_0025FE18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FE20u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 386u, depth + 1u); else { c.pc = 0x0025EE80u; return; } if (c.pc != 0x0025FE20u) [[unlikely]] return; }
L_0025FE20:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FE2Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 389u, depth + 1u); else { c.pc = 0x0025EF20u; return; } if (c.pc != 0x0025FE2Cu) [[unlikely]] return; }
L_0025FE2C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FE38u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 386u, depth + 1u); else { c.pc = 0x0025EE80u; return; } if (c.pc != 0x0025FE38u) [[unlikely]] return; }
L_0025FE38:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FE44u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 389u, depth + 1u); else { c.pc = 0x0025EF20u; return; } if (c.pc != 0x0025FE44u) [[unlikely]] return; }
L_0025FE44:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 26u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { [[clang::musttail]] return unit_0058(c, 33u, depth); } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 31760u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0025C000u < 16384u) { entry = entries_0057[(t - 0x0025C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0025FE70:
    c.r[5].d[0] = c.r[16].d[0] ^ c.r[2].d[0];
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FE80u); c.r[5].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0057(c, 379u, depth + 1u); else { c.pc = 0x0025ED60u; return; } if (c.pc != 0x0025FE80u) [[unlikely]] return; }
L_0025FE80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0058(c, 33u, depth); } }
L_0025FE88:
    c.r[5].d[0] = c.r[16].d[0] ^ c.r[2].d[0];
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FE98u); c.r[5].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0057(c, 379u, depth + 1u); else { c.pc = 0x0025ED60u; return; } if (c.pc != 0x0025FE98u) [[unlikely]] return; }
L_0025FE98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0058(c, 33u, depth); } }
L_0025FEA0:
    c.r[5].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FEACu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 379u, depth + 1u); else { c.pc = 0x0025ED60u; return; } if (c.pc != 0x0025FEACu) [[unlikely]] return; }
L_0025FEAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0058(c, 33u, depth); } }
L_0025FEB4:
    c.r[5].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FEC4u); c.r[5].d[0] = c.r[5].d[0] ^ 1ull;  if (depth < kMaxDepth) unit_0057(c, 379u, depth + 1u); else { c.pc = 0x0025ED60u; return; } if (c.pc != 0x0025FEC4u) [[unlikely]] return; }
L_0025FEC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0058(c, 33u, depth); } }
L_0025FECC:
    c.r[5].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FED8u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 379u, depth + 1u); else { c.pc = 0x0025ED60u; return; } if (c.pc != 0x0025FED8u) [[unlikely]] return; }
L_0025FED8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0058(c, 33u, depth); } }
L_0025FEE0:
    c.r[5].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FEF0u); c.r[5].d[0] = c.r[5].d[0] ^ 1ull;  if (depth < kMaxDepth) unit_0057(c, 379u, depth + 1u); else { c.pc = 0x0025ED60u; return; } if (c.pc != 0x0025FEF0u) [[unlikely]] return; }
L_0025FEF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0058(c, 33u, depth); } }
L_0025FEF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FF00u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 386u, depth + 1u); else { c.pc = 0x0025EE80u; return; } if (c.pc != 0x0025FF00u) [[unlikely]] return; }
L_0025FF00:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FF0Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 389u, depth + 1u); else { c.pc = 0x0025EF20u; return; } if (c.pc != 0x0025FF0Cu) [[unlikely]] return; }
L_0025FF0C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FF18u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 386u, depth + 1u); else { c.pc = 0x0025EE80u; return; } if (c.pc != 0x0025FF18u) [[unlikely]] return; }
L_0025FF18:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FF24u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 389u, depth + 1u); else { c.pc = 0x0025EF20u; return; } if (c.pc != 0x0025FF24u) [[unlikely]] return; }
L_0025FF24:
    set32(c.r[5], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FF30u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 375u, depth + 1u); else { c.pc = 0x0025ECC0u; return; } if (c.pc != 0x0025FF30u) [[unlikely]] return; }
L_0025FF30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0058(c, 33u, depth); } }
L_0025FF38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FF40u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 386u, depth + 1u); else { c.pc = 0x0025EE80u; return; } if (c.pc != 0x0025FF40u) [[unlikely]] return; }
L_0025FF40:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FF4Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 386u, depth + 1u); else { c.pc = 0x0025EE80u; return; } if (c.pc != 0x0025FF4Cu) [[unlikely]] return; }
L_0025FF4C:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FF58u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 389u, depth + 1u); else { c.pc = 0x0025EF20u; return; } if (c.pc != 0x0025FF58u) [[unlikely]] return; }
L_0025FF58:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FF68u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 389u, depth + 1u); else { c.pc = 0x0025EF20u; return; } if (c.pc != 0x0025FF68u) [[unlikely]] return; }
L_0025FF68:
    set32(c.r[5], c.r[16].w[0] - c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FF74u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 375u, depth + 1u); else { c.pc = 0x0025ECC0u; return; } if (c.pc != 0x0025FF74u) [[unlikely]] return; }
L_0025FF74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0058(c, 33u, depth); } }
L_0025FF7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FF84u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 386u, depth + 1u); else { c.pc = 0x0025EE80u; return; } if (c.pc != 0x0025FF84u) [[unlikely]] return; }
L_0025FF84:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FF90u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 389u, depth + 1u); else { c.pc = 0x0025EF20u; return; } if (c.pc != 0x0025FF90u) [[unlikely]] return; }
L_0025FF90:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FF9Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 386u, depth + 1u); else { c.pc = 0x0025EE80u; return; } if (c.pc != 0x0025FF9Cu) [[unlikely]] return; }
L_0025FF9C:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FFA8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 389u, depth + 1u); else { c.pc = 0x0025EF20u; return; } if (c.pc != 0x0025FFA8u) [[unlikely]] return; }
L_0025FFA8:
    mmi::mult(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FFB4u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 375u, depth + 1u); else { c.pc = 0x0025ECC0u; return; } if (c.pc != 0x0025FFB4u) [[unlikely]] return; }
L_0025FFB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0058(c, 33u, depth); } }
L_0025FFBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FFC4u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 386u, depth + 1u); else { c.pc = 0x0025EE80u; return; } if (c.pc != 0x0025FFC4u) [[unlikely]] return; }
L_0025FFC4:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FFD0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 389u, depth + 1u); else { c.pc = 0x0025EF20u; return; } if (c.pc != 0x0025FFD0u) [[unlikely]] return; }
L_0025FFD0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_0058(c, 33u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FFE4u);  if (depth < kMaxDepth) unit_0057(c, 386u, depth + 1u); else { c.pc = 0x0025EE80u; return; } if (c.pc != 0x0025FFE4u) [[unlikely]] return; }
L_0025FFE4:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FFF0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 389u, depth + 1u); else { c.pc = 0x0025EF20u; return; } if (c.pc != 0x0025FFF0u) [[unlikely]] return; }
L_0025FFF0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; mmi::div(c, 0, c.r[2].w[0], c.r[16].w[0]);  if (t) { goto L_0025FFFC; } }
    breakpoint(c, 0x0025FFF8u);
    c.budget -= 1;
L_0025FFFC:
    c.r[5].d[0] = c.lo.d[0];
    c.budget -= 1;
    [[clang::musttail]] return unit_0058(c, 1u, depth);
}

}
