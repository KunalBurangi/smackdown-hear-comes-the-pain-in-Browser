#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0061[4096] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0,
    0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 16, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 21, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0,
    0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 36, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 53, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 0,
    0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0,
    0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    66, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 76, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 79, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 86, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0,
    89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 92, 0, 0,
    0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0,
    0, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0,
    103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 0, 110,
    0, 0, 111, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0,
    0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 118, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    131, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 138, 0, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0,
    143, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    149, 0, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0,
    0, 158, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0,
    0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0,
    176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0,
    0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 198, 0,
    0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0,
    203, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 0,
    208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0,
    0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 230, 0,
    0, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0,
    235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    248, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0,
    0, 0, 253, 0, 0, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 257, 0,
    0, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0,
    262, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 266, 0, 0, 0,
    267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 278, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    280, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0,
    0, 0, 285, 0, 0, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 289, 0,
    0, 0, 0, 0, 290, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0,
    294, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 298, 0, 0, 0,
    299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    312, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 314, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0,
    0, 0, 317, 0, 0, 0, 0, 0, 318, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 321, 0,
    0, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0,
    326, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 330, 0, 0, 0,
    331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 337, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    339, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 341, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0,
    0, 0, 344, 0, 0, 0, 0, 0, 345, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 348, 0,
    0, 0, 0, 0, 349, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0,
    353, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 357, 0, 0, 0,
    358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 361, 0, 0, 0, 362, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 365, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 369, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    371, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 373, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0,
    0, 0, 376, 0, 0, 0, 0, 0, 377, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 380, 0,
    0, 0, 0, 0, 381, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0,
    385, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 389, 0, 0, 390, 0, 0, 0, 391, 0, 0, 0, 392,
    0, 0, 0, 393, 0, 0, 0, 394, 0, 0, 0, 395, 0, 0, 0, 0, 396, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398,
    0, 0, 0, 399, 0, 0, 0, 400, 0, 401, 0, 0, 0, 0, 402, 0, 0, 403, 0, 0, 0, 404, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0,
    0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 410, 0, 0, 0, 411, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 419, 0, 0,
    420, 0, 0, 0, 0, 0, 0, 421, 0, 0, 422, 0, 0, 423, 0, 0, 424, 0, 0, 425, 0, 0, 426, 0, 0, 0, 0, 0, 427, 0, 0, 0,
    0, 0, 0, 0, 428, 0, 0, 0, 429, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 434, 0, 435, 0, 436, 0, 437, 0, 438, 0, 439, 0, 440, 0, 441, 0, 442, 0, 443, 0, 444, 0, 445, 0, 446, 0, 447, 0, 448, 0, 449,
    0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 452, 0, 453, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 455, 0,
    0, 0, 456, 0, 457, 0, 0, 0, 0, 458, 0, 0, 459, 0, 0, 460, 0, 0, 461, 0, 0, 462, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 465, 0, 0, 0, 466, 0, 0, 467, 0, 0, 468, 0, 0, 469, 0, 0, 470, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 472, 0, 0, 0, 473, 0, 0, 474, 0, 0, 475, 0, 0, 476,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 478, 0, 0, 0, 479, 0, 0, 480, 0, 0,
    481, 0, 0, 482, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 485, 0, 0, 0, 486, 0,
    0, 487, 0, 0, 488, 0, 0, 489, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 492, 0,
    0, 0, 493, 0, 0, 494, 0, 0, 495, 0, 0, 496, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 500,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0,
    0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    510, 0, 0, 0, 0, 511, 0, 0, 0, 0, 512, 0, 0, 513, 0, 0, 0, 0, 514, 0, 0, 515, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 517, 0, 0, 0,
};

