#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_000E[4096] = {
    1, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 6, 0, 0, 0, 0, 7, 0, 0, 0, 0, 8, 0, 9, 0,
    10, 0, 11, 0, 0, 0, 0, 12, 0, 13, 0, 0, 0, 14, 0, 0, 15, 0, 0, 16, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 0, 0,
    23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 25, 0, 26, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29,
    0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0,
    34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0,
    0, 0, 39, 0, 0, 0, 0, 40, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 46,
    0, 0, 47, 0, 0, 48, 0, 49, 0, 0, 0, 50, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0,
    0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0,
    0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0,
    74, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 79, 0, 0, 80,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0,
    87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 89, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0,
    93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 99, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0,
    0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 119, 0,
    0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0,
    0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0,
    0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 136, 0, 137, 0, 0, 138,
    0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 143, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 149, 0, 150, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0,
    152, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155,
    156, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0,
    164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0,
    0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0,
    0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0,
    181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0,
    185, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 196, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 202, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 204, 0, 0, 205, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 0,
    0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0,
    0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    216, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 218, 219, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0,
    223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 225, 0, 226, 0, 227, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 229, 0,
    0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 238, 0, 239, 0,
    240, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0,
    248, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 251, 0, 252, 0, 253, 0, 0, 0, 0, 0,
    254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0,
    259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0,
    264, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0,
    0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0,
    272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0,
    282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 285, 0, 0,
    0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 289,
    0, 0, 0, 290, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 293, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 296, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 298,
    0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 302,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 310, 0, 0, 311, 0, 0, 312, 0, 0, 0, 0, 0,
    313, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 317, 0, 0, 0, 0, 0,
    0, 318, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 323,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 327,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 332,
    0, 0, 0, 333, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 342, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0,
    0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 351, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 357, 0,
    0, 358, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 361, 0, 0, 0, 362, 0, 0, 363, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 367, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 369, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 371, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 374, 0, 0, 0,
    375, 0, 0, 0, 376, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 380, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 383, 0, 0, 0, 384, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    387, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0,
    0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0,
    0, 0, 395, 0, 0, 0, 0, 0, 396, 0, 0, 0, 397, 0, 0, 0, 398, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 408, 0, 0, 0, 409, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 412, 0, 0, 413, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 420, 0, 0, 0, 0, 0, 421, 0, 422, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 423, 0, 0, 0, 0, 424, 0, 0, 0, 425, 0, 0, 0, 426, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 430, 0, 431, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 434, 0, 435,
    0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 438, 0, 0, 0,
    0, 0, 0, 0, 439, 0, 0, 0, 440, 0, 0, 0, 441, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 444, 0, 0, 0,
    0, 445, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 448, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 450,
    0, 0, 0, 0, 451, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0,
    0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463,
    0, 0, 0, 464, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 467, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 470, 0, 0, 471, 0, 0, 472, 0, 0, 0, 0, 0, 473, 0,
    0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 475, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 478, 0,
};

void unit_000E(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00138000;
    case 2u: goto L_00138008;
    case 3u: goto L_0013801C;
    case 4u: goto L_00138030;
    case 5u: goto L_00138040;
    case 6u: goto L_00138048;
    case 7u: goto L_0013805C;
    case 8u: goto L_00138070;
    case 9u: goto L_00138078;
    case 10u: goto L_00138080;
    case 11u: goto L_00138088;
    case 12u: goto L_0013809C;
    case 13u: goto L_001380A4;
    case 14u: goto L_001380B4;
    case 15u: goto L_001380C0;
    case 16u: goto L_001380CC;
    case 17u: goto L_001380D4;
    case 18u: goto L_001380F0;
    case 19u: goto L_00138134;
    case 20u: goto L_00138140;
    case 21u: goto L_00138158;
    case 22u: goto L_00138170;
    case 23u: goto L_00138180;
    case 24u: goto L_001381A0;
    case 25u: goto L_001381AC;
    case 26u: goto L_001381B4;
    case 27u: goto L_001381C0;
    case 28u: goto L_001381D0;
    case 29u: goto L_001381FC;
    case 30u: goto L_00138218;
    case 31u: goto L_0013822C;
    case 32u: goto L_00138250;
    case 33u: goto L_0013826C;
    case 34u: goto L_00138280;
    case 35u: goto L_001382C0;
    case 36u: goto L_001382D0;
    case 37u: goto L_001382E4;
    case 38u: goto L_001382F4;
    case 39u: goto L_00138308;
    case 40u: goto L_0013831C;
    case 41u: goto L_00138324;
    case 42u: goto L_00138338;
    case 43u: goto L_00138348;
    case 44u: goto L_0013835C;
    case 45u: goto L_0013836C;
    case 46u: goto L_0013837C;
    case 47u: goto L_00138388;
    case 48u: goto L_00138394;
    case 49u: goto L_0013839C;
    case 50u: goto L_001383AC;
    case 51u: goto L_001383B8;
    case 52u: goto L_001383D0;
    case 53u: goto L_001383F0;
    case 54u: goto L_00138420;
    case 55u: goto L_00138444;
    case 56u: goto L_00138450;
    case 57u: goto L_0013848C;
    case 58u: goto L_001384C0;
    case 59u: goto L_001384D0;
    case 60u: goto L_001384F4;
    case 61u: goto L_00138504;
    case 62u: goto L_00138514;
    case 63u: goto L_00138540;
    case 64u: goto L_00138570;
    case 65u: goto L_00138588;
    case 66u: goto L_001385A0;
    case 67u: goto L_001385B4;
    case 68u: goto L_001385C8;
    case 69u: goto L_00138610;
    case 70u: goto L_00138620;
    case 71u: goto L_00138640;
    case 72u: goto L_00138658;
    case 73u: goto L_00138670;
    case 74u: goto L_00138680;
    case 75u: goto L_00138690;
    case 76u: goto L_001386B8;
    case 77u: goto L_001386C4;
    case 78u: goto L_001386E8;
    case 79u: goto L_001386F0;
    case 80u: goto L_001386FC;
    case 81u: goto L_00138750;
    case 82u: goto L_001387D0;
    case 83u: goto L_00138840;
    case 84u: goto L_001388A0;
    case 85u: goto L_001388C0;
    case 86u: goto L_001388F0;
    case 87u: goto L_00138900;
    case 88u: goto L_00138928;
    case 89u: goto L_00138930;
    case 90u: goto L_00138940;
    case 91u: goto L_00138950;
    case 92u: goto L_00138974;
    case 93u: goto L_00138980;
    case 94u: goto L_001389A8;
    case 95u: goto L_001389BC;
    case 96u: goto L_001389CC;
    case 97u: goto L_001389D4;
    case 98u: goto L_00138A30;
    case 99u: goto L_00138A90;
    case 100u: goto L_00138A9C;
    case 101u: goto L_00138AC4;
    case 102u: goto L_00138AFC;
    case 103u: goto L_00138B24;
    case 104u: goto L_00138B34;
    case 105u: goto L_00138B60;
    case 106u: goto L_00138B78;
    case 107u: goto L_00138BA0;
    case 108u: goto L_00138BB4;
    case 109u: goto L_00138BE0;
    case 110u: goto L_00138BF4;
    case 111u: goto L_00138C2C;
    case 112u: goto L_00138C44;
    case 113u: goto L_00138C70;
    case 114u: goto L_00138C94;
    case 115u: goto L_00138CA8;
    case 116u: goto L_00138CC4;
    case 117u: goto L_00138CD8;
    case 118u: goto L_00138CE8;
    case 119u: goto L_00138CF8;
    case 120u: goto L_00138D08;
    case 121u: goto L_00138D1C;
    case 122u: goto L_00138D28;
    case 123u: goto L_00138D44;
    case 124u: goto L_00138D70;
    case 125u: goto L_00138DF0;
    case 126u: goto L_00138E14;
    case 127u: goto L_00138E2C;
    case 128u: goto L_00138E40;
    case 129u: goto L_00138E6C;
    case 130u: goto L_00138E88;
    case 131u: goto L_00138E9C;
    case 132u: goto L_00138EAC;
    case 133u: goto L_00138EBC;
    case 134u: goto L_00138ECC;
    case 135u: goto L_00138EE0;
    case 136u: goto L_00138EE8;
    case 137u: goto L_00138EF0;
    case 138u: goto L_00138EFC;
    case 139u: goto L_00138F04;
    case 140u: goto L_00138F14;
    case 141u: goto L_00138F40;
    case 142u: goto L_00138F58;
    case 143u: goto L_00138F8C;
    case 144u: goto L_00138F98;
    case 145u: goto L_00138FB8;
    case 146u: goto L_00138FF0;
    case 147u: goto L_0013902C;
    case 148u: goto L_00139040;
    case 149u: goto L_00139048;
    case 150u: goto L_00139050;
    case 151u: goto L_00139070;
    case 152u: goto L_00139080;
    case 153u: goto L_001390A0;
    case 154u: goto L_001390C4;
    case 155u: goto L_001390FC;
    case 156u: goto L_00139100;
    case 157u: goto L_00139120;
    case 158u: goto L_00139140;
    case 159u: goto L_00139164;
    case 160u: goto L_0013919C;
    case 161u: goto L_001391C0;
    case 162u: goto L_001391DC;
    case 163u: goto L_001391F0;
    case 164u: goto L_00139200;
    case 165u: goto L_00139234;
    case 166u: goto L_0013924C;
    case 167u: goto L_00139270;
    case 168u: goto L_00139284;
    case 169u: goto L_0013929C;
    case 170u: goto L_001392B0;
    case 171u: goto L_001392E0;
    case 172u: goto L_001392F0;
    case 173u: goto L_00139328;
    case 174u: goto L_00139340;
    case 175u: goto L_00139378;
    case 176u: goto L_0013938C;
    case 177u: goto L_001393A4;
    case 178u: goto L_001393C0;
    case 179u: goto L_001393D4;
    case 180u: goto L_001393EC;
    case 181u: goto L_00139400;
    case 182u: goto L_00139418;
    case 183u: goto L_00139460;
    case 184u: goto L_00139470;
    case 185u: goto L_00139480;
    case 186u: goto L_00139490;
    case 187u: goto L_001394A0;
    case 188u: goto L_001394B0;
    case 189u: goto L_001394C0;
    case 190u: goto L_001394D0;
    case 191u: goto L_001394F0;
    case 192u: goto L_00139520;
    case 193u: goto L_00139528;
    case 194u: goto L_001395B0;
    case 195u: goto L_001395EC;
    case 196u: goto L_001395F0;
    case 197u: goto L_00139618;
    case 198u: goto L_00139640;
    case 199u: goto L_001396A0;
    case 200u: goto L_001396C8;
    case 201u: goto L_001396F0;
    case 202u: goto L_001396F8;
    case 203u: goto L_00139724;
    case 204u: goto L_00139740;
    case 205u: goto L_0013974C;
    case 206u: goto L_00139758;
    case 207u: goto L_00139770;
    case 208u: goto L_00139790;
    case 209u: goto L_001397A8;
    case 210u: goto L_001397D0;
    case 211u: goto L_001397F0;
    case 212u: goto L_00139810;
    case 213u: goto L_00139834;
    case 214u: goto L_00139840;
    case 215u: goto L_00139854;
    case 216u: goto L_00139880;
    case 217u: goto L_001398A0;
    case 218u: goto L_001398BC;
    case 219u: goto L_001398C0;
    case 220u: goto L_001398D0;
    case 221u: goto L_001398E0;
    case 222u: goto L_001398F0;
    case 223u: goto L_00139900;
    case 224u: goto L_00139930;
    case 225u: goto L_00139938;
    case 226u: goto L_00139940;
    case 227u: goto L_00139948;
    case 228u: goto L_00139960;
    case 229u: goto L_00139978;
    case 230u: goto L_00139990;
    case 231u: goto L_001399C4;
    case 232u: goto L_001399D4;
    case 233u: goto L_00139A30;
    case 234u: goto L_00139A90;
    case 235u: goto L_00139AA8;
    case 236u: goto L_00139AB0;
    case 237u: goto L_00139AE8;
    case 238u: goto L_00139AF0;
    case 239u: goto L_00139AF8;
    case 240u: goto L_00139B00;
    case 241u: goto L_00139B18;
    case 242u: goto L_00139B48;
    case 243u: goto L_00139B64;
    case 244u: goto L_00139B94;
    case 245u: goto L_00139BB0;
    case 246u: goto L_00139BC8;
    case 247u: goto L_00139BF0;
    case 248u: goto L_00139C00;
    case 249u: goto L_00139C18;
    case 250u: goto L_00139C50;
    case 251u: goto L_00139C58;
    case 252u: goto L_00139C60;
    case 253u: goto L_00139C68;
    case 254u: goto L_00139C80;
    case 255u: goto L_00139CB0;
    case 256u: goto L_00139CC0;
    case 257u: goto L_00139CE4;
    case 258u: goto L_00139CF4;
    case 259u: goto L_00139D00;
    case 260u: goto L_00139D74;
    case 261u: goto L_00139D9C;
    case 262u: goto L_00139DC4;
    case 263u: goto L_00139DEC;
    case 264u: goto L_00139E00;
    case 265u: goto L_00139E20;
    case 266u: goto L_00139E70;
    case 267u: goto L_00139E90;
    case 268u: goto L_00139EAC;
    case 269u: goto L_00139EC0;
    case 270u: goto L_00139ED4;
    case 271u: goto L_00139EEC;
    case 272u: goto L_00139F00;
    case 273u: goto L_00139F50;
    case 274u: goto L_00139FC4;
    case 275u: goto L_00139FE8;
    case 276u: goto L_0013A014;
    case 277u: goto L_0013A040;
    case 278u: goto L_0013A080;
    case 279u: goto L_0013A0B8;
    case 280u: goto L_0013A0C8;
    case 281u: goto L_0013A0F0;
    case 282u: goto L_0013A100;
    case 283u: goto L_0013A140;
    case 284u: goto L_0013A158;
    case 285u: goto L_0013A174;
    case 286u: goto L_0013A194;
    case 287u: goto L_0013A22C;
    case 288u: goto L_0013A26C;
    case 289u: goto L_0013A27C;
    case 290u: goto L_0013A28C;
    case 291u: goto L_0013A2A0;
    case 292u: goto L_0013A2C0;
    case 293u: goto L_0013A310;
    case 294u: goto L_0013A324;
    case 295u: goto L_0013A33C;
    case 296u: goto L_0013A350;
    case 297u: goto L_0013A364;
    case 298u: goto L_0013A37C;
    case 299u: goto L_0013A390;
    case 300u: goto L_0013A3B0;
    case 301u: goto L_0013A3F0;
    case 302u: goto L_0013A3FC;
    case 303u: goto L_0013A428;
    case 304u: goto L_0013A44C;
    case 305u: goto L_0013A458;
    case 306u: goto L_0013A494;
    case 307u: goto L_0013A4C0;
    case 308u: goto L_0013A518;
    case 309u: goto L_0013A540;
    case 310u: goto L_0013A550;
    case 311u: goto L_0013A55C;
    case 312u: goto L_0013A568;
    case 313u: goto L_0013A580;
    case 314u: goto L_0013A5A0;
    case 315u: goto L_0013A5BC;
    case 316u: goto L_0013A5D8;
    case 317u: goto L_0013A5E8;
    case 318u: goto L_0013A604;
    case 319u: goto L_0013A618;
    case 320u: goto L_0013A630;
    case 321u: goto L_0013A6BC;
    case 322u: goto L_0013A6E0;
    case 323u: goto L_0013A6FC;
    case 324u: goto L_0013A778;
    case 325u: goto L_0013A7BC;
    case 326u: goto L_0013A7E8;
    case 327u: goto L_0013A7FC;
    case 328u: goto L_0013A834;
    case 329u: goto L_0013A880;
    case 330u: goto L_0013A8B0;
    case 331u: goto L_0013A8E8;
    case 332u: goto L_0013A8FC;
    case 333u: goto L_0013A90C;
    case 334u: goto L_0013A914;
    case 335u: goto L_0013A990;
    case 336u: goto L_0013AA18;
    case 337u: goto L_0013AA54;
    case 338u: goto L_0013AA70;
    case 339u: goto L_0013AB00;
    case 340u: goto L_0013AB3C;
    case 341u: goto L_0013AB58;
    case 342u: goto L_0013AB70;
    case 343u: goto L_0013ABAC;
    case 344u: goto L_0013ABE8;
    case 345u: goto L_0013AC30;
    case 346u: goto L_0013AC6C;
    case 347u: goto L_0013AC90;
    case 348u: goto L_0013AD00;
    case 349u: goto L_0013AD34;
    case 350u: goto L_0013AD50;
    case 351u: goto L_0013AD84;
    case 352u: goto L_0013ADA0;
    case 353u: goto L_0013ADC0;
    case 354u: goto L_0013AE30;
    case 355u: goto L_0013AE48;
    case 356u: goto L_0013AE60;
    case 357u: goto L_0013AE78;
    case 358u: goto L_0013AE84;
    case 359u: goto L_0013AE9C;
    case 360u: goto L_0013AEC0;
    case 361u: goto L_0013AF0C;
    case 362u: goto L_0013AF1C;
    case 363u: goto L_0013AF28;
    case 364u: goto L_0013AF40;
    case 365u: goto L_0013AF60;
    case 366u: goto L_0013AFB8;
    case 367u: goto L_0013AFC0;
    case 368u: goto L_0013AFDC;
    case 369u: goto L_0013AFF0;
    case 370u: goto L_0013B01C;
    case 371u: goto L_0013B030;
    case 372u: goto L_0013B03C;
    case 373u: goto L_0013B05C;
    case 374u: goto L_0013B070;
    case 375u: goto L_0013B080;
    case 376u: goto L_0013B090;
    case 377u: goto L_0013B0A4;
    case 378u: goto L_0013B0C0;
    case 379u: goto L_0013B0D0;
    case 380u: goto L_0013B110;
    case 381u: goto L_0013B118;
    case 382u: goto L_0013B140;
    case 383u: goto L_0013B18C;
    case 384u: goto L_0013B19C;
    case 385u: goto L_0013B1B4;
    case 386u: goto L_0013B1D0;
    case 387u: goto L_0013B200;
    case 388u: goto L_0013B218;
    case 389u: goto L_0013B230;
    case 390u: goto L_0013B250;
    case 391u: goto L_0013B278;
    case 392u: goto L_0013B29C;
    case 393u: goto L_0013B2C0;
    case 394u: goto L_0013B2F0;
    case 395u: goto L_0013B308;
    case 396u: goto L_0013B320;
    case 397u: goto L_0013B330;
    case 398u: goto L_0013B340;
    case 399u: goto L_0013B350;
    case 400u: goto L_0013B4F0;
    case 401u: goto L_0013B518;
    case 402u: goto L_0013B550;
    case 403u: goto L_0013B574;
    case 404u: goto L_0013B5BC;
    case 405u: goto L_0013B5E0;
    case 406u: goto L_0013B638;
    case 407u: goto L_0013B660;
    case 408u: goto L_0013B688;
    case 409u: goto L_0013B698;
    case 410u: goto L_0013B6B0;
    case 411u: goto L_0013B6D0;
    case 412u: goto L_0013B6EC;
    case 413u: goto L_0013B6F8;
    case 414u: goto L_0013B730;
    case 415u: goto L_0013B750;
    case 416u: goto L_0013B75C;
    case 417u: goto L_0013B79C;
    case 418u: goto L_0013B7B8;
    case 419u: goto L_0013B830;
    case 420u: goto L_0013B840;
    case 421u: goto L_0013B858;
    case 422u: goto L_0013B860;
    case 423u: goto L_0013B888;
    case 424u: goto L_0013B89C;
    case 425u: goto L_0013B8AC;
    case 426u: goto L_0013B8BC;
    case 427u: goto L_0013B8CC;
    case 428u: goto L_0013B900;
    case 429u: goto L_0013B950;
    case 430u: goto L_0013B964;
    case 431u: goto L_0013B96C;
    case 432u: goto L_0013B994;
    case 433u: goto L_0013B9E0;
    case 434u: goto L_0013B9F4;
    case 435u: goto L_0013B9FC;
    case 436u: goto L_0013BA1C;
    case 437u: goto L_0013BA60;
    case 438u: goto L_0013BA70;
    case 439u: goto L_0013BA90;
    case 440u: goto L_0013BAA0;
    case 441u: goto L_0013BAB0;
    case 442u: goto L_0013BAC4;
    case 443u: goto L_0013BADC;
    case 444u: goto L_0013BAF0;
    case 445u: goto L_0013BB04;
    case 446u: goto L_0013BB24;
    case 447u: goto L_0013BB40;
    case 448u: goto L_0013BB50;
    case 449u: goto L_0013BB64;
    case 450u: goto L_0013BB7C;
    case 451u: goto L_0013BB90;
    case 452u: goto L_0013BBA4;
    case 453u: goto L_0013BBBC;
    case 454u: goto L_0013BBD0;
    case 455u: goto L_0013BBF0;
    case 456u: goto L_0013BC08;
    case 457u: goto L_0013BC38;
    case 458u: goto L_0013BC50;
    case 459u: goto L_0013BC78;
    case 460u: goto L_0013BCA0;
    case 461u: goto L_0013BCAC;
    case 462u: goto L_0013BCD0;
    case 463u: goto L_0013BCFC;
    case 464u: goto L_0013BD0C;
    case 465u: goto L_0013BD18;
    case 466u: goto L_0013BD5C;
    case 467u: goto L_0013BD6C;
    case 468u: goto L_0013BDE0;
    case 469u: goto L_0013BE38;
    case 470u: goto L_0013BE48;
    case 471u: goto L_0013BE54;
    case 472u: goto L_0013BE60;
    case 473u: goto L_0013BE78;
    case 474u: goto L_0013BE90;
    case 475u: goto L_0013BF84;
    case 476u: goto L_0013BF9C;
    case 477u: goto L_0013BFDC;
    case 478u: goto L_0013BFF8;
    default: bad_entry(c, 0x00138000u); return;
    }
