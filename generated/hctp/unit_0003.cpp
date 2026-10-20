#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0003[4096] = {
    1, 0, 2, 0, 3, 0, 4, 0, 5, 0, 6, 0, 7, 0, 8, 0, 9, 0, 10, 0, 11, 0, 12, 0, 13, 0, 14, 0, 15, 0, 16, 0,
    17, 0, 18, 0, 19, 0, 20, 0, 21, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 25, 0, 0, 0,
    0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 29, 0, 0, 0, 0, 0, 0, 0,
    0, 30, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0,
    0, 0, 42, 0, 43, 0, 44, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0,
    0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 50, 0, 0, 0, 0, 0, 51, 0, 52, 0,
    0, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 0,
    59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 0,
    71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 73, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 76, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    80, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 85, 0, 0, 0,
    0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0,
    93, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 97, 0, 0, 0, 0, 0,
    98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 102, 0, 103, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0,
    106, 0, 0, 0, 0, 0, 0, 0, 107, 0, 108, 0, 0, 109, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 117,
    0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0,
    120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0,
    0, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0,
    130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 134, 0, 0, 0, 0, 0,
    135, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0,
    0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 148, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    151, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 157, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0,
    168, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0,
    173, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 178,
    0, 0, 0, 179, 0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0,
    0, 0, 185, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 188, 0, 189, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 194, 195, 196, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 200, 0, 201, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 205, 0, 0, 0, 0,
    206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 213, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 218, 0, 219, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 0, 0,
    223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 226, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0,
    229, 0, 0, 230, 0, 0, 231, 0, 0, 232, 0, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 235, 0, 0, 0, 0, 236, 0, 0, 0,
    0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 244, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0,
    0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 260, 0, 261, 0, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0,
    270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0, 0,
    0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    280, 0, 0, 0, 281, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0,
    0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0,
    0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0,
    291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 293, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 298,
    0, 299, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 302, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 312, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317,
    0, 318, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 329, 0, 0, 0, 330, 0, 331, 0, 0, 0, 332, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0,
    335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0,
    0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 347, 0, 348, 0, 0, 0,
    349, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 357, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    362, 0, 0, 0, 363, 0, 364, 0, 0, 0, 365, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0,
    0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 388, 0,
    389, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 391, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0,
    394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0,
    396, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 399, 0, 400, 0,
    401, 0, 0, 0, 402, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 405, 0, 0, 0, 0, 0, 0, 406, 0,
    0, 0, 0, 0, 407, 0, 408, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0,
    412, 0, 0, 0, 0, 0, 0, 413, 0, 414, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 429, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 432, 0, 0, 0, 433, 0,
    0, 434, 0, 0, 0, 0, 435, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 438, 0, 439,
    0, 0, 0, 0, 0, 440, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 444, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 448, 0, 0, 0, 449, 0, 450, 0,
    451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 453, 0, 454, 0, 0, 0, 0, 0, 0, 0, 455, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 466, 0, 467, 0, 0, 0, 468, 0, 0, 0, 0, 469, 0, 0, 0, 0, 470, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 474,
    0, 475, 0, 0, 0, 0, 476, 0, 0, 0, 477, 0, 0, 0, 478, 0, 479, 0, 0, 0, 0, 480, 0, 0, 481, 0, 0, 0, 0, 482, 0, 0,
};

void unit_0003(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0010C000;
    case 2u: goto L_0010C008;
    case 3u: goto L_0010C010;
    case 4u: goto L_0010C018;
    case 5u: goto L_0010C020;
    case 6u: goto L_0010C028;
    case 7u: goto L_0010C030;
    case 8u: goto L_0010C038;
    case 9u: goto L_0010C040;
    case 10u: goto L_0010C048;
    case 11u: goto L_0010C050;
    case 12u: goto L_0010C058;
    case 13u: goto L_0010C060;
    case 14u: goto L_0010C068;
    case 15u: goto L_0010C070;
    case 16u: goto L_0010C078;
    case 17u: goto L_0010C080;
    case 18u: goto L_0010C088;
    case 19u: goto L_0010C090;
    case 20u: goto L_0010C098;
    case 21u: goto L_0010C0A0;
    case 22u: goto L_0010C0B0;
    case 23u: goto L_0010C0C0;
    case 24u: goto L_0010C0E4;
    case 25u: goto L_0010C0F0;
    case 26u: goto L_0010C114;
    case 27u: goto L_0010C140;
    case 28u: goto L_0010C158;
    case 29u: goto L_0010C160;
    case 30u: goto L_0010C184;
    case 31u: goto L_0010C190;
    case 32u: goto L_0010C1B4;
    case 33u: goto L_0010C1D4;
    case 34u: goto L_0010C1E8;
    case 35u: goto L_0010C228;
    case 36u: goto L_0010C240;
    case 37u: goto L_0010C268;
    case 38u: goto L_0010C2A0;
    case 39u: goto L_0010C2B8;
    case 40u: goto L_0010C2E0;
    case 41u: goto L_0010C2F0;
    case 42u: goto L_0010C308;
    case 43u: goto L_0010C310;
    case 44u: goto L_0010C318;
    case 45u: goto L_0010C320;
    case 46u: goto L_0010C348;
    case 47u: goto L_0010C378;
    case 48u: goto L_0010C38C;
    case 49u: goto L_0010C3D0;
    case 50u: goto L_0010C3D8;
    case 51u: goto L_0010C3F0;
    case 52u: goto L_0010C3F8;
    case 53u: goto L_0010C410;
    case 54u: goto L_0010C420;
    case 55u: goto L_0010C430;
    case 56u: goto L_0010C448;
    case 57u: goto L_0010C458;
    case 58u: goto L_0010C470;
    case 59u: goto L_0010C480;
    case 60u: goto L_0010C518;
    case 61u: goto L_0010C550;
    case 62u: goto L_0010C564;
    case 63u: goto L_0010C598;
    case 64u: goto L_0010C5B0;
    case 65u: goto L_0010C5C0;
    case 66u: goto L_0010C658;
    case 67u: goto L_0010C690;
    case 68u: goto L_0010C6A4;
    case 69u: goto L_0010C6D8;
    case 70u: goto L_0010C6F0;
    case 71u: goto L_0010C700;
    case 72u: goto L_0010C730;
    case 73u: goto L_0010C738;
    case 74u: goto L_0010C750;
    case 75u: goto L_0010C768;
    case 76u: goto L_0010C798;
    case 77u: goto L_0010C7A0;
    case 78u: goto L_0010C7B8;
    case 79u: goto L_0010C7D0;
    case 80u: goto L_0010C800;
    case 81u: goto L_0010C808;
    case 82u: goto L_0010C820;
    case 83u: goto L_0010C838;
    case 84u: goto L_0010C868;
    case 85u: goto L_0010C870;
    case 86u: goto L_0010C888;
    case 87u: goto L_0010C8A0;
    case 88u: goto L_0010C8B0;
    case 89u: goto L_0010C8C0;
    case 90u: goto L_0010C8D0;
    case 91u: goto L_0010C8E0;
    case 92u: goto L_0010C8F0;
    case 93u: goto L_0010C900;
    case 94u: goto L_0010C910;
    case 95u: goto L_0010C920;
    case 96u: goto L_0010C960;
    case 97u: goto L_0010C968;
    case 98u: goto L_0010C980;
    case 99u: goto L_0010C9C0;
    case 100u: goto L_0010C9D0;
    case 101u: goto L_0010C9E0;
    case 102u: goto L_0010C9F0;
    case 103u: goto L_0010C9F8;
    case 104u: goto L_0010CA28;
    case 105u: goto L_0010CA6C;
    case 106u: goto L_0010CA80;
    case 107u: goto L_0010CAA0;
    case 108u: goto L_0010CAA8;
    case 109u: goto L_0010CAB4;
    case 110u: goto L_0010CAD0;
    case 111u: goto L_0010CAE4;
    case 112u: goto L_0010CAF8;
    case 113u: goto L_0010CB50;
    case 114u: goto L_0010CB68;
    case 115u: goto L_0010CBD0;
    case 116u: goto L_0010CBE8;
    case 117u: goto L_0010CBFC;
    case 118u: goto L_0010CC10;
    case 119u: goto L_0010CC6C;
    case 120u: goto L_0010CC80;
    case 121u: goto L_0010CCB8;
    case 122u: goto L_0010CCC8;
    case 123u: goto L_0010CCE0;
    case 124u: goto L_0010CCF0;
    case 125u: goto L_0010CD14;
    case 126u: goto L_0010CD20;
    case 127u: goto L_0010CD38;
    case 128u: goto L_0010CD48;
    case 129u: goto L_0010CD70;
    case 130u: goto L_0010CD80;
    case 131u: goto L_0010CDA8;
    case 132u: goto L_0010CDB8;
    case 133u: goto L_0010CDDC;
    case 134u: goto L_0010CDE8;
    case 135u: goto L_0010CE00;
    case 136u: goto L_0010CE10;
    case 137u: goto L_0010CE28;
    case 138u: goto L_0010CE38;
    case 139u: goto L_0010CE50;
    case 140u: goto L_0010CE60;
    case 141u: goto L_0010CE88;
    case 142u: goto L_0010CEC8;
    case 143u: goto L_0010CF08;
    case 144u: goto L_0010CF74;
    case 145u: goto L_0010CF8C;
    case 146u: goto L_0010CFA4;
    case 147u: goto L_0010CFD8;
    case 148u: goto L_0010CFF8;
    case 149u: goto L_0010D028;
    case 150u: goto L_0010D040;
    case 151u: goto L_0010D080;
    case 152u: goto L_0010D0A0;
    case 153u: goto L_0010D0EC;
    case 154u: goto L_0010D118;
    case 155u: goto L_0010D184;
    case 156u: goto L_0010D194;
    case 157u: goto L_0010D1A8;
    case 158u: goto L_0010D1B4;
    case 159u: goto L_0010D1C8;
    case 160u: goto L_0010D1F0;
    case 161u: goto L_0010D228;
    case 162u: goto L_0010D238;
    case 163u: goto L_0010D270;
    case 164u: goto L_0010D2C0;
    case 165u: goto L_0010D2DC;
    case 166u: goto L_0010D2F4;
    case 167u: goto L_0010D360;
    case 168u: goto L_0010D380;
    case 169u: goto L_0010D388;
    case 170u: goto L_0010D3B8;
    case 171u: goto L_0010D3F8;
    case 172u: goto L_0010D468;
    case 173u: goto L_0010D480;
    case 174u: goto L_0010D4A0;
    case 175u: goto L_0010D530;
    case 176u: goto L_0010D558;
    case 177u: goto L_0010D568;
    case 178u: goto L_0010D57C;
    case 179u: goto L_0010D58C;
    case 180u: goto L_0010D5A0;
    case 181u: goto L_0010D5B0;
    case 182u: goto L_0010D5C4;
    case 183u: goto L_0010D5E4;
    case 184u: goto L_0010D5F8;
    case 185u: goto L_0010D608;
    case 186u: goto L_0010D61C;
    case 187u: goto L_0010D634;
    case 188u: goto L_0010D63C;
    case 189u: goto L_0010D644;
    case 190u: goto L_0010D650;
    case 191u: goto L_0010D698;
    case 192u: goto L_0010D6C8;
    case 193u: goto L_0010D6D8;
    case 194u: goto L_0010D6F0;
    case 195u: goto L_0010D6F4;
    case 196u: goto L_0010D6F8;
    case 197u: goto L_0010D72C;
    case 198u: goto L_0010D788;
    case 199u: goto L_0010D7B0;
    case 200u: goto L_0010D7B4;
    case 201u: goto L_0010D7BC;
    case 202u: goto L_0010D7C4;
    case 203u: goto L_0010D818;
    case 204u: goto L_0010D858;
    case 205u: goto L_0010D86C;
    case 206u: goto L_0010D880;
    case 207u: goto L_0010D8D0;
    case 208u: goto L_0010D918;
    case 209u: goto L_0010D92C;
    case 210u: goto L_0010D940;
    case 211u: goto L_0010D9A0;
    case 212u: goto L_0010D9B0;
    case 213u: goto L_0010D9B8;
    case 214u: goto L_0010D9D4;
    case 215u: goto L_0010DA08;
    case 216u: goto L_0010DA1C;
    case 217u: goto L_0010DA30;
    case 218u: goto L_0010DA88;
    case 219u: goto L_0010DA90;
    case 220u: goto L_0010DAAC;
    case 221u: goto L_0010DAD8;
    case 222u: goto L_0010DAEC;
    case 223u: goto L_0010DB00;
    case 224u: goto L_0010DB2C;
    case 225u: goto L_0010DB3C;
    case 226u: goto L_0010DB44;
    case 227u: goto L_0010DB4C;
    case 228u: goto L_0010DB74;
    case 229u: goto L_0010DB80;
    case 230u: goto L_0010DB8C;
    case 231u: goto L_0010DB98;
    case 232u: goto L_0010DBA4;
    case 233u: goto L_0010DBB0;
    case 234u: goto L_0010DBC8;
    case 235u: goto L_0010DBDC;
    case 236u: goto L_0010DBF0;
    case 237u: goto L_0010DC10;
    case 238u: goto L_0010DC28;
    case 239u: goto L_0010DC38;
    case 240u: goto L_0010DC5C;
    case 241u: goto L_0010DC88;
    case 242u: goto L_0010DCB4;
    case 243u: goto L_0010DCC0;
    case 244u: goto L_0010DD08;
    case 245u: goto L_0010DD20;
    case 246u: goto L_0010DD40;
    case 247u: goto L_0010DD50;
    case 248u: goto L_0010DD68;
    case 249u: goto L_0010DD88;
    case 250u: goto L_0010DD98;
    case 251u: goto L_0010DDB8;
    case 252u: goto L_0010DE50;
    case 253u: goto L_0010DE80;
    case 254u: goto L_0010DECC;
    case 255u: goto L_0010DED4;
    case 256u: goto L_0010DF14;
    case 257u: goto L_0010DF28;
    case 258u: goto L_0010DF38;
    case 259u: goto L_0010DF44;
    case 260u: goto L_0010DF90;
    case 261u: goto L_0010DF98;
    case 262u: goto L_0010DFAC;
    case 263u: goto L_0010DFBC;
    case 264u: goto L_0010DFCC;
    case 265u: goto L_0010E018;
    case 266u: goto L_0010E028;
    case 267u: goto L_0010E038;
    case 268u: goto L_0010E050;
    case 269u: goto L_0010E068;
    case 270u: goto L_0010E080;
    case 271u: goto L_0010E0B0;
    case 272u: goto L_0010E0D8;
    case 273u: goto L_0010E160;
    case 274u: goto L_0010E1C8;
    case 275u: goto L_0010E1DC;
    case 276u: goto L_0010E1EC;
    case 277u: goto L_0010E210;
    case 278u: goto L_0010E240;
    case 279u: goto L_0010E250;
    case 280u: goto L_0010E280;
    case 281u: goto L_0010E290;
    case 282u: goto L_0010E2A4;
    case 283u: goto L_0010E2F0;
    case 284u: goto L_0010E314;
    case 285u: goto L_0010E360;
    case 286u: goto L_0010E39C;
    case 287u: goto L_0010E3B8;
    case 288u: goto L_0010E3EC;
    case 289u: goto L_0010E40C;
    case 290u: goto L_0010E468;
    case 291u: goto L_0010E480;
    case 292u: goto L_0010E4B0;
    case 293u: goto L_0010E4B8;
    case 294u: goto L_0010E4C0;
    case 295u: goto L_0010E534;
    case 296u: goto L_0010E54C;
    case 297u: goto L_0010E564;
    case 298u: goto L_0010E57C;
    case 299u: goto L_0010E584;
    case 300u: goto L_0010E590;
    case 301u: goto L_0010E5BC;
    case 302u: goto L_0010E5C0;
    case 303u: goto L_0010E5C8;
    case 304u: goto L_0010E608;
    case 305u: goto L_0010E618;
    case 306u: goto L_0010E630;
    case 307u: goto L_0010E648;
    case 308u: goto L_0010E660;
    case 309u: goto L_0010E6A4;
    case 310u: goto L_0010E6C0;
    case 311u: goto L_0010E6D8;
    case 312u: goto L_0010E6F8;
    case 313u: goto L_0010E728;
    case 314u: goto L_0010E74C;
    case 315u: goto L_0010E768;
    case 316u: goto L_0010E7C8;
    case 317u: goto L_0010E7FC;
    case 318u: goto L_0010E804;
    case 319u: goto L_0010E820;
    case 320u: goto L_0010E850;
    case 321u: goto L_0010E880;
    case 322u: goto L_0010E8B0;
    case 323u: goto L_0010E8C0;
    case 324u: goto L_0010E918;
    case 325u: goto L_0010E950;
    case 326u: goto L_0010E990;
    case 327u: goto L_0010E9D8;
    case 328u: goto L_0010E9E8;
    case 329u: goto L_0010EA10;
    case 330u: goto L_0010EA20;
    case 331u: goto L_0010EA28;
    case 332u: goto L_0010EA38;
    case 333u: goto L_0010EA40;
    case 334u: goto L_0010EA70;
    case 335u: goto L_0010EA80;
    case 336u: goto L_0010EAA8;
    case 337u: goto L_0010EAB8;
    case 338u: goto L_0010EAC8;
    case 339u: goto L_0010EAF8;
    case 340u: goto L_0010EB1C;
    case 341u: goto L_0010EB48;
    case 342u: goto L_0010EBA8;
    case 343u: goto L_0010EBE0;
    case 344u: goto L_0010EC20;
    case 345u: goto L_0010EC30;
    case 346u: goto L_0010EC58;
    case 347u: goto L_0010EC68;
    case 348u: goto L_0010EC70;
    case 349u: goto L_0010EC80;
    case 350u: goto L_0010EC88;
    case 351u: goto L_0010ECB8;
    case 352u: goto L_0010ECC8;
    case 353u: goto L_0010ECE8;
    case 354u: goto L_0010ED78;
    case 355u: goto L_0010EDD0;
    case 356u: goto L_0010EE34;
    case 357u: goto L_0010EE4C;
    case 358u: goto L_0010EE5C;
    case 359u: goto L_0010EEA4;
    case 360u: goto L_0010EEC4;
    case 361u: goto L_0010EED4;
    case 362u: goto L_0010EF00;
    case 363u: goto L_0010EF10;
    case 364u: goto L_0010EF18;
    case 365u: goto L_0010EF28;
    case 366u: goto L_0010EF30;
    case 367u: goto L_0010EF68;
    case 368u: goto L_0010EFA8;
    case 369u: goto L_0010EFC4;
    case 370u: goto L_0010F008;
    case 371u: goto L_0010F040;
    case 372u: goto L_0010F084;
    case 373u: goto L_0010F0C8;
    case 374u: goto L_0010F110;
    case 375u: goto L_0010F130;
    case 376u: goto L_0010F160;
    case 377u: goto L_0010F188;
    case 378u: goto L_0010F1A8;
    case 379u: goto L_0010F1C0;
    case 380u: goto L_0010F1F8;
    case 381u: goto L_0010F220;
    case 382u: goto L_0010F238;
    case 383u: goto L_0010F250;
    case 384u: goto L_0010F278;
    case 385u: goto L_0010F290;
    case 386u: goto L_0010F2C8;
    case 387u: goto L_0010F2E8;
    case 388u: goto L_0010F2F8;
    case 389u: goto L_0010F300;
    case 390u: goto L_0010F31C;
    case 391u: goto L_0010F330;
    case 392u: goto L_0010F33C;
    case 393u: goto L_0010F360;
    case 394u: goto L_0010F380;
    case 395u: goto L_0010F3F8;
    case 396u: goto L_0010F400;
    case 397u: goto L_0010F410;
    case 398u: goto L_0010F458;
    case 399u: goto L_0010F470;
    case 400u: goto L_0010F478;
    case 401u: goto L_0010F480;
    case 402u: goto L_0010F490;
    case 403u: goto L_0010F498;
    case 404u: goto L_0010F4D0;
    case 405u: goto L_0010F4DC;
    case 406u: goto L_0010F4F8;
    case 407u: goto L_0010F510;
    case 408u: goto L_0010F518;
    case 409u: goto L_0010F538;
    case 410u: goto L_0010F54C;
    case 411u: goto L_0010F568;
    case 412u: goto L_0010F580;
    case 413u: goto L_0010F59C;
    case 414u: goto L_0010F5A4;
    case 415u: goto L_0010F5B8;
    case 416u: goto L_0010F5D4;
    case 417u: goto L_0010F5F0;
    case 418u: goto L_0010F68C;
    case 419u: goto L_0010F6B8;
    case 420u: goto L_0010F6E0;
    case 421u: goto L_0010F730;
    case 422u: goto L_0010F760;
    case 423u: goto L_0010F788;
    case 424u: goto L_0010F7E4;
    case 425u: goto L_0010F82C;
    case 426u: goto L_0010F8C8;
    case 427u: goto L_0010F910;
    case 428u: goto L_0010F94C;
    case 429u: goto L_0010F984;
    case 430u: goto L_0010F998;
    case 431u: goto L_0010F9D0;
    case 432u: goto L_0010F9E8;
    case 433u: goto L_0010F9F8;
    case 434u: goto L_0010FA04;
    case 435u: goto L_0010FA18;
    case 436u: goto L_0010FA28;
    case 437u: goto L_0010FA5C;
    case 438u: goto L_0010FA74;
    case 439u: goto L_0010FA7C;
    case 440u: goto L_0010FA94;
    case 441u: goto L_0010FA9C;
    case 442u: goto L_0010FAC0;
    case 443u: goto L_0010FAD8;
    case 444u: goto L_0010FAF0;
    case 445u: goto L_0010FB1C;
    case 446u: goto L_0010FB28;
    case 447u: goto L_0010FB48;
    case 448u: goto L_0010FB60;
    case 449u: goto L_0010FB70;
    case 450u: goto L_0010FB78;
    case 451u: goto L_0010FB80;
    case 452u: goto L_0010FBB4;
    case 453u: goto L_0010FBD0;
    case 454u: goto L_0010FBD8;
    case 455u: goto L_0010FBF8;
    case 456u: goto L_0010FC30;
    case 457u: goto L_0010FC68;
    case 458u: goto L_0010FCF8;
    case 459u: goto L_0010FD34;
    case 460u: goto L_0010FD4C;
    case 461u: goto L_0010FD60;
    case 462u: goto L_0010FD88;
    case 463u: goto L_0010FDAC;
    case 464u: goto L_0010FDC0;
    case 465u: goto L_0010FE1C;
    case 466u: goto L_0010FE34;
    case 467u: goto L_0010FE3C;
    case 468u: goto L_0010FE4C;
    case 469u: goto L_0010FE60;
    case 470u: goto L_0010FE74;
    case 471u: goto L_0010FEA8;
    case 472u: goto L_0010FF30;
    case 473u: goto L_0010FF6C;
    case 474u: goto L_0010FF7C;
    case 475u: goto L_0010FF84;
    case 476u: goto L_0010FF98;
    case 477u: goto L_0010FFA8;
    case 478u: goto L_0010FFB8;
    case 479u: goto L_0010FFC0;
    case 480u: goto L_0010FFD4;
    case 481u: goto L_0010FFE0;
    case 482u: goto L_0010FFF4;
    default: bad_entry(c, 0x0010C000u); return;
    }