void unit_0061(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00284000;
    case 2u: goto L_00284018;
    case 3u: goto L_00284060;
    case 4u: goto L_00284094;
    case 5u: goto L_002840B0;
    case 6u: goto L_002840E8;
    case 7u: goto L_00284104;
    case 8u: goto L_0028413C;
    case 9u: goto L_00284158;
    case 10u: goto L_00284190;
    case 11u: goto L_002841AC;
    case 12u: goto L_002841E8;
    case 13u: goto L_00284210;
    case 14u: goto L_00284228;
    case 15u: goto L_00284250;
    case 16u: goto L_00284298;
    case 17u: goto L_002842A0;
    case 18u: goto L_002842B8;
    case 19u: goto L_002842E0;
    case 20u: goto L_00284328;
    case 21u: goto L_00284330;
    case 22u: goto L_00284348;
    case 23u: goto L_00284370;
    case 24u: goto L_002843B8;
    case 25u: goto L_002843C0;
    case 26u: goto L_002843D8;
    case 27u: goto L_00284400;
    case 28u: goto L_00284448;
    case 29u: goto L_00284450;
    case 30u: goto L_00284468;
    case 31u: goto L_00284490;
    case 32u: goto L_002844D8;
    case 33u: goto L_002844F0;
    case 34u: goto L_0028450C;
    case 35u: goto L_00284544;
    case 36u: goto L_00284584;
    case 37u: goto L_0028458C;
    case 38u: goto L_002845CC;
    case 39u: goto L_002845E8;
    case 40u: goto L_00284630;
    case 41u: goto L_00284690;
    case 42u: goto L_002846D8;
    case 43u: goto L_00284728;
    case 44u: goto L_00284770;
    case 45u: goto L_002847C0;
    case 46u: goto L_00284808;
    case 47u: goto L_00284830;
    case 48u: goto L_00284848;
    case 49u: goto L_00284864;
    case 50u: goto L_002848A4;
    case 51u: goto L_002848AC;
    case 52u: goto L_002848EC;
    case 53u: goto L_002848F4;
    case 54u: goto L_0028493C;
    case 55u: goto L_00284960;
    case 56u: goto L_00284974;
    case 57u: goto L_00284988;
    case 58u: goto L_002849C8;
    case 59u: goto L_002849D0;
    case 60u: goto L_00284A10;
    case 61u: goto L_00284A30;
    case 62u: goto L_00284A78;
    case 63u: goto L_00284A90;
    case 64u: goto L_00284AA8;
    case 65u: goto L_00284AC0;
    case 66u: goto L_00284B00;
    case 67u: goto L_00284B08;
    case 68u: goto L_00284B48;
    case 69u: goto L_00284B68;
    case 70u: goto L_00284BB0;
    case 71u: goto L_00284BB8;
    case 72u: goto L_00284C00;
    case 73u: goto L_00284C20;
    case 74u: goto L_00284C38;
    case 75u: goto L_00284C50;
    case 76u: goto L_00284C90;
    case 77u: goto L_00284C98;
    case 78u: goto L_00284CD8;
    case 79u: goto L_00284CF8;
    case 80u: goto L_00284D40;
    case 81u: goto L_00284D48;
    case 82u: goto L_00284D90;
    case 83u: goto L_00284DB0;
    case 84u: goto L_00284DC4;
    case 85u: goto L_00284DD8;
    case 86u: goto L_00284E18;
    case 87u: goto L_00284E20;
    case 88u: goto L_00284E60;
    case 89u: goto L_00284E80;
    case 90u: goto L_00284EC8;
    case 91u: goto L_00284EE0;
    case 92u: goto L_00284EF4;
    case 93u: goto L_00284F08;
    case 94u: goto L_00284F48;
    case 95u: goto L_00284F50;
    case 96u: goto L_00284F90;
    case 97u: goto L_00284FB0;
    case 98u: goto L_00284FF8;
    case 99u: goto L_00285010;
    case 100u: goto L_00285024;
    case 101u: goto L_00285038;
    case 102u: goto L_00285078;
    case 103u: goto L_00285080;
    case 104u: goto L_002850C0;
    case 105u: goto L_002850E0;
    case 106u: goto L_00285128;
    case 107u: goto L_00285140;
    case 108u: goto L_00285154;
    case 109u: goto L_00285168;
    case 110u: goto L_0028517C;
    case 111u: goto L_00285188;
    case 112u: goto L_00285190;
    case 113u: goto L_002851D0;
    case 114u: goto L_002851F0;
    case 115u: goto L_00285208;
    case 116u: goto L_0028521C;
    case 117u: goto L_00285260;
    case 118u: goto L_0028526C;
    case 119u: goto L_002852A8;
    case 120u: goto L_002852C0;
    case 121u: goto L_002852D4;
    case 122u: goto L_002852E8;
    case 123u: goto L_00285328;
    case 124u: goto L_00285340;
    case 125u: goto L_00285354;
    case 126u: goto L_00285368;
    case 127u: goto L_002853A8;
    case 128u: goto L_002853C0;
    case 129u: goto L_002853D4;
    case 130u: goto L_00285400;
    case 131u: goto L_00285480;
    case 132u: goto L_00285494;
    case 133u: goto L_002854A4;
    case 134u: goto L_002854B4;
    case 135u: goto L_0028551C;
    case 136u: goto L_00285540;
    case 137u: goto L_00285554;
    case 138u: goto L_0028558C;
    case 139u: goto L_00285598;
    case 140u: goto L_002855B4;
    case 141u: goto L_002855C0;
    case 142u: goto L_002855EC;
    case 143u: goto L_00285600;
    case 144u: goto L_00285610;
    case 145u: goto L_00285620;
    case 146u: goto L_00285690;
    case 147u: goto L_002856B4;
    case 148u: goto L_002856C8;
    case 149u: goto L_00285700;
    case 150u: goto L_0028570C;
    case 151u: goto L_00285728;
    case 152u: goto L_00285754;
    case 153u: goto L_00285794;
    case 154u: goto L_002857C4;
    case 155u: goto L_002857D4;
    case 156u: goto L_002857E4;
    case 157u: goto L_002857F4;
    case 158u: goto L_00285804;
    case 159u: goto L_00285814;
    case 160u: goto L_00285824;
    case 161u: goto L_00285838;
    case 162u: goto L_00285860;
    case 163u: goto L_00285874;
    case 164u: goto L_002858A0;
    case 165u: goto L_002858B8;
    case 166u: goto L_002858D0;
    case 167u: goto L_00285900;
    case 168u: goto L_00285918;
    case 169u: goto L_00285930;
    case 170u: goto L_00285960;
    case 171u: goto L_00285978;
    case 172u: goto L_00285990;
    case 173u: goto L_002859C0;
    case 174u: goto L_002859D8;
    case 175u: goto L_002859F0;
    case 176u: goto L_00285A00;
    case 177u: goto L_00285A30;
    case 178u: goto L_00285A48;
    case 179u: goto L_00285A60;
    case 180u: goto L_00285A70;
    case 181u: goto L_00285AA0;
    case 182u: goto L_00285AB8;
    case 183u: goto L_00285AD0;
    case 184u: goto L_00285AE0;
    case 185u: goto L_00285B10;
    case 186u: goto L_00285B28;
    case 187u: goto L_00285B40;
    case 188u: goto L_00285B50;
    case 189u: goto L_00285B80;
    case 190u: goto L_00285B98;
    case 191u: goto L_00285BB0;
    case 192u: goto L_00285BC0;
    case 193u: goto L_00285BF0;
    case 194u: goto L_00285C08;
    case 195u: goto L_00285C20;
    case 196u: goto L_00285C30;
    case 197u: goto L_00285C60;
    case 198u: goto L_00285C78;
    case 199u: goto L_00285C90;
    case 200u: goto L_00285CA0;
    case 201u: goto L_00285CD0;
    case 202u: goto L_00285CE8;
    case 203u: goto L_00285D00;
    case 204u: goto L_00285D10;
    case 205u: goto L_00285D40;
    case 206u: goto L_00285D58;
    case 207u: goto L_00285D70;
    case 208u: goto L_00285D80;
    case 209u: goto L_00285DB0;
    case 210u: goto L_00285DC8;
    case 211u: goto L_00285DE0;
    case 212u: goto L_00285DF0;
    case 213u: goto L_00285E20;
    case 214u: goto L_00285E38;
    case 215u: goto L_00285E50;
    case 216u: goto L_00285E60;
    case 217u: goto L_00285E90;
    case 218u: goto L_00285EA8;
    case 219u: goto L_00285EC0;
    case 220u: goto L_00285ED0;
    case 221u: goto L_00285F00;
    case 222u: goto L_00285F18;
    case 223u: goto L_00285F30;
    case 224u: goto L_00285F40;
    case 225u: goto L_00285F70;
    case 226u: goto L_00285F88;
    case 227u: goto L_00285FA0;
    case 228u: goto L_00285FB0;
    case 229u: goto L_00285FE0;
    case 230u: goto L_00285FF8;
    case 231u: goto L_00286010;
    case 232u: goto L_00286020;
    case 233u: goto L_00286050;
    case 234u: goto L_00286068;
    case 235u: goto L_00286080;
    case 236u: goto L_002860B0;
    case 237u: goto L_002860C8;
    case 238u: goto L_002860E0;
    case 239u: goto L_002860F0;
    case 240u: goto L_00286120;
    case 241u: goto L_00286138;
    case 242u: goto L_00286150;
    case 243u: goto L_00286160;
    case 244u: goto L_00286190;
    case 245u: goto L_002861A8;
    case 246u: goto L_002861C0;
    case 247u: goto L_002861D0;
    case 248u: goto L_00286200;
    case 249u: goto L_00286218;
    case 250u: goto L_00286230;
    case 251u: goto L_00286240;
    case 252u: goto L_00286270;
    case 253u: goto L_00286288;
    case 254u: goto L_002862A0;
    case 255u: goto L_002862B0;
    case 256u: goto L_002862E0;
    case 257u: goto L_002862F8;
    case 258u: goto L_00286310;
    case 259u: goto L_00286320;
    case 260u: goto L_00286350;
    case 261u: goto L_00286368;
    case 262u: goto L_00286380;
    case 263u: goto L_00286390;
    case 264u: goto L_002863C0;
    case 265u: goto L_002863D8;
    case 266u: goto L_002863F0;
    case 267u: goto L_00286400;
    case 268u: goto L_00286430;
    case 269u: goto L_00286448;
    case 270u: goto L_00286460;
    case 271u: goto L_00286470;
    case 272u: goto L_002864A0;
    case 273u: goto L_002864B8;
    case 274u: goto L_002864D0;
    case 275u: goto L_002864E0;
    case 276u: goto L_00286510;
    case 277u: goto L_00286528;
    case 278u: goto L_00286540;
    case 279u: goto L_00286550;
    case 280u: goto L_00286580;
    case 281u: goto L_00286598;
    case 282u: goto L_002865B0;
    case 283u: goto L_002865C0;
    case 284u: goto L_002865F0;
    case 285u: goto L_00286608;
    case 286u: goto L_00286620;
    case 287u: goto L_00286630;
    case 288u: goto L_00286660;
    case 289u: goto L_00286678;
    case 290u: goto L_00286690;
    case 291u: goto L_002866A0;
    case 292u: goto L_002866D0;
    case 293u: goto L_002866E8;
    case 294u: goto L_00286700;
    case 295u: goto L_00286710;
    case 296u: goto L_00286740;
    case 297u: goto L_00286758;
    case 298u: goto L_00286770;
    case 299u: goto L_00286780;
    case 300u: goto L_002867B0;
    case 301u: goto L_002867C8;
    case 302u: goto L_002867E0;
    case 303u: goto L_002867F0;
    case 304u: goto L_00286820;
    case 305u: goto L_00286838;
    case 306u: goto L_00286850;
    case 307u: goto L_00286860;
    case 308u: goto L_00286890;
    case 309u: goto L_002868A8;
    case 310u: goto L_002868C0;
    case 311u: goto L_002868D0;
    case 312u: goto L_00286900;
    case 313u: goto L_00286918;
    case 314u: goto L_00286930;
    case 315u: goto L_00286940;
    case 316u: goto L_00286970;
    case 317u: goto L_00286988;
    case 318u: goto L_002869A0;
    case 319u: goto L_002869B0;
    case 320u: goto L_002869E0;
    case 321u: goto L_002869F8;
    case 322u: goto L_00286A10;
    case 323u: goto L_00286A20;
    case 324u: goto L_00286A50;
    case 325u: goto L_00286A68;
    case 326u: goto L_00286A80;
    case 327u: goto L_00286A90;
    case 328u: goto L_00286AC0;
    case 329u: goto L_00286AD8;
    case 330u: goto L_00286AF0;
    case 331u: goto L_00286B00;
    case 332u: goto L_00286B30;
    case 333u: goto L_00286B48;
    case 334u: goto L_00286B60;
    case 335u: goto L_00286B90;
    case 336u: goto L_00286BA8;
    case 337u: goto L_00286BC0;
    case 338u: goto L_00286BD0;
    case 339u: goto L_00286C00;
    case 340u: goto L_00286C18;
    case 341u: goto L_00286C30;
    case 342u: goto L_00286C40;
    case 343u: goto L_00286C70;
    case 344u: goto L_00286C88;
    case 345u: goto L_00286CA0;
    case 346u: goto L_00286CB0;
    case 347u: goto L_00286CE0;
    case 348u: goto L_00286CF8;
    case 349u: goto L_00286D10;
    case 350u: goto L_00286D20;
    case 351u: goto L_00286D50;
    case 352u: goto L_00286D68;
    case 353u: goto L_00286D80;
    case 354u: goto L_00286D90;
    case 355u: goto L_00286DC0;
    case 356u: goto L_00286DD8;
    case 357u: goto L_00286DF0;
    case 358u: goto L_00286E00;
    case 359u: goto L_00286E30;
    case 360u: goto L_00286E48;
    case 361u: goto L_00286E60;
    case 362u: goto L_00286E70;
    case 363u: goto L_00286EA0;
    case 364u: goto L_00286EB8;
    case 365u: goto L_00286ED0;
    case 366u: goto L_00286EE0;
    case 367u: goto L_00286F10;
    case 368u: goto L_00286F28;
    case 369u: goto L_00286F40;
    case 370u: goto L_00286F50;
    case 371u: goto L_00286F80;
    case 372u: goto L_00286F98;
    case 373u: goto L_00286FB0;
    case 374u: goto L_00286FC0;
    case 375u: goto L_00286FF0;
    case 376u: goto L_00287008;
    case 377u: goto L_00287020;
    case 378u: goto L_00287030;
    case 379u: goto L_00287060;
    case 380u: goto L_00287078;
    case 381u: goto L_00287090;
    case 382u: goto L_002870A0;
    case 383u: goto L_002870D0;
    case 384u: goto L_002870E8;
    case 385u: goto L_00287100;
    case 386u: goto L_00287110;
    case 387u: goto L_00287180;
    case 388u: goto L_002871B8;
    case 389u: goto L_002871D0;
    case 390u: goto L_002871DC;
    case 391u: goto L_002871EC;
    case 392u: goto L_002871FC;
    case 393u: goto L_0028720C;
    case 394u: goto L_0028721C;
    case 395u: goto L_0028722C;
    case 396u: goto L_00287240;
    case 397u: goto L_00287248;
    case 398u: goto L_0028727C;
    case 399u: goto L_0028728C;
    case 400u: goto L_0028729C;
    case 401u: goto L_002872A4;
    case 402u: goto L_002872B8;
    case 403u: goto L_002872C4;
    case 404u: goto L_002872D4;
    case 405u: goto L_002872E4;
    case 406u: goto L_0028730C;
    case 407u: goto L_00287378;
    case 408u: goto L_0028738C;
    case 409u: goto L_002873A8;
    case 410u: goto L_002873B8;
    case 411u: goto L_002873C8;
    case 412u: goto L_002873D4;
    case 413u: goto L_00287400;
    case 414u: goto L_00287434;
    case 415u: goto L_00287460;
    case 416u: goto L_00287494;
    case 417u: goto L_002874BC;
    case 418u: goto L_002874E4;
    case 419u: goto L_002874F4;
    case 420u: goto L_00287500;
    case 421u: goto L_0028751C;
    case 422u: goto L_00287528;
    case 423u: goto L_00287534;
    case 424u: goto L_00287540;
    case 425u: goto L_0028754C;
    case 426u: goto L_00287558;
    case 427u: goto L_00287570;
    case 428u: goto L_00287590;
    case 429u: goto L_002875A0;
    case 430u: goto L_002875B0;
    case 431u: goto L_002875FC;
    case 432u: goto L_00287628;
    case 433u: goto L_0028767C;
    case 434u: goto L_00287704;
    case 435u: goto L_0028770C;
    case 436u: goto L_00287714;
    case 437u: goto L_0028771C;
    case 438u: goto L_00287724;
    case 439u: goto L_0028772C;
    case 440u: goto L_00287734;
    case 441u: goto L_0028773C;
    case 442u: goto L_00287744;
    case 443u: goto L_0028774C;
    case 444u: goto L_00287754;
    case 445u: goto L_0028775C;
    case 446u: goto L_00287764;
    case 447u: goto L_0028776C;
    case 448u: goto L_00287774;
    case 449u: goto L_0028777C;
    case 450u: goto L_00287790;
    case 451u: goto L_002877BC;
    case 452u: goto L_002877C4;
    case 453u: goto L_002877CC;
    case 454u: goto L_002877E0;
    case 455u: goto L_002877F8;
    case 456u: goto L_00287808;
    case 457u: goto L_00287810;
    case 458u: goto L_00287824;
    case 459u: goto L_00287830;
    case 460u: goto L_0028783C;
    case 461u: goto L_00287848;
    case 462u: goto L_00287854;
    case 463u: goto L_00287860;
    case 464u: goto L_002878A0;
    case 465u: goto L_002878B8;
    case 466u: goto L_002878C8;
    case 467u: goto L_002878D4;
    case 468u: goto L_002878E0;
    case 469u: goto L_002878EC;
    case 470u: goto L_002878F8;
    case 471u: goto L_00287930;
    case 472u: goto L_00287948;
    case 473u: goto L_00287958;
    case 474u: goto L_00287964;
    case 475u: goto L_00287970;
    case 476u: goto L_0028797C;
    case 477u: goto L_002879C0;
    case 478u: goto L_002879D8;
    case 479u: goto L_002879E8;
    case 480u: goto L_002879F4;
    case 481u: goto L_00287A00;
    case 482u: goto L_00287A0C;
    case 483u: goto L_00287A18;
    case 484u: goto L_00287A50;
    case 485u: goto L_00287A68;
    case 486u: goto L_00287A78;
    case 487u: goto L_00287A84;
    case 488u: goto L_00287A90;
    case 489u: goto L_00287A9C;
    case 490u: goto L_00287AA8;
    case 491u: goto L_00287AE0;
    case 492u: goto L_00287AF8;
    case 493u: goto L_00287B08;
    case 494u: goto L_00287B14;
    case 495u: goto L_00287B20;
    case 496u: goto L_00287B2C;
    case 497u: goto L_00287B40;
    case 498u: goto L_00287BB4;
    case 499u: goto L_00287BDC;
    case 500u: goto L_00287BFC;
    case 501u: goto L_00287C6C;
    case 502u: goto L_00287C8C;
    case 503u: goto L_00287CAC;
    case 504u: goto L_00287CD0;
    case 505u: goto L_00287D8C;
    case 506u: goto L_00287DCC;
    case 507u: goto L_00287DF0;
    case 508u: goto L_00287E78;
    case 509u: goto L_00287ECC;
    case 510u: goto L_00287F00;
    case 511u: goto L_00287F14;
    case 512u: goto L_00287F28;
    case 513u: goto L_00287F34;
    case 514u: goto L_00287F48;
    case 515u: goto L_00287F54;
    case 516u: goto L_00287FDC;
    case 517u: goto L_00287FF0;
    default: bad_entry(c, 0x00284000u); return;
    }