L_00138000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138008u); set32(c.r[4], 0u + 56u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00138008u) [[unlikely]] return; }
L_00138008:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_0013801C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013801Cu);  if (depth < kMaxDepth) unit_000D(c, 411u, depth + 1u); else { c.pc = 0x00137180u; return; } if (c.pc != 0x0013801Cu) [[unlikely]] return; }
L_0013801C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00138030:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 6u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
L_00138040:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138048u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 29u, depth + 1u); else { c.pc = 0x00140690u; return; } if (c.pc != 0x00138048u) [[unlikely]] return; }
L_00138048:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 19376u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013805Cu); st32((c.r[16].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x0013805Cu) [[unlikely]] return; }
L_0013805C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138070u); st32((c.r[29].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00138070u) [[unlikely]] return; }
L_00138070:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138078u);  if (depth < kMaxDepth) unit_004F(c, 117u, depth + 1u); else { c.pc = 0x0023DCD0u; return; } if (c.pc != 0x00138078u) [[unlikely]] return; }
L_00138078:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138080u);  if (depth < kMaxDepth) unit_0051(c, 4u, depth + 1u); else { c.pc = 0x00244030u; return; } if (c.pc != 0x00138080u) [[unlikely]] return; }
L_00138080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138088u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00138088u) [[unlikely]] return; }
L_00138088:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013809Cu); st8((c.r[1].w[0] - 25569u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_001C(c, 255u, depth + 1u); else { c.pc = 0x00172EF0u; return; } if (c.pc != 0x0013809Cu) [[unlikely]] return; }
L_0013809C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001380A4u); set32(c.r[4], 0u + 672u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001380A4u) [[unlikely]] return; }
L_001380A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001380B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001380B4u);  if (depth < kMaxDepth) unit_000E(c, 91u, depth + 1u); else { c.pc = 0x00138950u; return; } if (c.pc != 0x001380B4u) [[unlikely]] return; }
L_001380B4:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.budget -= 3;
L_001380C0:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001380CCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001380CCu) [[unlikely]] return; }
L_001380CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001380D4u); set32(c.r[4], ld32((c.r[29].w[0] + 44u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x001380D4u) [[unlikely]] return; }
L_001380D4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001380F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00138158; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 19376u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00138134; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00138134u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00138134u) [[unlikely]] return; }
L_00138134:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138140u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 31u, depth + 1u); else { c.pc = 0x00140700u; return; } if (c.pc != 0x00138140u) [[unlikely]] return; }
L_00138140:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0013815C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138158u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00138158u) [[unlikely]] return; }
L_00138158:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0013815C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00138170:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138180u);  if (depth < kMaxDepth) unit_0051(c, 25u, depth + 1u); else { c.pc = 0x002441D0u; return; } if (c.pc != 0x00138180u) [[unlikely]] return; }
L_00138180:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 1536u)));
    c.r[2].d[0] = ld16((c.r[2].w[0] + 4u));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001381AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001381A0u);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x001381A0u) [[unlikely]] return; }
L_001381A0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001381ACu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0010(c, 87u, depth + 1u); else { c.pc = 0x00141260u; return; } if (c.pc != 0x001381ACu) [[unlikely]] return; }
L_001381AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001381B4u);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x001381B4u) [[unlikely]] return; }
L_001381B4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001381C0u); set32(c.r[5], 0u + 100u);  if (depth < kMaxDepth) unit_0010(c, 90u, depth + 1u); else { c.pc = 0x001412C0u; return; } if (c.pc != 0x001381C0u) [[unlikely]] return; }
L_001381C0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001381D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001381FCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001381FCu) [[unlikely]] return; }
L_001381FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001383B8; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00138218u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00138218u) [[unlikely]] return; }
L_00138218:
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013822Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013822Cu) [[unlikely]] return; }
L_0013822C:
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_00138250; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00138250; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00138250u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00138250u) [[unlikely]] return; }
L_00138250:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[18].w[0] + 12u), 0u);  if (t) { goto L_0013826C; } }
    set32(c.r[25], ld32((c.r[18].w[0] + 8u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013826Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013826Cu) [[unlikely]] return; }
L_0013826C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138280u); st32((c.r[29].w[0] + 76u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00138280u) [[unlikely]] return; }
L_00138280:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00138374; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 32u);  if (t) { goto L_00138354; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 28u);  if (t) { goto L_00138330; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 36u);  if (t) { goto L_00138300; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 16u);  if (t) { goto L_001382DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001382C0u); set32(c.r[4], 0u + 356u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001382C0u) [[unlikely]] return; }
L_001382C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001383AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001382D0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 55u, depth + 1u); else { c.pc = 0x001305A0u; return; } if (c.pc != 0x001382D0u) [[unlikely]] return; }
L_001382D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 76u)));  if (t) { goto L_001383B0; } }
    set32(c.r[4], 0u + 16u);
    c.budget -= 1;
L_001382DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001382E4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001382E4u) [[unlikely]] return; }
L_001382E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001383AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001382F4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 346u, depth + 1u); else { c.pc = 0x00186E50u; return; } if (c.pc != 0x001382F4u) [[unlikely]] return; }
L_001382F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001383AC; } }
    set32(c.r[4], 0u + 36u);
    c.budget -= 1;
L_00138300:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138308u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00138308u) [[unlikely]] return; }
L_00138308:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013831C; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013831Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0057(c, 136u, depth + 1u); else { c.pc = 0x0025CED0u; return; } if (c.pc != 0x0013831Cu) [[unlikely]] return; }
L_0013831C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138324u);  if (depth < kMaxDepth) unit_0051(c, 11u, depth + 1u); else { c.pc = 0x002440A0u; return; } if (c.pc != 0x00138324u) [[unlikely]] return; }
L_00138324:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001383AC; } }
    set32(c.r[4], 0u + 28u);
    c.budget -= 1;
L_00138330:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138338u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00138338u) [[unlikely]] return; }
L_00138338:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001383AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138348u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0020(c, 154u, depth + 1u); else { c.pc = 0x00181E80u; return; } if (c.pc != 0x00138348u) [[unlikely]] return; }
L_00138348:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001383AC; } }
    set32(c.r[4], 0u + 32u);
    c.budget -= 1;
L_00138354:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013835Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0013835Cu) [[unlikely]] return; }
L_0013835C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001383AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013836Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 151u, depth + 1u); else { c.pc = 0x003ACFE0u; return; } if (c.pc != 0x0013836Cu) [[unlikely]] return; }
L_0013836C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001383AC; } }
L_00138374:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013837Cu);  if (depth < kMaxDepth) unit_0051(c, 11u, depth + 1u); else { c.pc = 0x002440A0u; return; } if (c.pc != 0x0013837Cu) [[unlikely]] return; }
L_0013837C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138388u); set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));  if (depth < kMaxDepth) unit_002A(c, 144u, depth + 1u); else { c.pc = 0x001A9670u; return; } if (c.pc != 0x00138388u) [[unlikely]] return; }
L_00138388:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138394u); set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));  if (depth < kMaxDepth) unit_002A(c, 152u, depth + 1u); else { c.pc = 0x001A9790u; return; } if (c.pc != 0x00138394u) [[unlikely]] return; }
L_00138394:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013839Cu); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0013839Cu) [[unlikely]] return; }
L_0013839C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001383AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001383ACu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 279u, depth + 1u); else { c.pc = 0x00136200u; return; } if (c.pc != 0x001383ACu) [[unlikely]] return; }
L_001383AC:
    set32(c.r[4], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 1;
L_001383B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001383B8u);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x001383B8u) [[unlikely]] return; }
L_001383B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001383D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001383F0u); c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x001383F0u) [[unlikely]] return; }
L_001383F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 19392u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 12u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00138420:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00138444; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00138444u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00138444u) [[unlikely]] return; }
L_00138444:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00138450:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013848Cu); set32(c.r[6], 0u + 11u);  if (depth < kMaxDepth) unit_0025(c, 304u, depth + 1u); else { c.pc = 0x00196C90u; return; } if (c.pc != 0x0013848Cu) [[unlikely]] return; }
L_0013848C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 19456u);
    set32(c.r[3], c.r[3].w[0] - 19440u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[20].w[0] + 160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[20].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 19424u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001384C0u); set32(c.r[6], 0u + 10u);  if (depth < kMaxDepth) unit_000E(c, 52u, depth + 1u); else { c.pc = 0x001383D0u; return; } if (c.pc != 0x001384C0u) [[unlikely]] return; }
L_001384C0:
    set32(c.r[4], c.r[20].w[0] + 176u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001384D0u); set32(c.r[6], 0u + 12u);  if (depth < kMaxDepth) unit_000E(c, 52u, depth + 1u); else { c.pc = 0x001383D0u; return; } if (c.pc != 0x001384D0u) [[unlikely]] return; }
L_001384D0:
    st32((c.r[20].w[0] + 192u), c.r[19].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[20].w[0] + 196u), c.r[18].w[0]);
    c.r[5].d[0] = c.r[17].d[0] & 65535ull;
    st8((c.r[20].w[0] + 200u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[17], c.r[2].w[0] + 624u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001384F4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x001384F4u) [[unlikely]] return; }
L_001384F4:
    c.r[5].d[0] = c.r[16].d[0] & 65535ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138504u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x00138504u) [[unlikely]] return; }