L_0010C000:
    set32(c.r[3], 0u + 120u);
    c.budget -= 1;
    c.pc = 0x0010C008u; syscall(c, 0x0010C004u); if (c.pc != 0x0010C008u) return;
    c.budget -= 1;
L_0010C008:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010C010:
    set32(c.r[3], 0u - 120u);
    c.budget -= 1;
    c.pc = 0x0010C018u; syscall(c, 0x0010C014u); if (c.pc != 0x0010C018u) return;
    c.budget -= 1;
L_0010C018:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010C020:
    set32(c.r[3], 0u + 121u);
    c.budget -= 1;
    c.pc = 0x0010C028u; syscall(c, 0x0010C024u); if (c.pc != 0x0010C028u) return;
    c.budget -= 1;
L_0010C028:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010C030:
    set32(c.r[3], 0u + 122u);
    c.budget -= 1;
    c.pc = 0x0010C038u; syscall(c, 0x0010C034u); if (c.pc != 0x0010C038u) return;
    c.budget -= 1;
L_0010C038:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010C040:
    set32(c.r[3], 0u + 123u);
    c.budget -= 1;
    c.pc = 0x0010C048u; syscall(c, 0x0010C044u); if (c.pc != 0x0010C048u) return;
    c.budget -= 1;
L_0010C048:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010C050:
    set32(c.r[3], 0u + 124u);
    c.budget -= 1;
    c.pc = 0x0010C058u; syscall(c, 0x0010C054u); if (c.pc != 0x0010C058u) return;
    c.budget -= 1;
L_0010C058:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010C060:
    set32(c.r[3], 0u + 125u);
    c.budget -= 1;
    c.pc = 0x0010C068u; syscall(c, 0x0010C064u); if (c.pc != 0x0010C068u) return;
    c.budget -= 1;
L_0010C068:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010C070:
    set32(c.r[3], 0u + 126u);
    c.budget -= 1;
    c.pc = 0x0010C078u; syscall(c, 0x0010C074u); if (c.pc != 0x0010C078u) return;
    c.budget -= 1;
L_0010C078:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010C080:
    set32(c.r[3], 0u + 127u);
    c.budget -= 1;
    c.pc = 0x0010C088u; syscall(c, 0x0010C084u); if (c.pc != 0x0010C088u) return;
    c.budget -= 1;
L_0010C088:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010C090:
    set32(c.r[3], 0u + 130u);
    c.budget -= 1;
    c.pc = 0x0010C098u; syscall(c, 0x0010C094u); if (c.pc != 0x0010C098u) return;
    c.budget -= 1;
L_0010C098:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010C0A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0] - 23408u), 0u);  c.pc = t; return; }
L_0010C0B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C0C0u);  if (depth < kMaxDepth) unit_0005(c, 85u, depth + 1u); else { c.pc = 0x00114960u; return; } if (c.pc != 0x0010C0C0u) [[unlikely]] return; }
L_0010C0C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[4], 0u + 4u);
    c.r[3].d[0] = c.r[3].d[0] | 61440ull;
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_0010C0E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C0E4u);  if (depth < kMaxDepth) unit_0005(c, 87u, depth + 1u); else { c.pc = 0x001149A8u; return; } if (c.pc != 0x0010C0E4u) [[unlikely]] return; }
L_0010C0E4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 1;
L_0010C0E8:
    c.r[3].d[0] = c.r[3].d[0] | 61440ull;
    c.budget -= 2;
L_0010C0F0:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010C0F0u | kUnwind; return; } goto L_0010C0F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C114u);  if (depth < kMaxDepth) unit_0005(c, 85u, depth + 1u); else { c.pc = 0x00114960u; return; } if (c.pc != 0x0010C114u) [[unlikely]] return; }
L_0010C114:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[4], 0u + 4u);
    c.r[3].d[0] = c.r[3].d[0] | 61440ull;
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0010C138; } }
    c.budget -= 2;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0005(c, 87u, depth); }
L_0010C138:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0010C140:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C158u); c.r[5].d[0] = c.r[29].d[0] | 8ull;  if (depth < kMaxDepth) unit_0002(c, 610u, depth + 1u); else { c.pc = 0x0010BF90u; return; } if (c.pc != 0x0010C158u) [[unlikely]] return; }
L_0010C158:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C160u);  if (depth < kMaxDepth) unit_0005(c, 85u, depth + 1u); else { c.pc = 0x00114960u; return; } if (c.pc != 0x0010C160u) [[unlikely]] return; }
L_0010C160:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[4], 0u + 4u);
    c.r[3].d[0] = c.r[3].d[0] | 61440ull;
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_0010C188; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C184u);  if (depth < kMaxDepth) unit_0005(c, 87u, depth + 1u); else { c.pc = 0x001149A8u; return; } if (c.pc != 0x0010C184u) [[unlikely]] return; }
L_0010C184:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 1;
L_0010C188:
    c.r[3].d[0] = c.r[3].d[0] | 61440ull;
    c.budget -= 2;
L_0010C190:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010C1AC; } }
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010C190u | kUnwind; return; } goto L_0010C190; } }
L_0010C1AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C1B4u);  if (depth < kMaxDepth) unit_0005(c, 85u, depth + 1u); else { c.pc = 0x00114960u; return; } if (c.pc != 0x0010C1B4u) [[unlikely]] return; }
L_0010C1B4:
    set32(c.r[3], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    st32((c.r[1].w[0] - 4096u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010C1D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C1D4u);  if (depth < kMaxDepth) unit_0005(c, 87u, depth + 1u); else { c.pc = 0x001149A8u; return; } if (c.pc != 0x0010C1D4u) [[unlikely]] return; }
L_0010C1D4:
    c.r[2].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0010C1E8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[4].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_0010C248; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[2], ld32((c.r[16].w[0] - 23408u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0010C238; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C228u);  if (depth < kMaxDepth) unit_0003(c, 164u, depth + 1u); else { c.pc = 0x0010D2C0u; return; } if (c.pc != 0x0010C228u) [[unlikely]] return; }
L_0010C228:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0010C248; } }
    st32((c.r[16].w[0] - 23408u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_0010C238:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C240u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 152u, depth + 1u); else { c.pc = 0x0010D0A0u; return; } if (c.pc != 0x0010C240u) [[unlikely]] return; }
L_0010C240:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0010C250; } }
L_0010C248:
    set32(c.r[2], 0u - 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 2;
L_0010C250:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0010C268:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_0010C2C0; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[2], ld32((c.r[16].w[0] - 23408u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0010C2B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C2A0u);  if (depth < kMaxDepth) unit_0003(c, 164u, depth + 1u); else { c.pc = 0x0010D2C0u; return; } if (c.pc != 0x0010C2A0u) [[unlikely]] return; }
L_0010C2A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0010C2C0; } }
    st32((c.r[16].w[0] - 23408u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_0010C2B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C2B8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 160u, depth + 1u); else { c.pc = 0x0010D1F0u; return; } if (c.pc != 0x0010C2B8u) [[unlikely]] return; }
L_0010C2B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0010C2C8; } }
L_0010C2C0:
    set32(c.r[2], 0u - 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 2;
L_0010C2C8:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0010C2E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C2F0u);  if (depth < kMaxDepth) unit_0008(c, 324u, depth + 1u); else { c.pc = 0x00123088u; return; } if (c.pc != 0x0010C2F0u) [[unlikely]] return; }
L_0010C2F0:
    set32(c.r[3], 0u + 5u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], 0u - 1u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0010C308:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u - 1u);  c.pc = t; return; }
L_0010C310:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u - 1u);  c.pc = t; return; }
L_0010C318:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u - 1u);  c.pc = t; return; }
L_0010C320:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[17], mfc0(c, 12u, 0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[17].d[0] = c.r[17].d[0] & c.r[2].d[0];
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == 0ull; c.r[18].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_0010C36C; } }
L_0010C348:
    set_interrupts(c, false);
    set32(c.r[2], mfc0(c, 12u, 0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010C348u | kUnwind; return; } goto L_0010C348; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[18].w[0] - 23404u)));  if (t) { goto L_0010C370; } }
L_0010C36C:
    set32(c.r[2], ld32((c.r[18].w[0] - 23404u)));
    c.budget -= 1;
L_0010C370:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C378u); set32(c.r[16], c.r[2].w[0] + c.r[4].w[0]);  if (depth < kMaxDepth) unit_0002(c, 496u, depth + 1u); else { c.pc = 0x0010BC00u; return; } if (c.pc != 0x0010C378u) [[unlikely]] return; }
L_0010C378:
    c.r[2].d[0] = c.r[2].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], ld32((c.r[18].w[0] - 23404u)));  if (t) { goto L_0010C3A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C38Cu);  if (depth < kMaxDepth) unit_0008(c, 324u, depth + 1u); else { c.pc = 0x00123088u; return; } if (c.pc != 0x0010C38Cu) [[unlikely]] return; }
L_0010C38C:
    set32(c.r[3], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_0010C39C; } }
    set_interrupts(c, true);
    c.budget -= 1;
L_0010C39C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65535ull;  if (t) { goto L_0010C3B4; } }
L_0010C3A8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[18].w[0] - 23404u), c.r[16].w[0]);  if (t) { goto L_0010C3B4; } }
    set_interrupts(c, true);
    c.budget -= 1;
L_0010C3B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0010C3D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0010C3D8:
    set32(c.r[2], 0u + 8192u);
    st64((c.r[5].w[0] + 72u), 0ull);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0010C3F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0010C3F8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0010C410; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C410u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 163u, depth + 1u); else { c.pc = 0x00114FD0u; return; } if (c.pc != 0x0010C410u) [[unlikely]] return; }
L_0010C410:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0010C420:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C430u);  if (depth < kMaxDepth) unit_0008(c, 324u, depth + 1u); else { c.pc = 0x00123088u; return; } if (c.pc != 0x0010C430u) [[unlikely]] return; }
L_0010C430:
    set32(c.r[3], 0u + 5u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], 0u - 1u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0010C448:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C458u);  if (depth < kMaxDepth) unit_0008(c, 324u, depth + 1u); else { c.pc = 0x00123088u; return; } if (c.pc != 0x0010C458u) [[unlikely]] return; }
L_0010C458:
    set32(c.r[3], 0u + 5u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], 0u - 1u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0010C470:
    c.r[7].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[7].d[0] | 61440ull;
    c.budget -= 4;
L_0010C480:
    set32(c.r[2], mfc0(c, 28u, 0u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010C4BC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0010C4BC; } }
    c.budget -= 3;
L_0010C4BC:
    set32(c.r[2], mfc0(c, 28u, 0u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010C4F8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0010C4F8; } }
    c.budget -= 3;
L_0010C4F8:
    set32(c.r[6], c.r[6].w[0] + 64u);
    c.r[2].d[0] = c.r[6].sd[0] < 4096ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010C480u | kUnwind; return; } goto L_0010C480; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010C518:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], mfc0(c, 12u, 0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[16].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.budget -= 12;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0010C550; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C550u);  if (depth < kMaxDepth) unit_0005(c, 85u, depth + 1u); else { c.pc = 0x00114960u; return; } if (c.pc != 0x0010C550u) [[unlikely]] return; }
L_0010C550:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[4].d[0] | 65472ull;
    c.r[5].d[0] = c.r[17].d[0] & c.r[4].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C564u); c.r[4].d[0] = c.r[18].d[0] & c.r[4].d[0];  if (depth < kMaxDepth) unit_0003(c, 58u, depth + 1u); else { c.pc = 0x0010C470u; return; } if (c.pc != 0x0010C564u) [[unlikely]] return; }
L_0010C564:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0010C580; } }
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 64u);  [[clang::musttail]] return unit_0005(c, 87u, depth); }
L_0010C580:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0010C598:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65472ull;
    c.r[5].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { c.r[4].d[0] = c.r[4].d[0] & c.r[2].d[0];  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010C470u | kUnwind; return; } goto L_0010C470; }
L_0010C5B0:
    c.r[7].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[7].d[0] | 61440ull;
    c.budget -= 4;
L_0010C5C0:
    set32(c.r[2], mfc0(c, 28u, 0u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010C5FC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0010C5FC; } }
    c.budget -= 3;
L_0010C5FC:
    set32(c.r[2], mfc0(c, 28u, 0u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010C638; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0010C638; } }
    c.budget -= 3;
L_0010C638:
    set32(c.r[6], c.r[6].w[0] + 64u);
    c.r[2].d[0] = c.r[6].sd[0] < 4096ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010C5C0u | kUnwind; return; } goto L_0010C5C0; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010C658:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], mfc0(c, 12u, 0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[16].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.budget -= 12;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0010C690; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C690u);  if (depth < kMaxDepth) unit_0005(c, 85u, depth + 1u); else { c.pc = 0x00114960u; return; } if (c.pc != 0x0010C690u) [[unlikely]] return; }
L_0010C690:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[4].d[0] | 65472ull;
    c.r[5].d[0] = c.r[17].d[0] & c.r[4].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C6A4u); c.r[4].d[0] = c.r[18].d[0] & c.r[4].d[0];  if (depth < kMaxDepth) unit_0003(c, 64u, depth + 1u); else { c.pc = 0x0010C5B0u; return; } if (c.pc != 0x0010C6A4u) [[unlikely]] return; }
L_0010C6A4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0010C6C0; } }
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 64u);  [[clang::musttail]] return unit_0005(c, 87u, depth); }
L_0010C6C0:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0010C6D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65472ull;
    c.r[5].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { c.r[4].d[0] = c.r[4].d[0] & c.r[2].d[0];  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010C5B0u | kUnwind; return; } goto L_0010C5B0; }
L_0010C6F0:
    set32(c.r[2], mfc0(c, 12u, 0u));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] & 1ull;  c.pc = t; return; }
L_0010C700:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], mfc0(c, 12u, 0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[16].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.budget -= 10;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0010C730; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C730u);  if (depth < kMaxDepth) unit_0005(c, 85u, depth + 1u); else { c.pc = 0x00114960u; return; } if (c.pc != 0x0010C730u) [[unlikely]] return; }
L_0010C730:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C738u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 414u, depth + 1u); else { c.pc = 0x0010B970u; return; } if (c.pc != 0x0010C738u) [[unlikely]] return; }
L_0010C738:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0010C754; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C750u);  if (depth < kMaxDepth) unit_0005(c, 87u, depth + 1u); else { c.pc = 0x001149A8u; return; } if (c.pc != 0x0010C750u) [[unlikely]] return; }
L_0010C750:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0010C754:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0010C768:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], mfc0(c, 12u, 0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[16].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.budget -= 10;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0010C798; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C798u);  if (depth < kMaxDepth) unit_0005(c, 85u, depth + 1u); else { c.pc = 0x00114960u; return; } if (c.pc != 0x0010C798u) [[unlikely]] return; }
L_0010C798:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C7A0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 412u, depth + 1u); else { c.pc = 0x0010B960u; return; } if (c.pc != 0x0010C7A0u) [[unlikely]] return; }
L_0010C7A0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0010C7BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C7B8u);  if (depth < kMaxDepth) unit_0005(c, 87u, depth + 1u); else { c.pc = 0x001149A8u; return; } if (c.pc != 0x0010C7B8u) [[unlikely]] return; }
L_0010C7B8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0010C7BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0010C7D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], mfc0(c, 12u, 0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[16].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.budget -= 10;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0010C800; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C800u);  if (depth < kMaxDepth) unit_0005(c, 85u, depth + 1u); else { c.pc = 0x00114960u; return; } if (c.pc != 0x0010C800u) [[unlikely]] return; }
L_0010C800:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C808u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 418u, depth + 1u); else { c.pc = 0x0010B990u; return; } if (c.pc != 0x0010C808u) [[unlikely]] return; }
L_0010C808:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0010C824; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C820u);  if (depth < kMaxDepth) unit_0005(c, 87u, depth + 1u); else { c.pc = 0x001149A8u; return; } if (c.pc != 0x0010C820u) [[unlikely]] return; }
L_0010C820:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0010C824:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0010C838:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], mfc0(c, 12u, 0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[16].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.budget -= 10;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0010C868; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C868u);  if (depth < kMaxDepth) unit_0005(c, 85u, depth + 1u); else { c.pc = 0x00114960u; return; } if (c.pc != 0x0010C868u) [[unlikely]] return; }
L_0010C868:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C870u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 416u, depth + 1u); else { c.pc = 0x0010B980u; return; } if (c.pc != 0x0010C870u) [[unlikely]] return; }
L_0010C870:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0010C88C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C888u);  if (depth < kMaxDepth) unit_0005(c, 87u, depth + 1u); else { c.pc = 0x001149A8u; return; } if (c.pc != 0x0010C888u) [[unlikely]] return; }
L_0010C888:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0010C88C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0010C8A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C8B0u);  if (depth < kMaxDepth) unit_0002(c, 424u, depth + 1u); else { c.pc = 0x0010B9C0u; return; } if (c.pc != 0x0010C8B0u) [[unlikely]] return; }
L_0010C8B0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0010C8C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C8D0u);  if (depth < kMaxDepth) unit_0002(c, 426u, depth + 1u); else { c.pc = 0x0010B9D0u; return; } if (c.pc != 0x0010C8D0u) [[unlikely]] return; }
L_0010C8D0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0010C8E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C8F0u);  if (depth < kMaxDepth) unit_0002(c, 428u, depth + 1u); else { c.pc = 0x0010B9E0u; return; } if (c.pc != 0x0010C8F0u) [[unlikely]] return; }
L_0010C8F0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0010C900:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C910u);  if (depth < kMaxDepth) unit_0002(c, 430u, depth + 1u); else { c.pc = 0x0010B9F0u; return; } if (c.pc != 0x0010C910u) [[unlikely]] return; }
L_0010C910:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0010C920:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[21].d[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00450000u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    set32(c.r[20], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[19], 0u + 2u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[18], c.r[17].w[0] + 8u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    set32(c.r[16], c.r[17].w[0] + 9u);
    c.budget -= 16;
L_0010C960:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C968u); set32(c.r[4], ld32((c.r[22].w[0] - 24896u)));  if (depth < kMaxDepth) unit_0002(c, 508u, depth + 1u); else { c.pc = 0x0010BC60u; return; } if (c.pc != 0x0010C968u) [[unlikely]] return; }
L_0010C968:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 511ull;
    set32(c.r[4], c.r[3].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 1);
    st32((c.r[17].w[0]), c.r[4].w[0]);
    set32(c.r[2], c.r[18].w[0] + c.r[3].w[0]);
    c.budget -= 6;