L_00284000:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8896u)));
    c.r[1].d[0] = c.r[2].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], 0u + 24u);  if (t) { goto L_00284068; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284018u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00284018u) [[unlikely]] return; }
L_00284018:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00284058; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 2880u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 396u));
    st16((c.r[2].w[0] + 20u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 14;
L_00284058:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284060u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00284060u) [[unlikely]] return; }
L_00284060:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002844DC; } }
L_00284068:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] - 247u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_002841E0; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 31872u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00284000u < 16384u) { entry = entries_0061[(t - 0x00284000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00284094:
    c.r[4].d[0] = ld8((c.r[29].w[0] + 61u));
    set32(c.r[2], 0u - 17u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 61u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002841E0; } }
L_002840B0:
    set32(c.r[7], c.r[29].w[0] + 61u);
    set32(c.r[4], 0u - 17u);
    c.r[6].d[0] = ld8((c.r[7].w[0]));
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[2], 0u - 33u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[7].w[0]));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002841E0; } }
L_002840E8:
    c.r[4].d[0] = ld8((c.r[29].w[0] + 61u));
    set32(c.r[2], 0u - 33u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 61u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002841E0; } }
L_00284104:
    set32(c.r[7], c.r[29].w[0] + 61u);
    set32(c.r[4], 0u - 33u);
    c.r[6].d[0] = ld8((c.r[7].w[0]));
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    set32(c.r[2], 0u - 65u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[7].w[0]));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002841E0; } }
L_0028413C:
    c.r[4].d[0] = ld8((c.r[29].w[0] + 61u));
    set32(c.r[2], 0u - 65u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 61u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002841E0; } }
L_00284158:
    set32(c.r[7], c.r[29].w[0] + 61u);
    set32(c.r[4], 0u - 65u);
    c.r[6].d[0] = ld8((c.r[7].w[0]));
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    set32(c.r[2], 0u - 129u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[7].w[0]));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002841E0; } }
L_00284190:
    c.r[4].d[0] = ld8((c.r[29].w[0] + 61u));
    set32(c.r[2], 0u - 129u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 61u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002841E0; } }
L_002841AC:
    set32(c.r[7], c.r[29].w[0] + 61u);
    set32(c.r[4], 0u - 17u);
    c.r[6].d[0] = ld8((c.r[7].w[0]));
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[2], 0u - 129u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[7].w[0]));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 13;
L_002841E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002841E8u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x002841E8u) [[unlikely]] return; }
L_002841E8:
    set32(c.r[2], c.r[2].w[0] - 30u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_002844D8; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 31904u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00284000u < 16384u) { entry = entries_0061[(t - 0x00284000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00284210:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], 0u + 255u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 24u);  if (t) { goto L_00284248; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284228u);  if (depth < kMaxDepth) unit_0010(c, 15u, depth + 1u); else { c.pc = 0x00140210u; return; } if (c.pc != 0x00284228u) [[unlikely]] return; }
L_00284228:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[3], 0u + 4096u);
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[2], 0u + 16384u);
    if (c.r[4].d[0] == 0) c.r[3].d[0] = c.r[2].d[0];
    st16((c.r[29].w[0] + 60u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], 0u + 24u);
    c.budget -= 8;
L_00284248:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284250u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00284250u) [[unlikely]] return; }
L_00284250:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00284290; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 2880u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[29].w[0] + 60u));
    st16((c.r[2].w[0] + 20u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 14;
L_00284290:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284298u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00284298u) [[unlikely]] return; }
L_00284298:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002844D8; } }
L_002842A0:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], 0u + 255u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 24u);  if (t) { goto L_002842D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002842B8u);  if (depth < kMaxDepth) unit_0010(c, 15u, depth + 1u); else { c.pc = 0x00140210u; return; } if (c.pc != 0x002842B8u) [[unlikely]] return; }
L_002842B8:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[3], 0u + 4096u);
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[2], 0u + 16384u);
    if (c.r[4].d[0] == 0) c.r[3].d[0] = c.r[2].d[0];
    st16((c.r[29].w[0] + 60u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], 0u + 24u);
    c.budget -= 8;
L_002842D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002842E0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002842E0u) [[unlikely]] return; }
L_002842E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00284320; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 2880u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[29].w[0] + 60u));
    st16((c.r[2].w[0] + 20u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 14;
L_00284320:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284328u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00284328u) [[unlikely]] return; }
L_00284328:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002844D8; } }
L_00284330:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], 0u + 255u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 24u);  if (t) { goto L_00284368; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284348u);  if (depth < kMaxDepth) unit_0010(c, 15u, depth + 1u); else { c.pc = 0x00140210u; return; } if (c.pc != 0x00284348u) [[unlikely]] return; }
L_00284348:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[3], 0u + 4096u);
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[2], 0u + 16384u);
    if (c.r[4].d[0] == 0) c.r[3].d[0] = c.r[2].d[0];
    st16((c.r[29].w[0] + 60u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], 0u + 24u);
    c.budget -= 8;
L_00284368:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284370u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00284370u) [[unlikely]] return; }
L_00284370:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002843B0; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 2880u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[29].w[0] + 60u));
    st16((c.r[2].w[0] + 20u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 14;
L_002843B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002843B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x002843B8u) [[unlikely]] return; }
L_002843B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002844D8; } }
L_002843C0:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], 0u + 255u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 24u);  if (t) { goto L_002843F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002843D8u);  if (depth < kMaxDepth) unit_0010(c, 15u, depth + 1u); else { c.pc = 0x00140210u; return; } if (c.pc != 0x002843D8u) [[unlikely]] return; }
L_002843D8:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[3], 0u + 4096u);
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[2], 0u + 16384u);
    if (c.r[4].d[0] == 0) c.r[3].d[0] = c.r[2].d[0];
    st16((c.r[29].w[0] + 60u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], 0u + 24u);
    c.budget -= 8;
L_002843F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284400u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00284400u) [[unlikely]] return; }
L_00284400:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00284440; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 2880u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[29].w[0] + 60u));
    st16((c.r[2].w[0] + 20u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 14;
L_00284440:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284448u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00284448u) [[unlikely]] return; }
L_00284448:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002844D8; } }
L_00284450:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], 0u + 255u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 24u);  if (t) { goto L_00284488; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284468u);  if (depth < kMaxDepth) unit_0010(c, 15u, depth + 1u); else { c.pc = 0x00140210u; return; } if (c.pc != 0x00284468u) [[unlikely]] return; }
L_00284468:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[3], 0u + 4096u);
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[2], 0u + 16384u);
    if (c.r[4].d[0] == 0) c.r[3].d[0] = c.r[2].d[0];
    st16((c.r[29].w[0] + 60u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], 0u + 24u);
    c.budget -= 8;
L_00284488:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284490u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00284490u) [[unlikely]] return; }
L_00284490:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002844D0; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 2880u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[29].w[0] + 60u));
    st16((c.r[2].w[0] + 20u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 14;
L_002844D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002844D8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x002844D8u) [[unlikely]] return; }
L_002844D8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002844DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002844F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028450Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x0028450Cu) [[unlikely]] return; }
L_0028450C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 992u);
    st32((c.r[18].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8896u)));
    set32(c.r[17], ld32((c.r[3].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], ld32((c.r[17].w[0])));  if (t) { goto L_0028453C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0028480C; } }
L_0028453C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284544u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00284544u) [[unlikely]] return; }
L_00284544:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0028457C; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 5504u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_0028457C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284584u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00284584u) [[unlikely]] return; }
L_00284584:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028458Cu); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0028458Cu) [[unlikely]] return; }
L_0028458C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002845C4; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 2912u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_002845C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002845CCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x002845CCu) [[unlikely]] return; }
L_002845CC:
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[2], c.r[4].w[0] - 250u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[4].w[0] - 231u);  if (t) { goto L_00284638; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002845E8u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002845E8u) [[unlikely]] return; }
L_002845E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00284628; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 2880u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 398u));
    st16((c.r[2].w[0] + 20u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 14;
L_00284628:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284630u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00284630u) [[unlikely]] return; }
L_00284630:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0028480C; } }
L_00284638:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0028465C; } }
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & 25ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028465C; } }
    c.r[5].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_0028465C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[2], 0u + 233u);  if (t) { goto L_0028466C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002846E0; } }
L_0028466C:
    st16((c.r[29].w[0] + 76u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u - 65u);
    c.r[5].d[0] = ld8((c.r[29].w[0] + 77u));
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    set32(c.r[4], 0u + 24u);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284690u); st8((c.r[29].w[0] + 77u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00284690u) [[unlikely]] return; }
L_00284690:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002846D0; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 2880u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[29].w[0] + 76u));
    st16((c.r[2].w[0] + 20u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 14;
L_002846D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002846D8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x002846D8u) [[unlikely]] return; }
L_002846D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00284808; } }
L_002846E0:
    set32(c.r[2], 0u + 232u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 232u);  if (t) { goto L_0028477C; } }
    c.f[1] = ld32((c.r[16].w[0] + 224u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00284778; } }
    st16((c.r[29].w[0] + 72u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u - 129u);
    c.r[5].d[0] = ld8((c.r[29].w[0] + 73u));
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    set32(c.r[4], 0u + 24u);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284728u); st8((c.r[29].w[0] + 73u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00284728u) [[unlikely]] return; }
L_00284728:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00284768; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 2880u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[29].w[0] + 72u));
    st16((c.r[2].w[0] + 20u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 14;
L_00284768:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284770u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00284770u) [[unlikely]] return; }
L_00284770:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00284808; } }
L_00284778:
    set32(c.r[2], 0u + 232u);
    c.budget -= 1;
L_0028477C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00284808; } }
    c.f[1] = ld32((c.r[16].w[0] + 224u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00284808; } }
    st16((c.r[29].w[0] + 68u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u - 33u);
    c.r[5].d[0] = ld8((c.r[29].w[0] + 69u));
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    set32(c.r[4], 0u + 24u);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002847C0u); st8((c.r[29].w[0] + 69u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002847C0u) [[unlikely]] return; }
L_002847C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00284800; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 2880u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[29].w[0] + 68u));
    st16((c.r[2].w[0] + 20u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 14;
L_00284800:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284808u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00284808u) [[unlikely]] return; }
L_00284808:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0028480C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00284830:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284848u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x00284848u) [[unlikely]] return; }
L_00284848:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 976u);
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284864u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00284864u) [[unlikely]] return; }
L_00284864:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0028489C; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 5504u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_0028489C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002848A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x002848A4u) [[unlikely]] return; }
L_002848A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002848ACu); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002848ACu) [[unlikely]] return; }
L_002848AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002848E4; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 2912u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_002848E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002848ECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x002848ECu) [[unlikely]] return; }
L_002848EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002848F4u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002848F4u) [[unlikely]] return; }
L_002848F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00284934; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 2880u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 398u));
    st16((c.r[2].w[0] + 20u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 14;
L_00284934:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028493Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0028493Cu) [[unlikely]] return; }
L_0028493C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00284960:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284974u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x00284974u) [[unlikely]] return; }
L_00284974:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], 0u + 20u);
    set32(c.r[2], c.r[2].w[0] + 960u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284988u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00284988u) [[unlikely]] return; }
L_00284988:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002849C0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 5504u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_002849C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002849C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x002849C8u) [[unlikely]] return; }
L_002849C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002849D0u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002849D0u) [[unlikely]] return; }
L_002849D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00284A08; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 2912u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_00284A08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284A10u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00284A10u) [[unlikely]] return; }
L_00284A10:
    c.r[5].d[0] = ld8((c.r[29].w[0] + 44u));
    set32(c.r[2], 0u - 129u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    set32(c.r[4], 0u + 24u);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284A30u); st8((c.r[29].w[0] + 44u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00284A30u) [[unlikely]] return; }