L_00138504:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138514u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x00138514u) [[unlikely]] return; }
L_00138514:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00138540:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00138588; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 19392u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138570u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x00138570u) [[unlikely]] return; }
L_00138570:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0013858C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138588u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00138588u) [[unlikely]] return; }
L_00138588:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0013858C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001385A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001385B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 318u, depth + 1u); else { c.pc = 0x00196DF0u; return; } if (c.pc != 0x001385B4u) [[unlikely]] return; }
L_001385B4:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 200u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001385F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001385C8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0025(c, 340u, depth + 1u); else { c.pc = 0x00197030u; return; } if (c.pc != 0x001385C8u) [[unlikely]] return; }
L_001385C8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001385E4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 4;
L_001385E4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 64u);  if (t) { goto L_001385F8; } }
    st32((c.r[4].w[0] + 48u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 52u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 3;
L_001385F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00138610:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00138620:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00138660; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138640u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00138640u) [[unlikely]] return; }
L_00138640:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00138658; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 192u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 196u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138658u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 110u, depth + 1u); else { c.pc = 0x001630C0u; return; } if (c.pc != 0x00138658u) [[unlikely]] return; }
L_00138658:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 188u), c.r[2].w[0]);  if (t) { goto L_00138680; } }
L_00138660:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00138678; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138670u);  if (depth < kMaxDepth) unit_0025(c, 337u, depth + 1u); else { c.pc = 0x00196FD0u; return; } if (c.pc != 0x00138670u) [[unlikely]] return; }
L_00138670:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 172u), c.r[2].w[0]);  if (t) { goto L_00138680; } }
L_00138678:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138680u);  if (depth < kMaxDepth) unit_0025(c, 337u, depth + 1u); else { c.pc = 0x00196FD0u; return; } if (c.pc != 0x00138680u) [[unlikely]] return; }
L_00138680:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00138690:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001386B8u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_000F(c, 256u, depth + 1u); else { c.pc = 0x0013E440u; return; } if (c.pc != 0x001386B8u) [[unlikely]] return; }
L_001386B8:
    set32(c.r[4], c.r[17].w[0] + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001386C4u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x001386C4u) [[unlikely]] return; }
L_001386C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 19504u);
    set32(c.r[4], c.r[17].w[0] + 32u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 19488u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001386E8u); st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0018(c, 105u, depth + 1u); else { c.pc = 0x00163000u; return; } if (c.pc != 0x001386E8u) [[unlikely]] return; }
L_001386E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001386F0u); set32(c.r[4], 0u + 9u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x001386F0u) [[unlikely]] return; }
L_001386F0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001386FCu); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x001386FCu) [[unlikely]] return; }
L_001386FC:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], 0u + 30u);
    st128((c.r[17].w[0] + 304u) & ~15u, c.r[2]);
    ld128((c.r[18].w[0]) & ~15u, c.r[4]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st128((c.r[17].w[0] + 320u) & ~15u, c.r[4]);
    st32((c.r[17].w[0] + 356u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 352u), 0u);
    st32((c.r[17].w[0] + 364u), 0u);
    st8((c.r[17].w[0] + 360u), static_cast<std::uint8_t>(0u));
    ld128((c.r[17].w[0] + 304u) & ~15u, c.r[3]);
    st128((c.r[17].w[0] + 336u) & ~15u, c.r[3]);
    st32((c.r[17].w[0] + 368u), 0u);
    st32((c.r[17].w[0] + 372u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00138750:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 360u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00138794; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 364u)));
    set32(c.r[3], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 364u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 352u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 304u);  if (t) { goto L_001387C8; } }
    st32((c.r[16].w[0] + 364u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 360u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001387C4; } }
L_00138794:
    set32(c.r[2], ld32((c.r[16].w[0] + 364u)));
    set32(c.r[4], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 364u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 356u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 352u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001387C4; } }
    st32((c.r[16].w[0] + 364u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 360u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001387C4:
    set32(c.r[4], c.r[16].w[0] + 304u);
    c.budget -= 1;
L_001387C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001387D0u);  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x001387D0u) [[unlikely]] return; }
L_001387D0:
    set32(c.r[3], ld32((c.r[16].w[0] + 368u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] + 64u);  if (t) { goto L_00138888; } }
    set32(c.r[3], c.r[16].w[0] + 96u);
    ld128((c.r[4].w[0]) & ~15u, c.r[6]);
    ld128((c.r[4].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[4].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[4].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[3].w[0]) & ~15u, c.r[6]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[3].w[0] + 48u) & ~15u, c.r[9]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[3], ld32((c.r[16].w[0] + 368u)));
    set32(c.r[3], c.r[3].w[0] + 16u);
    ld128((c.r[3].w[0]) & ~15u, c.r[3]);
    st128((c.r[16].w[0] + 48u) & ~15u, c.r[3]);
    set32(c.r[3], ld32((c.r[16].w[0] + 368u)));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 20;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0013883C; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 164u), c.r[4].w[0]);  if (t) { goto L_00138858; } }
L_0013883C:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 1;
L_00138840:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[1]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 164u), c.r[4].w[0]);
    c.budget -= 6;
L_00138858:
    ld128((c.r[16].w[0] + 336u) & ~15u, c.r[3]);
    set32(c.r[4], c.r[29].w[0] + 32u);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    set32(c.r[3], ld32((c.r[16].w[0] + 368u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 60u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 8));
    st32((c.r[29].w[0] + 44u), c.r[4].w[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[3]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st128((c.r[16].w[0] + 80u) & ~15u, c.r[3]);  if (t) { goto L_00138890; } }
L_00138888:
    ld128((c.r[16].w[0] + 336u) & ~15u, c.r[3]);
    st128((c.r[16].w[0] + 80u) & ~15u, c.r[3]);
    c.budget -= 2;
L_00138890:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001388A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 368u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001388F0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 372u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001388DC; } }
L_001388C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[1].w[0] - 17488u));
    st32((c.r[4].w[0] + 48u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] - 17496u));
    st32((c.r[4].w[0] + 52u), c.f[0]);
    st32((c.r[4].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 7;
L_001388DC:
    set32(c.r[4], c.r[4].w[0] + 32u);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001388F0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001388F0u) [[unlikely]] return; }
L_001388F0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00138900:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 368u), c.r[5].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 292u), 0u);
    set32(c.r[5], c.r[16].w[0] + 296u);
    st32((c.r[4].w[0] + 296u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138928u); set32(c.r[4], c.r[16].w[0] + 292u);  if (depth < kMaxDepth) unit_000B(c, 463u, depth + 1u); else { c.pc = 0x0012FDC0u; return; } if (c.pc != 0x00138928u) [[unlikely]] return; }
L_00138928:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138930u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0018(c, 118u, depth + 1u); else { c.pc = 0x00163230u; return; } if (c.pc != 0x00138930u) [[unlikely]] return; }
L_00138930:
    st32((c.r[16].w[0] + 364u), 0u);
    set32(c.r[4], c.r[16].w[0] + 304u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138940u); st8((c.r[16].w[0] + 360u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x00138940u) [[unlikely]] return; }
L_00138940:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00138950:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 4176u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 5u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138974u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 38u, depth + 1u); else { c.pc = 0x001303B0u; return; } if (c.pc != 0x00138974u) [[unlikely]] return; }
L_00138974:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 19664u);
    c.budget -= 3;
L_00138980:
    set32(c.r[2], c.r[2].w[0] - 19576u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 40u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], 0u + 10752u);
    set32(c.r[2], 0u + 15311u);
    st16((c.r[29].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[29].w[0] + 46u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001389A8u); set32(c.r[5], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_0025(c, 131u, depth + 1u); else { c.pc = 0x001951C0u; return; } if (c.pc != 0x001389A8u) [[unlikely]] return; }
L_001389A8:
    st32((c.r[16].w[0] + 632u), 0u);
    st32((c.r[16].w[0] + 636u), 0u);
    st32((c.r[16].w[0] + 640u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001389BCu); st8((c.r[16].w[0] + 664u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x001389BCu) [[unlikely]] return; }
L_001389BC:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 40u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001389CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 138u, depth + 1u); else { c.pc = 0x00195290u; return; } if (c.pc != 0x001389CCu) [[unlikely]] return; }
L_001389CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001389E4; } }
L_001389D4:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 644u), 0u);
    c.budget -= 4;
L_001389E4:
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001389D4u | kUnwind; return; } goto L_001389D4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 106u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00138A10; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 32u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00138A18; } }
L_00138A10:
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    st8((c.r[2].w[0] + 32u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00138A18:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00138A30:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00138B78; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 19664u);
    set32(c.r[2], c.r[2].w[0] - 19576u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 640u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00138A90; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00138A90; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00138A90u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00138A90u) [[unlikely]] return; }
L_00138A90:
    st32((c.r[17].w[0] + 640u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00138ACC; } }
L_00138A9C:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 644u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[18], c.r[2].w[0] + 644u);  if (t) { goto L_00138AC4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00138AC4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00138AC4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00138AC4u) [[unlikely]] return; }
L_00138AC4:
    st32((c.r[18].w[0]), 0u);
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 2;
L_00138ACC:
    c.r[2].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[19].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00138A9Cu | kUnwind; return; } goto L_00138A9C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 632u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00138AFC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00138AFC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00138AFCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00138AFCu) [[unlikely]] return; }
L_00138AFC:
    st32((c.r[17].w[0] + 632u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 636u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00138B24; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00138B24; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00138B24u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00138B24u) [[unlikely]] return; }
L_00138B24:
    set32(c.r[4], c.r[17].w[0] + 40u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138B34u); st32((c.r[17].w[0] + 636u), 0u);  if (depth < kMaxDepth) unit_0025(c, 134u, depth + 1u); else { c.pc = 0x00195210u; return; } if (c.pc != 0x00138B34u) [[unlikely]] return; }
L_00138B34:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] << 48;  if (t) { goto L_00138B64; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 21408u);
    set32(c.r[2], c.r[2].w[0] - 21320u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138B60u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 15u, depth + 1u); else { c.pc = 0x00130130u; return; } if (c.pc != 0x00138B60u) [[unlikely]] return; }
L_00138B60:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_00138B64:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00138B7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138B78u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00138B78u) [[unlikely]] return; }
L_00138B78:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00138B7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00138BA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138BB4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 21u, depth + 1u); else { c.pc = 0x001301E0u; return; } if (c.pc != 0x00138BB4u) [[unlikely]] return; }
L_00138BB4:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00138BC4; } }
    st8((c.r[3].w[0] + 35u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00138BC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00138BE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138BF4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 24u, depth + 1u); else { c.pc = 0x00130260u; return; } if (c.pc != 0x00138BF4u) [[unlikely]] return; }
L_00138BF4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 106u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[4], 0u + 4u);  if (t) { goto L_00138C4C; } }
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[5], 0u + 54u);
    st8((c.r[1].w[0] + 106u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], 0u + 14u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138C2Cu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 267u, depth + 1u); else { c.pc = 0x0016A910u; return; } if (c.pc != 0x00138C2Cu) [[unlikely]] return; }
L_00138C2C:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 404u);  if (t) { goto L_00138C3C; } }
    st32((c.r[2].w[0] + 36u), 0u);
    c.budget -= 1;
L_00138C3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138C44u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x00138C44u) [[unlikely]] return; }
L_00138C44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00138C60; } }
L_00138C4C:
    set32(c.r[4], ld32((c.r[16].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00138C5C; } }
    st8((c.r[4].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00138C5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00138C60:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00138C70:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138C94u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000C(c, 25u, depth + 1u); else { c.pc = 0x00130270u; return; } if (c.pc != 0x00138C94u) [[unlikely]] return; }
L_00138C94:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138CA8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002A(c, 139u, depth + 1u); else { c.pc = 0x001A95F0u; return; } if (c.pc != 0x00138CA8u) [[unlikely]] return; }
L_00138CA8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[20].w[0] + 632u)));
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[3].w[0] + 624u);  if (t) { goto L_00138D08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138CC4u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00138CC4u) [[unlikely]] return; }
L_00138CC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00138CD8; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138CD8u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_002A(c, 287u, depth + 1u); else { c.pc = 0x001AB200u; return; } if (c.pc != 0x00138CD8u) [[unlikely]] return; }
L_00138CD8:
    st32((c.r[20].w[0] + 632u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138CE8u); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x00138CE8u) [[unlikely]] return; }