L_0010C980:
    set32(c.r[6], c.r[16].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[20].d[0]; c.r[5].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_0010C9C8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[4], c.r[21].w[0] + 15344u);  if (t) { goto L_0010C9A8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0010C9B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010C9E8; } }
L_0010C9A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[19].d[0]; set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);  if (t) { goto L_0010C9D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010C9E8; } }
L_0010C9B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C9C0u); c.r[4].d[0] = ld8((c.r[3].w[0]));  if (depth < kMaxDepth) unit_0002(c, 474u, depth + 1u); else { c.pc = 0x0010BB50u; return; } if (c.pc != 0x0010C9C0u) [[unlikely]] return; }
L_0010C9C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010C960u | kUnwind; return; } goto L_0010C960; } }
L_0010C9C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C9D0u); c.r[4].d[0] = ld8((c.r[6].w[0]));  if (depth < kMaxDepth) unit_0002(c, 458u, depth + 1u); else { c.pc = 0x0010BAD0u; return; } if (c.pc != 0x0010C9D0u) [[unlikely]] return; }
L_0010C9D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010C960u | kUnwind; return; } goto L_0010C960; } }
L_0010C9D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C9E0u); c.r[4].d[0] = ld8((c.r[3].w[0]));  if (depth < kMaxDepth) unit_0002(c, 482u, depth + 1u); else { c.pc = 0x0010BB90u; return; } if (c.pc != 0x0010C9E0u) [[unlikely]] return; }
L_0010C9E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010C960u | kUnwind; return; } goto L_0010C960; } }
L_0010C9E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C9F0u);  if (depth < kMaxDepth) unit_0003(c, 241u, depth + 1u); else { c.pc = 0x0010DC88u; return; } if (c.pc != 0x0010C9F0u) [[unlikely]] return; }
L_0010C9F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010C960u | kUnwind; return; } goto L_0010C960; } }
L_0010C9F8:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] - 23400u)));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] > 0; st64((c.r[29].w[0] + 96u), c.r[17].d[0]);  if (t) { goto L_0010CA80; } }
    set32(c.r[2], 0u + 255u);
    st32((c.r[29].w[0] + 56u), 0u);
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CA28u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0002(c, 500u, depth + 1u); else { c.pc = 0x0010BC20u; return; } if (c.pc != 0x0010CA28u) [[unlikely]] return; }
L_0010CA28:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; st32((c.r[17].w[0] - 24896u), c.r[2].w[0]);  if (t) { goto L_0010CA80; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00110000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 14048u);
    set32(c.r[3], c.r[3].w[0] - 25920u);
    set32(c.r[5], c.r[5].w[0] + 6256u);
    set32(c.r[6], 0u + 1024u);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[5].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CA6Cu); st32((c.r[29].w[0] + 20u), 0u);  if (depth < kMaxDepth) unit_0002(c, 436u, depth + 1u); else { c.pc = 0x0010BA20u; return; } if (c.pc != 0x0010CA6Cu) [[unlikely]] return; }
L_0010CA6C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0; st32((c.r[16].w[0] - 23400u), c.r[4].w[0]);  if (t) { goto L_0010CA88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CA80u); set32(c.r[4], ld32((c.r[17].w[0] - 24896u)));  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x0010CA80u) [[unlikely]] return; }
L_0010CA80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0010CAB8; } }
L_0010CA88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[2].w[0] - 24888u);
    st32((c.r[2].w[0] - 24888u), 0u);
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CAA0u); st32((c.r[3].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_0002(c, 440u, depth + 1u); else { c.pc = 0x0010BA40u; return; } if (c.pc != 0x0010CAA0u) [[unlikely]] return; }
L_0010CAA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CAA8u);  if (depth < kMaxDepth) unit_0002(c, 466u, depth + 1u); else { c.pc = 0x0010BB10u; return; } if (c.pc != 0x0010CAA8u) [[unlikely]] return; }
L_0010CAA8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CAB4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0002(c, 454u, depth + 1u); else { c.pc = 0x0010BAB0u; return; } if (c.pc != 0x0010CAB4u) [[unlikely]] return; }
L_0010CAB4:
    set32(c.r[2], ld32((c.r[16].w[0] - 23400u)));
    c.budget -= 1;
L_0010CAB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0010CAD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], 0u - 47u);
    c.budget -= 4;
    c.pc = 0x0010CAE4u; syscall(c, 0x0010CAE0u); if (c.pc != 0x0010CAE4u) return;
    c.budget -= 1;
L_0010CAE4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[4].d[0]; c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(256ll) ? 1ull : 0ull;  if (t) { goto L_0010CB00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CAF8u);  if (depth < kMaxDepth) unit_0002(c, 476u, depth + 1u); else { c.pc = 0x0010BB60u; return; } if (c.pc != 0x0010CAF8u) [[unlikely]] return; }
L_0010CAF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0010CB58; } }
L_0010CB00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_0010CB14; } }
    set32(c.r[3], ld32((c.r[2].w[0] - 23400u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_0010CB1C; } }
L_0010CB14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0010CB54; } }
L_0010CB1C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 24888u);
    set32(c.r[4], ld32((c.r[5].w[0] - 24896u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 511ull;
    set32(c.r[6], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[5], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    st8((c.r[5].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CB50u); st8((c.r[3].w[0] + 9u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_0002(c, 506u, depth + 1u); else { c.pc = 0x0010BC50u; return; } if (c.pc != 0x0010CB50u) [[unlikely]] return; }
L_0010CB50:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0010CB54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0010CB58:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0010CB68:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(128ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_0010CB90; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 23400u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_0010CB98; } }
L_0010CB90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0010CBD4; } }
L_0010CB98:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 24888u);
    set32(c.r[4], ld32((c.r[5].w[0] - 24896u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[7], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] & 511ull;
    set32(c.r[6], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[5], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    st8((c.r[5].w[0] + 8u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CBD0u); st8((c.r[3].w[0] + 9u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_0002(c, 506u, depth + 1u); else { c.pc = 0x0010BC50u; return; } if (c.pc != 0x0010CBD0u) [[unlikely]] return; }
L_0010CBD0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0010CBD4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0010CBE8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], 0u - 47u);
    c.budget -= 4;
    c.pc = 0x0010CBFCu; syscall(c, 0x0010CBF8u); if (c.pc != 0x0010CBFCu) return;
    c.budget -= 1;
L_0010CBFC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[4].d[0]; c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(256ll) ? 1ull : 0ull;  if (t) { goto L_0010CC18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CC10u);  if (depth < kMaxDepth) unit_0002(c, 484u, depth + 1u); else { c.pc = 0x0010BBA0u; return; } if (c.pc != 0x0010CC10u) [[unlikely]] return; }
L_0010CC10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0010CC74; } }
L_0010CC18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_0010CC2C; } }
    set32(c.r[3], ld32((c.r[2].w[0] - 23400u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_0010CC34; } }
L_0010CC2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0010CC70; } }
L_0010CC34:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 24888u);
    set32(c.r[4], ld32((c.r[5].w[0] - 24896u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[7], 0u + 2u);
    c.r[2].d[0] = c.r[2].d[0] & 511ull;
    set32(c.r[6], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[5], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    st8((c.r[5].w[0] + 8u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CC6Cu); st8((c.r[3].w[0] + 9u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_0002(c, 506u, depth + 1u); else { c.pc = 0x0010BC50u; return; } if (c.pc != 0x0010CC6Cu) [[unlikely]] return; }
L_0010CC6C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0010CC70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0010CC74:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0010CC80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[2], c.r[2].w[0] - 23856u);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[29].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], 0u + 1u);
    st32((c.r[29].w[0] + 8u), c.r[6].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CCB8u); st32((c.r[29].w[0] + 12u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0003(c, 11u, depth + 1u); else { c.pc = 0x0010C050u; return; } if (c.pc != 0x0010CCB8u) [[unlikely]] return; }
L_0010CCB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0010CCC8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CCE0u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0003(c, 11u, depth + 1u); else { c.pc = 0x0010C050u; return; } if (c.pc != 0x0010CCE0u) [[unlikely]] return; }
L_0010CCE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0010CCF0:
    set32(c.r[5], c.r[5].w[0] << 24);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 24));
    st32((c.r[29].w[0]), c.r[4].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[4], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CD14u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 11u, depth + 1u); else { c.pc = 0x0010C050u; return; } if (c.pc != 0x0010CD14u) [[unlikely]] return; }
L_0010CD14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0010CD20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CD38u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0003(c, 11u, depth + 1u); else { c.pc = 0x0010C050u; return; } if (c.pc != 0x0010CD38u) [[unlikely]] return; }
L_0010CD38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0010CD48:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] & 65535ull;
    st32((c.r[29].w[0]), c.r[4].w[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], 0u - 5u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CD70u); st32((c.r[29].w[0] + 8u), c.r[6].w[0]);  if (depth < kMaxDepth) unit_0003(c, 11u, depth + 1u); else { c.pc = 0x0010C050u; return; } if (c.pc != 0x0010CD70u) [[unlikely]] return; }
L_0010CD70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0010CD80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] & 65535ull;
    st32((c.r[29].w[0]), c.r[4].w[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], 0u - 6u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CDA8u); st32((c.r[29].w[0] + 8u), c.r[6].w[0]);  if (depth < kMaxDepth) unit_0003(c, 11u, depth + 1u); else { c.pc = 0x0010C050u; return; } if (c.pc != 0x0010CDA8u) [[unlikely]] return; }
L_0010CDA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0010CDB8:
    set32(c.r[5], c.r[5].w[0] << 24);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 24));
    st32((c.r[29].w[0]), c.r[4].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[4], 0u - 7u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CDDCu); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 11u, depth + 1u); else { c.pc = 0x0010C050u; return; } if (c.pc != 0x0010CDDCu) [[unlikely]] return; }
L_0010CDDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0010CDE8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CE00u); set32(c.r[4], 0u - 8u);  if (depth < kMaxDepth) unit_0003(c, 11u, depth + 1u); else { c.pc = 0x0010C050u; return; } if (c.pc != 0x0010CE00u) [[unlikely]] return; }
L_0010CE00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0010CE10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CE28u); set32(c.r[4], 0u - 9u);  if (depth < kMaxDepth) unit_0003(c, 11u, depth + 1u); else { c.pc = 0x0010C050u; return; } if (c.pc != 0x0010CE28u) [[unlikely]] return; }
L_0010CE28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0010CE38:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CE50u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0003(c, 11u, depth + 1u); else { c.pc = 0x0010C050u; return; } if (c.pc != 0x0010CE50u) [[unlikely]] return; }
L_0010CE50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0010CE60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[2].w[0] - 23808u);
    st32((c.r[2].w[0] - 23808u), c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] + 16u);
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[3].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 4u), 0u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 12u), c.r[4].w[0]);  c.pc = t; return; }
L_0010CE88:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16u);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; st32((c.r[5].w[0] + 12u), c.r[4].w[0]);  if (t) { goto L_0010CEBC; } }
    set32(c.r[2], c.r[5].w[0] + 16u);
    st32((c.r[5].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 2;
L_0010CEBC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010CEC8:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16u);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; st32((c.r[5].w[0] + 8u), c.r[4].w[0]);  if (t) { goto L_0010CEFC; } }
    set32(c.r[2], c.r[5].w[0] + 16u);
    st32((c.r[5].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 2;
L_0010CEFC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010CF08:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; st64((c.r[29].w[0] + 32u), c.r[18].d[0]);  if (t) { goto L_0010D014; } }
    c.r[2].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_0010CF48; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0010D064; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0010D08C; } }
L_0010CF48:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] <= 0; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0010D088; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 20u)));  goto L_0010CFB8; }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(321ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);  if (t) { goto L_0010CF74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CF74u); set32(c.r[4], c.r[4].w[0] + 15384u);  if (depth < kMaxDepth) unit_0003(c, 241u, depth + 1u); else { c.pc = 0x0010DC88u; return; } if (c.pc != 0x0010CF74u) [[unlikely]] return; }
L_0010CF74:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[6].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CF8Cu); set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0003(c, 128u, depth + 1u); else { c.pc = 0x0010CD48u; return; } if (c.pc != 0x0010CF8Cu) [[unlikely]] return; }
L_0010CF8C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { goto L_0010CFA4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CFA4u); set32(c.r[4], c.r[4].w[0] + 15424u);  if (depth < kMaxDepth) unit_0003(c, 241u, depth + 1u); else { c.pc = 0x0010DC88u; return; } if (c.pc != 0x0010CFA4u) [[unlikely]] return; }
L_0010CFA4:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0010D088; } }
L_0010CFB8:
    set32(c.r[16], 0u + 12u);
    c.r[2].d[0] = ld16((c.r[18].w[0]));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0010D008; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 24u)));  if (t) { goto L_0010CFDC; } }
    c.budget -= 1;
L_0010CFD8:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 1;
L_0010CFDC:
    set32(c.r[2], c.r[3].w[0] + c.r[16].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CFF8u); set32(c.r[4], ld32((c.r[17].w[0] + 24u)));  if (depth < kMaxDepth) unit_0003(c, 141u, depth + 1u); else { c.pc = 0x0010CE88u; return; } if (c.pc != 0x0010CFF8u) [[unlikely]] return; }
L_0010CFF8:
    c.r[2].d[0] = ld16((c.r[18].w[0]));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010CFD8u | kUnwind; return; } goto L_0010CFD8; }
L_0010D008:
    st32((c.r[17].w[0] + 8u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0010D088; } }
L_0010D014:
    set32(c.r[6], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D028u); c.r[6].d[0] = c.r[6].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0003(c, 130u, depth + 1u); else { c.pc = 0x0010CD80u; return; } if (c.pc != 0x0010D028u) [[unlikely]] return; }
L_0010D028:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[5].sd[0] >= 0) { set32(c.r[2], ld32((c.r[17].w[0] + 16u)));  goto L_0010D048; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D040u); set32(c.r[4], c.r[4].w[0] + 15448u);  if (depth < kMaxDepth) unit_0003(c, 241u, depth + 1u); else { c.pc = 0x0010DC88u; return; } if (c.pc != 0x0010D040u) [[unlikely]] return; }
L_0010D040:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010D080; } }
L_0010D048:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0010D088; } }
L_0010D064:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010D080; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D080u); set32(c.r[4], c.r[4].w[0] + 15472u);  if (depth < kMaxDepth) unit_0003(c, 241u, depth + 1u); else { c.pc = 0x0010DC88u; return; } if (c.pc != 0x0010D080u) [[unlikely]] return; }
L_0010D080:
    st32((c.r[17].w[0] + 12u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 2;
L_0010D088:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0010D08C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0010D0A0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    c.r[20].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[19], c.r[21].w[0] - 23536u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0010D1CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D0ECu);  if (depth < kMaxDepth) unit_0005(c, 85u, depth + 1u); else { c.pc = 0x00114960u; return; } if (c.pc != 0x0010D0ECu) [[unlikely]] return; }
L_0010D0EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[2], c.r[2].w[0] - 23488u);
    set32(c.r[4], 0u + 1u);
    c.r[6].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[19].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[19].w[0] + 16u), c.r[6].w[0]);
    set32(c.r[8], 0u - 1u);
    set32(c.r[7], 0u + 10u);
    set32(c.r[5], 0u + 13u);
    set32(c.r[4], c.r[6].w[0] + 12u);
    c.budget -= 11;
L_0010D118:
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[8].d[0]) { set32(c.r[16], c.r[21].w[0] - 23536u);  goto L_0010D168; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[7].d[0]; c.r[3].d[0] = ld8((c.r[16].w[0]));  if (t) { goto L_0010D148; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { goto L_0010D164; } }
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 1;
L_0010D148:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010D118u | kUnwind; return; } goto L_0010D118; } }
L_0010D164:
    set32(c.r[16], c.r[21].w[0] - 23536u);
    c.budget -= 1;
L_0010D168:
    set32(c.r[2], c.r[17].w[0] + 12u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 7u)));
    set32(c.r[4], ld32((c.r[21].w[0] - 23536u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D184u); st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0003(c, 124u, depth + 1u); else { c.pc = 0x0010CCF0u; return; } if (c.pc != 0x0010D184u) [[unlikely]] return; }
L_0010D184:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0010D19C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D194u); st32((c.r[16].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_0005(c, 87u, depth + 1u); else { c.pc = 0x001149A8u; return; } if (c.pc != 0x0010D194u) [[unlikely]] return; }
L_0010D194:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0010D1CC; } }
L_0010D19C:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0010D1C0; } }
L_0010D1A8:
    set32(c.r[4], ld32((c.r[17].w[0] - 23536u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D1B4u);  if (depth < kMaxDepth) unit_0003(c, 126u, depth + 1u); else { c.pc = 0x0010CD20u; return; } if (c.pc != 0x0010D1B4u) [[unlikely]] return; }
L_0010D1B4:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010D1A8u | kUnwind; return; } goto L_0010D1A8; } }
L_0010D1C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D1C8u);  if (depth < kMaxDepth) unit_0005(c, 87u, depth + 1u); else { c.pc = 0x001149A8u; return; } if (c.pc != 0x0010D1C8u) [[unlikely]] return; }
L_0010D1C8:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0010D1CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0010D1F0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[3].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.budget -= 11;
    { const bool t = c.r[18].sd[0] <= 0; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_0010D29C; } }
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 3;
L_0010D228:
    set32(c.r[17], c.r[3].w[0] + 1u);
    set32(c.r[4], ld32((c.r[2].w[0] - 23512u)));
    set32(c.r[16], c.r[20].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_0010D238:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010D238u | kUnwind; return; } goto L_0010D238; } }
    set32(c.r[5], c.r[19].w[0] - 23536u);
    set32(c.r[2], ld32((c.r[5].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.r[4].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D270u); set32(c.r[4], ld32((c.r[5].w[0] + 24u)));  if (depth < kMaxDepth) unit_0003(c, 142u, depth + 1u); else { c.pc = 0x0010CEC8u; return; } if (c.pc != 0x0010D270u) [[unlikely]] return; }
L_0010D270:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[2], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 13u);  if (t) { goto L_0010D288; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[3].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0010D290; } }
L_0010D288:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0010D2A0; } }
L_0010D290:
    c.r[2].d[0] = c.r[3].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010D228u | kUnwind; return; } goto L_0010D228; } }
L_0010D29C:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_0010D2A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0010D2C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D2DCu); c.r[16].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (depth < kMaxDepth) unit_0002(c, 580u, depth + 1u); else { c.pc = 0x0010BEA0u; return; } if (c.pc != 0x0010D2DCu) [[unlikely]] return; }
L_0010D2DC:
    set32(c.r[17], c.r[16].w[0] - 23536u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00110000u);
    set32(c.r[4], 0u + 528u);
    set32(c.r[6], c.r[6].w[0] - 12536u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D2F4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 120u, depth + 1u); else { c.pc = 0x0010CC80u; return; } if (c.pc != 0x0010D2F4u) [[unlikely]] return; }
L_0010D2F4:
    st32((c.r[16].w[0] - 23536u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] - 23536u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_0010D30C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010D368; } }