L_00284A30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00284A70; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 2816u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[29].w[0] + 44u));
    st16((c.r[2].w[0] + 20u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 14;
L_00284A70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284A78u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00284A78u) [[unlikely]] return; }
L_00284A78:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00284A90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284AA8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x00284AA8u) [[unlikely]] return; }
L_00284AA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], 0u + 20u);
    set32(c.r[2], c.r[2].w[0] + 944u);
    set32(c.r[16], c.r[17].w[0] + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284AC0u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00284AC0u) [[unlikely]] return; }
L_00284AC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00284AF8; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 5504u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_00284AF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284B00u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00284B00u) [[unlikely]] return; }
L_00284B00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284B08u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00284B08u) [[unlikely]] return; }
L_00284B08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00284B40; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 2912u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_00284B40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284B48u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00284B48u) [[unlikely]] return; }
L_00284B48:
    c.r[5].d[0] = ld8((c.r[29].w[0] + 60u));
    set32(c.r[2], 0u - 129u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    set32(c.r[4], 0u + 24u);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284B68u); st8((c.r[29].w[0] + 60u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00284B68u) [[unlikely]] return; }
L_00284B68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00284BA8; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 2816u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[29].w[0] + 60u));
    st16((c.r[2].w[0] + 20u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 14;
L_00284BA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284BB0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00284BB0u) [[unlikely]] return; }
L_00284BB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284BB8u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00284BB8u) [[unlikely]] return; }
L_00284BB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00284BF8; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 3104u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 42u));
    st16((c.r[2].w[0] + 20u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 14;
L_00284BF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284C00u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00284C00u) [[unlikely]] return; }
L_00284C00:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00284C20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284C38u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x00284C38u) [[unlikely]] return; }
L_00284C38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], 0u + 20u);
    set32(c.r[2], c.r[2].w[0] + 928u);
    set32(c.r[16], c.r[17].w[0] + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284C50u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00284C50u) [[unlikely]] return; }
L_00284C50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00284C88; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 5504u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_00284C88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284C90u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00284C90u) [[unlikely]] return; }
L_00284C90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284C98u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00284C98u) [[unlikely]] return; }
L_00284C98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00284CD0; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 2912u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_00284CD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284CD8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00284CD8u) [[unlikely]] return; }
L_00284CD8:
    c.r[5].d[0] = ld8((c.r[29].w[0] + 60u));
    set32(c.r[2], 0u - 129u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    set32(c.r[4], 0u + 24u);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284CF8u); st8((c.r[29].w[0] + 60u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00284CF8u) [[unlikely]] return; }
L_00284CF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00284D38; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 2816u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[29].w[0] + 60u));
    st16((c.r[2].w[0] + 20u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 14;
L_00284D38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284D40u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00284D40u) [[unlikely]] return; }
L_00284D40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284D48u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00284D48u) [[unlikely]] return; }
L_00284D48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00284D88; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 3136u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 42u));
    st16((c.r[2].w[0] + 20u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 14;
L_00284D88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284D90u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00284D90u) [[unlikely]] return; }
L_00284D90:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00284DB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284DC4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x00284DC4u) [[unlikely]] return; }
L_00284DC4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], 0u + 20u);
    set32(c.r[2], c.r[2].w[0] + 912u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284DD8u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00284DD8u) [[unlikely]] return; }
L_00284DD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00284E10; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 5504u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_00284E10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284E18u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00284E18u) [[unlikely]] return; }
L_00284E18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284E20u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00284E20u) [[unlikely]] return; }
L_00284E20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00284E58; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 2912u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_00284E58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284E60u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00284E60u) [[unlikely]] return; }
L_00284E60:
    c.r[5].d[0] = ld8((c.r[29].w[0] + 44u));
    set32(c.r[2], 0u - 65u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    set32(c.r[4], 0u + 24u);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284E80u); st8((c.r[29].w[0] + 44u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00284E80u) [[unlikely]] return; }
L_00284E80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00284EC0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 2816u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[29].w[0] + 44u));
    st16((c.r[2].w[0] + 20u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 14;
L_00284EC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284EC8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00284EC8u) [[unlikely]] return; }
L_00284EC8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00284EE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284EF4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x00284EF4u) [[unlikely]] return; }
L_00284EF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], 0u + 20u);
    set32(c.r[2], c.r[2].w[0] + 896u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284F08u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00284F08u) [[unlikely]] return; }
L_00284F08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00284F40; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 5504u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_00284F40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284F48u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00284F48u) [[unlikely]] return; }
L_00284F48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284F50u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00284F50u) [[unlikely]] return; }
L_00284F50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00284F88; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 2912u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_00284F88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284F90u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00284F90u) [[unlikely]] return; }
L_00284F90:
    c.r[5].d[0] = ld8((c.r[29].w[0] + 44u));
    set32(c.r[2], 0u - 9u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    set32(c.r[4], 0u + 24u);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284FB0u); st8((c.r[29].w[0] + 44u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00284FB0u) [[unlikely]] return; }
L_00284FB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00284FF0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 2816u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[29].w[0] + 44u));
    st16((c.r[2].w[0] + 20u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 14;
L_00284FF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284FF8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00284FF8u) [[unlikely]] return; }
L_00284FF8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00285010:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285024u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x00285024u) [[unlikely]] return; }
L_00285024:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], 0u + 20u);
    set32(c.r[2], c.r[2].w[0] + 880u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285038u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00285038u) [[unlikely]] return; }
L_00285038:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00285070; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 5504u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_00285070:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285078u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00285078u) [[unlikely]] return; }
L_00285078:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285080u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00285080u) [[unlikely]] return; }
L_00285080:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002850B8; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 2912u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_002850B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002850C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x002850C0u) [[unlikely]] return; }
L_002850C0:
    c.r[5].d[0] = ld8((c.r[29].w[0] + 44u));
    set32(c.r[2], 0u - 33u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    set32(c.r[4], 0u + 24u);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002850E0u); st8((c.r[29].w[0] + 44u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002850E0u) [[unlikely]] return; }
L_002850E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00285120; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 2816u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[29].w[0] + 44u));
    st16((c.r[2].w[0] + 20u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 14;
L_00285120:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285128u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00285128u) [[unlikely]] return; }
L_00285128:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00285140:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285154u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x00285154u) [[unlikely]] return; }
L_00285154:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], 0u + 64u);
    set32(c.r[2], c.r[2].w[0] + 864u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285168u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00285168u) [[unlikely]] return; }
L_00285168:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00285180; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028517Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 74u, depth + 1u); else { c.pc = 0x0028CE90u; return; } if (c.pc != 0x0028517Cu) [[unlikely]] return; }
L_0028517C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00285180:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285188u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00285188u) [[unlikely]] return; }
L_00285188:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285190u); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00285190u) [[unlikely]] return; }
L_00285190:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002851C8; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 5568u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_002851C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002851D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x002851D0u) [[unlikely]] return; }
L_002851D0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002851F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285208u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x00285208u) [[unlikely]] return; }
L_00285208:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], 0u + 32u);
    set32(c.r[2], c.r[2].w[0] + 848u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028521Cu); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0028521Cu) [[unlikely]] return; }
L_0028521C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002852A0; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[5], c.r[5].w[0] + 6048u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 2464u);
    set32(c.r[3], 0u + 2u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285260u); st32((c.r[2].w[0] + 24u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0010(c, 15u, depth + 1u); else { c.pc = 0x00140210u; return; } if (c.pc != 0x00285260u) [[unlikely]] return; }
L_00285260:
    set32(c.r[5], 0u + 100u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028526Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 228u, depth + 1u); else { c.pc = 0x0011B928u; return; } if (c.pc != 0x0028526Cu) [[unlikely]] return; }
L_0028526C:
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0028528C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 4096u);  if (t) { goto L_00285290; } }
L_0028528C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00285290:
    st16((c.r[16].w[0] + 20u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 28u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
L_002852A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002852A8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x002852A8u) [[unlikely]] return; }
L_002852A8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002852C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002852D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x002852D4u) [[unlikely]] return; }
L_002852D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], 0u + 20u);
    set32(c.r[2], c.r[2].w[0] + 832u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002852E8u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002852E8u) [[unlikely]] return; }
L_002852E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00285320; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 2432u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_00285320:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285328u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00285328u) [[unlikely]] return; }
L_00285328:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00285340:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285354u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x00285354u) [[unlikely]] return; }
L_00285354:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], 0u + 20u);
    set32(c.r[2], c.r[2].w[0] + 816u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285368u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00285368u) [[unlikely]] return; }
L_00285368:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002853A0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 2400u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_002853A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002853A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x002853A8u) [[unlikely]] return; }
L_002853A8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002853C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002853D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x002853D4u) [[unlikely]] return; }
L_002853D4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 800u);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00285400:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[18], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[19], c.r[3].w[0] + 24u);
    set32(c.r[17], ld32((c.r[18].w[0])));
    set32(c.r[3], ld32((c.r[17].w[0] + 464u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[16], ld32((c.r[17].w[0] + 984u)));  if (t) { goto L_00285440; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00285840; } }
L_00285440:
    c.r[3].d[0] = ld64((c.r[17].w[0] + 704u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[4].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[4].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00285460; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028583C; } }
L_00285460:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002855C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285480u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00285480u) [[unlikely]] return; }
L_00285480:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 14u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_002855B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285494u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0059(c, 66u, depth + 1u); else { c.pc = 0x00264F20u; return; } if (c.pc != 0x00285494u) [[unlikely]] return; }
L_00285494:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002854BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002854A4u); set32(c.r[5], 0u + 300u);  if (depth < kMaxDepth) unit_0059(c, 62u, depth + 1u); else { c.pc = 0x00264E00u; return; } if (c.pc != 0x002854A4u) [[unlikely]] return; }
L_002854A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002854BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002854B4u);  if (depth < kMaxDepth) unit_0034(c, 199u, depth + 1u); else { c.pc = 0x001D2AD0u; return; } if (c.pc != 0x002854B4u) [[unlikely]] return; }
L_002854B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002855B4; } }
L_002854BC:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 429u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { goto L_002855B4; } }
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[5].w[0] - 19984u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].d[0] = ld64((c.r[5].w[0]));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    set32(c.r[2], 0u + 60u);
    st64((c.r[4].w[0]), c.r[3].d[0]);
    st32((c.r[4].w[0] + 8u), c.f[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 31456u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 408u)));
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[29].w[0]);
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], ld32((c.r[3].w[0] + 96u)));  if (t) { goto L_0028550C; } }
    breakpoint(c, 0x00285508u);
    c.budget -= 1;
L_0028550C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = c.lo.d[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028551Cu);  if (depth < kMaxDepth) unit_0070(c, 103u, depth + 1u); else { c.pc = 0x002C1E50u; return; } if (c.pc != 0x0028551Cu) [[unlikely]] return; }
L_0028551C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00285578; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00285534; } }
    set32(c.r[2], c.r[2].w[0] + 436u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_00285534:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285540u); c.r[5].d[0] = c.r[2].d[0] | 18512ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x00285540u) [[unlikely]] return; }
L_00285540:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0028554C; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_0028554C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285554u);  if (depth < kMaxDepth) unit_003C(c, 311u, depth + 1u); else { c.pc = 0x001F3D10u; return; } if (c.pc != 0x00285554u) [[unlikely]] return; }
L_00285554:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[17].w[0], c.r[2].w[0]);  if (t) { goto L_00285564; } }
    breakpoint(c, 0x00285560u);
    c.budget -= 1;
L_00285564:
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[16], c.r[16].w[0] - c.r[2].w[0]);
    c.budget -= 5;