L_00138CE8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138CF8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x00138CF8u) [[unlikely]] return; }
L_00138CF8:
    set32(c.r[4], ld32((c.r[20].w[0] + 632u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138D08u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x00138D08u) [[unlikely]] return; }
L_00138D08:
    set32(c.r[4], ld32((c.r[20].w[0] + 632u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00138D1Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00138D1Cu) [[unlikely]] return; }
L_00138D1C:
    set32(c.r[19], ld32((c.r[20].w[0] + 124u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00138DF4; } }
L_00138D28:
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[2].w[0] + 644u);
    set32(c.r[2], ld32((c.r[2].w[0] + 644u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 208u);  if (t) { goto L_00138DDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138D44u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00138D44u) [[unlikely]] return; }
L_00138D44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_00138D70; } }
    set32(c.r[4], c.r[18].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - 4176u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[7], 0u + 10002u);
    set32(c.r[6], ld32((c.r[3].w[0] + 4u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138D70u); set32(c.r[8], 0u + 2u);  if (depth < kMaxDepth) unit_000E(c, 56u, depth + 1u); else { c.pc = 0x00138450u; return; } if (c.pc != 0x00138D70u) [[unlikely]] return; }
L_00138D70:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x42680000u);
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[6], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] << 3);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], c.r[2].w[0] - c.r[18].w[0]);
    set32(c.r[3], c.r[18].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.f[0] = c.r[2].w[0];
    st32((c.r[6].w[0] + 96u), 0u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[2], c.r[2].w[0] - 4176u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[6].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[1].w[0] - 17504u));
    st32((c.r[6].w[0] + 104u), c.f[0]);
    st32((c.r[6].w[0] + 108u), c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0])));
    st8((c.r[2].w[0] + 200u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 27;
L_00138DDC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00138DF0u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00138DF0u) [[unlikely]] return; }
L_00138DF0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00138DF4:
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[18].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00138D28u | kUnwind; return; } goto L_00138D28; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 384u);  if (t) { goto L_00138E74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138E14u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00138E14u) [[unlikely]] return; }
L_00138E14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00138E2C; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 128u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138E2Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 75u, depth + 1u); else { c.pc = 0x00138690u; return; } if (c.pc != 0x00138E2Cu) [[unlikely]] return; }
L_00138E2C:
    st32((c.r[20].w[0] + 640u), c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[16], ld32((c.r[20].w[0] + 644u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138E40u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 340u, depth + 1u); else { c.pc = 0x00197030u; return; } if (c.pc != 0x00138E40u) [[unlikely]] return; }
L_00138E40:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00138E5C; } }
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 4;
L_00138E5C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[6], ld32((c.r[1].w[0] - 4172u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138E6Cu); set32(c.r[4], ld32((c.r[20].w[0] + 640u)));  if (depth < kMaxDepth) unit_000E(c, 87u, depth + 1u); else { c.pc = 0x00138900u; return; } if (c.pc != 0x00138E6Cu) [[unlikely]] return; }
L_00138E6C:
    set32(c.r[2], ld32((c.r[20].w[0] + 640u)));
    st8((c.r[2].w[0] + 16u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00138E74:
    set32(c.r[2], ld32((c.r[20].w[0] + 636u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 160u);  if (t) { goto L_00138ECC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138E88u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00138E88u) [[unlikely]] return; }
L_00138E88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00138E9C; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138E9Cu); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0025(c, 304u, depth + 1u); else { c.pc = 0x00196C90u; return; } if (c.pc != 0x00138E9Cu) [[unlikely]] return; }
L_00138E9C:
    st32((c.r[20].w[0] + 636u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138EACu); set32(c.r[5], 0u + 10006u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x00138EACu) [[unlikely]] return; }
L_00138EAC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138EBCu); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x00138EBCu) [[unlikely]] return; }
L_00138EBC:
    set32(c.r[4], ld32((c.r[20].w[0] + 636u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138ECCu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x00138ECCu) [[unlikely]] return; }
L_00138ECC:
    set32(c.r[4], ld32((c.r[20].w[0] + 636u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00138EE0u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00138EE0u) [[unlikely]] return; }
L_00138EE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138EE8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0051(c, 16u, depth + 1u); else { c.pc = 0x00244130u; return; } if (c.pc != 0x00138EE8u) [[unlikely]] return; }
L_00138EE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138EF0u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x00138EF0u) [[unlikely]] return; }
L_00138EF0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138EFCu); set32(c.r[5], 0u + 7220u);  if (depth < kMaxDepth) unit_009D(c, 391u, depth + 1u); else { c.pc = 0x00377BB0u; return; } if (c.pc != 0x00138EFCu) [[unlikely]] return; }
L_00138EFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138F04u);  if (depth < kMaxDepth) unit_00AA(c, 237u, depth + 1u); else { c.pc = 0x003AA200u; return; } if (c.pc != 0x00138F04u) [[unlikely]] return; }
L_00138F04:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138F14u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002A(c, 147u, depth + 1u); else { c.pc = 0x001A96C0u; return; } if (c.pc != 0x00138F14u) [[unlikely]] return; }
L_00138F14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00138F40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138F58u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 26u, depth + 1u); else { c.pc = 0x00130280u; return; } if (c.pc != 0x00138F58u) [[unlikely]] return; }
L_00138F58:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00138F6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 664u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00138F70; } }
L_00138F6C:
    st8((c.r[16].w[0] + 664u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00138F70:
    set32(c.r[4], ld32((c.r[16].w[0] + 632u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00138F90; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00138F8Cu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00138F8Cu) [[unlikely]] return; }
L_00138F8C:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00138F90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;  if (t) { goto L_00138FC0; } }
L_00138F98:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 644u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00138FB8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00138FB8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00138FB8u) [[unlikely]] return; }
L_00138FB8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 2;
L_00138FC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00138F98u | kUnwind; return; } goto L_00138F98; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013902C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0] + 644u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138FF0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 340u, depth + 1u); else { c.pc = 0x00197030u; return; } if (c.pc != 0x00138FF0u) [[unlikely]] return; }
L_00138FF0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0013900C; } }
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 4;
L_0013900C:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[2], c.r[2].w[0] - 4172u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013902Cu); set32(c.r[4], ld32((c.r[16].w[0] + 640u)));  if (depth < kMaxDepth) unit_000E(c, 87u, depth + 1u); else { c.pc = 0x00138900u; return; } if (c.pc != 0x0013902Cu) [[unlikely]] return; }
L_0013902C:
    set32(c.r[4], ld32((c.r[16].w[0] + 636u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00139048; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 2;
L_00139040:
    c.budget -= 2;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00139048u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00139048u) [[unlikely]] return; }
L_00139048:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139050u);  if (depth < kMaxDepth) unit_0051(c, 19u, depth + 1u); else { c.pc = 0x00244170u; return; } if (c.pc != 0x00139050u) [[unlikely]] return; }
L_00139050:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00139070:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00139080:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001390A0u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 32u, depth + 1u); else { c.pc = 0x00130300u; return; } if (c.pc != 0x001390A0u) [[unlikely]] return; }
L_001390A0:
    set32(c.r[3], ld32((c.r[17].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], ld32((c.r[16].w[0] + 24u)));  if (t) { goto L_001390FC; } }
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0] + 644u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001390C4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 340u, depth + 1u); else { c.pc = 0x00197030u; return; } if (c.pc != 0x001390C4u) [[unlikely]] return; }
L_001390C4:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_001390E0; } }
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 4;
L_001390E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - 4172u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001390FCu); set32(c.r[4], ld32((c.r[17].w[0] + 640u)));  if (depth < kMaxDepth) unit_000E(c, 87u, depth + 1u); else { c.pc = 0x00138900u; return; } if (c.pc != 0x001390FCu) [[unlikely]] return; }
L_001390FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00139100:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00139120:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139140u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 29u, depth + 1u); else { c.pc = 0x001302B0u; return; } if (c.pc != 0x00139140u) [[unlikely]] return; }
L_00139140:
    set32(c.r[3], ld32((c.r[17].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0013919C; } }
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0] + 644u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139164u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 340u, depth + 1u); else { c.pc = 0x00197030u; return; } if (c.pc != 0x00139164u) [[unlikely]] return; }
L_00139164:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00139180; } }
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 4;
L_00139180:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - 4172u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013919Cu); set32(c.r[4], ld32((c.r[17].w[0] + 640u)));  if (depth < kMaxDepth) unit_000E(c, 87u, depth + 1u); else { c.pc = 0x00138900u; return; } if (c.pc != 0x0013919Cu) [[unlikely]] return; }
L_0013919C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001391C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001391DCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_002A(c, 135u, depth + 1u); else { c.pc = 0x001A9560u; return; } if (c.pc != 0x001391DCu) [[unlikely]] return; }
L_001391DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[18].w[0] + 600u);  if (t) { goto L_0013924C; } }
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001391F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 177u, depth + 1u); else { c.pc = 0x00146C10u; return; } if (c.pc != 0x001391F0u) [[unlikely]] return; }
L_001391F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0013920C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139200u);  if (depth < kMaxDepth) unit_0011(c, 182u, depth + 1u); else { c.pc = 0x00146C90u; return; } if (c.pc != 0x00139200u) [[unlikely]] return; }
L_00139200:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013920C; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0013920C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_0013924C; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 124u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0013924C; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 128u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0013924C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139234u);  if (depth < kMaxDepth) unit_004F(c, 127u, depth + 1u); else { c.pc = 0x0023DDB0u; return; } if (c.pc != 0x00139234u) [[unlikely]] return; }
L_00139234:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013924C; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013924Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013924Cu) [[unlikely]] return; }
L_0013924C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00139270:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139284u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 181u, depth + 1u); else { c.pc = 0x00139400u; return; } if (c.pc != 0x00139284u) [[unlikely]] return; }
L_00139284:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013929C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013929Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013929Cu) [[unlikely]] return; }
L_0013929C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001392B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[1].w[0] + 25376u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00139320; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001392E0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001392E0u) [[unlikely]] return; }
L_001392E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00139328; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001392F0u);  if (depth < kMaxDepth) unit_001A(c, 271u, depth + 1u); else { c.pc = 0x0016A9E0u; return; } if (c.pc != 0x001392F0u) [[unlikely]] return; }
L_001392F0:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00139304; } }
    set32(c.r[3], 0u + 1u);
    st32((c.r[4].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 2;
L_00139304:
    set32(c.r[4], ld32((c.r[16].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00139328; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0013932C; } }
L_00139320:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139328u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 329u, depth + 1u); else { c.pc = 0x0012E6B0u; return; } if (c.pc != 0x00139328u) [[unlikely]] return; }
L_00139328:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0013932C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00139340:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 664u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00139384; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 632u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 137u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001393A4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00139378u); set32(c.r[5], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00139378u) [[unlikely]] return; }
L_00139378:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 664u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001393A4; } }
L_00139384:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013938Cu);  if (depth < kMaxDepth) unit_000E(c, 181u, depth + 1u); else { c.pc = 0x00139400u; return; } if (c.pc != 0x0013938Cu) [[unlikely]] return; }
L_0013938C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001393A4; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001393A4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001393A4u) [[unlikely]] return; }
L_001393A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001393C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001393D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 181u, depth + 1u); else { c.pc = 0x00139400u; return; } if (c.pc != 0x001393D4u) [[unlikely]] return; }
L_001393D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001393EC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001393ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001393ECu) [[unlikely]] return; }
L_001393EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00139400:
    set32(c.r[3], ld32((c.r[4].w[0] + 632u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00139410; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 137u));
    c.budget -= 1;
L_00139410:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00139440; } }
L_00139418:
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 644u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0013943C; } }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 137u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0013943C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0013944C; } }
L_0013943C:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_00139440:
    c.r[3].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00139418u | kUnwind; return; } goto L_00139418; } }
L_0013944C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00139460:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00138610u | kUnwind; return; } goto L_00138610; }
L_00139470:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00135700u | kUnwind; return; } [[clang::musttail]] return unit_000D(c, 180u, depth); }
L_00139480:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 24u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00135700u | kUnwind; return; } [[clang::musttail]] return unit_000D(c, 180u, depth); }
L_00139490:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001388A0u | kUnwind; return; } goto L_001388A0; }
L_001394A0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001357C0u | kUnwind; return; } [[clang::musttail]] return unit_000D(c, 185u, depth); }
L_001394B0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00139080u | kUnwind; return; } goto L_00139080; }
L_001394C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00138A30u | kUnwind; return; } goto L_00138A30; }
L_001394D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 17408u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0])));  c.pc = t; return; }
L_001394F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139520u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 298u, depth + 1u); else { c.pc = 0x0012E440u; return; } if (c.pc != 0x00139520u) [[unlikely]] return; }
L_00139520:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139528u); set32(c.r[4], c.r[17].w[0] + 20u);  if (depth < kMaxDepth) unit_000B(c, 335u, depth + 1u); else { c.pc = 0x0012E720u; return; } if (c.pc != 0x00139528u) [[unlikely]] return; }
L_00139528:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 18992u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 18904u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    st32((c.r[17].w[0] + 24u), c.r[16].w[0]);
    c.f[12] = c.r[2].w[0];
    st32((c.r[17].w[0] + 356u), 0u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[17].w[0] + 448u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42400000u);
    set32(c.r[3], c.r[3].w[0] - 17280u);
    c.f[13] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 300u)));
    set32(c.r[4], c.r[17].w[0] + 460u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[8], c.r[8].w[0] - 17472u);
    set32(c.r[9], c.r[9].w[0] - 17440u);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[17].w[0] + 452u), c.r[2].w[0]);
    c.f[14] = ld32((c.r[1].w[0] - 13384u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[15] = ld32((c.r[1].w[0] - 13392u));
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001395B0u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000D(c, 34u, depth + 1u); else { c.pc = 0x00134330u; return; } if (c.pc != 0x001395B0u) [[unlikely]] return; }
L_001395B0:
    st32((c.r[17].w[0] + 584u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[17].w[0] + 588u), 0u);
    set32(c.r[3], c.r[3].w[0] - 17276u);
    set32(c.r[5], ld32((c.r[16].w[0] + 300u)));
    set32(c.r[2], 0u + 6u);
    set32(c.r[4], c.r[17].w[0] + 28u);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[17].w[0] + 456u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 388u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001395ECu); set32(c.r[6], 0u + 328u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x001395ECu) [[unlikely]] return; }
L_001395EC:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001395F0:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 360u), 0u);
    c.r[2].d[0] = c.r[3].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001395F0u | kUnwind; return; } goto L_001395F0; } }
    set32(c.r[4], c.r[17].w[0] + 392u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139618u); set32(c.r[5], 0u + 56u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x00139618u) [[unlikely]] return; }
L_00139618:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00139640:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00139770; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 18992u);
    set32(c.r[2], c.r[2].w[0] - 18904u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 356u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001396A0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001396A0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001396A0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001396A0u) [[unlikely]] return; }
L_001396A0:
    st32((c.r[17].w[0] + 356u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 448u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001396C8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001396C8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001396C8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001396C8u) [[unlikely]] return; }
L_001396C8:
    st32((c.r[17].w[0] + 448u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 584u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001396F0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001396F0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001396F0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001396F0u) [[unlikely]] return; }
L_001396F0:
    st32((c.r[17].w[0] + 584u), 0u);
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001396F8:
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 360u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[18], c.r[2].w[0] + 360u);  if (t) { goto L_00139724; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00139724; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00139724u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00139724u) [[unlikely]] return; }
L_00139724:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[18].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001396F8u | kUnwind; return; } goto L_001396F8; } }
    set32(c.r[4], c.r[17].w[0] + 460u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139740u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000D(c, 54u, depth + 1u); else { c.pc = 0x00134720u; return; } if (c.pc != 0x00139740u) [[unlikely]] return; }
L_00139740:
    set32(c.r[4], c.r[17].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013974Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 336u, depth + 1u); else { c.pc = 0x0012E740u; return; } if (c.pc != 0x0013974Cu) [[unlikely]] return; }
L_0013974C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139758u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 300u, depth + 1u); else { c.pc = 0x0012E490u; return; } if (c.pc != 0x00139758u) [[unlikely]] return; }
L_00139758:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00139774; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139770u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00139770u) [[unlikely]] return; }
L_00139770:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00139774:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00139790:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001397A8u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001397A8u) [[unlikely]] return; }
L_001397A8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001397D4; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001397C0; } }
    set32(c.r[7], c.r[7].w[0] + 20u);
    c.budget -= 1;
L_001397C0:
    set32(c.r[8], ld32((c.r[16].w[0] + 456u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001397D0u); set32(c.r[6], c.r[16].w[0] + 392u);  if (depth < kMaxDepth) unit_000E(c, 390u, depth + 1u); else { c.pc = 0x0013B250u; return; } if (c.pc != 0x001397D0u) [[unlikely]] return; }
L_001397D0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001397D4:
    st32((c.r[16].w[0] + 356u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 356u)));
    st32((c.r[3].w[0] + 36u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001397F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 8;
L_00139810:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[18], c.r[2].w[0] + 360u);
    set32(c.r[2], ld32((c.r[2].w[0] + 360u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013983C; } }
    st32((c.r[2].w[0] + 156u), 0u);
    set32(c.r[4], c.r[2].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139834u); st8((c.r[2].w[0] + 152u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x00139834u) [[unlikely]] return; }
L_00139834:
    set32(c.r[2], ld32((c.r[18].w[0])));
    st32((c.r[2].w[0] + 160u), 0u);
    c.budget -= 2;
L_0013983C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00139840:
    c.r[2].d[0] = c.r[16].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00139810u | kUnwind; return; } goto L_00139810; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139854u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 319u, depth + 1u); else { c.pc = 0x0012E600u; return; } if (c.pc != 0x00139854u) [[unlikely]] return; }
L_00139854:
    set32(c.r[3], ld32((c.r[17].w[0] + 356u)));
    set32(c.r[4], 0u + 1u);
    st32((c.r[3].w[0] + 36u), c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00139880:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 356u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001398A0u); st32((c.r[2].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_000B(c, 318u, depth + 1u); else { c.pc = 0x0012E5E0u; return; } if (c.pc != 0x001398A0u) [[unlikely]] return; }
L_001398A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 448u)));
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[3].w[0] + 624u);  if (t) { goto L_00139900; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001398BCu); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001398BCu) [[unlikely]] return; }
L_001398BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001398D0; } }
    goto L_001398C4;
L_001398C0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001398C4:
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001398D0u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_002A(c, 287u, depth + 1u); else { c.pc = 0x001AB200u; return; } if (c.pc != 0x001398D0u) [[unlikely]] return; }
L_001398D0:
    st32((c.r[16].w[0] + 448u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001398E0u); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x001398E0u) [[unlikely]] return; }
L_001398E0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001398F0u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x001398F0u) [[unlikely]] return; }
L_001398F0:
    set32(c.r[4], ld32((c.r[16].w[0] + 448u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139900u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x00139900u) [[unlikely]] return; }
L_00139900:
    set32(c.r[4], ld32((c.r[16].w[0] + 448u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 452u)));
    set32(c.r[2], c.r[2].w[0] - 17376u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00139930u); c.r[5].d[0] = ld16((c.r[2].w[0]));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00139930u) [[unlikely]] return; }