L_0010D30C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[17].w[0] + 12u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[4], c.r[4].w[0] - 23168u);
    set32(c.r[2], c.r[2].w[0] - 23488u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 4u), 0u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 20u), c.r[4].w[0]);
    set32(c.r[6], 0u + 528u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[5], 0u + 69u);
    set32(c.r[3], 0u + 72u);
    set32(c.r[4], 0u + 256u);
    st16((c.r[2].w[0] + 4u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D360u); st16((c.r[2].w[0] + 2u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0003(c, 140u, depth + 1u); else { c.pc = 0x0010CE60u; return; } if (c.pc != 0x0010D360u) [[unlikely]] return; }
L_0010D360:
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_0010D368:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0010D380:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 61744ull;
    c.budget -= 2;
L_0010D388:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010D388u | kUnwind; return; } goto L_0010D388; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 61824ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  c.pc = t; return; }
L_0010D3B8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[5], ld32((c.r[17].w[0] - 23392u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[5].sd[0] < 126ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0] + 32u), c.r[18].d[0]);  if (t) { goto L_0010D400; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[17].w[0] - 23392u), 0u);
    set32(c.r[2], c.r[18].w[0] - 22848u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D3F8u); st8((c.r[2].w[0] + 127u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0003(c, 138u, depth + 1u); else { c.pc = 0x0010CE38u; return; } if (c.pc != 0x0010D3F8u) [[unlikely]] return; }
L_0010D3F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[17].w[0] - 23392u)));  if (t) { goto L_0010D404; } }
L_0010D400:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 1;
L_0010D404:
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[18].w[0] - 22848u);  if (t) { goto L_0010D440; } }
    set32(c.r[4], c.r[18].w[0] - 22848u);
    st32((c.r[17].w[0] - 23392u), 0u);
    set32(c.r[2], c.r[5].w[0] + c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 12;
    { set32(c.r[29], c.r[29].w[0] + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010CE38u | kUnwind; return; } goto L_0010CE38; }
L_0010D440:
    set32(c.r[3], c.r[5].w[0] + 1u);
    st32((c.r[17].w[0] - 23392u), c.r[3].w[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0010D468:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0010D490; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D480u); set32(c.r[4], 0u + 13u);  if (depth < kMaxDepth) unit_0003(c, 168u, depth + 1u); else { c.pc = 0x0010D380u; return; } if (c.pc != 0x0010D480u) [[unlikely]] return; }
L_0010D480:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], 0u + 10u);
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010D380u | kUnwind; return; } goto L_0010D380; }
L_0010D490:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010D380u | kUnwind; return; } goto L_0010D380; }
L_0010D4A0:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[5].d[0] << 1;
    c.r[6].d[0] = c.r[2].d[0] >> 53;
    c.r[6].d[0] = c.r[6].d[0] + static_cast<std::uint64_t>(-1075ll);
    c.r[2].d[0] = c.r[6].sd[0] < -53ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[6].sd[0] < 13ll ? 1ull : 0ull;  if (t) { goto L_0010D4C4; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0010D4C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[5].d[0] << 12;  if (t) { goto L_0010D4D4; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 9999u);  c.pc = t; return; }
L_0010D4D4:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 37;
    c.r[5].d[0] = c.r[2].d[0] >> 12;
    c.budget -= 5;
    { const bool t = c.r[6].sd[0] >= 0; c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];  if (t) { goto L_0010D518; } }
    c.r[6].d[0] = 0ull - c.r[6].d[0];
    set32(c.r[2], 0u + 3u);
    c.r[3].d[0] = c.r[6].d[0] + static_cast<std::uint64_t>(-2ll);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[5].d[0] = c.r[5].d[0] >> (c.r[3].w[0] & 63u);
    c.r[4].d[0] = c.r[5].d[0] & 3ull;
    c.budget -= 9;
    if (c.r[4].d[0] != c.r[2].d[0]) { c.r[5].d[0] = c.r[5].d[0] >> 2;  goto L_0010D524; }
    c.r[2].d[0] = c.r[5].d[0] >> 2;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0010D524; } }
L_0010D518:
    c.r[2].d[0] = c.r[6].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[5].d[0] = c.r[5].d[0] << (c.r[2].w[0] & 63u);
    c.budget -= 3;
L_0010D524:
    c.r[2].d[0] = c.r[5].d[0] << 32;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);  c.pc = t; return; }
L_0010D530:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D558u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 71u, depth + 1u); else { c.pc = 0x0011CEA8u; return; } if (c.pc != 0x0010D558u) [[unlikely]] return; }
L_0010D558:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0010D57C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D568u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x0010D568u) [[unlikely]] return; }
L_0010D568:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] - 23388u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D57Cu); set32(c.r[4], 0u + 45u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0010D57Cu) [[unlikely]] return; }
L_0010D57C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 15528u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D58Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 71u, depth + 1u); else { c.pc = 0x0011CEA8u; return; } if (c.pc != 0x0010D58Cu) [[unlikely]] return; }
L_0010D58C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[18].sd[0] = static_cast<std::int32_t>(0x00450000u);  if (t) { goto L_0010D5D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010D5B4; } }
    c.budget -= 1;
L_0010D5A0:
    c.r[5].d[0] = 0ull | 32840ull;
    c.r[5].d[0] = c.r[5].d[0] << 47;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D5B0u); set32(c.r[17], c.r[17].w[0] - 1u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x0010D5B0u) [[unlikely]] return; }
L_0010D5B0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0010D5B4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 15536u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D5C4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 71u, depth + 1u); else { c.pc = 0x0011CEA8u; return; } if (c.pc != 0x0010D5C4u) [[unlikely]] return; }
L_0010D5C4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010D5A0u | kUnwind; return; } goto L_0010D5A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010D624; } }
L_0010D5D4:
    c.r[5].d[0] = 0ull | 65472ull;
    c.r[5].d[0] = c.r[5].d[0] << 46;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D5E4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 71u, depth + 1u); else { c.pc = 0x0011CEA8u; return; } if (c.pc != 0x0010D5E4u) [[unlikely]] return; }
L_0010D5E4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[18].sd[0] = static_cast<std::int32_t>(0x00450000u);  if (t) { goto L_0010D624; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010D60C; } }
    c.budget -= 1;
L_0010D5F8:
    c.r[5].d[0] = 0ull | 32840ull;
    c.r[5].d[0] = c.r[5].d[0] << 47;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D608u); set32(c.r[17], c.r[17].w[0] + 1u);  if (depth < kMaxDepth) unit_0007(c, 65u, depth + 1u); else { c.pc = 0x0011CC10u; return; } if (c.pc != 0x0010D608u) [[unlikely]] return; }
L_0010D608:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0010D60C:
    c.r[5].d[0] = 0ull | 65472ull;
    c.r[5].d[0] = c.r[5].d[0] << 46;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D61Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 71u, depth + 1u); else { c.pc = 0x0011CEA8u; return; } if (c.pc != 0x0010D61Cu) [[unlikely]] return; }
L_0010D61C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010D5F8u | kUnwind; return; } goto L_0010D5F8; } }
L_0010D624:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 15544u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D634u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x0010D634u) [[unlikely]] return; }
L_0010D634:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D63Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 3u, depth + 1u); else { c.pc = 0x0011C020u; return; } if (c.pc != 0x0010D63Cu) [[unlikely]] return; }
L_0010D63C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D644u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 174u, depth + 1u); else { c.pc = 0x0010D4A0u; return; } if (c.pc != 0x0010D644u) [[unlikely]] return; }
L_0010D644:
    set32(c.r[4], c.r[18].w[0] + 15504u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D650u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 241u, depth + 1u); else { c.pc = 0x0010DC88u; return; } if (c.pc != 0x0010D650u) [[unlikely]] return; }
L_0010D650:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] < 0; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0010D678; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[4], c.r[4].w[0] + 15512u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 64u);  goto L_0010DC88; }
L_0010D678:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[4], c.r[4].w[0] + 15520u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 64u);  goto L_0010DC88; }
L_0010D698:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 80u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D6C8u); st64((c.r[29].w[0] + 48u), c.r[17].d[0]);  if (depth < kMaxDepth) unit_0005(c, 85u, depth + 1u); else { c.pc = 0x00114960u; return; } if (c.pc != 0x0010D6C8u) [[unlikely]] return; }
L_0010D6C8:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = ld8((c.r[16].w[0]));  if (t) { goto L_0010DC4C; } }
L_0010D6D8:
    set32(c.r[2], c.r[3].w[0] << 24);
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    set32(c.r[2], 0u + 37u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0010DC18; } }
L_0010D6F0:
    set32(c.r[18], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0010D6F4:
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0010D6F8:
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[2], c.r[2].w[0] - 48u);
    set32(c.r[2], c.r[2].w[0] << 24);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.r[3].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(73ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);  if (t) { goto L_0010DC30; } }
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 15552u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x0010C000u < 16384u) { entry = entries_0003[(t - 0x0010C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0010D72C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    set32(c.r[5], c.r[3].w[0] - 48u);
    c.r[2].d[0] = c.r[5].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));  if (t) { goto L_0010D7B4; } }
    set32(c.r[2], c.r[6].w[0] - 48u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 10u);  if (t) { goto L_0010D774; } }
    set32(c.r[4], 0u + 31u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[18].w[0] + 2u);
    set32(c.r[3], c.r[3].w[0] - 48u);
    set32(c.r[5], c.r[3].w[0] + c.r[6].w[0]);
    c.r[2].d[0] = c.r[5].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[4].d[0];  if (t) { goto L_0010D778; } }
L_0010D774:
    set32(c.r[16], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0010D778:
    set32(c.r[2], c.r[29].w[0] + 31u);
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] <= 0; set32(c.r[20], c.r[2].w[0] - c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010D6F0u | kUnwind; return; } goto L_0010D6F0; } }
    set32(c.r[18], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0010D788:
    set32(c.r[2], 0u + 31u);
    set32(c.r[4], 0u + 48u);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[29].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010D788u | kUnwind; return; } goto L_0010D788; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[18].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010D6F8u | kUnwind; return; } goto L_0010D6F8; } }
L_0010D7B0:
    set32(c.r[7], 0u + 108u);
    c.budget -= 1;
L_0010D7B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010D6F4u | kUnwind; return; } goto L_0010D6F4; } }
L_0010D7BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u + 104u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010D7B4u | kUnwind; return; } goto L_0010D7B4; } }
L_0010D7C4:
    set32(c.r[2], 0u + 108u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 104u);  if (t) { goto L_0010D7DC; } }
    set32(c.r[19], c.r[19].w[0] + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = ld64((c.r[19].w[0] - 8u));  if (t) { goto L_0010D7F0; } }
L_0010D7DC:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[2].d[0]; set32(c.r[19], c.r[19].w[0] + 8u);  if (t) { goto L_0010D7EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = ld16((c.r[19].w[0] - 8u));  if (t) { goto L_0010D7F0; } }
L_0010D7EC:
    c.r[17].d[0] = ld32((c.r[19].w[0] - 8u));
    c.budget -= 1;
L_0010D7F0:
    set32(c.r[16], c.r[29].w[0] + 31u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull; st8((c.r[29].w[0] + 31u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0010D810; } }
    set32(c.r[2], 0u + 48u);
    set32(c.r[16], c.r[29].w[0] + 30u);
    st8((c.r[29].w[0] + 30u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_0010D838; } }
L_0010D810:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 2;
L_0010D818:
    c.r[2].d[0] = c.r[17].d[0] & 7ull;
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(48ll);
    c.r[17].d[0] = c.r[17].d[0] >> 3;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010D818u | kUnwind; return; } goto L_0010D818; } }
L_0010D838:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[2].d[0] = c.r[20].d[0] < c.r[16].d[0] ? 1ull : 0ull;  if (t) { goto L_0010D844; } }
    if (c.r[2].d[0] != 0) c.r[16].d[0] = c.r[20].d[0];
    c.budget -= 1;
L_0010D844:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = ld8((c.r[16].w[0]));  if (t) { goto L_0010DC3C; } }
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.budget -= 2;
L_0010D858:
    set32(c.r[4], c.r[4].w[0] << 24);
    set32(c.r[2], ld32((c.r[21].w[0] - 23388u)));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 24));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D86Cu); set32(c.r[16], c.r[16].w[0] + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0010D86Cu) [[unlikely]] return; }
L_0010D86C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = ld8((c.r[16].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010D858u | kUnwind; return; } goto L_0010D858; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0010DC40; } }
L_0010D880:
    set32(c.r[2], 0u + 108u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 104u);  if (t) { goto L_0010D898; } }
    set32(c.r[19], c.r[19].w[0] + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = ld64((c.r[19].w[0] - 8u));  if (t) { goto L_0010D8AC; } }
L_0010D898:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[2].d[0]; set32(c.r[19], c.r[19].w[0] + 8u);  if (t) { goto L_0010D8A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = ld16((c.r[19].w[0] - 8u));  if (t) { goto L_0010D8AC; } }
L_0010D8A8:
    c.r[17].d[0] = ld32((c.r[19].w[0] - 8u));
    c.budget -= 1;
L_0010D8AC:
    set32(c.r[16], c.r[29].w[0] + 31u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull; st8((c.r[29].w[0] + 31u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0010D8CC; } }
    set32(c.r[2], 0u + 48u);
    set32(c.r[16], c.r[29].w[0] + 30u);
    st8((c.r[29].w[0] + 30u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_0010D8F8; } }
L_0010D8CC:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0010D8D0:
    c.r[3].d[0] = c.r[17].d[0] & 15ull;
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].d[0] + static_cast<std::uint64_t>(48ll);  if (t) { goto L_0010D8E4; } }
    c.r[2].d[0] = c.r[3].d[0] + static_cast<std::uint64_t>(87ll);
    c.budget -= 1;
L_0010D8E4:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[17].d[0] = c.r[17].d[0] >> 4;
    c.budget -= 5;
    { const bool t = c.r[17].d[0] != 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010D8D0u | kUnwind; return; } goto L_0010D8D0; } }
L_0010D8F8:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[2].d[0] = c.r[20].d[0] < c.r[16].d[0] ? 1ull : 0ull;  if (t) { goto L_0010D904; } }
    if (c.r[2].d[0] != 0) c.r[16].d[0] = c.r[20].d[0];
    c.budget -= 1;
L_0010D904:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = ld8((c.r[16].w[0]));  if (t) { goto L_0010DC3C; } }
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.budget -= 2;
L_0010D918:
    set32(c.r[4], c.r[4].w[0] << 24);
    set32(c.r[2], ld32((c.r[21].w[0] - 23388u)));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 24));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D92Cu); set32(c.r[16], c.r[16].w[0] + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0010D92Cu) [[unlikely]] return; }
L_0010D92C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = ld8((c.r[16].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010D918u | kUnwind; return; } goto L_0010D918; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0010DC40; } }
L_0010D940:
    set32(c.r[2], 0u + 108u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 104u);  if (t) { goto L_0010D958; } }
    set32(c.r[19], c.r[19].w[0] + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = ld64((c.r[19].w[0] - 8u));  if (t) { goto L_0010D96C; } }
L_0010D958:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[2].d[0]; set32(c.r[19], c.r[19].w[0] + 8u);  if (t) { goto L_0010D968; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] - 8u)));  if (t) { goto L_0010D96C; } }
L_0010D968:
    set32(c.r[17], ld32((c.r[19].w[0] - 8u)));
    c.budget -= 1;
L_0010D96C:
    set32(c.r[16], c.r[29].w[0] + 31u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull; st8((c.r[29].w[0] + 31u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0010D988; } }
    set32(c.r[2], 0u + 48u);
    set32(c.r[16], c.r[29].w[0] + 30u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 30u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0010D9E8; } }
L_0010D988:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; c.r[21].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_0010D9A0; } }
    c.r[17].d[0] = 0ull - c.r[17].d[0];
    set32(c.r[2], ld32((c.r[21].w[0] - 23388u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D9A0u); set32(c.r[4], 0u + 45u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0010D9A0u) [[unlikely]] return; }
L_0010D9A0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_0010D9EC; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_0010D9B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D9B8u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_0006(c, 224u, depth + 1u); else { c.pc = 0x0011AD18u; return; } if (c.pc != 0x0010D9B8u) [[unlikely]] return; }
L_0010D9B8:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(48ll);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[5], 0u + 10u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D9D4u); st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0006(c, 222u, depth + 1u); else { c.pc = 0x0011A680u; return; } if (c.pc != 0x0010D9D4u) [[unlikely]] return; }
L_0010D9D4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010D9B0u | kUnwind; return; } goto L_0010D9B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010D9EC; } }
L_0010D9E8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0010D9EC:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[2].d[0] = c.r[20].d[0] < c.r[16].d[0] ? 1ull : 0ull;  if (t) { goto L_0010D9F8; } }
    if (c.r[2].d[0] != 0) c.r[16].d[0] = c.r[20].d[0];
    c.budget -= 1;
L_0010D9F8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = ld8((c.r[16].w[0]));  if (t) { goto L_0010DC3C; } }
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.budget -= 1;
L_0010DA08:
    set32(c.r[4], c.r[4].w[0] << 24);
    set32(c.r[2], ld32((c.r[21].w[0] - 23388u)));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 24));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DA1Cu); set32(c.r[16], c.r[16].w[0] + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0010DA1Cu) [[unlikely]] return; }
L_0010DA1C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = ld8((c.r[16].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010DA08u | kUnwind; return; } goto L_0010DA08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0010DC40; } }
L_0010DA30:
    set32(c.r[2], 0u + 108u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 104u);  if (t) { goto L_0010DA48; } }
    set32(c.r[19], c.r[19].w[0] + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = ld64((c.r[19].w[0] - 8u));  if (t) { goto L_0010DA5C; } }
L_0010DA48:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[2].d[0]; set32(c.r[19], c.r[19].w[0] + 8u);  if (t) { goto L_0010DA58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = ld16((c.r[19].w[0] - 8u));  if (t) { goto L_0010DA5C; } }
L_0010DA58:
    c.r[17].d[0] = ld32((c.r[19].w[0] - 8u));
    c.budget -= 1;
L_0010DA5C:
    set32(c.r[16], c.r[29].w[0] + 31u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull; st8((c.r[29].w[0] + 31u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0010DA7C; } }
    set32(c.r[2], 0u + 48u);
    set32(c.r[16], c.r[29].w[0] + 30u);
    st8((c.r[29].w[0] + 30u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_0010DAB8; } }
L_0010DA7C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
L_0010DA88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DA90u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_0006(c, 228u, depth + 1u); else { c.pc = 0x0011B928u; return; } if (c.pc != 0x0010DA90u) [[unlikely]] return; }
L_0010DA90:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(48ll);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[5], 0u + 10u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DAACu); st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0006(c, 227u, depth + 1u); else { c.pc = 0x0011B3A8u; return; } if (c.pc != 0x0010DAACu) [[unlikely]] return; }
L_0010DAAC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010DA88u | kUnwind; return; } goto L_0010DA88; } }
L_0010DAB8:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[2].d[0] = c.r[20].d[0] < c.r[16].d[0] ? 1ull : 0ull;  if (t) { goto L_0010DAC4; } }
    if (c.r[2].d[0] != 0) c.r[16].d[0] = c.r[20].d[0];
    c.budget -= 1;
L_0010DAC4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = ld8((c.r[16].w[0]));  if (t) { goto L_0010DC3C; } }
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.budget -= 2;
L_0010DAD8:
    set32(c.r[4], c.r[4].w[0] << 24);
    set32(c.r[2], ld32((c.r[21].w[0] - 23388u)));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 24));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DAECu); set32(c.r[16], c.r[16].w[0] + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0010DAECu) [[unlikely]] return; }