L_00285578:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { goto L_00285584; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00285584:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028558Cu);  if (depth < kMaxDepth) unit_0010(c, 15u, depth + 1u); else { c.pc = 0x00140210u; return; } if (c.pc != 0x0028558Cu) [[unlikely]] return; }
L_0028558C:
    set32(c.r[5], 0u + 100u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285598u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 228u, depth + 1u); else { c.pc = 0x0011B928u; return; } if (c.pc != 0x00285598u) [[unlikely]] return; }
L_00285598:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[1].d[0] = c.r[2].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002855B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002855B4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0052(c, 295u, depth + 1u); else { c.pc = 0x0024BC80u; return; } if (c.pc != 0x002855B4u) [[unlikely]] return; }
L_002855B4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_002855B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002855C0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005C(c, 87u, depth + 1u); else { c.pc = 0x00271590u; return; } if (c.pc != 0x002855C0u) [[unlikely]] return; }
L_002855C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028583C; } }
L_002855C8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00800000u);  if (t) { goto L_00285734; } }
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00285734; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002855ECu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002855ECu) [[unlikely]] return; }
L_002855EC:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 14u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00285728; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285600u);  if (depth < kMaxDepth) unit_0059(c, 66u, depth + 1u); else { c.pc = 0x00264F20u; return; } if (c.pc != 0x00285600u) [[unlikely]] return; }
L_00285600:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00285628; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285610u); set32(c.r[5], 0u + 300u);  if (depth < kMaxDepth) unit_0059(c, 62u, depth + 1u); else { c.pc = 0x00264E00u; return; } if (c.pc != 0x00285610u) [[unlikely]] return; }
L_00285610:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00285628; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285620u);  if (depth < kMaxDepth) unit_0034(c, 199u, depth + 1u); else { c.pc = 0x001D2AD0u; return; } if (c.pc != 0x00285620u) [[unlikely]] return; }
L_00285620:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00285728; } }
L_00285628:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 429u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028572C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[5].w[0] - 19968u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].d[0] = ld64((c.r[5].w[0]));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    set32(c.r[2], 0u + 60u);
    st64((c.r[4].w[0]), c.r[3].d[0]);
    st32((c.r[4].w[0] + 8u), c.f[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 31456u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 408u)));
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[29].w[0]);
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], ld32((c.r[3].w[0] + 80u)));  if (t) { goto L_00285680; } }
    breakpoint(c, 0x0028567Cu);
    c.budget -= 1;
L_00285680:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = c.lo.d[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285690u);  if (depth < kMaxDepth) unit_0070(c, 103u, depth + 1u); else { c.pc = 0x002C1E50u; return; } if (c.pc != 0x00285690u) [[unlikely]] return; }
L_00285690:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002856EC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002856A8; } }
    set32(c.r[2], c.r[2].w[0] + 436u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002856A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002856B4u); c.r[5].d[0] = c.r[2].d[0] | 18512ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x002856B4u) [[unlikely]] return; }
L_002856B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002856C0; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_002856C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002856C8u);  if (depth < kMaxDepth) unit_003C(c, 311u, depth + 1u); else { c.pc = 0x001F3D10u; return; } if (c.pc != 0x002856C8u) [[unlikely]] return; }
L_002856C8:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[17].w[0], c.r[2].w[0]);  if (t) { goto L_002856D8; } }
    breakpoint(c, 0x002856D4u);
    c.budget -= 1;
L_002856D8:
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[16], c.r[16].w[0] - c.r[2].w[0]);
    c.budget -= 5;
L_002856EC:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { goto L_002856F8; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002856F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285700u);  if (depth < kMaxDepth) unit_0010(c, 15u, depth + 1u); else { c.pc = 0x00140210u; return; } if (c.pc != 0x00285700u) [[unlikely]] return; }
L_00285700:
    set32(c.r[5], 0u + 100u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028570Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 228u, depth + 1u); else { c.pc = 0x0011B928u; return; } if (c.pc != 0x0028570Cu) [[unlikely]] return; }
L_0028570C:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[1].d[0] = c.r[2].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00285728; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285728u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0052(c, 295u, depth + 1u); else { c.pc = 0x0024BC80u; return; } if (c.pc != 0x00285728u) [[unlikely]] return; }
L_00285728:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0028572C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028583C; } }
L_00285734:
    c.r[4].d[0] = ld64((c.r[17].w[0] + 712u));
    c.r[2].d[0] = c.r[4].d[0] & 4ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (t) { goto L_0028575C; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285754u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_005C(c, 87u, depth + 1u); else { c.pc = 0x00271590u; return; } if (c.pc != 0x00285754u) [[unlikely]] return; }
L_00285754:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028583C; } }
L_0028575C:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00285788; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[4].d[0] & 8192ull;  if (t) { goto L_0028579C; } }
L_00285788:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285794u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_005C(c, 87u, depth + 1u); else { c.pc = 0x00271590u; return; } if (c.pc != 0x00285794u) [[unlikely]] return; }
L_00285794:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028583C; } }
L_0028579C:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002857B8; } }
    c.r[2].d[0] = c.r[4].d[0] & 16384ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002857CC; } }