L_00139930:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139938u); set32(c.r[4], c.r[16].w[0] + 460u);  if (depth < kMaxDepth) unit_000D(c, 68u, depth + 1u); else { c.pc = 0x001348C0u; return; } if (c.pc != 0x00139938u) [[unlikely]] return; }
L_00139938:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139940u); set32(c.r[4], ld32((c.r[16].w[0] + 584u)));  if (depth < kMaxDepth) unit_000E(c, 369u, depth + 1u); else { c.pc = 0x0013AFF0u; return; } if (c.pc != 0x00139940u) [[unlikely]] return; }
L_00139940:
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[17].w[0] << 2);
    c.budget -= 2;
L_00139948:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 360u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00139960; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139960u);  if (depth < kMaxDepth) unit_000E(c, 348u, depth + 1u); else { c.pc = 0x0013AD00u; return; } if (c.pc != 0x00139960u) [[unlikely]] return; }
L_00139960:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00139948u | kUnwind; return; } goto L_00139948; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139978u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x00139978u) [[unlikely]] return; }
L_00139978:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00139990:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], c.r[6].w[0] - 4128u);
    set32(c.r[5], c.r[29].w[0]);
    ld128((c.r[6].w[0]) & ~15u, c.r[3]);
    c.f[0] = ld32((c.r[6].w[0] + 24u));
    c.r[2].d[0] = ld64((c.r[6].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    st64((c.r[5].w[0] + 16u), c.r[2].d[0]);
    st32((c.r[5].w[0] + 24u), c.f[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 320u)));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_00139A14; } }
L_001399C4:
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[2].w[0]);  if (t) { goto L_00139A04; } }
L_001399D4:
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[7].sd[0] < 5ll ? 1ull : 0ull;  if (t) { goto L_00139A10; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00139A00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00139A24; } }
L_00139A00:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_00139A04:
    c.r[2].d[0] = c.r[7].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[7].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001399D4u | kUnwind; return; } goto L_001399D4; } }
L_00139A10:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_00139A14:
    c.r[2].d[0] = c.r[8].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[8].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001399C4u | kUnwind; return; } goto L_001399C4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00139A24:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00139A30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[7], c.r[7].w[0] - 17112u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], 0u + 6u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[8], ld32((c.r[4].w[0] + 456u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 388u)));
    set32(c.r[5], c.r[8].w[0] << 3);
    set32(c.r[8], c.r[5].w[0] - c.r[8].w[0]);
    set32(c.r[5], c.r[6].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    set32(c.r[6], c.r[8].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] - c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.budget -= 22;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00139B50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139A90u);  if (depth < kMaxDepth) unit_000E(c, 230u, depth + 1u); else { c.pc = 0x00139990u; return; } if (c.pc != 0x00139A90u) [[unlikely]] return; }
L_00139A90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 4u);  if (t) { goto L_00139B30; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[5], c.r[16].w[0] + 28u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139AA8u); set32(c.r[6], 0u + 328u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x00139AA8u) [[unlikely]] return; }
L_00139AA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139AB0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 320u, depth + 1u); else { c.pc = 0x0012E610u; return; } if (c.pc != 0x00139AB0u) [[unlikely]] return; }
L_00139AB0:
    set32(c.r[4], ld32((c.r[16].w[0] + 448u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00139AE8; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 452u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] - 17374u);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00139AE8u); c.r[5].d[0] = ld16((c.r[2].w[0]));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00139AE8u) [[unlikely]] return; }
L_00139AE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139AF0u); set32(c.r[4], c.r[16].w[0] + 460u);  if (depth < kMaxDepth) unit_000D(c, 69u, depth + 1u); else { c.pc = 0x001348D0u; return; } if (c.pc != 0x00139AF0u) [[unlikely]] return; }
L_00139AF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139AF8u); set32(c.r[4], ld32((c.r[16].w[0] + 584u)));  if (depth < kMaxDepth) unit_000E(c, 371u, depth + 1u); else { c.pc = 0x0013B030u; return; } if (c.pc != 0x00139AF8u) [[unlikely]] return; }
L_00139AF8:
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[17].w[0] << 2);
    c.budget -= 2;
L_00139B00:
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 360u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00139B18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139B18u);  if (depth < kMaxDepth) unit_000E(c, 350u, depth + 1u); else { c.pc = 0x0013AD50u; return; } if (c.pc != 0x00139B18u) [[unlikely]] return; }
L_00139B18:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[17].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00139B00u | kUnwind; return; } goto L_00139B00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00139BA0; } }
L_00139B30:
    set32(c.r[5], 0u + 51u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], 0u + 11u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139B48u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 267u, depth + 1u); else { c.pc = 0x0016A910u; return; } if (c.pc != 0x00139B48u) [[unlikely]] return; }
L_00139B48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00139B9C; } }
L_00139B50:
    set32(c.r[3], ld32((c.r[16].w[0] + 588u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 452u);  if (t) { goto L_00139B9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139B64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00139B64u) [[unlikely]] return; }
L_00139B64:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00139B98; } }
    set32(c.r[8], ld32((c.r[16].w[0] + 388u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[8].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[7], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139B94u); set32(c.r[6], c.r[16].w[0] + 28u);  if (depth < kMaxDepth) unit_000E(c, 400u, depth + 1u); else { c.pc = 0x0013B4F0u; return; } if (c.pc != 0x00139B94u) [[unlikely]] return; }
L_00139B94:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00139B98:
    st32((c.r[16].w[0] + 588u), c.r[4].w[0]);
    c.budget -= 1;
L_00139B9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00139BA0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00139BB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139BC8u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00139BC8u) [[unlikely]] return; }
L_00139BC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00139BF0; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00139BDC; } }
    set32(c.r[7], c.r[7].w[0] + 20u);
    c.budget -= 1;
L_00139BDC:
    set32(c.r[8], ld32((c.r[16].w[0] + 456u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139BF0u); set32(c.r[6], c.r[16].w[0] + 392u);  if (depth < kMaxDepth) unit_000E(c, 390u, depth + 1u); else { c.pc = 0x0013B250u; return; } if (c.pc != 0x00139BF0u) [[unlikely]] return; }
L_00139BF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00139C00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139C18u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 321u, depth + 1u); else { c.pc = 0x0012E630u; return; } if (c.pc != 0x00139C18u) [[unlikely]] return; }
L_00139C18:
    set32(c.r[4], ld32((c.r[16].w[0] + 448u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00139C50; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 452u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] - 17372u);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00139C50u); c.r[5].d[0] = ld16((c.r[2].w[0]));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00139C50u) [[unlikely]] return; }
L_00139C50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139C58u); set32(c.r[4], c.r[16].w[0] + 460u);  if (depth < kMaxDepth) unit_000D(c, 69u, depth + 1u); else { c.pc = 0x001348D0u; return; } if (c.pc != 0x00139C58u) [[unlikely]] return; }
L_00139C58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139C60u); set32(c.r[4], ld32((c.r[16].w[0] + 584u)));  if (depth < kMaxDepth) unit_000E(c, 371u, depth + 1u); else { c.pc = 0x0013B030u; return; } if (c.pc != 0x00139C60u) [[unlikely]] return; }
L_00139C60:
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[17].w[0] << 2);
    c.budget -= 2;
L_00139C68:
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 360u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00139C80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139C80u);  if (depth < kMaxDepth) unit_000E(c, 350u, depth + 1u); else { c.pc = 0x0013AD50u; return; } if (c.pc != 0x00139C80u) [[unlikely]] return; }
L_00139C80:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[17].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00139C68u | kUnwind; return; } goto L_00139C68; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00139CB0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E640u | kUnwind; return; } [[clang::musttail]] return unit_000B(c, 322u, depth); }
L_00139CC0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139CE4u); set32(c.r[4], 0u + 60u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00139CE4u) [[unlikely]] return; }
L_00139CE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00139CF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139CF4u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_000E(c, 354u, depth + 1u); else { c.pc = 0x0013AE30u; return; } if (c.pc != 0x00139CF4u) [[unlikely]] return; }
L_00139CF4:
    st32((c.r[17].w[0] + 584u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00139DAC; } }
L_00139D00:
    set32(c.r[6], ld32((c.r[17].w[0] + 456u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] - 17136u);
    set32(c.r[3], c.r[3].w[0] - c.r[16].w[0]);
    set32(c.r[2], 0u + 8u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[6].w[0] << 3);
    set32(c.r[6], c.r[5].w[0] - c.r[6].w[0]);
    set32(c.r[5], c.r[6].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 17;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 176u);  if (t) { goto L_00139DBC; } }
    set32(c.r[3], c.r[16].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] - 17312u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[18], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139D74u); set32(c.r[4], 0u + 176u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00139D74u) [[unlikely]] return; }
L_00139D74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] << 2);  if (t) { goto L_00139DA0; } }
    set32(c.r[9], ld32((c.r[18].w[0] + 48u)));
    c.r[10].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 456u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139D9Cu); set32(c.r[8], 0u + 11u);  if (depth < kMaxDepth) unit_000E(c, 300u, depth + 1u); else { c.pc = 0x0013A3B0u; return; } if (c.pc != 0x00139D9Cu) [[unlikely]] return; }
L_00139D9C:
    set32(c.r[3], c.r[16].w[0] << 2);
    c.budget -= 1;
L_00139DA0:
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    st32((c.r[3].w[0] + 360u), c.r[2].w[0]);
    c.budget -= 3;
L_00139DAC:
    c.r[2].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00139D00u | kUnwind; return; } goto L_00139D00; } }
    set32(c.r[4], 0u + 176u);
    c.budget -= 1;
L_00139DBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139DC4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00139DC4u) [[unlikely]] return; }
L_00139DC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00139DEC; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 456u)));
    set32(c.r[6], 0u + 6u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    set32(c.r[8], 0u + 11u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139DECu); c.r[10].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 300u, depth + 1u); else { c.pc = 0x0013A3B0u; return; } if (c.pc != 0x00139DECu) [[unlikely]] return; }
L_00139DEC:
    st32((c.r[17].w[0] + 384u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00139E00u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00139E00u) [[unlikely]] return; }
L_00139E00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00139E20:
    set32(c.r[6], ld32((c.r[5].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_00139E5C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 388u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 360u)));
    st8((c.r[3].w[0] + 88u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 388u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 388u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 360u)));
    st8((c.r[3].w[0] + 88u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 12;
L_00139E5C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00139E70:
    st32((c.r[5].w[0] + 36u), 0u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00138000u < 16384u) { entry = entries_000E[(t - 0x00138000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00139E90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00139EACu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00139EACu) [[unlikely]] return; }
L_00139EAC:
    st32((c.r[16].w[0] + 36u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00139EC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139ED4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 299u, depth + 1u); else { c.pc = 0x0013A390u; return; } if (c.pc != 0x00139ED4u) [[unlikely]] return; }
L_00139ED4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00139EEC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00139EECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00139EECu) [[unlikely]] return; }
L_00139EEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00139F00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[7], c.r[7].w[0] - 4096u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], c.r[29].w[0] + 32u);
    ld128((c.r[7].w[0]) & ~15u, c.r[5]);
    c.f[0] = ld32((c.r[7].w[0] + 24u));
    c.r[3].d[0] = ld64((c.r[7].w[0] + 16u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[6].w[0]) & ~15u, c.r[5]);
    st64((c.r[6].w[0] + 16u), c.r[3].d[0]);
    st32((c.r[6].w[0] + 24u), c.f[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 588u)));
    c.budget -= 16;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013A098; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00139F50u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00139F50u) [[unlikely]] return; }
L_00139F50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013A098; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 588u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 388u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 380u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[29].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 32u)));
    st32((c.r[3].w[0] + 36u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 388u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 320u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[5], c.r[4].w[0] + 36u);
    set32(c.r[4], ld32((c.r[4].w[0] + 36u)));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 22;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00139FBC; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[3].w[0]);  if (t) { goto L_00139FC4; } }
L_00139FBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139FC4u);  if (depth < kMaxDepth) unit_000E(c, 281u, depth + 1u); else { c.pc = 0x0013A0F0u; return; } if (c.pc != 0x00139FC4u) [[unlikely]] return; }
L_00139FC4:
    set32(c.r[4], ld32((c.r[16].w[0] + 588u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00139FE8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00139FE8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00139FE8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00139FE8u) [[unlikely]] return; }
L_00139FE8:
    st32((c.r[16].w[0] + 588u), 0u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 356u)));
    set32(c.r[8], 0u + 1u);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[9].w[0] - 17136u);
    set32(c.r[7], 0u + 8u);
    set32(c.r[6], 0u + 6u);
    set32(c.r[5], 0u + 7u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 36u), c.r[8].w[0]);  if (t) { goto L_0013A08C; } }
L_0013A014:
    set32(c.r[10], ld32((c.r[16].w[0] + 456u)));
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[8], c.r[10].w[0] << 3);
    set32(c.r[10], c.r[8].w[0] - c.r[10].w[0]);
    set32(c.r[8], c.r[10].w[0] << 3);
    set32(c.r[8], c.r[8].w[0] - c.r[10].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[8], c.r[9].w[0] + c.r[8].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[8].w[0]);
    c.budget -= 11;
L_0013A040:
    set32(c.r[4], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[7].d[0];  if (t) { goto L_0013A098; } }
    set32(c.r[4], c.r[3].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    set32(c.r[8], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 7;
    { const bool t = c.r[8].d[0] != c.r[6].d[0]; set32(c.r[4], c.r[3].w[0] << 2);  if (t) { goto L_0013A07C; } }
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 360u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 64u), c.r[5].w[0]);  if (t) { goto L_0013A088; } }
L_0013A07C:
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 1;
L_0013A080:
    set32(c.r[4], ld32((c.r[4].w[0] + 360u)));
    st32((c.r[4].w[0] + 64u), c.r[8].w[0]);
    c.budget -= 2;
L_0013A088:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_0013A08C:
    c.r[4].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013A014u | kUnwind; return; } goto L_0013A014; } }
L_0013A098:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 25376u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013A0D4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A0B8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013A0B8u) [[unlikely]] return; }
L_0013A0B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013A0D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A0C8u);  if (depth < kMaxDepth) unit_001A(c, 271u, depth + 1u); else { c.pc = 0x0016A9E0u; return; } if (c.pc != 0x0013A0C8u) [[unlikely]] return; }
L_0013A0C8:
    set32(c.r[3], ld32((c.r[16].w[0] + 356u)));
    set32(c.r[4], 0u + 1u);
    st32((c.r[3].w[0] + 36u), c.r[4].w[0]);
    c.budget -= 3;
L_0013A0D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0013A0F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] - 4064u);
    c.budget -= 4;