L_0010DAEC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = ld8((c.r[16].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010DAD8u | kUnwind; return; } goto L_0010DAD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0010DC40; } }
L_0010DB00:
    set32(c.r[19], c.r[19].w[0] + 8u);
    c.f[0] = 0u;
    c.f[12] = ld32((c.r[19].w[0] - 8u));
    fpu_compare(c, fp::key(c.f[12]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[21].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_0010DB34; } }
    set32(c.r[4], 0u + 48u);
    set32(c.r[2], ld32((c.r[21].w[0] - 23388u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DB2Cu); set32(c.r[18], c.r[18].w[0] + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0010DB2Cu) [[unlikely]] return; }
L_0010DB2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0010DC40; } }
L_0010DB34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DB3Cu); set32(c.r[18], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_0007(c, 36u, depth + 1u); else { c.pc = 0x0011C438u; return; } if (c.pc != 0x0010DB3Cu) [[unlikely]] return; }
L_0010DB3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DB44u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 175u, depth + 1u); else { c.pc = 0x0010D530u; return; } if (c.pc != 0x0010DB44u) [[unlikely]] return; }
L_0010DB44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0010DC40; } }
L_0010DB4C:
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[3], ld32((c.r[19].w[0] - 8u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_0010DBB8; } }
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[4], 0u + 40u);
    set32(c.r[2], ld32((c.r[21].w[0] - 23388u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DB74u); set32(c.r[18], c.r[18].w[0] + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0010DB74u) [[unlikely]] return; }
L_0010DB74:
    set32(c.r[3], ld32((c.r[21].w[0] - 23388u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DB80u); set32(c.r[4], 0u + 110u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0010DB80u) [[unlikely]] return; }
L_0010DB80:
    set32(c.r[2], ld32((c.r[21].w[0] - 23388u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DB8Cu); set32(c.r[4], 0u + 117u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0010DB8Cu) [[unlikely]] return; }
L_0010DB8C:
    set32(c.r[3], ld32((c.r[21].w[0] - 23388u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DB98u); set32(c.r[4], 0u + 108u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0010DB98u) [[unlikely]] return; }
L_0010DB98:
    set32(c.r[2], ld32((c.r[21].w[0] - 23388u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DBA4u); set32(c.r[4], 0u + 108u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0010DBA4u) [[unlikely]] return; }
L_0010DBA4:
    set32(c.r[3], ld32((c.r[21].w[0] - 23388u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DBB0u); set32(c.r[4], 0u + 41u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0010DBB0u) [[unlikely]] return; }
L_0010DBB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0010DC40; } }
L_0010DBB8:
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.budget -= 4;
L_0010DBC8:
    set32(c.r[4], c.r[4].w[0] << 24);
    set32(c.r[3], ld32((c.r[21].w[0] - 23388u)));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 24));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DBDCu); set32(c.r[16], c.r[16].w[0] + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0010DBDCu) [[unlikely]] return; }
L_0010DBDC:
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010DBC8u | kUnwind; return; } goto L_0010DBC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0010DC40; } }
L_0010DBF0:
    set32(c.r[19], c.r[19].w[0] + 8u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] - 8u)));
    set32(c.r[2], ld32((c.r[21].w[0] - 23388u)));
    c.r[4].d[0] = c.r[17].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DC10u); set32(c.r[18], c.r[18].w[0] + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0010DC10u) [[unlikely]] return; }
L_0010DC10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0010DC40; } }
L_0010DC18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 23388u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DC28u); set32(c.r[18], c.r[16].w[0] + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0010DC28u) [[unlikely]] return; }
L_0010DC28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0010DC40; } }
L_0010DC30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[16].w[0] + 1u);  if (t) { goto L_0010DC3C; } }
L_0010DC38:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0010DC3C:
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0010DC40:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = ld8((c.r[16].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010D6D8u | kUnwind; return; } goto L_0010D6D8; } }
L_0010DC4C:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_0010DC60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DC5Cu);  if (depth < kMaxDepth) unit_0005(c, 87u, depth + 1u); else { c.pc = 0x001149A8u; return; } if (c.pc != 0x0010DC5Cu) [[unlikely]] return; }
L_0010DC5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_0010DC60:
    c.r[22].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0010DC88:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 88u), c.r[5].d[0]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 88u);
    st64((c.r[29].w[0] + 96u), c.r[6].d[0]);
    st64((c.r[29].w[0] + 104u), c.r[7].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 120u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 128u), c.r[10].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DCB4u); st64((c.r[29].w[0] + 136u), c.r[11].d[0]);  if (depth < kMaxDepth) unit_0003(c, 191u, depth + 1u); else { c.pc = 0x0010D698u; return; } if (c.pc != 0x0010DCB4u) [[unlikely]] return; }
L_0010DCB4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0010DCC0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00110000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[2], c.r[2].w[0] - 11336u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    set32(c.r[17], ld32((c.r[16].w[0] - 23388u)));
    st64((c.r[29].w[0] + 120u), c.r[5].d[0]);
    st32((c.r[16].w[0] - 23388u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 120u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 128u), c.r[6].d[0]);
    st64((c.r[29].w[0] + 136u), c.r[7].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 152u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 160u), c.r[10].d[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DD08u); st64((c.r[29].w[0] + 168u), c.r[11].d[0]);  if (depth < kMaxDepth) unit_0003(c, 191u, depth + 1u); else { c.pc = 0x0010D698u; return; } if (c.pc != 0x0010DD08u) [[unlikely]] return; }
L_0010DD08:
    st32((c.r[16].w[0] - 23388u), c.r[17].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0010DD20:
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_0010DD40:
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 8u), c.r[2].w[0]);  c.pc = t; return; }
L_0010DD50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 22208u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0])));  c.pc = t; return; }
L_0010DD68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 22208u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[5].w[0]);  c.pc = t; return; }
L_0010DD88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 22504u);  c.pc = t; return; }
L_0010DD98:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DDB8u); st64((c.r[29].w[0]), c.r[16].d[0]);  if (depth < kMaxDepth) unit_0005(c, 85u, depth + 1u); else { c.pc = 0x00114960u; return; } if (c.pc != 0x0010DDB8u) [[unlikely]] return; }
L_0010DDB8:
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[2], ld32((c.r[10].w[0] - 23384u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_0010DDE8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 96u);  [[clang::musttail]] return unit_0005(c, 87u, depth); }
L_0010DDE8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[5], c.r[5].w[0] - 22592u);
    set32(c.r[6], c.r[19].w[0] - 22720u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    set32(c.r[3], 0u + 1u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[18].w[0] - 22504u);
    st32((c.r[10].w[0] - 23384u), c.r[3].w[0]);
    set32(c.r[8], c.r[9].w[0] - 22464u);
    st32((c.r[18].w[0] - 22504u), c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] - 22208u);
    set32(c.r[7], 0u + 32u);
    st32((c.r[2].w[0] + 28u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[5].w[0]);
    c.r[3].d[0] = c.r[8].d[0] + 0ull;
    st32((c.r[2].w[0] + 16u), c.r[7].w[0]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[16], 0u + 31u);
    st32((c.r[2].w[0] + 12u), c.r[8].w[0]);
    st32((c.r[2].w[0] + 20u), 0u);
    st32((c.r[2].w[0] + 24u), 0u);
    c.budget -= 26;
L_0010DE50:
    st32((c.r[3].w[0]), 0u);
    set32(c.r[16], c.r[16].w[0] - 1u);
    st32((c.r[3].w[0] + 4u), 0u);
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.budget -= 7;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010DE50u | kUnwind; return; } goto L_0010DE50; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[16], 0u + 31u);
    set32(c.r[2], c.r[2].w[0] - 22208u);
    set32(c.r[2], c.r[2].w[0] + 124u);
    c.budget -= 5;
L_0010DE80:
    st32((c.r[2].w[0]), 0u);
    set32(c.r[16], c.r[16].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 7;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010DE80u | kUnwind; return; } goto L_0010DE80; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00110000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00110000u);
    set32(c.r[2], c.r[2].w[0] - 8896u);
    set32(c.r[4], c.r[9].w[0] - 22464u);
    set32(c.r[3], c.r[3].w[0] - 8928u);
    set32(c.r[17], c.r[18].w[0] - 22504u);
    st32((c.r[9].w[0] - 22464u), c.r[2].w[0]);
    set32(c.r[16], 0u + 32u);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[17].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DECCu); st32((c.r[4].w[0] + 4u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0005(c, 87u, depth + 1u); else { c.pc = 0x001149A8u; return; } if (c.pc != 0x0010DECCu) [[unlikely]] return; }
L_0010DECC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DED4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 580u, depth + 1u); else { c.pc = 0x0010BEA0u; return; } if (c.pc != 0x0010DED4u) [[unlikely]] return; }
L_0010DED4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 57360ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_0010DEF8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    st32((c.r[1].w[0] - 8176u), c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 3;
L_0010DEF8:
    c.r[2].d[0] = c.r[2].d[0] | 49152ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00110000u);  if (t) { goto L_0010DF18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DF14u);  if (depth < kMaxDepth) unit_0003(c, 1u, depth + 1u); else { c.pc = 0x0010C000u; return; } if (c.pc != 0x0010DF14u) [[unlikely]] return; }
L_0010DF14:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00110000u);
    c.budget -= 1;
L_0010DF18:
    set32(c.r[4], 0u + 5u);
    set32(c.r[5], c.r[5].w[0] - 7536u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DF28u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 406u, depth + 1u); else { c.pc = 0x0010B930u; return; } if (c.pc != 0x0010DF28u) [[unlikely]] return; }
L_0010DF28:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[4], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DF38u); st32((c.r[3].w[0] - 22508u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0003(c, 83u, depth + 1u); else { c.pc = 0x0010C838u; return; } if (c.pc != 0x0010DF38u) [[unlikely]] return; }
L_0010DF38:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DF44u);  if (depth < kMaxDepth) unit_0003(c, 7u, depth + 1u); else { c.pc = 0x0010C030u; return; } if (c.pc != 0x0010DF44u) [[unlikely]] return; }
L_0010DF44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0010DF8C; } }
    set32(c.r[5], c.r[20].w[0] - 22528u);
    set32(c.r[2], c.r[19].w[0] - 22720u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[6], 0u + 20u);
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[9].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[5].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 16;
    { set32(c.r[29], c.r[29].w[0] + 96u);  goto L_0010E210; }
L_0010DF8C:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.budget -= 1;
L_0010DF90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DF98u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0003(c, 7u, depth + 1u); else { c.pc = 0x0010C030u; return; } if (c.pc != 0x0010DF98u) [[unlikely]] return; }
L_0010DF98:
    c.r[2].d[0] = c.r[2].d[0] & c.r[16].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010DF90u | kUnwind; return; } goto L_0010DF90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DFACu); set32(c.r[16], c.r[18].w[0] - 22504u);  if (depth < kMaxDepth) unit_0003(c, 7u, depth + 1u); else { c.pc = 0x0010C030u; return; } if (c.pc != 0x0010DFACu) [[unlikely]] return; }
L_0010DFAC:
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DFBCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 5u, depth + 1u); else { c.pc = 0x0010C020u; return; } if (c.pc != 0x0010DFBCu) [[unlikely]] return; }
L_0010DFBC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DFCCu); c.r[4].d[0] = c.r[4].d[0] | 1ull;  if (depth < kMaxDepth) unit_0003(c, 5u, depth + 1u); else { c.pc = 0x0010C020u; return; } if (c.pc != 0x0010DFCCu) [[unlikely]] return; }
L_0010DFCC:
    set32(c.r[3], c.r[20].w[0] - 22528u);
    set32(c.r[2], c.r[19].w[0] - 22720u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[4].d[0] = c.r[4].d[0] | 2ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[6], 0u + 20u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[8].d[0] = 0ull + 0ull;
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    c.r[9].d[0] = 0ull + 0ull;
    st32((c.r[3].w[0] + 12u), 0u);
    c.budget -= 19;
    { set32(c.r[29], c.r[29].w[0] + 96u);  goto L_0010E210; }
L_0010E018:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E028u); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_0003(c, 79u, depth + 1u); else { c.pc = 0x0010C7D0u; return; } if (c.pc != 0x0010E028u) [[unlikely]] return; }
L_0010E028:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[4], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E038u); set32(c.r[5], ld32((c.r[3].w[0] - 22508u)));  if (depth < kMaxDepth) unit_0002(c, 410u, depth + 1u); else { c.pc = 0x0010B950u; return; } if (c.pc != 0x0010E038u) [[unlikely]] return; }
L_0010E038:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[3].w[0] - 23384u), 0u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0010E050:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 22504u);
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    st32((c.r[3].w[0] + 24u), c.r[5].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 20u), c.r[4].w[0]);  c.pc = t; return; }
L_0010E068:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 22504u);
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    st32((c.r[3].w[0] + 16u), c.r[5].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 12u), c.r[4].w[0]);  c.pc = t; return; }
L_0010E080:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], c.r[4].w[0] << 3);  if (t) { goto L_0010E094; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] - 22492u)));  if (t) { goto L_0010E09C; } }
L_0010E094:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 22484u)));
    c.budget -= 2;
L_0010E09C:
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[6].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0]), c.r[5].w[0]);  c.pc = t; return; }
L_0010E0B0:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], c.r[4].w[0] << 3);  if (t) { goto L_0010E0C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] - 22492u)));  if (t) { goto L_0010E0CC; } }
L_0010E0C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 22484u)));
    c.budget -= 2;
L_0010E0CC:
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0]), 0u);  c.pc = t; return; }
L_0010E0D8:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[20].d[0]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    set32(c.r[2], c.r[17].w[0] - 16u);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[8].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(97ll) ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[10].d[0] + 0ull;  if (t) { goto L_0010E120; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010E1EC; } }
L_0010E120:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] <= 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0010E168; } }
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[3], c.r[5].w[0] << 8);
    st32((c.r[16].w[0] + 4u), c.r[9].w[0]);
    set32(c.r[18], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[29].w[0]), c.r[4].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[3].d[0] = c.r[19].d[0] & 4ull;
    st32((c.r[29].w[0] + 4u), c.r[9].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[5].w[0]);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 12u), 0u);  if (t) { goto L_0010E174; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E160u);  if (depth < kMaxDepth) unit_0003(c, 287u, depth + 1u); else { c.pc = 0x0010E3B8u; return; } if (c.pc != 0x0010E160u) [[unlikely]] return; }
L_0010E160:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[18].w[0] << 4);  if (t) { goto L_0010E178; } }
L_0010E168:
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0010E174:
    set32(c.r[5], c.r[18].w[0] << 4);
    c.budget -= 1;
L_0010E178:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 22496u)));
    set32(c.r[3], c.r[29].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), c.r[16].w[0]);
    set32(c.r[2], c.r[29].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[29].w[0] + 8u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), c.r[17].w[0]);
    set32(c.r[4], c.r[29].w[0] + 12u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[20].w[0]);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[2], 0u + 68u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E1C8u); set32(c.r[18], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_0003(c, 287u, depth + 1u); else { c.pc = 0x0010E3B8u; return; } if (c.pc != 0x0010E1C8u) [[unlikely]] return; }
L_0010E1C8:
    c.r[2].d[0] = c.r[19].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0010E1E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E1DCu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 622u, depth + 1u); else { c.pc = 0x0010BFF0u; return; } if (c.pc != 0x0010E1DCu) [[unlikely]] return; }
L_0010E1DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_0010E1F0; } }
L_0010E1E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E1ECu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 620u, depth + 1u); else { c.pc = 0x0010BFE0u; return; } if (c.pc != 0x0010E1ECu) [[unlikely]] return; }
L_0010E1EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_0010E1F0:
    c.r[20].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0010E210:
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.r[3].d[0] = c.r[7].d[0] + 0ull;
    c.r[11].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[10].d[0] = c.r[9].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[8].d[0] = c.r[3].d[0] + 0ull;
    c.r[9].d[0] = c.r[11].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E240u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 272u, depth + 1u); else { c.pc = 0x0010E0D8u; return; } if (c.pc != 0x0010E240u) [[unlikely]] return; }
L_0010E240:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0010E250:
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.r[3].d[0] = c.r[7].d[0] + 0ull;
    c.r[11].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[10].d[0] = c.r[9].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[8].d[0] = c.r[3].d[0] + 0ull;
    c.r[9].d[0] = c.r[11].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E280u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0003(c, 272u, depth + 1u); else { c.pc = 0x0010E0D8u; return; } if (c.pc != 0x0010E280u) [[unlikely]] return; }
L_0010E280:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0010E290:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 112u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E2A4u);  if (depth < kMaxDepth) unit_0005(c, 87u, depth + 1u); else { c.pc = 0x001149A8u; return; } if (c.pc != 0x0010E2A4u) [[unlikely]] return; }
L_0010E2A4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[7], ld32((c.r[3].w[0] - 22504u)));
    set32(c.r[16], c.r[3].w[0] - 22504u);
    c.r[2].d[0] = ld8((c.r[7].w[0]));
    c.r[5].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010E3A8; } }
    set32(c.r[2], c.r[5].w[0] + 15u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[5].w[0] + 30u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[4].d[0] = c.r[2].d[0];
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 4));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 10;
    { const bool t = c.r[5].sd[0] <= 0; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0010E30C; } }
    c.r[3].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 2;
L_0010E2F0:
    ld128((c.r[6].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[6], c.r[6].w[0] + 16u);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010E2F0u | kUnwind; return; } goto L_0010E2F0; } }
L_0010E30C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E314u);  if (depth < kMaxDepth) unit_0003(c, 3u, depth + 1u); else { c.pc = 0x0010C010u; return; } if (c.pc != 0x0010E314u) [[unlikely]] return; }
L_0010E314:
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_0010E368; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.r[5].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[4].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], c.r[5].w[0] << 3);  if (t) { goto L_0010E39C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0010E39C; } }
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E360u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0010E360u) [[unlikely]] return; }
L_0010E360:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010E39C; } }
L_0010E368:
    set32(c.r[5], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[5].w[0] << 3);  if (t) { goto L_0010E39C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0010E39C; } }
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E39Cu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0010E39Cu) [[unlikely]] return; }
L_0010E39C:
    set_interrupts(c, true);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_0010E3A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0010E3B8:
    c.r[25].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[25].d[0] = c.r[25].d[0] | 65472ull;
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] <= 0; set32(c.r[10], c.r[4].w[0] + c.r[5].w[0]);  if (t) { goto L_0010E45C; } }
    c.r[8].d[0] = c.r[4].d[0] & c.r[25].d[0];
    set32(c.r[10], c.r[10].w[0] - 1u);
    c.r[9].d[0] = c.r[10].d[0] & c.r[25].d[0];
    set32(c.r[10], c.r[9].w[0] - c.r[8].w[0]);
    set32(c.r[11], c.r[10].w[0] >> 6);
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.r[9].d[0] = c.r[11].d[0] & 7ull;
    c.budget -= 9;
    { const bool t = c.r[9].d[0] == 0ull; set32(c.r[10], c.r[11].w[0] >> 3);  if (t) { goto L_0010E408; } }
L_0010E3EC:
    set32(c.r[9], c.r[9].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[9].sd[0] > 0; set32(c.r[8], c.r[8].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010E3ECu | kUnwind; return; } goto L_0010E3EC; } }
L_0010E408:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] == 0ull; set32(c.r[10], c.r[10].w[0] - 1u);  if (t) { goto L_0010E45C; } }
    goto L_0010E410;
L_0010E40C:
    set32(c.r[10], c.r[10].w[0] - 1u);
    c.budget -= 1;
L_0010E410:
    c.budget -= 19;
    { const bool t = c.r[10].sd[0] > 0; set32(c.r[8], c.r[8].w[0] + 512u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010E40Cu | kUnwind; return; } goto L_0010E40C; } }
L_0010E45C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010E468:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E480u); st64((c.r[29].w[0]), c.r[16].d[0]);  if (depth < kMaxDepth) unit_0005(c, 85u, depth + 1u); else { c.pc = 0x00114960u; return; } if (c.pc != 0x0010E480u) [[unlikely]] return; }
L_0010E480:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 23376u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_0010E4A8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 64u);  [[clang::musttail]] return unit_0005(c, 87u, depth); }
L_0010E4A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E4B0u); st32((c.r[3].w[0] - 23376u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0005(c, 87u, depth + 1u); else { c.pc = 0x001149A8u; return; } if (c.pc != 0x0010E4B0u) [[unlikely]] return; }
L_0010E4B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E4B8u);  if (depth < kMaxDepth) unit_0003(c, 250u, depth + 1u); else { c.pc = 0x0010DD98u; return; } if (c.pc != 0x0010E4B8u) [[unlikely]] return; }
L_0010E4B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E4C0u);  if (depth < kMaxDepth) unit_0005(c, 85u, depth + 1u); else { c.pc = 0x00114960u; return; } if (c.pc != 0x0010E4C0u) [[unlikely]] return; }
L_0010E4C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[18], c.r[3].w[0] - 22080u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[16], c.r[8].w[0] - 15936u);
    set32(c.r[3], 0u + 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[6], c.r[6].w[0] - 20032u);
    set32(c.r[7], c.r[7].w[0] - 17984u);
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[2].d[0];
    st32((c.r[16].w[0] + 32u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[18].d[0] | c.r[2].d[0];
    st32((c.r[8].w[0] - 15936u), c.r[17].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00110000u);
    st32((c.r[16].w[0] + 20u), c.r[6].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 6296u);
    st32((c.r[16].w[0] + 28u), c.r[7].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | 8ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E534u); st32((c.r[16].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_0003(c, 270u, depth + 1u); else { c.pc = 0x0010E080u; return; } if (c.pc != 0x0010E534u) [[unlikely]] return; }
L_0010E534:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00110000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], c.r[5].w[0] - 5384u);
    c.r[4].d[0] = c.r[4].d[0] | 9ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E54Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 270u, depth + 1u); else { c.pc = 0x0010E080u; return; } if (c.pc != 0x0010E54Cu) [[unlikely]] return; }