L_002857B8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002857C4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_005C(c, 87u, depth + 1u); else { c.pc = 0x00271590u; return; } if (c.pc != 0x002857C4u) [[unlikely]] return; }
L_002857C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028583C; } }
L_002857CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002857D4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0059(c, 56u, depth + 1u); else { c.pc = 0x00264C70u; return; } if (c.pc != 0x002857D4u) [[unlikely]] return; }
L_002857D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00285830; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002857E4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 199u, depth + 1u); else { c.pc = 0x001D2AD0u; return; } if (c.pc != 0x002857E4u) [[unlikely]] return; }
L_002857E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0028582C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002857F4u);  if (depth < kMaxDepth) unit_0034(c, 103u, depth + 1u); else { c.pc = 0x001D0E60u; return; } if (c.pc != 0x002857F4u) [[unlikely]] return; }
L_002857F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0028582C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285804u);  if (depth < kMaxDepth) unit_0034(c, 105u, depth + 1u); else { c.pc = 0x001D0EA0u; return; } if (c.pc != 0x00285804u) [[unlikely]] return; }
L_00285804:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0028582C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285814u);  if (depth < kMaxDepth) unit_0034(c, 109u, depth + 1u); else { c.pc = 0x001D0F00u; return; } if (c.pc != 0x00285814u) [[unlikely]] return; }
L_00285814:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0028582C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285824u);  if (depth < kMaxDepth) unit_0034(c, 105u, depth + 1u); else { c.pc = 0x001D0EA0u; return; } if (c.pc != 0x00285824u) [[unlikely]] return; }
L_00285824:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00285838; } }
L_0028582C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00285830:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285838u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005C(c, 87u, depth + 1u); else { c.pc = 0x00271590u; return; } if (c.pc != 0x00285838u) [[unlikely]] return; }
L_00285838:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0028583C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00285840:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00285860:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285874u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x00285874u) [[unlikely]] return; }
L_00285874:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 784u);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002858A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002858B8u); set32(c.r[4], ld32((c.r[2].w[0] + 20u)));  if (depth < kMaxDepth) unit_0052(c, 295u, depth + 1u); else { c.pc = 0x0024BC80u; return; } if (c.pc != 0x002858B8u) [[unlikely]] return; }
L_002858B8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002858D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00285918; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 784u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285900u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x00285900u) [[unlikely]] return; }
L_00285900:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0028591C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285918u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00285918u) [[unlikely]] return; }
L_00285918:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0028591C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00285930:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00285978; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 800u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285960u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x00285960u) [[unlikely]] return; }
L_00285960:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0028597C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285978u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00285978u) [[unlikely]] return; }
L_00285978:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0028597C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00285990:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002859D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 816u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002859C0u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x002859C0u) [[unlikely]] return; }
L_002859C0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002859DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002859D8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002859D8u) [[unlikely]] return; }
L_002859D8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002859DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002859F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00285A00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00285A48; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 832u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285A30u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x00285A30u) [[unlikely]] return; }
L_00285A30:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00285A4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285A48u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00285A48u) [[unlikely]] return; }
L_00285A48:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00285A4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00285A60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00285A70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00285AB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 848u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285AA0u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x00285AA0u) [[unlikely]] return; }
L_00285AA0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00285ABC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285AB8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00285AB8u) [[unlikely]] return; }
L_00285AB8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00285ABC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00285AD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00285AE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00285B28; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 864u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285B10u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x00285B10u) [[unlikely]] return; }
L_00285B10:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00285B2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285B28u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00285B28u) [[unlikely]] return; }
L_00285B28:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00285B2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00285B40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00285B50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00285B98; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 880u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285B80u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x00285B80u) [[unlikely]] return; }
L_00285B80:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00285B9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285B98u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00285B98u) [[unlikely]] return; }
L_00285B98:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00285B9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00285BB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00285BC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00285C08; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 896u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285BF0u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x00285BF0u) [[unlikely]] return; }
L_00285BF0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00285C0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285C08u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00285C08u) [[unlikely]] return; }
L_00285C08:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00285C0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00285C20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00285C30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00285C78; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 912u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285C60u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x00285C60u) [[unlikely]] return; }
L_00285C60:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00285C7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285C78u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00285C78u) [[unlikely]] return; }
L_00285C78:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00285C7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00285C90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00285CA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00285CE8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 928u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285CD0u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x00285CD0u) [[unlikely]] return; }
L_00285CD0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00285CEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285CE8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00285CE8u) [[unlikely]] return; }
L_00285CE8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00285CEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00285D00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00285D10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00285D58; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 944u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285D40u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x00285D40u) [[unlikely]] return; }
L_00285D40:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00285D5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285D58u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00285D58u) [[unlikely]] return; }
L_00285D58:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00285D5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00285D70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00285D80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00285DC8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 960u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285DB0u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x00285DB0u) [[unlikely]] return; }
L_00285DB0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00285DCC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285DC8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00285DC8u) [[unlikely]] return; }
L_00285DC8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00285DCC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00285DE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00285DF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00285E38; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 976u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285E20u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x00285E20u) [[unlikely]] return; }
L_00285E20:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00285E3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285E38u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00285E38u) [[unlikely]] return; }
L_00285E38:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00285E3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00285E50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00285E60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00285EA8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 992u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285E90u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x00285E90u) [[unlikely]] return; }
L_00285E90:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00285EAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285EA8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00285EA8u) [[unlikely]] return; }
L_00285EA8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00285EAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00285EC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00285ED0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00285F18; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1008u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285F00u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x00285F00u) [[unlikely]] return; }
L_00285F00:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00285F1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285F18u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00285F18u) [[unlikely]] return; }
L_00285F18:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00285F1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00285F30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00285F40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00285F88; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1024u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285F70u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x00285F70u) [[unlikely]] return; }
L_00285F70:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00285F8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285F88u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00285F88u) [[unlikely]] return; }
L_00285F88:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00285F8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00285FA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00285FB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00285FF8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1040u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285FE0u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x00285FE0u) [[unlikely]] return; }
L_00285FE0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00285FFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285FF8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00285FF8u) [[unlikely]] return; }
L_00285FF8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00285FFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00286010:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00286020:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00286068; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1056u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286050u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x00286050u) [[unlikely]] return; }
L_00286050:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0028606C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286068u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00286068u) [[unlikely]] return; }
L_00286068:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0028606C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00286080:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002860C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1072u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002860B0u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x002860B0u) [[unlikely]] return; }
L_002860B0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002860CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002860C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002860C8u) [[unlikely]] return; }
L_002860C8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002860CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002860E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_002860F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00286138; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1088u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286120u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x00286120u) [[unlikely]] return; }
L_00286120:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0028613C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286138u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00286138u) [[unlikely]] return; }
L_00286138:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0028613C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00286150:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00286160:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002861A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1104u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286190u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x00286190u) [[unlikely]] return; }
L_00286190:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002861AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002861A8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002861A8u) [[unlikely]] return; }
L_002861A8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002861AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002861C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_002861D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00286218; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1120u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286200u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x00286200u) [[unlikely]] return; }
L_00286200:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0028621C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286218u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00286218u) [[unlikely]] return; }
L_00286218:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0028621C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00286230:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00286240:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00286288; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1136u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286270u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x00286270u) [[unlikely]] return; }
L_00286270:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0028628C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286288u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00286288u) [[unlikely]] return; }
L_00286288:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0028628C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002862A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_002862B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002862F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1152u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002862E0u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x002862E0u) [[unlikely]] return; }
L_002862E0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002862FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002862F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002862F8u) [[unlikely]] return; }
L_002862F8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002862FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00286310:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00286320:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00286368; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1168u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286350u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x00286350u) [[unlikely]] return; }
L_00286350:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0028636C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286368u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00286368u) [[unlikely]] return; }
L_00286368:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0028636C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00286380:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00286390:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002863D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1184u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002863C0u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x002863C0u) [[unlikely]] return; }
L_002863C0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002863DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002863D8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002863D8u) [[unlikely]] return; }
L_002863D8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002863DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002863F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00286400:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00286448; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1200u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286430u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x00286430u) [[unlikely]] return; }
L_00286430:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0028644C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286448u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00286448u) [[unlikely]] return; }
L_00286448:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0028644C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00286460:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00286470:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002864B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1216u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002864A0u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x002864A0u) [[unlikely]] return; }
L_002864A0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002864BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002864B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002864B8u) [[unlikely]] return; }
L_002864B8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002864BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002864D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_002864E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00286528; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1232u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286510u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x00286510u) [[unlikely]] return; }
L_00286510:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0028652C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286528u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00286528u) [[unlikely]] return; }
L_00286528:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0028652C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00286540:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00286550:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00286598; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1248u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286580u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x00286580u) [[unlikely]] return; }
L_00286580:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0028659C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286598u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00286598u) [[unlikely]] return; }
L_00286598:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0028659C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002865B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_002865C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00286608; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1264u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002865F0u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x002865F0u) [[unlikely]] return; }
L_002865F0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0028660C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286608u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00286608u) [[unlikely]] return; }
L_00286608:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0028660C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00286620:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00286630:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00286678; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1280u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286660u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x00286660u) [[unlikely]] return; }
L_00286660:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0028667C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286678u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00286678u) [[unlikely]] return; }
L_00286678:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0028667C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00286690:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_002866A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002866E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1296u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002866D0u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x002866D0u) [[unlikely]] return; }
L_002866D0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002866EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002866E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002866E8u) [[unlikely]] return; }
L_002866E8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002866EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00286700:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00286710:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00286758; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1312u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286740u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x00286740u) [[unlikely]] return; }
L_00286740:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0028675C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286758u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00286758u) [[unlikely]] return; }
L_00286758:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0028675C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00286770:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00286780:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002867C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1328u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002867B0u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x002867B0u) [[unlikely]] return; }
L_002867B0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002867CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002867C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002867C8u) [[unlikely]] return; }
L_002867C8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002867CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002867E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_002867F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00286838; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1344u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286820u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x00286820u) [[unlikely]] return; }
L_00286820:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0028683C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286838u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00286838u) [[unlikely]] return; }
L_00286838:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0028683C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00286850:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00286860:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002868A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1360u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286890u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x00286890u) [[unlikely]] return; }
L_00286890:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002868AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002868A8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002868A8u) [[unlikely]] return; }
L_002868A8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002868AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002868C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_002868D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00286918; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1376u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286900u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x00286900u) [[unlikely]] return; }
L_00286900:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0028691C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286918u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00286918u) [[unlikely]] return; }
L_00286918:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0028691C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00286930:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00286940:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00286988; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1392u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286970u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x00286970u) [[unlikely]] return; }
L_00286970:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0028698C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286988u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00286988u) [[unlikely]] return; }
L_00286988:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0028698C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002869A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_002869B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002869F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002869E0u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x002869E0u) [[unlikely]] return; }
L_002869E0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002869FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002869F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002869F8u) [[unlikely]] return; }
L_002869F8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002869FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00286A10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00286A20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00286A68; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1424u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286A50u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x00286A50u) [[unlikely]] return; }
L_00286A50:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00286A6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286A68u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00286A68u) [[unlikely]] return; }
L_00286A68:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00286A6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00286A80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00286A90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00286AD8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1440u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286AC0u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x00286AC0u) [[unlikely]] return; }
L_00286AC0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00286ADC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286AD8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00286AD8u) [[unlikely]] return; }
L_00286AD8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00286ADC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00286AF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00286B00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00286B48; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1456u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286B30u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x00286B30u) [[unlikely]] return; }
L_00286B30:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00286B4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286B48u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00286B48u) [[unlikely]] return; }
L_00286B48:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00286B4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00286B60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00286BA8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1472u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286B90u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x00286B90u) [[unlikely]] return; }
L_00286B90:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00286BAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286BA8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00286BA8u) [[unlikely]] return; }
L_00286BA8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00286BAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00286BC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00286BD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00286C18; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1488u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286C00u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x00286C00u) [[unlikely]] return; }
L_00286C00:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00286C1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286C18u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00286C18u) [[unlikely]] return; }
L_00286C18:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00286C1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00286C30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00286C40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00286C88; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1504u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286C70u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x00286C70u) [[unlikely]] return; }
L_00286C70:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00286C8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286C88u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00286C88u) [[unlikely]] return; }
L_00286C88:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00286C8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00286CA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00286CB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00286CF8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1520u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286CE0u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x00286CE0u) [[unlikely]] return; }
L_00286CE0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00286CFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286CF8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00286CF8u) [[unlikely]] return; }
L_00286CF8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00286CFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00286D10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00286D20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00286D68; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1536u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286D50u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x00286D50u) [[unlikely]] return; }
L_00286D50:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00286D6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286D68u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00286D68u) [[unlikely]] return; }
L_00286D68:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00286D6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00286D80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00286D90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00286DD8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1552u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286DC0u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x00286DC0u) [[unlikely]] return; }
L_00286DC0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00286DDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286DD8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00286DD8u) [[unlikely]] return; }
L_00286DD8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00286DDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00286DF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00286E00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00286E48; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1568u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286E30u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x00286E30u) [[unlikely]] return; }
L_00286E30:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00286E4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286E48u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00286E48u) [[unlikely]] return; }
L_00286E48:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00286E4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00286E60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00286E70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00286EB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1584u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286EA0u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x00286EA0u) [[unlikely]] return; }
L_00286EA0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00286EBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286EB8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00286EB8u) [[unlikely]] return; }
L_00286EB8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00286EBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00286ED0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00286EE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00286F28; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1600u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286F10u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x00286F10u) [[unlikely]] return; }
L_00286F10:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00286F2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286F28u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00286F28u) [[unlikely]] return; }
L_00286F28:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00286F2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00286F40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00286F50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00286F98; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1616u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286F80u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x00286F80u) [[unlikely]] return; }
L_00286F80:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00286F9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286F98u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00286F98u) [[unlikely]] return; }
L_00286F98:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00286F9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00286FB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00286FC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00287008; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1632u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286FF0u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x00286FF0u) [[unlikely]] return; }
L_00286FF0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0028700C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287008u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00287008u) [[unlikely]] return; }
L_00287008:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0028700C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00287020:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00287030:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00287078; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1648u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287060u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x00287060u) [[unlikely]] return; }
L_00287060:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0028707C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287078u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00287078u) [[unlikely]] return; }
L_00287078:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0028707C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00287090:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_002870A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002870E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1664u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002870D0u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271C40u; return; } if (c.pc != 0x002870D0u) [[unlikely]] return; }
L_002870D0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002870EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002870E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002870E8u) [[unlikely]] return; }
L_002870E8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002870EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00287100:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00287110:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00287130; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31840u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_00287174; } }
L_00287130:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00287150; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31776u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_00287174; } }
L_00287150:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 830u);  if (t) { goto L_00287174; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31712u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_00287174; } }
L_00287174:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00287180:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002871B8u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x002871B8u) [[unlikely]] return; }
L_002871B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[19].w[0] + 144u);
    set32(c.r[2], c.r[2].w[0] + 1696u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002871D0u); st32((c.r[19].w[0] + 128u), 0u);  if (depth < kMaxDepth) unit_0062(c, 263u, depth + 1u); else { c.pc = 0x0028B380u; return; } if (c.pc != 0x002871D0u) [[unlikely]] return; }
L_002871D0:
    set32(c.r[4], c.r[19].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002871DCu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0049(c, 271u, depth + 1u); else { c.pc = 0x002275A0u; return; } if (c.pc != 0x002871DCu) [[unlikely]] return; }
L_002871DC:
    set32(c.r[4], c.r[19].w[0] + 292u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002871ECu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 283u, depth + 1u); else { c.pc = 0x002277A0u; return; } if (c.pc != 0x002871ECu) [[unlikely]] return; }
L_002871EC:
    set32(c.r[4], c.r[19].w[0] + 336u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002871FCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 283u, depth + 1u); else { c.pc = 0x002277A0u; return; } if (c.pc != 0x002871FCu) [[unlikely]] return; }
L_002871FC:
    st32((c.r[19].w[0] + 388u), 0u);
    set32(c.r[4], c.r[19].w[0] + 400u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028720Cu); st32((c.r[19].w[0] + 392u), 0u);  if (depth < kMaxDepth) unit_0017(c, 177u, depth + 1u); else { c.pc = 0x0015E070u; return; } if (c.pc != 0x0028720Cu) [[unlikely]] return; }
L_0028720C:
    set32(c.r[4], c.r[19].w[0] + 656u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028721Cu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0025(c, 304u, depth + 1u); else { c.pc = 0x00196C90u; return; } if (c.pc != 0x0028721Cu) [[unlikely]] return; }
L_0028721C:
    set32(c.r[4], c.r[19].w[0] + 816u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028722Cu); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_0025(c, 304u, depth + 1u); else { c.pc = 0x00196C90u; return; } if (c.pc != 0x0028722Cu) [[unlikely]] return; }
L_0028722C:
    set32(c.r[4], c.r[19].w[0] + 16u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287240u); st32((c.r[19].w[0] + 976u), 0u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x00287240u) [[unlikely]] return; }
L_00287240:
    st32((c.r[19].w[0] + 24u), c.r[20].w[0]);
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00287248:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 380u), 0u);
    c.r[2].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00287248u | kUnwind; return; } goto L_00287248; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], 0u + 10010u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[20], c.r[2].w[0] + 624u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028727Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x0028727Cu) [[unlikely]] return; }
L_0028727C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028728Cu); c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x0028728Cu) [[unlikely]] return; }
L_0028728C:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028729Cu); set32(c.r[4], c.r[19].w[0] + 656u);  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x0028729Cu) [[unlikely]] return; }
L_0028729C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002872A4u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002872A4u) [[unlikely]] return; }
L_002872A4:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull; set32(c.r[4], 0u + 368u);  if (t) { goto L_002872CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002872B8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0054(c, 263u, depth + 1u); else { c.pc = 0x00251A60u; return; } if (c.pc != 0x002872B8u) [[unlikely]] return; }
L_002872B8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002872C4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x002872C4u) [[unlikely]] return; }
L_002872C4:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 368u);
    c.budget -= 2;