L_0013A100:
    ld128((c.r[3].w[0]) & ~15u, c.r[5]);
    set32(c.r[6], c.r[29].w[0] + 16u);
    c.r[3].d[0] = ld64((c.r[3].w[0] + 16u));
    st128((c.r[6].w[0]) & ~15u, c.r[5]);
    st64((c.r[6].w[0] + 16u), c.r[3].d[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 388u)));
    set32(c.r[8], ld32((c.r[4].w[0] + 328u)));
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[8].w[0] + c.r[29].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[5].d[0] = ld8((c.r[5].w[0] + 16u));
    set32(c.r[7], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 15;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[9], ld32((c.r[7].w[0] + 36u)));  if (t) { goto L_0013A284; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 1;
L_0013A140:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != c.r[5].d[0]; c.r[5].d[0] = c.r[6].d[0] & 1ull;  if (t) { goto L_0013A17C; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0013A160; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A158u);  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013A2A0u; return; } if (c.pc != 0x0013A158u) [[unlikely]] return; }
L_0013A158:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0013A290; } }
L_0013A160:
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[9].d[0] != c.r[3].d[0];  if (t) { goto L_0013A28C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A174u);  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013A2A0u; return; } if (c.pc != 0x0013A174u) [[unlikely]] return; }
L_0013A174:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013A28C; } }
L_0013A17C:
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[13], c.r[13].w[0] - 17136u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[11], 0u + 8u);  if (t) { goto L_0013A200; } }
L_0013A194:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[7].d[0]; set32(c.r[10], c.r[7].w[0] << 1);  if (t) { goto L_0013A1FC; } }
    set32(c.r[10], c.r[10].w[0] + c.r[7].w[0]);
    set32(c.r[10], c.r[10].w[0] << 4);
    set32(c.r[10], c.r[4].w[0] + c.r[10].w[0]);
    set32(c.r[10], ld32((c.r[10].w[0] + 36u)));
    c.budget -= 6;
    { const bool t = c.r[9].d[0] != c.r[10].d[0];  if (t) { goto L_0013A1FC; } }
    set32(c.r[14], ld32((c.r[4].w[0] + 456u)));
    set32(c.r[10], c.r[7].w[0] << 3);
    set32(c.r[10], c.r[10].w[0] - c.r[7].w[0]);
    set32(c.r[10], c.r[10].w[0] << 2);
    set32(c.r[12], c.r[14].w[0] << 3);
    set32(c.r[14], c.r[12].w[0] - c.r[14].w[0]);
    set32(c.r[12], c.r[14].w[0] << 3);
    set32(c.r[12], c.r[12].w[0] - c.r[14].w[0]);
    set32(c.r[12], c.r[12].w[0] << 2);
    set32(c.r[12], c.r[13].w[0] + c.r[12].w[0]);
    set32(c.r[10], c.r[10].w[0] + c.r[12].w[0]);
    set32(c.r[10], ld32((c.r[10].w[0] + 24u)));
    c.budget -= 14;
    { const bool t = c.r[10].d[0] == c.r[11].d[0]; c.r[10].d[0] = c.r[7].d[0] & 1ull;  if (t) { goto L_0013A20C; } }
    c.budget -= 2;
    { const bool t = c.r[10].d[0] == c.r[5].d[0];  if (t) { goto L_0013A1FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = c.r[10].d[0] + 0ull;  if (t) { goto L_0013A20C; } }
L_0013A1FC:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_0013A200:
    c.r[10].d[0] = c.r[7].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[10].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013A194u | kUnwind; return; } goto L_0013A194; } }
L_0013A20C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[8].d[0];  if (t) { goto L_0013A274; } }
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0013A234; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A22Cu);  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013A2A0u; return; } if (c.pc != 0x0013A22Cu) [[unlikely]] return; }
L_0013A22C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013A28C; } }
L_0013A234:
    set32(c.r[3], ld32((c.r[4].w[0] + 240u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0013A24C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 228u)));
    c.budget -= 3;
    { const bool t = c.r[9].d[0] == c.r[3].d[0];  if (t) { goto L_0013A264; } }
L_0013A24C:
    set32(c.r[3], ld32((c.r[4].w[0] + 288u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0013A28C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 276u)));
    c.budget -= 3;
    { const bool t = c.r[9].d[0] != c.r[3].d[0];  if (t) { goto L_0013A28C; } }
L_0013A264:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A26Cu);  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013A2A0u; return; } if (c.pc != 0x0013A26Cu) [[unlikely]] return; }
L_0013A26C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013A28C; } }
L_0013A274:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A27Cu);  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013A2A0u; return; } if (c.pc != 0x0013A27Cu) [[unlikely]] return; }
L_0013A27C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013A28C; } }
L_0013A284:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A28Cu);  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013A2A0u; return; } if (c.pc != 0x0013A28Cu) [[unlikely]] return; }
L_0013A28C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0013A290:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0013A2A0:
    set32(c.r[5], ld32((c.r[4].w[0] + 388u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[8], ld32((c.r[3].w[0] + 36u)));
    set32(c.r[5], 0u + 6u);
    c.budget -= 8;
L_0013A2C0:
    set32(c.r[3], ld32((c.r[4].w[0] + 388u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[7].d[0]; set32(c.r[3], c.r[7].w[0] << 1);  if (t) { goto L_0013A2EC; } }
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[3].w[0] + 36u);
    set32(c.r[3], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 7;
    { const bool t = c.r[8].d[0] != c.r[3].d[0];  if (t) { goto L_0013A2EC; } }
    st32((c.r[6].w[0]), c.r[5].w[0]);
    c.budget -= 1;
L_0013A2EC:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013A2C0u | kUnwind; return; } goto L_0013A2C0; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013A310:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A324u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 299u, depth + 1u); else { c.pc = 0x0013A390u; return; } if (c.pc != 0x0013A324u) [[unlikely]] return; }
L_0013A324:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013A33C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A33Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013A33Cu) [[unlikely]] return; }
L_0013A33C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0013A350:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A364u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 299u, depth + 1u); else { c.pc = 0x0013A390u; return; } if (c.pc != 0x0013A364u) [[unlikely]] return; }
L_0013A364:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013A37C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A37Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013A37Cu) [[unlikely]] return; }
L_0013A37C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0013A390:
    set32(c.r[3], ld32((c.r[4].w[0] + 448u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0013A3A0; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 137u));
    c.budget -= 1;
L_0013A3A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013A3B0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[9].d[0] + 0ull;
    c.r[16].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A3F0u); c.r[5].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x0013A3F0u) [[unlikely]] return; }
L_0013A3F0:
    set32(c.r[4], c.r[21].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A3FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 256u, depth + 1u); else { c.pc = 0x0013E440u; return; } if (c.pc != 0x0013A3FCu) [[unlikely]] return; }
L_0013A3FC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 19040u);
    set32(c.r[2], c.r[2].w[0] - 19024u);
    st32((c.r[21].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[21].w[0] + 28u);
    st32((c.r[21].w[0] + 12u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[21].w[0] + 20u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A428u); st32((c.r[21].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_0049(c, 271u, depth + 1u); else { c.pc = 0x002275A0u; return; } if (c.pc != 0x0013A428u) [[unlikely]] return; }
L_0013A428:
    st32((c.r[21].w[0] + 64u), c.r[16].w[0]);
    set32(c.r[4], 0u + 9u);
    st32((c.r[21].w[0] + 68u), c.r[20].w[0]);
    st32((c.r[21].w[0] + 72u), c.r[19].w[0]);
    st32((c.r[21].w[0] + 76u), 0u);
    st32((c.r[21].w[0] + 80u), 0u);
    st32((c.r[21].w[0] + 84u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A44Cu); st8((c.r[21].w[0] + 88u), static_cast<std::uint8_t>(c.r[18].w[0]));  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0013A44Cu) [[unlikely]] return; }
L_0013A44C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A458u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0013A458u) [[unlikely]] return; }
L_0013A458:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    st128((c.r[21].w[0] + 96u) & ~15u, c.r[3]);
    set32(c.r[2], 0u + 30u);
    ld128((c.r[16].w[0]) & ~15u, c.r[3]);
    st128((c.r[21].w[0] + 112u) & ~15u, c.r[3]);
    st32((c.r[21].w[0] + 148u), c.r[2].w[0]);
    st32((c.r[21].w[0] + 144u), 0u);
    st32((c.r[21].w[0] + 156u), 0u);
    st8((c.r[21].w[0] + 152u), static_cast<std::uint8_t>(0u));
    ld128((c.r[21].w[0] + 96u) & ~15u, c.r[2]);
    st128((c.r[21].w[0] + 128u) & ~15u, c.r[2]);
    st32((c.r[21].w[0] + 160u), 0u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A494u); st32((c.r[21].w[0] + 164u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_000E(c, 314u, depth + 1u); else { c.pc = 0x0013A5A0u; return; } if (c.pc != 0x0013A494u) [[unlikely]] return; }
L_0013A494:
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0013A4C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0013A580; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 19040u);
    set32(c.r[2], c.r[2].w[0] - 19024u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013A518; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013A518; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A518u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013A518u) [[unlikely]] return; }
L_0013A518:
    st32((c.r[17].w[0] + 76u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013A540; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013A540; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A540u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013A540u) [[unlikely]] return; }
L_0013A540:
    set32(c.r[4], c.r[17].w[0] + 28u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A550u); st32((c.r[17].w[0] + 84u), 0u);  if (depth < kMaxDepth) unit_0049(c, 274u, depth + 1u); else { c.pc = 0x002275F0u; return; } if (c.pc != 0x0013A550u) [[unlikely]] return; }
L_0013A550:
    set32(c.r[4], c.r[17].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A55Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E490u; return; } if (c.pc != 0x0013A55Cu) [[unlikely]] return; }
L_0013A55C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A568u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x0013A568u) [[unlikely]] return; }
L_0013A568:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0013A584; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A580u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0013A580u) [[unlikely]] return; }
L_0013A580:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0013A584:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0013A5A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A5BCu); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0013A5BCu) [[unlikely]] return; }
L_0013A5BC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_0013A5EC; } }
    set32(c.r[5], 0u + 12u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A5D8u); set32(c.r[4], c.r[2].w[0] + 624u);  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x0013A5D8u) [[unlikely]] return; }
L_0013A5D8:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[5].d[0] = ld64((c.r[2].w[0] + 80u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A5E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x0013A5E8u) [[unlikely]] return; }
L_0013A5E8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0013A5EC:
    st32((c.r[17].w[0] + 76u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0013A604; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A604u);  if (depth < kMaxDepth) unit_000E(c, 342u, depth + 1u); else { c.pc = 0x0013AB70u; return; } if (c.pc != 0x0013A604u) [[unlikely]] return; }
L_0013A604:
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0013A618; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A618u);  if (depth < kMaxDepth) unit_000E(c, 345u, depth + 1u); else { c.pc = 0x0013AC30u; return; } if (c.pc != 0x0013A618u) [[unlikely]] return; }
L_0013A618:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0013A630:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013A8B0; } }
    set32(c.r[7], ld32((c.r[17].w[0] + 72u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00150000u);
    c.r[2].d[0] = c.r[2].d[0] | 17999ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 68u)));
    c.f[0] = c.r[2].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[5].w[0] - 17136u);
    set32(c.r[3], c.r[3].w[0] - 17132u);
    set32(c.r[2], c.r[7].w[0] << 3);
    set32(c.r[7], c.r[2].w[0] - c.r[7].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    set32(c.r[2], c.r[6].w[0] << 3);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[2].w[0] - c.r[6].w[0]);
    set32(c.r[2], c.r[6].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[7].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    c.f[12] = ld32((c.r[3].w[0]));
    c.f[13] = ld32((c.r[2].w[0]));
    c.budget -= 27;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A6BCu); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013A6BCu) [[unlikely]] return; }
L_0013A6BC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    c.f[0] = ld32((c.r[1].w[0] - 13400u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[3].w[0] + 16u), c.f[0]);
    st32((c.r[3].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A6E0u); st32((c.r[3].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 352u, depth + 1u); else { c.pc = 0x0013ADA0u; return; } if (c.pc != 0x0013A6E0u) [[unlikely]] return; }
L_0013A6E0:
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], 0u + 12u);
    st32((c.r[3].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A6FCu); set32(c.r[4], c.r[2].w[0] + 624u);  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x0013A6FCu) [[unlikely]] return; }
L_0013A6FC:
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = ld64((c.r[5].w[0] + 80u));
    set32(c.r[2], c.r[29].w[0] + 72u);
    st64((c.r[29].w[0] + 72u), c.r[5].d[0]);
    set32(c.r[6], ld32((c.r[17].w[0] + 76u)));
    st64((c.r[6].w[0] + 256u), c.r[5].d[0]);
    c.r[2].d[0] = ld64((c.r[2].w[0]));
    st64((c.r[4].w[0]), c.r[2].d[0]);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 67u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[6].w[0] + 160u), c.f[0]);
    c.r[2].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[2].d[0] = c.r[2].d[0] << 30;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[6].w[0] + 164u), c.f[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 31;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A778u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013A778u) [[unlikely]] return; }
L_0013A778:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 88u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 2u);  if (t) { goto L_0013A7E0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00260000u);
    c.r[3].d[0] = c.r[3].d[0] | 22647ull;
    st32((c.r[2].w[0] + 132u), c.r[3].w[0]);
    ld128((c.r[17].w[0] + 128u) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    st128((c.r[2].w[0] + 48u) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[17].w[0] + 160u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 128u);  if (t) { goto L_0013A804; } }
    set32(c.r[16], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A7BCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 352u, depth + 1u); else { c.pc = 0x0013ADA0u; return; } if (c.pc != 0x0013A7BCu) [[unlikely]] return; }
L_0013A7BC:
    set32(c.r[3], 0u + 255u);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[3], c.r[16].w[0] - c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_0013A7D4; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0013A7D4:
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 60u), c.r[3].w[0]);  if (t) { goto L_0013A804; } }
L_0013A7E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A7E8u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0013A7E8u) [[unlikely]] return; }
L_0013A7E8:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A7FCu); st128((c.r[2].w[0] + 48u) & ~15u, c.r[3]);  if (depth < kMaxDepth) unit_000E(c, 352u, depth + 1u); else { c.pc = 0x0013ADA0u; return; } if (c.pc != 0x0013A7FCu) [[unlikely]] return; }
L_0013A7FC:
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    st32((c.r[3].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 2;
L_0013A804:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    c.f[0] = ld32((c.r[1].w[0] - 13400u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], 0u + 12u);
    st32((c.r[3].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[3].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A834u); set32(c.r[4], c.r[2].w[0] + 624u);  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x0013A834u) [[unlikely]] return; }
L_0013A834:
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = ld64((c.r[5].w[0] + 112u));
    set32(c.r[2], c.r[29].w[0] + 56u);
    st64((c.r[29].w[0] + 56u), c.r[5].d[0]);
    set32(c.r[6], ld32((c.r[17].w[0] + 76u)));
    st64((c.r[6].w[0] + 256u), c.r[5].d[0]);
    c.r[2].d[0] = ld64((c.r[2].w[0]));
    st64((c.r[4].w[0]), c.r[2].d[0]);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 51u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[6].w[0] + 160u), c.f[0]);
    c.r[2].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 19;
L_0013A880:
    c.r[2].d[0] = c.r[2].d[0] << 30;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[6].w[0] + 164u), c.f[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A8B0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013A8B0u) [[unlikely]] return; }
L_0013A8B0:
    set32(c.r[16], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0013AA70; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 221u);  if (t) { goto L_0013A8F4; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 64u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 17168u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A8E8u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x0013A8E8u) [[unlikely]] return; }
L_0013A8E8:
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 356u), 0u);  if (t) { goto L_0013A904; } }
L_0013A8F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A8FCu);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x0013A8FCu) [[unlikely]] return; }
L_0013A8FC:
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 356u), 0u);
    c.budget -= 2;