L_0010E54C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00110000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], c.r[5].w[0] - 4888u);
    c.r[4].d[0] = c.r[4].d[0] | 10ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E564u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 270u, depth + 1u); else { c.pc = 0x0010E080u; return; } if (c.pc != 0x0010E564u) [[unlikely]] return; }
L_0010E564:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00110000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], c.r[5].w[0] - 6016u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E57Cu); c.r[4].d[0] = c.r[4].d[0] | 12ull;  if (depth < kMaxDepth) unit_0003(c, 270u, depth + 1u); else { c.pc = 0x0010E080u; return; } if (c.pc != 0x0010E57Cu) [[unlikely]] return; }
L_0010E57C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E584u);  if (depth < kMaxDepth) unit_0005(c, 87u, depth + 1u); else { c.pc = 0x001149A8u; return; } if (c.pc != 0x0010E584u) [[unlikely]] return; }
L_0010E584:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E590u); c.r[4].d[0] = c.r[4].d[0] | 2ull;  if (depth < kMaxDepth) unit_0003(c, 7u, depth + 1u); else { c.pc = 0x0010C030u; return; } if (c.pc != 0x0010E590u) [[unlikely]] return; }
L_0010E590:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0010E5F0; } }
    set32(c.r[5], c.r[18].w[0] + 64u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[5].w[0] + 12u), c.r[17].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | 2ull;
    set32(c.r[6], 0u + 16u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E5BCu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 277u, depth + 1u); else { c.pc = 0x0010E210u; return; } if (c.pc != 0x0010E5BCu) [[unlikely]] return; }
L_0010E5BC:
    c.budget -= 1;
L_0010E5C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E5C8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 247u, depth + 1u); else { c.pc = 0x0010DD50u; return; } if (c.pc != 0x0010E5C8u) [[unlikely]] return; }
L_0010E5C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010E5C0u | kUnwind; return; } goto L_0010E5C0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[5], 0u + 1u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[4].d[0] = c.r[4].d[0] | 2ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010C020u | kUnwind; return; } goto L_0010C020; }
L_0010E5F0:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0010E608:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E618u);  if (depth < kMaxDepth) unit_0003(c, 265u, depth + 1u); else { c.pc = 0x0010E018u; return; } if (c.pc != 0x0010E618u) [[unlikely]] return; }
L_0010E618:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[2].w[0] - 23376u), 0u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0010E630:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E648u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 85u, depth + 1u); else { c.pc = 0x00114960u; return; } if (c.pc != 0x0010E648u) [[unlikely]] return; }
L_0010E648:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] <= 0; set32(c.r[16], ld32((c.r[17].w[0] + 4u)));  if (t) { goto L_0010E6B8; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 2;
L_0010E660:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] + 1u);  goto L_0010E6AC; }
    set32(c.r[2], c.r[3].w[0] << 16);
    c.r[2].d[0] = c.r[2].d[0] | 5ull;
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_0010E698; } }
    set32(c.r[2], c.r[2].w[0] + 2u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0010E698:
    st32((c.r[16].w[0] + 20u), c.r[16].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E6A4u); st32((c.r[16].w[0] + 24u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0005(c, 87u, depth + 1u); else { c.pc = 0x001149A8u; return; } if (c.pc != 0x0010E6A4u) [[unlikely]] return; }
L_0010E6A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0010E6C4; } }
L_0010E6AC:
    c.r[2].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010E660u | kUnwind; return; } goto L_0010E660; } }
L_0010E6B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E6C0u);  if (depth < kMaxDepth) unit_0005(c, 87u, depth + 1u); else { c.pc = 0x001149A8u; return; } if (c.pc != 0x0010E6C0u) [[unlikely]] return; }
L_0010E6C0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0010E6C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0010E6D8:
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65534ull;
    st32((c.r[4].w[0] + 24u), 0u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 16u), c.r[3].w[0]);  c.pc = t; return; }
L_0010E6F8:
    set32(c.r[5], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    mmi::div(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x0010E708u);  goto L_0010E70C; }
L_0010E70C:
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 6);
    st32((c.r[4].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);  c.pc = t; return; }
L_0010E728:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] < 0; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0010E744; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0010E754; }
L_0010E744:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E74Cu);  if (depth < kMaxDepth) unit_0003(c, 312u, depth + 1u); else { c.pc = 0x0010E6F8u; return; } if (c.pc != 0x0010E74Cu) [[unlikely]] return; }
L_0010E74C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0010E760; } }
L_0010E754:
    set32(c.r[2], c.r[5].w[0] << 6);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
L_0010E760:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0010E768:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 10ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;  if (t) { goto L_0010E7B0; } }
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], ld32((c.r[17].w[0] + 28u)));  goto L_0010E7E8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[2].d[0] | 9ull;
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 36u)));  goto L_0010E7D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 28u)));  if (t) { goto L_0010E7E8; } }
L_0010E7B0:
    set32(c.r[16], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  goto L_0010E7EC; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E7C8u); set32(c.r[4], ld32((c.r[16].w[0] + 32u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0010E7C8u) [[unlikely]] return; }
L_0010E7C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 28u)));  if (t) { goto L_0010E7E8; } }
L_0010E7D0:
    set32(c.r[16], ld32((c.r[17].w[0] + 28u)));
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 6;
L_0010E7E8:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_0010E7EC:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_0010E7FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E7FCu);  if (depth < kMaxDepth) unit_0002(c, 506u, depth + 1u); else { c.pc = 0x0010BC50u; return; } if (c.pc != 0x0010E7FCu) [[unlikely]] return; }
L_0010E7FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E804u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0003(c, 311u, depth + 1u); else { c.pc = 0x0010E6D8u; return; } if (c.pc != 0x0010E804u) [[unlikely]] return; }
L_0010E804:
    st32((c.r[16].w[0]), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0010E820:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[4].d[0] = c.r[4].d[0] | 8ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 64u);
    set32(c.r[7], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[8], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E850u); set32(c.r[9], ld32((c.r[16].w[0] + 44u)));  if (depth < kMaxDepth) unit_0003(c, 279u, depth + 1u); else { c.pc = 0x0010E250u; return; } if (c.pc != 0x0010E850u) [[unlikely]] return; }
L_0010E850:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0010E874; } }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00110000u);
    set32(c.r[5], c.r[5].w[0] - 6112u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], 0u + 10u);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010BA00u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 432u, depth); }
L_0010E874:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0010E880:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    c.r[2].d[0] = c.r[5].d[0] & 4ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010E8B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E8B0u); set32(c.r[5], c.r[5].w[0] >> 16);  if (depth < kMaxDepth) unit_0003(c, 313u, depth + 1u); else { c.pc = 0x0010E728u; return; } if (c.pc != 0x0010E8B0u) [[unlikely]] return; }
L_0010E8B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0010E8C4; } }
L_0010E8B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E8C0u);  if (depth < kMaxDepth) unit_0003(c, 312u, depth + 1u); else { c.pc = 0x0010E6F8u; return; } if (c.pc != 0x0010E8C0u) [[unlikely]] return; }
L_0010E8C0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0010E8C4:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 28u)));
    c.r[2].d[0] = c.r[2].d[0] | 12ull;
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[16].w[0] + 28u), c.r[5].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | 8ull;
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 64u);
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    st32((c.r[16].w[0] + 40u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[9], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[7], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E918u); set32(c.r[8], ld32((c.r[17].w[0] + 36u)));  if (depth < kMaxDepth) unit_0003(c, 279u, depth + 1u); else { c.pc = 0x0010E250u; return; } if (c.pc != 0x0010E918u) [[unlikely]] return; }
L_0010E918:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0010E940; } }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00110000u);
    set32(c.r[5], c.r[5].w[0] - 6112u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[4], 0u + 10u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010BA00u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 432u, depth); }
L_0010E940:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0010E950:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 48u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[20].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0] + 80u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E990u); set32(c.r[4], c.r[4].w[0] - 15936u);  if (depth < kMaxDepth) unit_0003(c, 306u, depth + 1u); else { c.pc = 0x0010E630u; return; } if (c.pc != 0x0010E990u) [[unlikely]] return; }
L_0010E990:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0010EA84; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.r[3].d[0] = c.r[18].d[0] & 1ull;
    st32((c.r[17].w[0]), c.r[16].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 32u), c.r[19].w[0]);
    st32((c.r[16].w[0] + 36u), c.r[20].w[0]);
    st32((c.r[16].w[0] + 40u), c.r[21].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[16].w[0]);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[16].w[0] + 28u), c.r[17].w[0]);  if (t) { goto L_0010EA48; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 8u), 0u);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E9D8u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 500u, depth + 1u); else { c.pc = 0x0010BC20u; return; } if (c.pc != 0x0010E9D8u) [[unlikely]] return; }
L_0010E9D8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0010E9F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E9E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 311u, depth + 1u); else { c.pc = 0x0010E6D8u; return; } if (c.pc != 0x0010E9E8u) [[unlikely]] return; }
L_0010E9E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_0010EA84; } }
L_0010E9F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 12ull;
    set32(c.r[6], 0u + 64u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EA10u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 277u, depth + 1u); else { c.pc = 0x0010E210u; return; } if (c.pc != 0x0010EA10u) [[unlikely]] return; }
L_0010EA10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010EA30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EA20u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 311u, depth + 1u); else { c.pc = 0x0010E6D8u; return; } if (c.pc != 0x0010EA20u) [[unlikely]] return; }
L_0010EA20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EA28u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x0010EA28u) [[unlikely]] return; }
L_0010EA28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_0010EA84; } }
L_0010EA30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EA38u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_0002(c, 508u, depth + 1u); else { c.pc = 0x0010BC60u; return; } if (c.pc != 0x0010EA38u) [[unlikely]] return; }
L_0010EA38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EA40u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x0010EA40u) [[unlikely]] return; }
L_0010EA40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010EA84; } }
L_0010EA48:
    set32(c.r[2], 0u - 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | 12ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 64u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EA70u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 277u, depth + 1u); else { c.pc = 0x0010E210u; return; } if (c.pc != 0x0010EA70u) [[unlikely]] return; }
L_0010EA70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010EA84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EA80u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 311u, depth + 1u); else { c.pc = 0x0010E6D8u; return; } if (c.pc != 0x0010EA80u) [[unlikely]] return; }
L_0010EA80:
    set32(c.r[2], 0u - 2u);
    c.budget -= 1;
L_0010EA84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0010EAA8:
    set32(c.r[5], ld32((c.r[5].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0010EAEC; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 1;
L_0010EAB8:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[5].w[0] + 20u)));  goto L_0010EAE4; }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 2;
L_0010EAC8:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[4].d[0]) { set32(c.r[3], ld32((c.r[3].w[0] + 56u)));  goto L_0010EAD8; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[3].d[0] + 0ull;  c.pc = t; return; }
L_0010EAD8:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010EAC8u | kUnwind; return; } goto L_0010EAC8; }
    set32(c.r[5], ld32((c.r[5].w[0] + 20u)));
    c.budget -= 1;
L_0010EAE4:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], ld32((c.r[5].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010EAB8u | kUnwind; return; } goto L_0010EAB8; }
L_0010EAEC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0010EAF8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EB1Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 312u, depth + 1u); else { c.pc = 0x0010E6F8u; return; } if (c.pc != 0x0010EB1Cu) [[unlikely]] return; }
L_0010EB1C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[2].d[0] | 9ull;
    st32((c.r[18].w[0] + 28u), c.r[4].w[0]);
    st32((c.r[18].w[0] + 20u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[18].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EB48u); set32(c.r[4], ld32((c.r[16].w[0] + 32u)));  if (depth < kMaxDepth) unit_0003(c, 336u, depth + 1u); else { c.pc = 0x0010EAA8u; return; } if (c.pc != 0x0010EB48u) [[unlikely]] return; }
L_0010EB48:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { st32((c.r[18].w[0] + 36u), c.r[3].w[0]);  goto L_0010EB64; }
    st32((c.r[18].w[0] + 36u), 0u);
    st32((c.r[18].w[0] + 40u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 44u), 0u);  if (t) { goto L_0010EB74; } }
L_0010EB64:
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    st32((c.r[18].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    st32((c.r[18].w[0] + 44u), c.r[3].w[0]);
    c.budget -= 4;
L_0010EB74:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[4].d[0] = c.r[4].d[0] | 8ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[6], 0u + 64u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { set32(c.r[29], c.r[29].w[0] + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010E250u | kUnwind; return; } goto L_0010E250; }
L_0010EBA8:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 48u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[19].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[17].w[0] + 16u), 0u);
    set32(c.r[4], c.r[4].w[0] - 15936u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EBE0u); st32((c.r[17].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_0003(c, 306u, depth + 1u); else { c.pc = 0x0010E630u; return; } if (c.pc != 0x0010EBE0u) [[unlikely]] return; }
L_0010EBE0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0010ECCC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.r[3].d[0] = c.r[18].d[0] & 1ull;
    st32((c.r[17].w[0]), c.r[16].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 32u), c.r[19].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[16].w[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[16].w[0] + 28u), c.r[17].w[0]);  if (t) { goto L_0010EC90; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 8u), 0u);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EC20u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 500u, depth + 1u); else { c.pc = 0x0010BC20u; return; } if (c.pc != 0x0010EC20u) [[unlikely]] return; }
L_0010EC20:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0010EC38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EC30u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 311u, depth + 1u); else { c.pc = 0x0010E6D8u; return; } if (c.pc != 0x0010EC30u) [[unlikely]] return; }
L_0010EC30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_0010ECCC; } }
L_0010EC38:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 9ull;
    set32(c.r[6], 0u + 64u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EC58u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 277u, depth + 1u); else { c.pc = 0x0010E210u; return; } if (c.pc != 0x0010EC58u) [[unlikely]] return; }
L_0010EC58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010EC78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EC68u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 311u, depth + 1u); else { c.pc = 0x0010E6D8u; return; } if (c.pc != 0x0010EC68u) [[unlikely]] return; }
L_0010EC68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EC70u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x0010EC70u) [[unlikely]] return; }
L_0010EC70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_0010ECCC; } }
L_0010EC78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EC80u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_0002(c, 508u, depth + 1u); else { c.pc = 0x0010BC60u; return; } if (c.pc != 0x0010EC80u) [[unlikely]] return; }
L_0010EC80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EC88u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x0010EC88u) [[unlikely]] return; }
L_0010EC88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010ECCC; } }
L_0010EC90:
    set32(c.r[2], 0u - 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | 9ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 64u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010ECB8u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 277u, depth + 1u); else { c.pc = 0x0010E210u; return; } if (c.pc != 0x0010ECB8u) [[unlikely]] return; }
L_0010ECB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010ECCC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010ECC8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 311u, depth + 1u); else { c.pc = 0x0010E6D8u; return; } if (c.pc != 0x0010ECC8u) [[unlikely]] return; }
L_0010ECC8:
    set32(c.r[2], 0u - 2u);
    c.budget -= 1;
L_0010ECCC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0010ECE8:
    set32(c.r[5], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[6].w[0] + 16u)));  goto L_0010ED04; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_0010ED08; } }
L_0010ED04:
    st32((c.r[2].w[0] + 60u), c.r[5].w[0]);
    c.budget -= 1;
L_0010ED08:
    st32((c.r[6].w[0] + 16u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    st32((c.r[5].w[0] + 32u), c.r[2].w[0]);
    st32((c.r[5].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    st32((c.r[5].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    st32((c.r[5].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    st32((c.r[5].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    st32((c.r[5].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 48u)));
    st32((c.r[5].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    st32((c.r[5].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0])));
    c.budget -= 20;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_0010ED6C; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010ED6C; } }
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010CAD0u | kUnwind; return; } goto L_0010CAD0; }
L_0010ED6C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010ED78:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 48u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 160u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[23].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0] + 128u), c.r[22].d[0]);
    c.r[30].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[21].d[0]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[20].d[0]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[9].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[10].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    c.r[23].d[0] = c.r[11].d[0] + 0ull;
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EDD0u); set32(c.r[4], c.r[4].w[0] - 15936u);  if (depth < kMaxDepth) unit_0003(c, 306u, depth + 1u); else { c.pc = 0x0010E630u; return; } if (c.pc != 0x0010EDD0u) [[unlikely]] return; }
L_0010EDD0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0010EF34; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.r[4].d[0] = c.r[30].d[0] & 2ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    st32((c.r[17].w[0] + 32u), c.r[2].w[0]);
    st32((c.r[17].w[0]), c.r[16].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 28u), c.r[23].w[0]);
    st32((c.r[16].w[0] + 32u), c.r[22].w[0]);
    st32((c.r[16].w[0] + 36u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 40u), c.r[20].w[0]);
    st32((c.r[16].w[0] + 44u), c.r[19].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    st32((c.r[16].w[0] + 28u), c.r[17].w[0]);
    c.budget -= 16;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0010EE5C; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != c.r[20].d[0]; c.r[2].d[0] = c.r[18].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;  if (t) { goto L_0010EE3C; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EE34u); if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[18].d[0];  if (depth < kMaxDepth) unit_0003(c, 287u, depth + 1u); else { c.pc = 0x0010E3B8u; return; } if (c.pc != 0x0010EE34u) [[unlikely]] return; }
L_0010EE34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[30].d[0] & 1ull;  if (t) { goto L_0010EE60; } }
L_0010EE3C:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] <= 0; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0010EE4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EE4Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 287u, depth + 1u); else { c.pc = 0x0010E3B8u; return; } if (c.pc != 0x0010EE4Cu) [[unlikely]] return; }
L_0010EE4C:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] <= 0; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0010EE5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EE5Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 287u, depth + 1u); else { c.pc = 0x0010E3B8u; return; } if (c.pc != 0x0010EE5Cu) [[unlikely]] return; }
L_0010EE5C:
    c.r[2].d[0] = c.r[30].d[0] & 1ull;
    c.budget -= 1;
L_0010EE60:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[19], 0u + 1u);  goto L_0010EEB4; }
    c.budget -= 2;
    { const bool t = c.r[23].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0010EE78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 48u), 0u);  if (t) { goto L_0010EE7C; } }
L_0010EE78:
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 1;
L_0010EE7C:
    set32(c.r[2], 0u - 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[8], ld32((c.r[17].w[0] + 20u)));
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 10ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EEA4u); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_0003(c, 277u, depth + 1u); else { c.pc = 0x0010E210u; return; } if (c.pc != 0x0010EEA4u) [[unlikely]] return; }
L_0010EEA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010EF34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010EF10; } }
L_0010EEB4:
    st32((c.r[29].w[0] + 8u), 0u);
    st32((c.r[29].w[0] + 4u), c.r[19].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EEC4u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 500u, depth + 1u); else { c.pc = 0x0010BC20u; return; } if (c.pc != 0x0010EEC4u) [[unlikely]] return; }
L_0010EEC4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0010EEDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EED4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 311u, depth + 1u); else { c.pc = 0x0010E6D8u; return; } if (c.pc != 0x0010EED4u) [[unlikely]] return; }
L_0010EED4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_0010EF34; } }
L_0010EEDC:
    st32((c.r[16].w[0] + 48u), c.r[19].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[17].w[0] + 20u)));
    c.r[4].d[0] = c.r[4].d[0] | 10ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EF00u); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_0003(c, 277u, depth + 1u); else { c.pc = 0x0010E210u; return; } if (c.pc != 0x0010EF00u) [[unlikely]] return; }