L_002872CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002872D4u); st32((c.r[19].w[0] + 388u), c.r[20].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002872D4u) [[unlikely]] return; }
L_002872D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002872E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002872E4u);  if (depth < kMaxDepth) unit_0018(c, 2u, depth + 1u); else { c.pc = 0x001607D0u; return; } if (c.pc != 0x002872E4u) [[unlikely]] return; }
L_002872E4:
    st32((c.r[19].w[0] + 392u), c.r[2].w[0]);
    set32(c.r[5], 0u + 16u);
    set32(c.r[4], ld32((c.r[19].w[0] + 392u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42F00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    st32((c.r[4].w[0] + 160u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 392u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028730Cu); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 17u, depth + 1u); else { c.pc = 0x00160A20u; return; } if (c.pc != 0x0028730Cu) [[unlikely]] return; }
L_0028730C:
    st32((c.r[19].w[0] + 12u), c.r[18].w[0]);
    set32(c.r[3], 0u + 5u);
    st32((c.r[19].w[0] + 44u), 0u);
    set32(c.r[2], 0u + 255u);
    st32((c.r[19].w[0] + 56u), 0u);
    st32((c.r[19].w[0] + 60u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 64u), c.r[16].w[0]);
    st32((c.r[19].w[0] + 68u), 0u);
    st32((c.r[19].w[0] + 72u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0])));
    st32((c.r[19].w[0] + 76u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 80u), 0u);
    st32((c.r[19].w[0] + 84u), 0u);
    st32((c.r[19].w[0] + 88u), 0u);
    st32((c.r[19].w[0] + 92u), 0u);
    st32((c.r[19].w[0] + 96u), 0u);
    st32((c.r[19].w[0] + 128u), 0u);
    st32((c.r[19].w[0] + 132u), 0u);
    st8((c.r[19].w[0] + 240u), static_cast<std::uint8_t>(0u));
    st32((c.r[19].w[0] + 244u), 0u);
    st32((c.r[19].w[0] + 252u), 0u);
    st32((c.r[19].w[0] + 248u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 25;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_002873CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287378u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00287378u) [[unlikely]] return; }
L_00287378:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 3u);  if (t) { goto L_0028738C; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028738Cu); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 304u, depth + 1u); else { c.pc = 0x00196C90u; return; } if (c.pc != 0x0028738Cu) [[unlikely]] return; }
L_0028738C:
    st32((c.r[19].w[0] + 976u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[5], 0u + 10000u);
    set32(c.r[16], c.r[2].w[0] + 624u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002873A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x002873A8u) [[unlikely]] return; }
L_002873A8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002873B8u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x002873B8u) [[unlikely]] return; }
L_002873B8:
    set32(c.r[4], ld32((c.r[19].w[0] + 976u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002873C8u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x002873C8u) [[unlikely]] return; }
L_002873C8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_002873CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002873D4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 209u, depth + 1u); else { c.pc = 0x0028AC20u; return; } if (c.pc != 0x002873D4u) [[unlikely]] return; }
L_002873D4:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00287400:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00287570; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1696u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_00287434:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 380u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[2].w[0] + 380u);  if (t) { goto L_00287460; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00287460; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00287460u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00287460u) [[unlikely]] return; }
L_00287460:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00287434u | kUnwind; return; } goto L_00287434; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 388u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00287494; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00287494; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00287494u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00287494u) [[unlikely]] return; }
L_00287494:
    st32((c.r[18].w[0] + 388u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 392u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002874BC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002874BC; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002874BCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002874BCu) [[unlikely]] return; }
L_002874BC:
    st32((c.r[18].w[0] + 392u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 976u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002874E4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002874E4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002874E4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002874E4u) [[unlikely]] return; }
L_002874E4:
    set32(c.r[4], c.r[18].w[0] + 816u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002874F4u); st32((c.r[18].w[0] + 976u), 0u);  if (depth < kMaxDepth) unit_0025(c, 310u, depth + 1u); else { c.pc = 0x00196D20u; return; } if (c.pc != 0x002874F4u) [[unlikely]] return; }
L_002874F4:
    set32(c.r[4], c.r[18].w[0] + 656u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287500u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0025(c, 310u, depth + 1u); else { c.pc = 0x00196D20u; return; } if (c.pc != 0x00287500u) [[unlikely]] return; }
L_00287500:
    set32(c.r[4], c.r[18].w[0] + 400u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);  if (t) { goto L_0028751C; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 17408u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028751Cu); st32((c.r[18].w[0] + 576u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 264u, depth + 1u); else { c.pc = 0x0014ADA0u; return; } if (c.pc != 0x0028751Cu) [[unlikely]] return; }
L_0028751C:
    set32(c.r[4], c.r[18].w[0] + 336u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287528u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0049(c, 294u, depth + 1u); else { c.pc = 0x00227920u; return; } if (c.pc != 0x00287528u) [[unlikely]] return; }
L_00287528:
    set32(c.r[4], c.r[18].w[0] + 292u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287534u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0049(c, 294u, depth + 1u); else { c.pc = 0x00227920u; return; } if (c.pc != 0x00287534u) [[unlikely]] return; }
L_00287534:
    set32(c.r[4], c.r[18].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287540u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0049(c, 274u, depth + 1u); else { c.pc = 0x002275F0u; return; } if (c.pc != 0x00287540u) [[unlikely]] return; }
L_00287540:
    set32(c.r[4], c.r[18].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028754Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0062(c, 278u, depth + 1u); else { c.pc = 0x0028B510u; return; } if (c.pc != 0x0028754Cu) [[unlikely]] return; }
L_0028754C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287558u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x00287558u) [[unlikely]] return; }
L_00287558:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00287574; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287570u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00287570u) [[unlikely]] return; }
L_00287570:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00287574:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00287590:
    st32((c.r[4].w[0] + 44u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 92u), 0u);  c.pc = t; return; }
L_002875A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 88u), c.r[5].w[0]);  c.pc = t; return; }
L_002875B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    c.f[0] = ld32((c.r[4].w[0] + 268u));
    set32(c.r[16], ld32((c.r[2].w[0] + 332u)));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 268u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], c.f[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002875FCu); st32((c.r[16].w[0] + 300u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002875FCu) [[unlikely]] return; }
L_002875FC:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 440u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287628u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00287628u) [[unlikely]] return; }
L_00287628:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 268u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 268u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[16].w[0] + 300u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 548u)));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028767Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0028767Cu) [[unlikely]] return; }
L_0028767C:
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 268u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 268u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[16].w[0] + 300u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 288u));
    c.budget -= 19;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002876DC; } }
    c.f[0] = ld32((c.r[17].w[0] + 268u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[17].w[0] + 248u), c.r[3].w[0]);
    c.budget -= 5;
L_002876DC:
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_0028777C; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 31328u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00284000u < 16384u) { entry = entries_0061[(t - 0x00284000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00287704:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028770Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 454u, depth + 1u); else { c.pc = 0x002877E0u; return; } if (c.pc != 0x0028770Cu) [[unlikely]] return; }
L_0028770C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00287780; } }
L_00287714:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028771Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 464u, depth + 1u); else { c.pc = 0x002878A0u; return; } if (c.pc != 0x0028771Cu) [[unlikely]] return; }
L_0028771C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028777C; } }
L_00287724:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028772Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 471u, depth + 1u); else { c.pc = 0x00287930u; return; } if (c.pc != 0x0028772Cu) [[unlikely]] return; }
L_0028772C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028777C; } }
L_00287734:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028773Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 477u, depth + 1u); else { c.pc = 0x002879C0u; return; } if (c.pc != 0x0028773Cu) [[unlikely]] return; }
L_0028773C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028777C; } }
L_00287744:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028774Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 484u, depth + 1u); else { c.pc = 0x00287A50u; return; } if (c.pc != 0x0028774Cu) [[unlikely]] return; }
L_0028774C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028777C; } }
L_00287754:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028775Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 491u, depth + 1u); else { c.pc = 0x00287AE0u; return; } if (c.pc != 0x0028775Cu) [[unlikely]] return; }
L_0028775C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028777C; } }
L_00287764:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028776Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 454u, depth + 1u); else { c.pc = 0x002877E0u; return; } if (c.pc != 0x0028776Cu) [[unlikely]] return; }
L_0028776C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028777C; } }
L_00287774:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028777Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 454u, depth + 1u); else { c.pc = 0x002877E0u; return; } if (c.pc != 0x0028777Cu) [[unlikely]] return; }
L_0028777C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00287780:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00287790:
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002877D0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 31296u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00284000u < 16384u) { entry = entries_0061[(t - 0x00284000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002877BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002877D0; } }
L_002877C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002877D0; } }
L_002877CC:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_002877D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002877E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002877F8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0061(c, 450u, depth + 1u); else { c.pc = 0x00287790u; return; } if (c.pc != 0x002877F8u) [[unlikely]] return; }
L_002877F8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287808u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 507u, depth + 1u); else { c.pc = 0x00287DF0u; return; } if (c.pc != 0x00287808u) [[unlikely]] return; }
L_00287808:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287810u); set32(c.r[4], ld32((c.r[17].w[0] + 44u)));  if (depth < kMaxDepth) unit_0053(c, 138u, depth + 1u); else { c.pc = 0x0024CE70u; return; } if (c.pc != 0x00287810u) [[unlikely]] return; }
L_00287810:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00287828; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287824u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 2u, depth + 1u); else { c.pc = 0x00288010u; return; } if (c.pc != 0x00287824u) [[unlikely]] return; }
L_00287824:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00287828:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287830u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 504u, depth + 1u); else { c.pc = 0x00287CD0u; return; } if (c.pc != 0x00287830u) [[unlikely]] return; }
L_00287830:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028783Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 34u, depth + 1u); else { c.pc = 0x00288950u; return; } if (c.pc != 0x0028783Cu) [[unlikely]] return; }
L_0028783C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287848u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 5u, depth + 1u); else { c.pc = 0x00288110u; return; } if (c.pc != 0x00287848u) [[unlikely]] return; }
L_00287848:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287854u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 497u, depth + 1u); else { c.pc = 0x00287B40u; return; } if (c.pc != 0x00287854u) [[unlikely]] return; }
L_00287854:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287860u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 12u, depth + 1u); else { c.pc = 0x002883C0u; return; } if (c.pc != 0x00287860u) [[unlikely]] return; }
L_00287860:
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00287884; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 296u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 32u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00287884; } }
    st32((c.r[17].w[0] + 96u), 0u);
    c.budget -= 1;
L_00287884:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002878A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002878B8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0061(c, 450u, depth + 1u); else { c.pc = 0x00287790u; return; } if (c.pc != 0x002878B8u) [[unlikely]] return; }
L_002878B8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002878C8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 507u, depth + 1u); else { c.pc = 0x00287DF0u; return; } if (c.pc != 0x002878C8u) [[unlikely]] return; }
L_002878C8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002878D4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 5u, depth + 1u); else { c.pc = 0x00288110u; return; } if (c.pc != 0x002878D4u) [[unlikely]] return; }
L_002878D4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002878E0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 497u, depth + 1u); else { c.pc = 0x00287B40u; return; } if (c.pc != 0x002878E0u) [[unlikely]] return; }
L_002878E0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002878ECu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 12u, depth + 1u); else { c.pc = 0x002883C0u; return; } if (c.pc != 0x002878ECu) [[unlikely]] return; }
L_002878EC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002878F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 63u, depth + 1u); else { c.pc = 0x00288F90u; return; } if (c.pc != 0x002878F8u) [[unlikely]] return; }
L_002878F8:
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0028791C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 296u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 32u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0028791C; } }
    st32((c.r[17].w[0] + 96u), 0u);
    c.budget -= 1;
L_0028791C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00287930:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287948u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0061(c, 450u, depth + 1u); else { c.pc = 0x00287790u; return; } if (c.pc != 0x00287948u) [[unlikely]] return; }
L_00287948:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287958u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 507u, depth + 1u); else { c.pc = 0x00287DF0u; return; } if (c.pc != 0x00287958u) [[unlikely]] return; }
L_00287958:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287964u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 5u, depth + 1u); else { c.pc = 0x00288110u; return; } if (c.pc != 0x00287964u) [[unlikely]] return; }
L_00287964:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287970u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 12u, depth + 1u); else { c.pc = 0x002883C0u; return; } if (c.pc != 0x00287970u) [[unlikely]] return; }
L_00287970:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028797Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 90u, depth + 1u); else { c.pc = 0x00289660u; return; } if (c.pc != 0x0028797Cu) [[unlikely]] return; }
L_0028797C:
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002879A0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 296u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 32u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002879A0; } }
    st32((c.r[17].w[0] + 96u), 0u);
    c.budget -= 1;