L_0013A904:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A90Cu); set32(c.r[4], ld32((c.r[17].w[0] + 72u)));  if (depth < kMaxDepth) unit_000E(c, 190u, depth + 1u); else { c.pc = 0x001394D0u; return; } if (c.pc != 0x0013A90Cu) [[unlikely]] return; }
L_0013A90C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A914u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0013A914u) [[unlikely]] return; }
L_0013A914:
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[5].w[0] - 17136u);
    set32(c.r[3], c.r[3].w[0] - 17132u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    st128((c.r[4].w[0] + 48u) & ~15u, c.r[6]);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[7], ld32((c.r[17].w[0] + 72u)));
    c.f[0] = c.r[2].w[0];
    set32(c.r[6], ld32((c.r[17].w[0] + 68u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[2], c.r[7].w[0] << 3);
    set32(c.r[7], c.r[2].w[0] - c.r[7].w[0]);
    set32(c.r[2], c.r[6].w[0] << 3);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[6], c.r[2].w[0] - c.r[6].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[2], c.r[6].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    set32(c.r[3], c.r[7].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    c.f[12] = ld32((c.r[3].w[0]));
    c.f[13] = ld32((c.r[2].w[0]));
    c.budget -= 31;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A990u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013A990u) [[unlikely]] return; }
L_0013A990:
    set32(c.r[2], ld32((c.r[17].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013AA18; } }
    set32(c.r[8], ld32((c.r[17].w[0] + 72u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00260000u);
    c.r[2].d[0] = c.r[2].d[0] | 22647ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    set32(c.r[7], ld32((c.r[17].w[0] + 68u)));
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[6], c.r[6].w[0] - 17136u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[5], c.r[5].w[0] - 17132u);
    set32(c.r[2], c.r[8].w[0] << 3);
    set32(c.r[8], c.r[2].w[0] - c.r[8].w[0]);
    set32(c.r[2], c.r[7].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] - c.r[7].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[12] = ld32((c.r[3].w[0]));
    c.budget -= 31;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AA18u); c.f[13] = fp::sub(c.f[0], c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013AA18u) [[unlikely]] return; }
L_0013AA18:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 88u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0013AA3C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 132u), c.r[3].w[0]);  if (t) { goto L_0013AA4C; } }
L_0013AA3C:
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00260000u);
    c.r[3].d[0] = c.r[3].d[0] | 22647ull;
    st32((c.r[2].w[0] + 132u), c.r[3].w[0]);
    c.budget -= 4;
L_0013AA4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AA54u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 352u, depth + 1u); else { c.pc = 0x0013ADA0u; return; } if (c.pc != 0x0013AA54u) [[unlikely]] return; }
L_0013AA54:
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    st32((c.r[3].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AA70u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013AA70u) [[unlikely]] return; }
L_0013AA70:
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013AB58; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.f[2] = c.r[2].w[0];
    set32(c.r[8], ld32((c.r[17].w[0] + 72u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00260000u);
    set32(c.r[7], ld32((c.r[17].w[0] + 68u)));
    c.r[2].d[0] = c.r[2].d[0] | 22647ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[0] = c.r[2].w[0];
    set32(c.r[6], c.r[6].w[0] - 17136u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[5], c.r[5].w[0] - 17132u);
    set32(c.r[2], c.r[8].w[0] << 3);
    set32(c.r[8], c.r[2].w[0] - c.r[8].w[0]);
    set32(c.r[2], c.r[7].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] - c.r[7].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[12] = fp::add(c.f[2], c.f[3]);
    c.budget -= 33;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AB00u); c.f[13] = fp::add(c.f[1], c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013AB00u) [[unlikely]] return; }
L_0013AB00:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 88u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0013AB24; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 132u), c.r[3].w[0]);  if (t) { goto L_0013AB34; } }
L_0013AB24:
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00260000u);
    c.r[3].d[0] = c.r[3].d[0] | 22647ull;
    st32((c.r[2].w[0] + 132u), c.r[3].w[0]);
    c.budget -= 4;
L_0013AB34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AB3Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 352u, depth + 1u); else { c.pc = 0x0013ADA0u; return; } if (c.pc != 0x0013AB3Cu) [[unlikely]] return; }
L_0013AB3C:
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    st32((c.r[3].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AB58u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013AB58u) [[unlikely]] return; }
L_0013AB58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0013AB70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 6u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0013ABB8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 440u)));
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013ABACu); set32(c.r[4], 0u + 91u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x0013ABACu) [[unlikely]] return; }
L_0013ABAC:
    st32((c.r[17].w[0] + 352u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 356u), 0u);  if (t) { goto L_0013ABF0; } }
L_0013ABB8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[2], c.r[2].w[0] - 17168u);
    set32(c.r[3], ld32((c.r[3].w[0] + 332u)));
    st32((c.r[16].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013ABE8u); set32(c.r[17], ld32((c.r[16].w[0] + 80u)));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x0013ABE8u) [[unlikely]] return; }
L_0013ABE8:
    st32((c.r[17].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 356u), 0u);
    c.budget -= 2;
L_0013ABF0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    c.f[0] = ld32((c.r[1].w[0] - 13408u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] - 13408u));
    st32((c.r[4].w[0] + 20u), c.f[0]);
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0013AC30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] - 4032u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[29].w[0] + 48u);
    set32(c.r[5], ld32((c.r[1].w[0] + 26392u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 272u);
    set32(c.r[17], ld32((c.r[5].w[0] + 548u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AC6Cu); st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0013AC6Cu) [[unlikely]] return; }
L_0013AC6C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013AC94; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AC90u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 110u, depth + 1u); else { c.pc = 0x001630C0u; return; } if (c.pc != 0x0013AC90u) [[unlikely]] return; }
L_0013AC90:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0013AC94:
    st32((c.r[16].w[0] + 84u), c.r[4].w[0]);
    set32(c.r[3], 0u + 45u);
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[29].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_0013ACD0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    c.f[0] = ld32((c.r[1].w[0] - 13416u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 16u), c.f[0]);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_0013ACE4; } }
L_0013ACD0:
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 5;
L_0013ACE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0013AD00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 4016u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], c.r[29].w[0] + 32u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 28u);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AD34u); st64((c.r[5].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x0013AD34u) [[unlikely]] return; }
L_0013AD34:
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 160u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0013AD50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 3984u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], c.r[29].w[0] + 32u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 28u);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AD84u); st64((c.r[5].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x0013AD84u) [[unlikely]] return; }
L_0013AD84:
    set32(c.r[3], 0u + 2u);
    st32((c.r[16].w[0] + 160u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0013ADA0:
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013ADC0:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 152u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013ADF8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 156u)));
    set32(c.r[3], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0] + 156u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 144u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0013AE28; } }
    st32((c.r[4].w[0] + 156u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 152u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0013AE28; } }
L_0013ADF8:
    set32(c.r[2], ld32((c.r[4].w[0] + 156u)));
    set32(c.r[5], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0] + 156u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 148u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 144u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0013AE28; } }
    st32((c.r[4].w[0] + 156u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 152u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0013AE28:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] + 96u);  [[clang::musttail]] return unit_002A(c, 280u, depth); }
L_0013AE30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AE48u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x0013AE48u) [[unlikely]] return; }
L_0013AE48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[17].w[0] + 20u);
    set32(c.r[2], c.r[2].w[0] - 19056u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AE60u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 271u, depth + 1u); else { c.pc = 0x002275A0u; return; } if (c.pc != 0x0013AE60u) [[unlikely]] return; }
L_0013AE60:
    st32((c.r[17].w[0] + 56u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[5], 0u + 12u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AE78u); set32(c.r[4], c.r[2].w[0] + 624u);  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x0013AE78u) [[unlikely]] return; }
L_0013AE78:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AE84u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0013AE84u) [[unlikely]] return; }
L_0013AE84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013AE9C; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[5].d[0] = ld64((c.r[3].w[0] + 16u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AE9Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x0013AE9Cu) [[unlikely]] return; }
L_0013AE9C:
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0013AEC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0013AF40; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 19056u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013AF0C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013AF0C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AF0Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013AF0Cu) [[unlikely]] return; }
L_0013AF0C:
    set32(c.r[4], c.r[17].w[0] + 20u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AF1Cu); st32((c.r[17].w[0] + 56u), 0u);  if (depth < kMaxDepth) unit_0049(c, 274u, depth + 1u); else { c.pc = 0x002275F0u; return; } if (c.pc != 0x0013AF1Cu) [[unlikely]] return; }
L_0013AF1C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AF28u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x0013AF28u) [[unlikely]] return; }
L_0013AF28:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0013AF44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AF40u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0013AF40u) [[unlikely]] return; }
L_0013AF40:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0013AF44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0013AF60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[12] = c.r[2].w[0];
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[6], ld32((c.r[4].w[0] + 56u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43740000u);
    c.f[13] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00260000u);
    c.r[2].d[0] = c.r[2].d[0] | 22647ull;
    c.f[0] = c.r[2].w[0];
    st32((c.r[6].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[6].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 22;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AFB8u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013AFB8u) [[unlikely]] return; }
L_0013AFB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AFC0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 374u, depth + 1u); else { c.pc = 0x0013B070u; return; } if (c.pc != 0x0013AFC0u) [[unlikely]] return; }
L_0013AFC0:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    st32((c.r[3].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AFDCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013AFDCu) [[unlikely]] return; }
L_0013AFDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0013AFF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 3952u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[5], c.r[29].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 20u);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B01Cu); st64((c.r[5].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x0013B01Cu) [[unlikely]] return; }
L_0013B01C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0013B030:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 3;
L_0013B03C:
    set32(c.r[2], c.r[2].w[0] - 3920u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[5], c.r[29].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 20u);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B05Cu); st64((c.r[5].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x0013B05Cu) [[unlikely]] return; }
L_0013B05C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0013B070:
    c.f[0] = ld32((c.r[4].w[0] + 32u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013B080:
    c.budget -= 1;
    c.pc = 0x0013B084u; [[clang::musttail]] return dispatch(c, 0u, depth);
L_0013B090:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B0A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x0013B0A4u) [[unlikely]] return; }
L_0013B0A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], 0u + 256u);
    set32(c.r[2], c.r[2].w[0] - 19072u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B0C0u); st32((c.r[16].w[0] + 16u), 0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0013B0C0u) [[unlikely]] return; }
L_0013B0C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0013B0D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B0D0u);  if (depth < kMaxDepth) unit_0017(c, 177u, depth + 1u); else { c.pc = 0x0015E070u; return; } if (c.pc != 0x0013B0D0u) [[unlikely]] return; }
L_0013B0D0:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.f[12] = 0u;
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x44200000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00260000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43F00000u);
    c.r[2].d[0] = c.r[2].d[0] | 22647ull;
    c.f[0] = c.r[2].w[0];
    c.f[13] = c.f[12];
    st32((c.r[5].w[0] + 160u), c.r[4].w[0]);
    st32((c.r[5].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B110u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013B110u) [[unlikely]] return; }
L_0013B110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B118u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0013B118u) [[unlikely]] return; }
L_0013B118:
    ld128((c.r[2].w[0]) & ~15u, c.r[4]);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st128((c.r[3].w[0] + 48u) & ~15u, c.r[4]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0013B140:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0013B1B4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 19072u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013B18C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013B18C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B18Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013B18Cu) [[unlikely]] return; }
L_0013B18C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B19Cu); st32((c.r[17].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x0013B19Cu) [[unlikely]] return; }
L_0013B19C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0013B1B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B1B4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0013B1B4u) [[unlikely]] return; }
L_0013B1B4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0013B1B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0013B1D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0013B218; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 17408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B200u); st32((c.r[17].w[0] + 176u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 264u, depth + 1u); else { c.pc = 0x0014ADA0u; return; } if (c.pc != 0x0013B200u) [[unlikely]] return; }
L_0013B200:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0013B21C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B218u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0013B218u) [[unlikely]] return; }
L_0013B218:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0013B21C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0013B230:
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00138000u < 16384u) { entry = entries_000E[(t - 0x00138000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0013B250:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[9], 0u + 7u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B278u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 345u, depth + 1u); else { c.pc = 0x0012E800u; return; } if (c.pc != 0x0013B278u) [[unlikely]] return; }
L_0013B278:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 19120u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 40u), c.r[16].w[0]);
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B29Cu); set32(c.r[5], 0u + 6u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013B29Cu) [[unlikely]] return; }
L_0013B29C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0013B2C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0013B308; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 19120u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B2F0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 347u, depth + 1u); else { c.pc = 0x0012E8A0u; return; } if (c.pc != 0x0013B2F0u) [[unlikely]] return; }
L_0013B2F0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0013B30C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B308u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0013B308u) [[unlikely]] return; }
L_0013B308:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0013B30C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0013B320:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013B330:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 36u), 0u);  c.pc = t; return; }
L_0013B340:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 36u), 0u);  c.pc = t; return; }
L_0013B350:
    c.r[3].d[0] = ld16((c.r[5].w[0] + 168u));
    c.r[2].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 16384ull;  if (t) { goto L_0013B3B8; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 40u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[5], c.r[5].w[0] - 17128u);
    set32(c.r[2], c.r[6].w[0] << 3);
    set32(c.r[6], c.r[2].w[0] - c.r[6].w[0]);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[6].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 17;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0013B3AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0013B4E0; } }
L_0013B3AC:
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0013B4E0; } }
L_0013B3B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013B418; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 40u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[5], c.r[5].w[0] - 17124u);
    set32(c.r[2], c.r[6].w[0] << 3);
    set32(c.r[6], c.r[2].w[0] - c.r[6].w[0]);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[6].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 17;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0013B40C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0013B4E0; } }
L_0013B40C:
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0013B4E0; } }
L_0013B418:
    c.r[2].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 8192ull;  if (t) { goto L_0013B47C; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 40u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[5], c.r[5].w[0] - 17120u);
    set32(c.r[2], c.r[6].w[0] << 3);
    set32(c.r[6], c.r[2].w[0] - c.r[6].w[0]);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[6].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 17;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0013B470; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0013B4E0; } }
L_0013B470:
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0013B4E0; } }
L_0013B47C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013B4DC; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 40u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[5], c.r[5].w[0] - 17116u);
    set32(c.r[2], c.r[6].w[0] << 3);
    set32(c.r[6], c.r[2].w[0] - c.r[6].w[0]);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[6].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 17;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0013B4D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0013B4E0; } }
L_0013B4D0:
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0013B4E0; } }
L_0013B4DC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0013B4E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013B4F0:
    set32(c.r[29], c.r[29].w[0] - 400u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 64u);
    set32(c.r[4], 0u + 41u);
    c.budget -= 10;
L_0013B518:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[7].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[7].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[7], c.r[7].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013B518u | kUnwind; return; } goto L_0013B518; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 356u)));
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 388u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B550u); set32(c.r[6], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_000C(c, 12u, depth + 1u); else { c.pc = 0x001300B0u; return; } if (c.pc != 0x0013B550u) [[unlikely]] return; }
L_0013B550:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 19280u);
    set32(c.r[2], c.r[2].w[0] - 19192u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[29].w[0] + 64u);
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[5], c.r[18].w[0] + 48u);
    set32(c.r[4], 0u + 41u);
    c.budget -= 9;
L_0013B574:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013B574u | kUnwind; return; } goto L_0013B574; } }
    set32(c.r[2], 0u + 7u);
    st32((c.r[18].w[0] + 376u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 380u), c.r[17].w[0]);
    st32((c.r[18].w[0] + 384u), c.r[16].w[0]);
    st32((c.r[18].w[0] + 444u), 0u);
    st32((c.r[18].w[0] + 448u), 0u);
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B5BCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013B5BCu) [[unlikely]] return; }
L_0013B5BC:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 400u);  c.pc = t; return; }
L_0013B5E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0013B6B0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 19280u);
    set32(c.r[2], c.r[2].w[0] - 19192u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013B638; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013B638; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B638u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013B638u) [[unlikely]] return; }
L_0013B638:
    st32((c.r[17].w[0] + 24u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 444u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013B660; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013B660; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B660u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013B660u) [[unlikely]] return; }
L_0013B660:
    st32((c.r[17].w[0] + 444u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 448u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013B688; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013B688; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B688u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013B688u) [[unlikely]] return; }
L_0013B688:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B698u); st32((c.r[17].w[0] + 448u), 0u);  if (depth < kMaxDepth) unit_000C(c, 15u, depth + 1u); else { c.pc = 0x00130130u; return; } if (c.pc != 0x0013B698u) [[unlikely]] return; }
L_0013B698:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0013B6B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B6B0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0013B6B0u) [[unlikely]] return; }
L_0013B6B0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0013B6B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0013B6D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 56u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B6ECu); set32(c.r[4], c.r[16].w[0] + 388u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x0013B6ECu) [[unlikely]] return; }
L_0013B6EC:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0013B718; } }
L_0013B6F8:
    set32(c.r[2], ld32((c.r[16].w[0] + 340u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[4].w[0] << 3);  if (t) { goto L_0013B714; } }
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0] + 388u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 389u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0013B714:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_0013B718:
    set32(c.r[2], ld32((c.r[16].w[0] + 376u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013B6F8u | kUnwind; return; } goto L_0013B6F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B730u); set32(c.r[4], 0u + 496u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0013B730u) [[unlikely]] return; }