L_0010EF00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010EF20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EF10u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x0010EF10u) [[unlikely]] return; }
L_0010EF10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EF18u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 311u, depth + 1u); else { c.pc = 0x0010E6D8u; return; } if (c.pc != 0x0010EF18u) [[unlikely]] return; }
L_0010EF18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_0010EF34; } }
L_0010EF20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EF28u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_0002(c, 508u, depth + 1u); else { c.pc = 0x0010BC60u; return; } if (c.pc != 0x0010EF28u) [[unlikely]] return; }
L_0010EF28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EF30u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x0010EF30u) [[unlikely]] return; }
L_0010EF30:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0010EF34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_0010EF68:
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0010EF94; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0010EF94; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010EF9C; } }
L_0010EF94:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0010EF9C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0010EFA8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EFC4u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 85u, depth + 1u); else { c.pc = 0x00114960u; return; } if (c.pc != 0x0010EFC4u) [[unlikely]] return; }
L_0010EFC4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[17].w[0]), c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] - 15936u);
    st32((c.r[17].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[3].w[0] + 40u)));
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    st32((c.r[17].w[0] + 16u), 0u);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0] + 20u), 0u);  if (t) { goto L_0010EFF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 40u), c.r[17].w[0]);  if (t) { goto L_0010F028; } }
L_0010EFF4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { st32((c.r[4].w[0] + 20u), c.r[17].w[0]);  goto L_0010F028; }
    c.budget -= 1;
L_0010F008:
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010F008u | kUnwind; return; } goto L_0010F008; } }
    st32((c.r[4].w[0] + 20u), c.r[17].w[0]);
    c.budget -= 1;
L_0010F028:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_0005(c, 87u, depth); }
L_0010F040:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[21].d[0]);
    c.r[22].d[0] = c.r[10].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[9].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F084u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 85u, depth + 1u); else { c.pc = 0x00114960u; return; } if (c.pc != 0x0010F084u) [[unlikely]] return; }
L_0010F084:
    st32((c.r[21].w[0] + 60u), 0u);
    st32((c.r[21].w[0] + 56u), 0u);
    st32((c.r[21].w[0]), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[22].w[0] + 8u)));
    st32((c.r[21].w[0] + 4u), c.r[17].w[0]);
    st32((c.r[21].w[0] + 8u), c.r[18].w[0]);
    st32((c.r[21].w[0] + 16u), c.r[19].w[0]);
    st32((c.r[21].w[0] + 20u), c.r[20].w[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[21].w[0] + 64u), c.r[22].w[0]);  if (t) { goto L_0010F0B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[22].w[0] + 8u), c.r[21].w[0]);  if (t) { goto L_0010F0E8; } }
L_0010F0B4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { st32((c.r[4].w[0] + 56u), c.r[21].w[0]);  goto L_0010F0E8; }
    c.budget -= 1;
L_0010F0C8:
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010F0C8u | kUnwind; return; } goto L_0010F0C8; } }
    st32((c.r[4].w[0] + 56u), c.r[21].w[0]);
    c.budget -= 1;
L_0010F0E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 128u);  [[clang::musttail]] return unit_0005(c, 87u, depth); }
L_0010F110:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F130u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 85u, depth + 1u); else { c.pc = 0x00114960u; return; } if (c.pc != 0x0010F130u) [[unlikely]] return; }
L_0010F130:
    set32(c.r[16], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[17].d[0];  if (t) { goto L_0010F148; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0010F180; } }
L_0010F148:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0010F180; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[17].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 56u)));  goto L_0010F17C; }
    c.budget -= 1;
L_0010F160:
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0010F180; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[17].d[0]; c.r[3].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010F160u | kUnwind; return; } goto L_0010F160; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 1;
L_0010F17C:
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 1;
L_0010F180:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F188u);  if (depth < kMaxDepth) unit_0005(c, 87u, depth + 1u); else { c.pc = 0x001149A8u; return; } if (c.pc != 0x0010F188u) [[unlikely]] return; }
L_0010F188:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0010F1A8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F1C0u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 85u, depth + 1u); else { c.pc = 0x00114960u; return; } if (c.pc != 0x0010F1C0u) [[unlikely]] return; }
L_0010F1C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 15936u);
    set32(c.r[16], ld32((c.r[3].w[0] + 40u)));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != c.r[17].d[0];  if (t) { goto L_0010F1E0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 40u), c.r[2].w[0]);  if (t) { goto L_0010F218; } }
L_0010F1E0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0010F218; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[17].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 20u)));  goto L_0010F214; }
    c.budget -= 1;
L_0010F1F8:
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0010F218; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[17].d[0]; c.r[3].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010F1F8u | kUnwind; return; } goto L_0010F1F8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 1;
L_0010F214:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 1;
L_0010F218:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F220u);  if (depth < kMaxDepth) unit_0005(c, 87u, depth + 1u); else { c.pc = 0x001149A8u; return; } if (c.pc != 0x0010F220u) [[unlikely]] return; }
L_0010F220:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0010F238:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F250u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 85u, depth + 1u); else { c.pc = 0x00114960u; return; } if (c.pc != 0x0010F250u) [[unlikely]] return; }
L_0010F250:
    set32(c.r[17], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[17].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 60u)));  goto L_0010F264; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), 0u);  if (t) { goto L_0010F270; } }
L_0010F264:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 3;
L_0010F270:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F278u);  if (depth < kMaxDepth) unit_0005(c, 87u, depth + 1u); else { c.pc = 0x001149A8u; return; } if (c.pc != 0x0010F278u) [[unlikely]] return; }
L_0010F278:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0010F290:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    c.r[20].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F2C8u); set32(c.r[6], ld32((c.r[17].w[0] + 12u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0010F2C8u) [[unlikely]] return; }
L_0010F2C8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] != 0ull) { set32(c.r[20], ld32((c.r[17].w[0] + 44u)));  goto L_0010F2D4; }
L_0010F2D4:
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_0010F2E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F2E8u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_0003(c, 287u, depth + 1u); else { c.pc = 0x0010E3B8u; return; } if (c.pc != 0x0010F2E8u) [[unlikely]] return; }
L_0010F2E8:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] <= 0; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0010F2F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F2F8u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 287u, depth + 1u); else { c.pc = 0x0010E3B8u; return; } if (c.pc != 0x0010F2F8u) [[unlikely]] return; }
L_0010F2F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F300u);  if (depth < kMaxDepth) unit_0005(c, 85u, depth + 1u); else { c.pc = 0x00114960u; return; } if (c.pc != 0x0010F300u) [[unlikely]] return; }
L_0010F300:
    set32(c.r[5], ld32((c.r[17].w[0] + 52u)));
    c.r[2].d[0] = c.r[5].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[5].w[0] >> 16);  if (t) { goto L_0010F324; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F31Cu); set32(c.r[4], c.r[4].w[0] - 15936u);  if (depth < kMaxDepth) unit_0003(c, 313u, depth + 1u); else { c.pc = 0x0010E728u; return; } if (c.pc != 0x0010F31Cu) [[unlikely]] return; }
L_0010F31C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0010F334; } }
L_0010F324:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F330u); set32(c.r[4], c.r[4].w[0] - 15936u);  if (depth < kMaxDepth) unit_0003(c, 312u, depth + 1u); else { c.pc = 0x0010E6F8u; return; } if (c.pc != 0x0010F330u) [[unlikely]] return; }
L_0010F330:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0010F334:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F33Cu);  if (depth < kMaxDepth) unit_0005(c, 87u, depth + 1u); else { c.pc = 0x001149A8u; return; } if (c.pc != 0x0010F33Cu) [[unlikely]] return; }
L_0010F33C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.r[3].d[0] = c.r[3].d[0] | 10ull;
    st32((c.r[16].w[0] + 32u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 28u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 24u), 0u);  goto L_0010F390; }
    c.budget -= 1;
L_0010F360:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[8], ld32((c.r[17].w[0] + 40u)));
    c.r[4].d[0] = c.r[4].d[0] | 8ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 64u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F380u); c.r[9].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 277u, depth + 1u); else { c.pc = 0x0010E210u; return; } if (c.pc != 0x0010F380u) [[unlikely]] return; }
L_0010F380:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010F360u | kUnwind; return; } goto L_0010F360; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_0010F43C; } }
L_0010F390:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[20].sd[0] <= 0; st32((c.r[16].w[0] + 16u), 0u);  if (t) { goto L_0010F3B4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[19], 0u + 1u);
    st32((c.r[29].w[0]), c.r[18].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[20].w[0]);
    st32((c.r[29].w[0] + 12u), 0u);
    c.budget -= 6;
L_0010F3B4:
    set32(c.r[5], c.r[19].w[0] << 4);
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[3], c.r[29].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[29].w[0] + 4u);
    st32((c.r[3].w[0]), c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[3], c.r[29].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], 0u + 64u);
    set32(c.r[2], c.r[29].w[0] + 12u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    st32((c.r[2].w[0]), 0u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 17;
L_0010F3F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F400u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 620u, depth + 1u); else { c.pc = 0x0010BFE0u; return; } if (c.pc != 0x0010F400u) [[unlikely]] return; }
L_0010F400:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_0010F438; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[4], 0u - 1u);
    c.budget -= 2;
L_0010F410:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010F410u | kUnwind; return; } goto L_0010F410; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010F3F8u | kUnwind; return; } goto L_0010F3F8; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_0010F438:
    c.r[20].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_0010F43C:
    c.r[19].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0010F458:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0010F478; } }
    c.budget -= 1;
L_0010F470:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F478u);  if (depth < kMaxDepth) unit_0003(c, 385u, depth + 1u); else { c.pc = 0x0010F290u; return; } if (c.pc != 0x0010F478u) [[unlikely]] return; }
L_0010F478:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F480u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 382u, depth + 1u); else { c.pc = 0x0010F238u; return; } if (c.pc != 0x0010F480u) [[unlikely]] return; }
L_0010F480:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010F470u | kUnwind; return; } goto L_0010F470; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F490u);  if (depth < kMaxDepth) unit_0002(c, 472u, depth + 1u); else { c.pc = 0x0010BB40u; return; } if (c.pc != 0x0010F490u) [[unlikely]] return; }
L_0010F490:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010F478u | kUnwind; return; } goto L_0010F478; } }
L_0010F498:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] - 23224u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0010F4E8; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 20u), 0u);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F4D0u); st32((c.r[29].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0002(c, 500u, depth + 1u); else { c.pc = 0x0010BC20u; return; } if (c.pc != 0x0010F4D0u) [[unlikely]] return; }
L_0010F4D0:
    st32((c.r[16].w[0] - 23224u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F4DCu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 500u, depth + 1u); else { c.pc = 0x0010BC20u; return; } if (c.pc != 0x0010F4DCu) [[unlikely]] return; }
L_0010F4DC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st32((c.r[3].w[0] - 23220u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 3;
L_0010F4E8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0010F4F8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F510u); c.r[17].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (depth < kMaxDepth) unit_0003(c, 403u, depth + 1u); else { c.pc = 0x0010F498u; return; } if (c.pc != 0x0010F510u) [[unlikely]] return; }
L_0010F510:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F518u); set32(c.r[4], ld32((c.r[17].w[0] - 23224u)));  if (depth < kMaxDepth) unit_0002(c, 508u, depth + 1u); else { c.pc = 0x0010BC60u; return; } if (c.pc != 0x0010F518u) [[unlikely]] return; }
L_0010F518:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[16], c.r[3].w[0] - 10432u);
    set32(c.r[3], c.r[16].w[0] + 512u);
    c.r[2].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_0010F560; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 2;
L_0010F538:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] + 16u);  goto L_0010F554; }
    set32(c.r[4], ld32((c.r[17].w[0] - 23224u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F54Cu); st32((c.r[16].w[0] + 4u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_0002(c, 504u, depth + 1u); else { c.pc = 0x0010BC40u; return; } if (c.pc != 0x0010F54Cu) [[unlikely]] return; }
L_0010F54C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0010F56C; } }
L_0010F554:
    c.r[2].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010F538u | kUnwind; return; } goto L_0010F538; }
L_0010F560:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F568u); set32(c.r[4], ld32((c.r[17].w[0] - 23224u)));  if (depth < kMaxDepth) unit_0002(c, 504u, depth + 1u); else { c.pc = 0x0010BC40u; return; } if (c.pc != 0x0010F568u) [[unlikely]] return; }
L_0010F568:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0010F56C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0010F580:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F59Cu); c.r[17].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (depth < kMaxDepth) unit_0003(c, 403u, depth + 1u); else { c.pc = 0x0010F498u; return; } if (c.pc != 0x0010F59Cu) [[unlikely]] return; }
L_0010F59C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F5A4u); set32(c.r[4], ld32((c.r[17].w[0] - 23224u)));  if (depth < kMaxDepth) unit_0002(c, 508u, depth + 1u); else { c.pc = 0x0010BC60u; return; } if (c.pc != 0x0010F5A4u) [[unlikely]] return; }
L_0010F5A4:
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(32ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_0010F5C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F5B8u); set32(c.r[4], ld32((c.r[17].w[0] - 23224u)));  if (depth < kMaxDepth) unit_0002(c, 504u, depth + 1u); else { c.pc = 0x0010BC40u; return; } if (c.pc != 0x0010F5B8u) [[unlikely]] return; }
L_0010F5B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010F5D8; } }
L_0010F5C0:
    set32(c.r[16], c.r[16].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - 10432u);
    set32(c.r[4], ld32((c.r[17].w[0] - 23224u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F5D4u); set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0002(c, 504u, depth + 1u); else { c.pc = 0x0010BC40u; return; } if (c.pc != 0x0010F5D4u) [[unlikely]] return; }
L_0010F5D4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0010F5D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0010F5F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], ld32((c.r[2].w[0] - 23232u)));
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; st64((c.r[29].w[0] + 32u), c.r[16].d[0]);  if (t) { goto L_0010F610; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_0010F610:
    set32(c.r[3], 0u + 1088u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[2].w[0] - 23240u), c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] - 12608u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[16].d[0] = c.r[3].d[0] | c.r[5].d[0];
    lwl(c.r[2], (c.r[16].w[0] + 3u));
    lwr(c.r[2], (c.r[16].w[0]));
    swl(c.r[2], (c.r[29].w[0] + 3u));
    swr(c.r[2], (c.r[29].w[0]));
    lwl(c.r[6], (c.r[16].w[0] + 7u));
    lwr(c.r[6], (c.r[16].w[0] + 4u));
    swl(c.r[6], (c.r[29].w[0] + 7u));
    swr(c.r[6], (c.r[29].w[0] + 4u));
    lwl(c.r[3], (c.r[16].w[0] + 11u));
    lwr(c.r[3], (c.r[16].w[0] + 8u));
    swl(c.r[3], (c.r[29].w[0] + 11u));
    swr(c.r[3], (c.r[29].w[0] + 8u));
    lwl(c.r[7], (c.r[16].w[0] + 15u));
    lwr(c.r[7], (c.r[16].w[0] + 12u));
    swl(c.r[7], (c.r[29].w[0] + 15u));
    swr(c.r[7], (c.r[29].w[0] + 12u));
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 28;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[4], ld32((c.r[29].w[0] + 8u)));  if (t) { goto L_0010F68C; } }
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F68Cu); set32(c.r[6], ld32((c.r[29].w[0] + 12u)));  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x0010F68Cu) [[unlikely]] return; }
L_0010F68C:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[4], c.r[2].w[0] - 2u);
    c.r[3].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(25ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);  if (t) { goto L_0010F910; } }
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 15856u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x0010C000u < 16384u) { entry = entries_0003[(t - 0x0010C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0010F6B8:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; set32(c.r[7], c.r[16].w[0] + 20u);  if (t) { goto L_0010F708; } }
    set32(c.r[8], ld32((c.r[7].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] <= 0; c.r[10].d[0] = c.r[8].d[0] | c.r[2].d[0];  if (t) { goto L_0010F708; } }
    set32(c.r[9], c.r[16].w[0] + 36u);
    set32(c.r[2], c.r[9].w[0] + c.r[6].w[0]);
    c.budget -= 2;
L_0010F6E0:
    set32(c.r[5], c.r[10].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[4], c.r[8].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[9].w[0] + c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010F6E0u | kUnwind; return; } goto L_0010F6E0; } }
L_0010F708:
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_0010F910; } }
    set32(c.r[8], ld32((c.r[7].w[0] + 12u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; c.r[10].d[0] = c.r[8].d[0] | c.r[2].d[0];  if (t) { goto L_0010F910; } }
    set32(c.r[9], c.r[7].w[0] + 80u);
    set32(c.r[2], c.r[9].w[0] + c.r[6].w[0]);
    c.budget -= 3;
L_0010F730:
    set32(c.r[5], c.r[10].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[4], c.r[8].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[9].w[0] + c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010F730u | kUnwind; return; } goto L_0010F730; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0])));  if (t) { goto L_0010F914; } }
L_0010F760:
    lwl(c.r[4], (c.r[16].w[0] + 23u));
    lwr(c.r[4], (c.r[16].w[0] + 20u));
    swl(c.r[4], (c.r[29].w[0] + 19u));
    swr(c.r[4], (c.r[29].w[0] + 16u));
    set32(c.r[4], c.r[16].w[0] + 24u);
    set32(c.r[6], ld32((c.r[29].w[0] + 16u)));
    c.r[2].d[0] = c.r[4].d[0] | c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] + 344u);  if (t) { goto L_0010F7E4; } }
L_0010F788:
    ldl(c.r[8], (c.r[4].w[0] + 7u));
    ldr(c.r[8], (c.r[4].w[0]));
    ldl(c.r[3], (c.r[4].w[0] + 15u));
    ldr(c.r[3], (c.r[4].w[0] + 8u));
    ldl(c.r[5], (c.r[4].w[0] + 23u));
    ldr(c.r[5], (c.r[4].w[0] + 16u));
    ldl(c.r[7], (c.r[4].w[0] + 31u));
    ldr(c.r[7], (c.r[4].w[0] + 24u));
    sdl(c.r[8], (c.r[6].w[0] + 7u));
    sdr(c.r[8], (c.r[6].w[0]));
    sdl(c.r[3], (c.r[6].w[0] + 15u));
    sdr(c.r[3], (c.r[6].w[0] + 8u));
    sdl(c.r[5], (c.r[6].w[0] + 23u));
    sdr(c.r[5], (c.r[6].w[0] + 16u));
    sdl(c.r[7], (c.r[6].w[0] + 31u));
    sdr(c.r[7], (c.r[6].w[0] + 24u));
    set32(c.r[4], c.r[4].w[0] + 32u);
    set32(c.r[6], c.r[6].w[0] + 32u);
    c.budget -= 21;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010F788u | kUnwind; return; } goto L_0010F788; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010F818; } }
L_0010F7E4:
    c.r[8].d[0] = ld64((c.r[4].w[0]));
    c.r[3].d[0] = ld64((c.r[4].w[0] + 8u));
    c.r[5].d[0] = ld64((c.r[4].w[0] + 16u));
    c.r[7].d[0] = ld64((c.r[4].w[0] + 24u));
    st64((c.r[6].w[0]), c.r[8].d[0]);
    st64((c.r[6].w[0] + 8u), c.r[3].d[0]);
    st64((c.r[6].w[0] + 16u), c.r[5].d[0]);
    st64((c.r[6].w[0] + 24u), c.r[7].d[0]);
    set32(c.r[4], c.r[4].w[0] + 32u);
    set32(c.r[6], c.r[6].w[0] + 32u);
    c.budget -= 13;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010F7E4u | kUnwind; return; } goto L_0010F7E4; } }