L_002879A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002879C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002879D8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0061(c, 450u, depth + 1u); else { c.pc = 0x00287790u; return; } if (c.pc != 0x002879D8u) [[unlikely]] return; }
L_002879D8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002879E8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 507u, depth + 1u); else { c.pc = 0x00287DF0u; return; } if (c.pc != 0x002879E8u) [[unlikely]] return; }
L_002879E8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002879F4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 5u, depth + 1u); else { c.pc = 0x00288110u; return; } if (c.pc != 0x002879F4u) [[unlikely]] return; }
L_002879F4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287A00u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 497u, depth + 1u); else { c.pc = 0x00287B40u; return; } if (c.pc != 0x00287A00u) [[unlikely]] return; }
L_00287A00:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287A0Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 12u, depth + 1u); else { c.pc = 0x002883C0u; return; } if (c.pc != 0x00287A0Cu) [[unlikely]] return; }
L_00287A0C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287A18u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 130u, depth + 1u); else { c.pc = 0x00289D40u; return; } if (c.pc != 0x00287A18u) [[unlikely]] return; }
L_00287A18:
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00287A3C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 296u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 32u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00287A3C; } }
    st32((c.r[17].w[0] + 96u), 0u);
    c.budget -= 1;
L_00287A3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00287A50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287A68u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0061(c, 450u, depth + 1u); else { c.pc = 0x00287790u; return; } if (c.pc != 0x00287A68u) [[unlikely]] return; }
L_00287A68:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287A78u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 507u, depth + 1u); else { c.pc = 0x00287DF0u; return; } if (c.pc != 0x00287A78u) [[unlikely]] return; }
L_00287A78:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287A84u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 5u, depth + 1u); else { c.pc = 0x00288110u; return; } if (c.pc != 0x00287A84u) [[unlikely]] return; }
L_00287A84:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287A90u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 497u, depth + 1u); else { c.pc = 0x00287B40u; return; } if (c.pc != 0x00287A90u) [[unlikely]] return; }
L_00287A90:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287A9Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 12u, depth + 1u); else { c.pc = 0x002883C0u; return; } if (c.pc != 0x00287A9Cu) [[unlikely]] return; }
L_00287A9C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287AA8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 145u, depth + 1u); else { c.pc = 0x0028A070u; return; } if (c.pc != 0x00287AA8u) [[unlikely]] return; }
L_00287AA8:
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00287ACC; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 296u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 32u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00287ACC; } }
    st32((c.r[17].w[0] + 96u), 0u);
    c.budget -= 1;
L_00287ACC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00287AE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287AF8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0061(c, 450u, depth + 1u); else { c.pc = 0x00287790u; return; } if (c.pc != 0x00287AF8u) [[unlikely]] return; }
L_00287AF8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287B08u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 507u, depth + 1u); else { c.pc = 0x00287DF0u; return; } if (c.pc != 0x00287B08u) [[unlikely]] return; }
L_00287B08:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287B14u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 5u, depth + 1u); else { c.pc = 0x00288110u; return; } if (c.pc != 0x00287B14u) [[unlikely]] return; }
L_00287B14:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287B20u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 12u, depth + 1u); else { c.pc = 0x002883C0u; return; } if (c.pc != 0x00287B20u) [[unlikely]] return; }
L_00287B20:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287B2Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 497u, depth + 1u); else { c.pc = 0x00287B40u; return; } if (c.pc != 0x00287B2Cu) [[unlikely]] return; }
L_00287B2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00287B40:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00287B98; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_00287B8C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00287B80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00287BA0; } }
L_00287B80:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u - 39u);  if (t) { goto L_00287BA0; } }
L_00287B8C:
    set32(c.r[18], 0u + 30u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u - 39u);  if (t) { goto L_00287BA0; } }
L_00287B98:
    set32(c.r[18], 0u - 30u);
    set32(c.r[17], 0u - 39u);
    c.budget -= 2;
L_00287BA0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 440u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287BB4u); set32(c.r[4], ld32((c.r[19].w[0] + 44u)));  if (depth < kMaxDepth) unit_000B(c, 110u, depth + 1u); else { c.pc = 0x0012D160u; return; } if (c.pc != 0x00287BB4u) [[unlikely]] return; }
L_00287BB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00287BD0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 31232u);
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 356u), 0u);  if (t) { goto L_00287BE4; } }
L_00287BD0:
    set32(c.r[4], ld32((c.r[19].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287BDCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x00287BDCu) [[unlikely]] return; }
L_00287BDC:
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 356u), 0u);
    c.budget -= 2;
L_00287BE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287BFCu); st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0018(c, 67u, depth + 1u); else { c.pc = 0x00162250u; return; } if (c.pc != 0x00287BFCu) [[unlikely]] return; }
L_00287BFC:
    c.r[2].d[0] = c.r[2].sd[0] < 195ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_00287C24; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[1].w[0] - 30816u));
    st32((c.r[16].w[0] + 16u), c.f[0]);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_00287C38; } }
L_00287C24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[1].w[0] - 30824u));
    st32((c.r[16].w[0] + 16u), c.f[0]);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 5;
L_00287C38:
    c.f[2] = c.r[18].w[0];
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.f[0] = c.r[17].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[3] = ld32((c.r[19].w[0] + 112u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[1] = ld32((c.r[19].w[0] + 116u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[14] = ld32((c.r[19].w[0] + 120u));
    c.f[12] = fp::add(c.f[3], c.f[2]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00287C6Cu); c.f[13] = fp::add(c.f[1], c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00287C6Cu) [[unlikely]] return; }
L_00287C6C:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00287C8Cu); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00287C8Cu) [[unlikely]] return; }
L_00287C8C:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00287CACu); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00287CACu) [[unlikely]] return; }
L_00287CAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00287CD0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00287D34; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00287D28; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00287D0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00287D3C; } }
L_00287D0C:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[18], 0u - 39u);  if (t) { goto L_00287D20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 132u);  if (t) { goto L_00287D3C; } }
L_00287D20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u - 132u);  if (t) { goto L_00287D3C; } }
L_00287D28:
    set32(c.r[4], 0u + 134u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u - 39u);  if (t) { goto L_00287D3C; } }
L_00287D34:
    set32(c.r[4], 0u - 134u);
    set32(c.r[18], 0u - 39u);
    c.budget -= 2;
L_00287D3C:
    c.f[0] = c.r[4].w[0];
    set32(c.r[17], c.r[29].w[0] + 68u);
    c.f[1] = ld32((c.r[16].w[0] + 112u));
    set32(c.r[5], 0u + 2u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[4], c.r[16].w[0] + 144u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = c.r[18].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 116u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 120u));
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 268u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287D8Cu); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0062(c, 288u, depth + 1u); else { c.pc = 0x0028B700u; return; } if (c.pc != 0x00287D8Cu) [[unlikely]] return; }
L_00287D8C:
    c.f[0] = c.r[18].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A80000u);
    c.f[1] = ld32((c.r[16].w[0] + 116u));
    set32(c.r[4], c.r[16].w[0] + 144u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[5], 0u + 3u);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 268u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287DCCu); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0062(c, 288u, depth + 1u); else { c.pc = 0x0028B700u; return; } if (c.pc != 0x00287DCCu) [[unlikely]] return; }
L_00287DCC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00287DF0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00287E5C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_00287E48; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00287E34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_00287E70; } }
L_00287E34:
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[18], 0u - 60u);
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u - 61u);  if (t) { goto L_00287E6C; } }
L_00287E48:
    set32(c.r[20], 0u + 30u);
    set32(c.r[18], 0u - 60u);
    c.r[19].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u - 61u);  if (t) { goto L_00287E6C; } }
L_00287E5C:
    set32(c.r[20], 0u - 30u);
    set32(c.r[18], 0u - 60u);
    c.r[19].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[17], 0u - 61u);
    c.budget -= 4;
L_00287E6C:
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_00287E70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287E78u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00287E78u) [[unlikely]] return; }
L_00287E78:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[6], c.r[29].w[0] + 160u);
    set32(c.r[3], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    set32(c.r[7], c.r[29].w[0] + 128u);
    st128((c.r[6].w[0]) & ~15u, c.r[2]);
    mmi::paddub(c.r[2], c.r[2], c.r[0]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    mmi::paddub(c.r[2], c.r[2], c.r[0]);
    st128((c.r[5].w[0]) & ~15u, c.r[2]);
    ld128((c.r[3].w[0]) & ~15u, c.r[2]);
    st128((c.r[7].w[0]) & ~15u, c.r[2]);
    c.f[0] = ld32((c.r[16].w[0] + 268u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    st32((c.r[29].w[0] + 156u), 0u);
    st32((c.r[29].w[0] + 140u), 0u);
    set32(c.r[2], c.f[0]);
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287ECCu); set32(c.r[4], ld32((c.r[16].w[0] + 392u)));  if (depth < kMaxDepth) unit_0018(c, 14u, depth + 1u); else { c.pc = 0x001609B0u; return; } if (c.pc != 0x00287ECCu) [[unlikely]] return; }
L_00287ECC:
    set32(c.r[4], ld32((c.r[16].w[0] + 392u)));
    c.f[2] = c.r[20].w[0];
    c.f[0] = c.r[18].w[0];
    c.f[3] = ld32((c.r[16].w[0] + 112u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[1] = ld32((c.r[16].w[0] + 116u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[14] = ld32((c.r[16].w[0] + 120u));
    c.f[12] = fp::add(c.f[3], c.f[2]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00287F00u); c.f[13] = fp::add(c.f[1], c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00287F00u) [[unlikely]] return; }
L_00287F00:
    set32(c.r[4], ld32((c.r[16].w[0] + 392u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00287F14u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00287F14u) [[unlikely]] return; }
L_00287F14:
    set32(c.r[2], ld32((c.r[16].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 4u);  if (t) { goto L_00287F40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287F28u); set32(c.r[4], 0u + 227u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00287F28u) [[unlikely]] return; }
L_00287F28:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287F34u); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00287F34u) [[unlikely]] return; }
L_00287F34:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 112u) & ~15u, c.r[2]);  if (t) { goto L_00287F5C; } }
L_00287F40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287F48u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00287F48u) [[unlikely]] return; }
L_00287F48:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287F54u); set32(c.r[4], 0u + 15u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00287F54u) [[unlikely]] return; }
L_00287F54:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[2]);
    c.budget -= 2;
L_00287F5C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 112u)));
    set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));
    c.f[0] = c.r[17].w[0];
    c.f[1] = c.r[19].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[17], ld32((c.r[4].w[0] + 548u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[2] = fp::cvt_s_w(c.f[1]);
    st32((c.r[17].w[0] + 48u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 116u)));
    st32((c.r[17].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 120u)));
    st32((c.r[17].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 352u), c.r[18].w[0]);
    st32((c.r[17].w[0] + 356u), 0u);
    c.f[1] = ld32((c.r[1].w[0] - 30824u));
    st32((c.r[17].w[0] + 16u), c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = ld32((c.r[1].w[0] - 30824u));
    st32((c.r[17].w[0] + 20u), c.f[1]);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.f[3] = ld32((c.r[16].w[0] + 112u));
    c.f[1] = ld32((c.r[16].w[0] + 116u));
    c.f[14] = ld32((c.r[16].w[0] + 120u));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[12] = fp::add(c.f[3], c.f[2]);
    c.budget -= 32;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00287FDCu); c.f[13] = fp::add(c.f[1], c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00287FDCu) [[unlikely]] return; }
L_00287FDC:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00287FF0u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00287FF0u) [[unlikely]] return; }
L_00287FF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.budget -= 4;
    [[clang::musttail]] return unit_0062(c, 1u, depth);
}

}