L_0013B730:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013B750; } }
    set32(c.r[7], ld32((c.r[16].w[0] + 376u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[16].w[0] + 384u)));
    set32(c.r[5], 0u + 11u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B750u); set32(c.r[6], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_000E(c, 458u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x0013B750u) [[unlikely]] return; }
L_0013B750:
    st32((c.r[16].w[0] + 444u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B75Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 21u, depth + 1u); else { c.pc = 0x001301E0u; return; } if (c.pc != 0x0013B75Cu) [[unlikely]] return; }
L_0013B75C:
    set32(c.r[3], ld32((c.r[16].w[0] + 384u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 340u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 56u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0013B7A4; } }
    st32((c.r[16].w[0] + 380u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B79Cu); set32(c.r[5], ld32((c.r[16].w[0] + 380u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013B79Cu) [[unlikely]] return; }
L_0013B79C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[16].w[0] + 348u)));  if (t) { goto L_0013B7BC; } }
L_0013B7A4:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B7B8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013B7B8u) [[unlikely]] return; }
L_0013B7B8:
    set32(c.r[7], ld32((c.r[16].w[0] + 348u)));
    c.budget -= 1;
L_0013B7BC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 384u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[5].w[0] - 14096u);
    set32(c.r[4], c.r[4].w[0] - 14092u);
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[16].w[0] + 40u), c.f[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 348u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 384u)));
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[16].w[0] + 44u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 27;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0013B830:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00130260u | kUnwind; return; } [[clang::musttail]] return unit_000C(c, 24u, depth); }
L_0013B840:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B858u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 25u, depth + 1u); else { c.pc = 0x00130270u; return; } if (c.pc != 0x0013B858u) [[unlikely]] return; }
L_0013B858:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B860u); set32(c.r[4], ld32((c.r[16].w[0] + 444u)));  if (depth < kMaxDepth) unit_000F(c, 12u, depth + 1u); else { c.pc = 0x0013C180u; return; } if (c.pc != 0x0013B860u) [[unlikely]] return; }
L_0013B860:
    set32(c.r[2], ld32((c.r[16].w[0] + 444u)));
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[2].w[0] + 480u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 448u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[3].w[0] + 624u);  if (t) { goto L_0013B8EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B888u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0013B888u) [[unlikely]] return; }
L_0013B888:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0013B89C; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B89Cu); set32(c.r[6], 0u + 10u);  if (depth < kMaxDepth) unit_002A(c, 287u, depth + 1u); else { c.pc = 0x001AB200u; return; } if (c.pc != 0x0013B89Cu) [[unlikely]] return; }
L_0013B89C:
    st32((c.r[16].w[0] + 448u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B8ACu); set32(c.r[5], 0u + 10013u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x0013B8ACu) [[unlikely]] return; }
L_0013B8AC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B8BCu); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x0013B8BCu) [[unlikely]] return; }
L_0013B8BC:
    set32(c.r[4], ld32((c.r[16].w[0] + 448u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B8CCu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x0013B8CCu) [[unlikely]] return; }
L_0013B8CC:
    set32(c.r[3], ld32((c.r[16].w[0] + 448u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[3].w[0] + 112u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 13424u));
    st32((c.r[3].w[0] + 116u), c.f[0]);
    st32((c.r[3].w[0] + 120u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 124u), c.r[2].w[0]);
    c.budget -= 8;
L_0013B8EC:
    set32(c.r[4], ld32((c.r[16].w[0] + 448u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B900u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013B900u) [[unlikely]] return; }
L_0013B900:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 448u)));
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.f[0] = c.r[3].w[0];
    c.f[2] = ld32((c.r[16].w[0] + 44u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[4].w[0] + 96u), c.f[1]);
    st32((c.r[4].w[0] + 100u), c.f[2]);
    st32((c.r[4].w[0] + 104u), c.f[0]);
    st32((c.r[4].w[0] + 108u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0013B950:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B964u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 26u, depth + 1u); else { c.pc = 0x00130280u; return; } if (c.pc != 0x0013B964u) [[unlikely]] return; }
L_0013B964:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B96Cu); set32(c.r[4], ld32((c.r[16].w[0] + 444u)));  if (depth < kMaxDepth) unit_000F(c, 14u, depth + 1u); else { c.pc = 0x0013C1C0u; return; } if (c.pc != 0x0013B96Cu) [[unlikely]] return; }
L_0013B96C:
    set32(c.r[3], ld32((c.r[16].w[0] + 444u)));
    set32(c.r[4], 0u + 2u);
    st32((c.r[3].w[0] + 480u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 448u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013B9C4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B994u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013B994u) [[unlikely]] return; }
L_0013B994:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 448u)));
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.f[0] = c.r[3].w[0];
    c.f[2] = ld32((c.r[16].w[0] + 44u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[4].w[0] + 96u), c.f[1]);
    st32((c.r[4].w[0] + 100u), c.f[2]);
    st32((c.r[4].w[0] + 104u), c.f[0]);
    st32((c.r[4].w[0] + 108u), c.r[3].w[0]);
    c.budget -= 12;
L_0013B9C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0013B9E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B9F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 27u, depth + 1u); else { c.pc = 0x00130290u; return; } if (c.pc != 0x0013B9F4u) [[unlikely]] return; }
L_0013B9F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B9FCu); set32(c.r[4], ld32((c.r[16].w[0] + 444u)));  if (depth < kMaxDepth) unit_000F(c, 14u, depth + 1u); else { c.pc = 0x0013C1C0u; return; } if (c.pc != 0x0013B9FCu) [[unlikely]] return; }
L_0013B9FC:
    set32(c.r[2], ld32((c.r[16].w[0] + 444u)));
    set32(c.r[3], 0u + 2u);
    st32((c.r[2].w[0] + 480u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 448u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BA1Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013BA1Cu) [[unlikely]] return; }
L_0013BA1C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 448u)));
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.f[0] = c.r[3].w[0];
    c.f[2] = ld32((c.r[16].w[0] + 44u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[4].w[0] + 96u), c.f[1]);
    st32((c.r[4].w[0] + 100u), c.f[2]);
    st32((c.r[4].w[0] + 104u), c.f[0]);
    st32((c.r[4].w[0] + 108u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0013BA60:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x001302A0u | kUnwind; return; } [[clang::musttail]] return unit_000C(c, 28u, depth); }
L_0013BA70:
    set32(c.r[3], ld32((c.r[5].w[0] + 24u)));
    st32((c.r[4].w[0] + 380u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 380u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 444u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 488u), c.r[5].w[0]);  c.pc = t; return; }
L_0013BA90:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00138000u < 16384u) { entry = entries_000E[(t - 0x00138000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0013BAA0:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00138000u < 16384u) { entry = entries_000E[(t - 0x00138000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0013BAB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BAC4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 454u, depth + 1u); else { c.pc = 0x0013BBD0u; return; } if (c.pc != 0x0013BAC4u) [[unlikely]] return; }
L_0013BAC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013BADC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BADCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013BADCu) [[unlikely]] return; }
L_0013BADC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0013BAF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BB04u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 454u, depth + 1u); else { c.pc = 0x0013BBD0u; return; } if (c.pc != 0x0013BB04u) [[unlikely]] return; }
L_0013BB04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013BB24; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 444u)));
    st32((c.r[2].w[0] + 480u), 0u);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BB24u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013BB24u) [[unlikely]] return; }
L_0013BB24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0013BB40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013BB50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BB64u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 454u, depth + 1u); else { c.pc = 0x0013BBD0u; return; } if (c.pc != 0x0013BB64u) [[unlikely]] return; }
L_0013BB64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013BB7C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BB7Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013BB7Cu) [[unlikely]] return; }
L_0013BB7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0013BB90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BBA4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 454u, depth + 1u); else { c.pc = 0x0013BBD0u; return; } if (c.pc != 0x0013BBA4u) [[unlikely]] return; }
L_0013BBA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013BBBC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BBBCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013BBBCu) [[unlikely]] return; }
L_0013BBBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0013BBD0:
    set32(c.r[3], ld32((c.r[4].w[0] + 448u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0013BBE0; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 137u));
    c.budget -= 1;
L_0013BBE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013BBF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BC08u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0013BC08u) [[unlikely]] return; }
L_0013BC08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0013BC38; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0013BC1C; } }
    set32(c.r[7], c.r[7].w[0] + 20u);
    c.budget -= 1;
L_0013BC1C:
    set32(c.r[8], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[9], ld32((c.r[16].w[0] + 32u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BC38u); c.r[10].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 371u, depth + 1u); else { c.pc = 0x0012EBA0u; return; } if (c.pc != 0x0013BC38u) [[unlikely]] return; }
L_0013BC38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0013BC50:
    set32(c.r[29], c.r[29].w[0] - 400u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 64u);
    set32(c.r[4], 0u + 41u);
    c.budget -= 10;
L_0013BC78:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[7].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[7].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[7], c.r[7].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013BC78u | kUnwind; return; } goto L_0013BC78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BCA0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x0013BCA0u) [[unlikely]] return; }
L_0013BCA0:
    set32(c.r[4], c.r[18].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BCACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 256u, depth + 1u); else { c.pc = 0x0013E440u; return; } if (c.pc != 0x0013BCACu) [[unlikely]] return; }
L_0013BCAC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 19328u);
    set32(c.r[2], c.r[2].w[0] - 19312u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[29].w[0] + 64u);
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[5], c.r[18].w[0] + 20u);
    set32(c.r[4], 0u + 41u);
    c.budget -= 9;
L_0013BCD0:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013BCD0u | kUnwind; return; } goto L_0013BCD0; } }
    set32(c.r[4], c.r[18].w[0] + 348u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BCFCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 271u, depth + 1u); else { c.pc = 0x002275A0u; return; } if (c.pc != 0x0013BCFCu) [[unlikely]] return; }
L_0013BCFC:
    st32((c.r[18].w[0] + 388u), c.r[16].w[0]);
    set32(c.r[4], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BD0Cu); st32((c.r[18].w[0] + 392u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0013BD0Cu) [[unlikely]] return; }
L_0013BD0C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BD18u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0013BD18u) [[unlikely]] return; }
L_0013BD18:
    ld128((c.r[2].w[0]) & ~15u, c.r[5]);
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], 0u + 20u);
    st128((c.r[18].w[0] + 416u) & ~15u, c.r[5]);
    set32(c.r[2], 0u + 1u);
    ld128((c.r[16].w[0]) & ~15u, c.r[5]);
    st128((c.r[18].w[0] + 432u) & ~15u, c.r[5]);
    st32((c.r[18].w[0] + 468u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 464u), 0u);
    st32((c.r[18].w[0] + 476u), 0u);
    st8((c.r[18].w[0] + 472u), static_cast<std::uint8_t>(0u));
    ld128((c.r[18].w[0] + 416u) & ~15u, c.r[3]);
    st128((c.r[18].w[0] + 448u) & ~15u, c.r[3]);
    st32((c.r[18].w[0] + 480u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 484u), 0u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BD5Cu); st32((c.r[18].w[0] + 488u), 0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0013BD5Cu) [[unlikely]] return; }
L_0013BD5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0013BD6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BD6Cu); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_000E(c, 376u, depth + 1u); else { c.pc = 0x0013B090u; return; } if (c.pc != 0x0013BD6Cu) [[unlikely]] return; }
L_0013BD6C:
    st32((c.r[18].w[0] + 484u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 484u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0013BD84; } }
    set32(c.r[2], 0u + 100u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 2;
L_0013BD84:
    set32(c.r[3], ld32((c.r[18].w[0] + 388u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 312u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0013BDB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 488u), c.r[4].w[0]);  if (t) { goto L_0013BDB8; } }
L_0013BDB4:
    st32((c.r[18].w[0] + 488u), c.r[2].w[0]);
    c.budget -= 1;
L_0013BDB8:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 400u);  c.pc = t; return; }
L_0013BDE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0013BE78; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 19328u);
    set32(c.r[2], c.r[2].w[0] - 19312u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 484u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013BE38; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013BE38; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BE38u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013BE38u) [[unlikely]] return; }
L_0013BE38:
    set32(c.r[4], c.r[17].w[0] + 348u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BE48u); st32((c.r[17].w[0] + 484u), 0u);  if (depth < kMaxDepth) unit_0049(c, 274u, depth + 1u); else { c.pc = 0x002275F0u; return; } if (c.pc != 0x0013BE48u) [[unlikely]] return; }
L_0013BE48:
    set32(c.r[4], c.r[17].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BE54u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E490u; return; } if (c.pc != 0x0013BE54u) [[unlikely]] return; }
L_0013BE54:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BE60u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x0013BE60u) [[unlikely]] return; }
L_0013BE60:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0013BE7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BE78u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0013BE78u) [[unlikely]] return; }
L_0013BE78:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0013BE7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0013BE90:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[6], c.r[6].w[0] - 14096u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[5], c.r[5].w[0] - 14092u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[8], ld32((c.r[4].w[0] + 320u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 388u)));
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[7], c.r[7].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[4].w[0] + 396u), c.f[0]);
    set32(c.r[7], ld32((c.r[4].w[0] + 320u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 388u)));
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[4].w[0] + 400u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 392u)));
    set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 38;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[19], ld32((c.r[4].w[0] + 440u)));  if (t) { goto L_0013BF54; } }
    c.f[3] = ld32((c.r[20].w[0] + 312u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A80000u);
    c.f[2] = c.r[3].w[0];
    c.f[0] = ld32((c.r[20].w[0] + 400u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[3].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[20].w[0] + 400u), c.f[0]);
    c.budget -= 11;
L_0013BF54:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[6], c.r[6].w[0] - 3888u);
    ld128((c.r[6].w[0]) & ~15u, c.r[4]);
    c.f[0] = ld32((c.r[6].w[0] + 24u));
    c.r[3].d[0] = ld64((c.r[6].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[4]);
    st64((c.r[5].w[0] + 16u), c.r[3].d[0]);
    st32((c.r[5].w[0] + 24u), c.f[0]);
    set32(c.r[18], ld32((c.r[20].w[0] + 312u)));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_000F(c, 11u, depth); } }
L_0013BF84:
    c.f[0] = ld32((c.r[20].w[0] + 360u));
    c.r[4].d[0] = 0ull + 0ull;
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BF9Cu); st32((c.r[19].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0013BF9Cu) [[unlikely]] return; }
L_0013BF9C:
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[0] = c.r[3].w[0];
    st32((c.r[19].w[0] + 48u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[19].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[19].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.f[12] = ld32((c.r[20].w[0] + 396u));
    c.f[13] = ld32((c.r[20].w[0] + 400u));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BFDCu); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013BFDCu) [[unlikely]] return; }
L_0013BFDC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[19].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[17].d[0] != c.r[18].d[0]; st32((c.r[19].w[0] + 24u), c.r[2].w[0]);  if (t) { [[clang::musttail]] return unit_000F(c, 2u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BFF8u); set32(c.r[4], 0u + 102u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x0013BFF8u) [[unlikely]] return; }
L_0013BFF8:
    st32((c.r[19].w[0] + 352u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 356u), 0u);  if (t) { [[clang::musttail]] return unit_000F(c, 4u, depth); } }
    [[clang::musttail]] return unit_000F(c, 2u, depth);
}

}