L_0010F818:
    lwl(c.r[8], (c.r[4].w[0] + 3u));
    lwr(c.r[8], (c.r[4].w[0]));
    swl(c.r[8], (c.r[6].w[0] + 3u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; swr(c.r[8], (c.r[6].w[0]));  if (t) { goto L_0010F910; } }
L_0010F82C:
    lwl(c.r[6], (c.r[16].w[0] + 23u));
    lwr(c.r[6], (c.r[16].w[0] + 20u));
    swl(c.r[6], (c.r[29].w[0] + 19u));
    swr(c.r[6], (c.r[29].w[0] + 16u));
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    ldl(c.r[3], (c.r[16].w[0] + 31u));
    ldr(c.r[3], (c.r[16].w[0] + 24u));
    ldl(c.r[4], (c.r[16].w[0] + 39u));
    ldr(c.r[4], (c.r[16].w[0] + 32u));
    ldl(c.r[5], (c.r[16].w[0] + 47u));
    ldr(c.r[5], (c.r[16].w[0] + 40u));
    ldl(c.r[6], (c.r[16].w[0] + 55u));
    ldr(c.r[6], (c.r[16].w[0] + 48u));
    sdl(c.r[3], (c.r[2].w[0] + 7u));
    sdr(c.r[3], (c.r[2].w[0]));
    sdl(c.r[4], (c.r[2].w[0] + 15u));
    sdr(c.r[4], (c.r[2].w[0] + 8u));
    sdl(c.r[5], (c.r[2].w[0] + 23u));
    sdr(c.r[5], (c.r[2].w[0] + 16u));
    sdl(c.r[6], (c.r[2].w[0] + 31u));
    sdr(c.r[6], (c.r[2].w[0] + 24u));
    ldl(c.r[3], (c.r[16].w[0] + 63u));
    ldr(c.r[3], (c.r[16].w[0] + 56u));
    ldl(c.r[4], (c.r[16].w[0] + 71u));
    ldr(c.r[4], (c.r[16].w[0] + 64u));
    ldl(c.r[5], (c.r[16].w[0] + 79u));
    ldr(c.r[5], (c.r[16].w[0] + 72u));
    ldl(c.r[6], (c.r[16].w[0] + 87u));
    ldr(c.r[6], (c.r[16].w[0] + 80u));
    sdl(c.r[3], (c.r[2].w[0] + 39u));
    sdr(c.r[3], (c.r[2].w[0] + 32u));
    sdl(c.r[4], (c.r[2].w[0] + 47u));
    sdr(c.r[4], (c.r[2].w[0] + 40u));
    sdl(c.r[5], (c.r[2].w[0] + 55u));
    sdr(c.r[5], (c.r[2].w[0] + 48u));
    sdl(c.r[6], (c.r[2].w[0] + 63u));
    sdr(c.r[6], (c.r[2].w[0] + 56u));
    c.budget -= 39;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0])));  if (t) { goto L_0010F914; } }
L_0010F8C8:
    lwl(c.r[7], (c.r[16].w[0] + 23u));
    lwr(c.r[7], (c.r[16].w[0] + 20u));
    swl(c.r[7], (c.r[29].w[0] + 19u));
    swr(c.r[7], (c.r[29].w[0] + 16u));
    lwl(c.r[4], (c.r[16].w[0] + 27u));
    lwr(c.r[4], (c.r[16].w[0] + 24u));
    swl(c.r[4], (c.r[29].w[0] + 23u));
    swr(c.r[4], (c.r[29].w[0] + 20u));
    set32(c.r[6], ld32((c.r[29].w[0] + 20u)));
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(1025ll) ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 16u)));  if (t) { goto L_0010F908; } }
    set32(c.r[2], 0u + 1024u);
    set32(c.r[6], 0u + 1024u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 4;
L_0010F908:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F910u); set32(c.r[5], c.r[16].w[0] + 28u);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x0010F910u) [[unlikely]] return; }
L_0010F910:
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.budget -= 1;
L_0010F914:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] >= 0; c.r[7].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_0010F97C; } }
    set32(c.r[2], 0u - c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] - 23368u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0010F948; } }
    set32(c.r[2], 0u - 1u);
    st32((c.r[7].w[0] - 23368u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0010F988; } }
    c.budget -= 1;
L_0010F948:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0010F94C:
    c.r[2].d[0] = c.r[6].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[7].w[0] - 23368u);  if (t) { goto L_0010F984; } }
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[5].d[0]; set32(c.r[6], c.r[6].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010F94Cu | kUnwind; return; } goto L_0010F94C; } }
    set32(c.r[2], 0u - 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0010F988; } }
L_0010F97C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F984u);  if (depth < kMaxDepth) unit_0002(c, 506u, depth + 1u); else { c.pc = 0x0010BC50u; return; } if (c.pc != 0x0010F984u) [[unlikely]] return; }
L_0010F984:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0010F988:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0010F998:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] - 23228u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0010F9D8; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 20u), 0u);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F9D0u); st32((c.r[29].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0002(c, 500u, depth + 1u); else { c.pc = 0x0010BC20u; return; } if (c.pc != 0x0010F9D0u) [[unlikely]] return; }
L_0010F9D0:
    st32((c.r[16].w[0] - 23228u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 2;
L_0010F9D8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0010F9E8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F9F8u);  if (depth < kMaxDepth) unit_0003(c, 430u, depth + 1u); else { c.pc = 0x0010F998u; return; } if (c.pc != 0x0010F9F8u) [[unlikely]] return; }
L_0010F9F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FA04u); set32(c.r[4], ld32((c.r[2].w[0] - 23228u)));  if (depth < kMaxDepth) unit_0002(c, 508u, depth + 1u); else { c.pc = 0x0010BC60u; return; } if (c.pc != 0x0010FA04u) [[unlikely]] return; }
L_0010FA04:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0010FA18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.budget -= 3;
    { set32(c.r[4], ld32((c.r[2].w[0] - 23228u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010BC40u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 504u, depth); }
L_0010FA28:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[4], 0u + 27u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FA5Cu); set32(c.r[20], c.r[16].w[0] - 9792u);  if (depth < kMaxDepth) unit_0003(c, 432u, depth + 1u); else { c.pc = 0x0010F9E8u; return; } if (c.pc != 0x0010FA5Cu) [[unlikely]] return; }
L_0010FA5C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 23236u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0010FA74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FA74u);  if (depth < kMaxDepth) unit_0003(c, 444u, depth + 1u); else { c.pc = 0x0010FAF0u; return; } if (c.pc != 0x0010FA74u) [[unlikely]] return; }
L_0010FA74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FA7Cu);  if (depth < kMaxDepth) unit_0005(c, 85u, depth + 1u); else { c.pc = 0x00114960u; return; } if (c.pc != 0x0010FA7Cu) [[unlikely]] return; }
L_0010FA7C:
    set32(c.r[17], ld32((c.r[16].w[0] - 9792u)));
    st32((c.r[20].w[0] + 4u), c.r[18].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] - 9792u), c.r[19].w[0]);  if (t) { goto L_0010FA94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FA94u);  if (depth < kMaxDepth) unit_0005(c, 87u, depth + 1u); else { c.pc = 0x001149A8u; return; } if (c.pc != 0x0010FA94u) [[unlikely]] return; }
L_0010FA94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FA9Cu);  if (depth < kMaxDepth) unit_0003(c, 435u, depth + 1u); else { c.pc = 0x0010FA18u; return; } if (c.pc != 0x0010FA9Cu) [[unlikely]] return; }
L_0010FA9C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0010FAC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0010FAD8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FAD8u); set32(c.r[4], ld32((c.r[5].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0010FAD8u) [[unlikely]] return; }
L_0010FAD8:
    set_interrupts(c, true);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0010FAF0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0] + 48u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    set32(c.r[17], c.r[16].w[0] - 9792u);
    st64((c.r[29].w[0] + 96u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[19].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FB1Cu); st64((c.r[29].w[0] + 64u), c.r[18].d[0]);  if (depth < kMaxDepth) unit_0003(c, 290u, depth + 1u); else { c.pc = 0x0010E468u; return; } if (c.pc != 0x0010FB1Cu) [[unlikely]] return; }
L_0010FB1C:
    st32((c.r[16].w[0] - 9792u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FB28u); st32((c.r[17].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_0005(c, 85u, depth + 1u); else { c.pc = 0x00114960u; return; } if (c.pc != 0x0010FB28u) [[unlikely]] return; }
L_0010FB28:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00110000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 2576u);
    set32(c.r[6], c.r[6].w[0] - 9856u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FB48u); c.r[4].d[0] = c.r[4].d[0] | 17ull;  if (depth < kMaxDepth) unit_0003(c, 270u, depth + 1u); else { c.pc = 0x0010E080u; return; } if (c.pc != 0x0010FB48u) [[unlikely]] return; }
L_0010FB48:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00110000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], c.r[5].w[0] - 1344u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FB60u); c.r[4].d[0] = c.r[4].d[0] | 19ull;  if (depth < kMaxDepth) unit_0003(c, 270u, depth + 1u); else { c.pc = 0x0010E080u; return; } if (c.pc != 0x0010FB60u) [[unlikely]] return; }
L_0010FB60:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[19].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_0010FB9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FB70u); set32(c.r[16], c.r[19].w[0] - 9920u);  if (depth < kMaxDepth) unit_0005(c, 87u, depth + 1u); else { c.pc = 0x001149A8u; return; } if (c.pc != 0x0010FB70u) [[unlikely]] return; }
L_0010FB70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010FBA0; } }
L_0010FB78:
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_0010FB80:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010FB80u | kUnwind; return; } goto L_0010FB80; } }
L_0010FB9C:
    set32(c.r[16], c.r[19].w[0] - 9920u);
    c.budget -= 1;
L_0010FBA0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 1ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FBB4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 342u, depth + 1u); else { c.pc = 0x0010EBA8u; return; } if (c.pc != 0x0010FBB4u) [[unlikely]] return; }
L_0010FBB4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[2], 0u - 1u);  if (t) { goto L_0010FCD4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010FB78u | kUnwind; return; } goto L_0010FB78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FBD0u); c.r[20].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (depth < kMaxDepth) unit_0003(c, 403u, depth + 1u); else { c.pc = 0x0010F498u; return; } if (c.pc != 0x0010FBD0u) [[unlikely]] return; }
L_0010FBD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FBD8u); set32(c.r[4], ld32((c.r[20].w[0] - 23224u)));  if (depth < kMaxDepth) unit_0002(c, 508u, depth + 1u); else { c.pc = 0x0010BC60u; return; } if (c.pc != 0x0010FBD8u) [[unlikely]] return; }
L_0010FBD8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 10432u);
    set32(c.r[4], c.r[3].w[0] + 512u);
    c.r[2].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_0010FC1C; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 2;
L_0010FBF8:
    st32((c.r[3].w[0] + 4u), 0u);
    set32(c.r[3], c.r[3].w[0] + 16u);
    c.r[2].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010FBF8u | kUnwind; return; } goto L_0010FBF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[20].w[0] - 23224u)));  if (t) { goto L_0010FC28; } }
L_0010FC1C:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[4], ld32((c.r[20].w[0] - 23224u)));
    c.budget -= 3;
L_0010FC28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FC30u); set32(c.r[16], c.r[16].w[0] - 12672u);  if (depth < kMaxDepth) unit_0002(c, 504u, depth + 1u); else { c.pc = 0x0010BC40u; return; } if (c.pc != 0x0010FC30u) [[unlikely]] return; }
L_0010FC30:
    set32(c.r[3], c.r[17].w[0] - 12608u);
    set32(c.r[7], c.r[18].w[0] - 15872u);
    st32((c.r[18].w[0] - 15872u), c.r[3].w[0]);
    set32(c.r[4], c.r[19].w[0] - 9920u);
    set32(c.r[3], c.r[3].w[0] + 1088u);
    set32(c.r[5], 0u + 255u);
    st32((c.r[7].w[0] + 4u), c.r[3].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), 0u);
    set32(c.r[8], 0u + 8u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 8u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FC68u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 354u, depth + 1u); else { c.pc = 0x0010ED78u; return; } if (c.pc != 0x0010FC68u) [[unlikely]] return; }
L_0010FC68:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_0010FC7C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65535ull;  if (t) { goto L_0010FCD4; } }
L_0010FC7C:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.r[3].d[0] = c.r[16].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[8], c.r[5].w[0] - 9880u);
    lwl(c.r[4], (c.r[3].w[0] + 3u));
    lwr(c.r[4], (c.r[3].w[0]));
    swl(c.r[4], (c.r[8].w[0] + 3u));
    swr(c.r[4], (c.r[8].w[0]));
    lwl(c.r[3], (c.r[2].w[0] + 3u));
    lwr(c.r[3], (c.r[2].w[0]));
    swl(c.r[3], (c.r[29].w[0] + 19u));
    swr(c.r[3], (c.r[29].w[0] + 16u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[4], 0u + 1u);
    st32((c.r[5].w[0] - 23236u), c.r[4].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 2ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st32((c.r[6].w[0] - 23232u), c.r[3].w[0]);
    c.budget -= 22;
L_0010FCD4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0010FCF8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    set32(c.r[19], c.r[2].w[0] - 23412u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[17], c.r[3].w[0] - 9880u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FD34u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0009(c, 37u, depth + 1u); else { c.pc = 0x00124C88u; return; } if (c.pc != 0x0010FD34u) [[unlikely]] return; }
L_0010FD34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_0010FD64; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] - 23216u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FD4Cu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0009(c, 37u, depth + 1u); else { c.pc = 0x00124C88u; return; } if (c.pc != 0x0010FD4Cu) [[unlikely]] return; }
L_0010FD4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], ld32((c.r[16].w[0] - 23216u)));  if (t) { goto L_0010FD64; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FD60u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0009(c, 37u, depth + 1u); else { c.pc = 0x00124C88u; return; } if (c.pc != 0x0010FD60u) [[unlikely]] return; }
L_0010FD60:
    c.r[18].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0010FD64:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0010FD88:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[2].w[0] - 23236u), 0u);
    set32(c.r[4], c.r[4].w[0] - 9880u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FDACu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0010FDACu) [[unlikely]] return; }
L_0010FDAC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0010FDC0:
    set32(c.r[29], c.r[29].w[0] - 336u);
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 176u), c.r[23].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 192u), c.r[30].d[0]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[17].d[0]);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 208u), c.r[31].d[0]);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0] + 160u), c.r[22].d[0]);
    set32(c.r[17], c.r[30].w[0] - 15808u);
    st64((c.r[29].w[0] + 144u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 128u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 288u), c.r[6].d[0]);
    st64((c.r[29].w[0] + 296u), c.r[7].d[0]);
    st64((c.r[29].w[0] + 304u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 312u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 320u), c.r[10].d[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FE1Cu); st64((c.r[29].w[0] + 328u), c.r[11].d[0]);  if (depth < kMaxDepth) unit_0003(c, 432u, depth + 1u); else { c.pc = 0x0010F9E8u; return; } if (c.pc != 0x0010FE1Cu) [[unlikely]] return; }
L_0010FE1C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 23236u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010FE34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FE34u);  if (depth < kMaxDepth) unit_0003(c, 444u, depth + 1u); else { c.pc = 0x0010FAF0u; return; } if (c.pc != 0x0010FE34u) [[unlikely]] return; }
L_0010FE34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FE3Cu);  if (depth < kMaxDepth) unit_0003(c, 458u, depth + 1u); else { c.pc = 0x0010FCF8u; return; } if (c.pc != 0x0010FE3Cu) [[unlikely]] return; }
L_0010FE3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010FE58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FE4Cu);  if (depth < kMaxDepth) unit_0003(c, 435u, depth + 1u); else { c.pc = 0x0010FA18u; return; } if (c.pc != 0x0010FE4Cu) [[unlikely]] return; }
L_0010FE4C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65532ull;  if (t) { [[clang::musttail]] return unit_0004(c, 3u, depth); } }
L_0010FE58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FE60u);  if (depth < kMaxDepth) unit_0003(c, 406u, depth + 1u); else { c.pc = 0x0010F4F8u; return; } if (c.pc != 0x0010FE60u) [[unlikely]] return; }
L_0010FE60:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[19].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[16].w[0]));  goto L_0010FE7C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FE74u);  if (depth < kMaxDepth) unit_0003(c, 435u, depth + 1u); else { c.pc = 0x0010FA18u; return; } if (c.pc != 0x0010FE74u) [[unlikely]] return; }
L_0010FE74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 19u);  if (t) { [[clang::musttail]] return unit_0004(c, 3u, depth); } }
L_0010FE7C:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 288u)));
    set32(c.r[2], c.r[3].w[0] << 24);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st8((c.r[17].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0010FED4; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[18], c.r[29].w[0] + 48u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 6;
L_0010FEA8:
    c.r[2].d[0] = c.r[5].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] + c.r[5].w[0]);  if (t) { goto L_0010FEE4; } }
    set32(c.r[4], c.r[17].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[4].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] << 24);
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010FEA8u | kUnwind; return; } goto L_0010FEA8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1024u);  if (t) { goto L_0010FEE8; } }
L_0010FED4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[18], c.r[29].w[0] + 48u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 4;
L_0010FEE4:
    set32(c.r[2], 0u + 1024u);
    c.budget -= 1;
L_0010FEE8:
    c.budget -= 2;
    if (c.r[5].d[0] == c.r[2].d[0]) { st8((c.r[17].w[0] + 1043u), static_cast<std::uint8_t>(0u));  goto L_0010FEF0; }
L_0010FEF0:
    set32(c.r[2], c.r[6].w[0] - 10432u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[2], c.r[19].w[0] - c.r[2].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[21], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    c.r[3].d[0] = c.r[23].d[0] & c.r[3].d[0];
    st32((c.r[17].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 16u), c.r[7].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[20], c.r[20].w[0] - 12672u);
    st32((c.r[17].w[0] + 1044u), c.r[21].w[0]);
    st32((c.r[29].w[0] + 24u), 0u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FF30u); st32((c.r[29].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_0002(c, 500u, depth + 1u); else { c.pc = 0x0010BC20u; return; } if (c.pc != 0x0010FF30u) [[unlikely]] return; }
L_0010FF30:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[17].w[0] + 4u), c.r[18].w[0]);
    set32(c.r[2], 0u + 4u);
    st32((c.r[17].w[0]), c.r[16].w[0]);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], c.r[22].w[0] - 9920u);
    set32(c.r[7], c.r[30].w[0] - 15808u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 1048u);
    c.r[9].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FF6Cu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 354u, depth + 1u); else { c.pc = 0x0010ED78u; return; } if (c.pc != 0x0010FF6Cu) [[unlikely]] return; }
L_0010FF6C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_0010FF8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FF7Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x0010FF7Cu) [[unlikely]] return; }
L_0010FF7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FF84u);  if (depth < kMaxDepth) unit_0003(c, 435u, depth + 1u); else { c.pc = 0x0010FA18u; return; } if (c.pc != 0x0010FF84u) [[unlikely]] return; }
L_0010FF84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { [[clang::musttail]] return unit_0004(c, 3u, depth); } }
L_0010FF8C:
    c.r[2].d[0] = c.r[20].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FF98u); set32(c.r[17], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0003(c, 435u, depth + 1u); else { c.pc = 0x0010FA18u; return; } if (c.pc != 0x0010FF98u) [[unlikely]] return; }
L_0010FF98:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_0010FFB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FFA8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x0010FFA8u) [[unlikely]] return; }
L_0010FFA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { [[clang::musttail]] return unit_0004(c, 3u, depth); } }
L_0010FFB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FFB8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 508u, depth + 1u); else { c.pc = 0x0010BC60u; return; } if (c.pc != 0x0010FFB8u) [[unlikely]] return; }
L_0010FFB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FFC0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x0010FFC0u) [[unlikely]] return; }
L_0010FFC0:
    set32(c.r[3], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; c.r[16].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_0010FFE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FFD4u); set32(c.r[4], ld32((c.r[16].w[0] - 23224u)));  if (depth < kMaxDepth) unit_0002(c, 508u, depth + 1u); else { c.pc = 0x0010BC60u; return; } if (c.pc != 0x0010FFD4u) [[unlikely]] return; }
L_0010FFD4:
    st32((c.r[19].w[0] + 4u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FFE0u); set32(c.r[4], ld32((c.r[16].w[0] - 23224u)));  if (depth < kMaxDepth) unit_0002(c, 504u, depth + 1u); else { c.pc = 0x0010BC40u; return; } if (c.pc != 0x0010FFE0u) [[unlikely]] return; }
L_0010FFE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 48u)));  if (t) { [[clang::musttail]] return unit_0004(c, 3u, depth); } }
L_0010FFE8:
    c.r[17].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FFF4u); set32(c.r[4], ld32((c.r[16].w[0] - 23224u)));  if (depth < kMaxDepth) unit_0002(c, 508u, depth + 1u); else { c.pc = 0x0010BC60u; return; } if (c.pc != 0x0010FFF4u) [[unlikely]] return; }
L_0010FFF4:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[4], ld32((c.r[16].w[0] - 23224u)));
    c.budget -= 3;
    [[clang::musttail]] return unit_0004(c, 1u, depth);
}

}
