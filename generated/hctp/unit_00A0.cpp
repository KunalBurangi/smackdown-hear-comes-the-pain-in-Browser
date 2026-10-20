#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00A0[4096] = {
    1, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 6, 0, 7, 0, 8, 0, 0, 0, 0, 0, 0,
    9, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    14, 0, 15, 0, 0, 16, 0, 17, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0,
    0, 0, 0, 23, 0, 0, 24, 0, 25, 0, 0, 26, 0, 27, 0, 28, 0, 29, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0,
    0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0,
    43, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0,
    49, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 0,
    59, 0, 0, 0, 0, 0, 60, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 63, 0, 64, 0, 0, 0, 0, 0, 65, 0, 66, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 69, 0, 0,
    0, 0, 0, 70, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0,
    73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 0,
    0, 76, 0, 0, 0, 0, 0, 0, 77, 0, 0, 78, 0, 0, 79, 0, 0, 80, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0,
    83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0,
    0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 107, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0,
    0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0,
    0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 123, 0, 0, 0, 124, 0, 0, 125, 0, 0, 126, 0, 0, 0, 0,
    127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 129, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0,
    0, 0, 0, 0, 133, 0, 134, 0, 0, 135, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0,
    138, 0, 0, 0, 0, 0, 0, 139, 0, 140, 0, 141, 0, 0, 0, 0, 0, 0, 142, 0, 143, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0,
    0, 0, 0, 0, 151, 0, 0, 0, 0, 152, 0, 153, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0,
    0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0,
    158, 0, 0, 0, 0, 0, 159, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 170, 0, 0, 171, 0, 0, 0,
    0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 0, 175, 0, 0, 176, 0, 0, 0, 0,
    0, 177, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0,
    0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 183, 0, 184, 0, 0, 0, 0, 185, 0, 0,
    186, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0,
    191, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 197, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 199, 0, 0, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 203, 0,
    0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 206, 0, 207, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 209, 0, 210, 0, 0, 0, 0, 0, 0, 211, 0,
    0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0,
    0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0,
    222, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 227, 0, 0,
    0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 0, 232, 0, 233, 0, 0, 0, 234, 0, 0, 235, 0, 0, 0,
    0, 236, 0, 0, 0, 0, 237, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0,
    0, 0, 240, 0, 0, 0, 0, 241, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 0,
    245, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 250, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 254, 0, 0, 0, 0, 0,
    255, 0, 0, 0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    260, 0, 0, 0, 261, 0, 0, 0, 0, 262, 0, 0, 0, 0, 263, 0, 264, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 266, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0,
    0, 0, 0, 0, 0, 273, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 278, 0,
    279, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 285, 0, 0, 286, 0, 0, 287, 0, 0, 288, 0,
    0, 289, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 296, 0, 0, 297, 0, 0, 0, 0, 298, 0, 0, 299,
    0, 0, 0, 0, 300, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 303, 0, 0, 0, 0, 304, 0, 0, 305, 0, 0, 0, 0, 306, 0, 0, 307,
    0, 0, 0, 0, 308, 0, 0, 309, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 313,
    0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 316, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 325, 0, 0, 0,
    326, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 331, 0,
    0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 334, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    336, 0, 337, 0, 338, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 341, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 342, 0, 0, 343, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 346, 0, 347, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 348, 0, 0, 349, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 352, 0, 353, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 354, 0, 0, 355, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 358, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    360, 0, 0, 361, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 368, 0, 369,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 370, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 375, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 377,
    0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 380, 381, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0,
    383, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 387,
    0, 0, 0, 0, 388, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 394, 0, 395, 0, 0, 0, 0, 396, 0, 397, 0, 0, 0, 0, 398, 0,
    399, 0, 0, 0, 0, 400, 0, 401, 0, 0, 0, 0, 402, 0, 403, 0, 0, 0, 0, 404, 0, 405, 0, 0, 0, 0, 406, 0, 407, 0, 0, 0,
    0, 408, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 412, 0, 0,
    0, 0, 0, 413, 0, 0, 0, 0, 414, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 423, 0,
    0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 426, 0, 0, 0, 427, 0, 0, 428, 0, 0, 429, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 432, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 435, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 441, 0, 0, 0, 442,
    0, 0, 0, 443, 0, 0, 0, 444, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0,
    0, 0, 0, 0, 447, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0,
    451, 0, 0, 0, 0, 452, 0, 453, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0,
    456, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0,
    461, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 465, 0, 0,
    0, 0, 0, 466, 0, 0, 0, 0, 467, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 470, 0, 0, 0, 0, 471, 0, 0,
    0, 0, 0, 472, 0, 0, 0, 0, 473, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0,
    477, 0, 0, 0, 478, 0, 0, 0, 479, 0, 0, 0, 480, 0, 0, 0, 481, 0, 0, 0, 482, 0, 0, 0, 483, 0, 0, 0, 484, 0, 0, 0,
    0, 0, 0, 0, 485, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 488, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 491, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0,
    0, 493, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 495, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 497, 0, 498, 0, 0, 0, 0, 0,
    499, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0,
    0, 501, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0,
    505, 0, 506, 0, 0, 0, 0, 0, 507, 0, 0, 0, 508, 0, 0, 0, 0, 0, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 0, 0, 0, 511, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 517, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 518, 0, 519, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0, 0, 524, 0, 0, 0,
};

void unit_00A0(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00380000;
    case 2u: goto L_0038000C;
    case 3u: goto L_00380014;
    case 4u: goto L_00380040;
    case 5u: goto L_00380048;
    case 6u: goto L_00380054;
    case 7u: goto L_0038005C;
    case 8u: goto L_00380064;
    case 9u: goto L_00380080;
    case 10u: goto L_00380094;
    case 11u: goto L_003800B0;
    case 12u: goto L_003800CC;
    case 13u: goto L_003800D4;
    case 14u: goto L_00380100;
    case 15u: goto L_00380108;
    case 16u: goto L_00380114;
    case 17u: goto L_0038011C;
    case 18u: goto L_00380124;
    case 19u: goto L_00380140;
    case 20u: goto L_00380150;
    case 21u: goto L_00380160;
    case 22u: goto L_00380178;
    case 23u: goto L_0038018C;
    case 24u: goto L_00380198;
    case 25u: goto L_003801A0;
    case 26u: goto L_003801AC;
    case 27u: goto L_003801B4;
    case 28u: goto L_003801BC;
    case 29u: goto L_003801C4;
    case 30u: goto L_003801CC;
    case 31u: goto L_00380210;
    case 32u: goto L_00380268;
    case 33u: goto L_003802B0;
    case 34u: goto L_003802F8;
    case 35u: goto L_00380340;
    case 36u: goto L_00380388;
    case 37u: goto L_003803B0;
    case 38u: goto L_003803F4;
    case 39u: goto L_00380410;
    case 40u: goto L_0038042C;
    case 41u: goto L_00380448;
    case 42u: goto L_00380464;
    case 43u: goto L_00380480;
    case 44u: goto L_0038048C;
    case 45u: goto L_003804A4;
    case 46u: goto L_003804C0;
    case 47u: goto L_003804E0;
    case 48u: goto L_003804F0;
    case 49u: goto L_00380500;
    case 50u: goto L_00380510;
    case 51u: goto L_00380520;
    case 52u: goto L_00380530;
    case 53u: goto L_00380568;
    case 54u: goto L_00380594;
    case 55u: goto L_003805A4;
    case 56u: goto L_003805AC;
    case 57u: goto L_003805D8;
    case 58u: goto L_003805E8;
    case 59u: goto L_00380600;
    case 60u: goto L_00380618;
    case 61u: goto L_00380624;
    case 62u: goto L_00380648;
    case 63u: goto L_00380650;
    case 64u: goto L_00380658;
    case 65u: goto L_00380670;
    case 66u: goto L_00380678;
    case 67u: goto L_003806A0;
    case 68u: goto L_00380768;
    case 69u: goto L_00380774;
    case 70u: goto L_0038078C;
    case 71u: goto L_00380794;
    case 72u: goto L_003807E8;
    case 73u: goto L_00380800;
    case 74u: goto L_00380858;
    case 75u: goto L_00380868;
    case 76u: goto L_00380884;
    case 77u: goto L_003808A0;
    case 78u: goto L_003808AC;
    case 79u: goto L_003808B8;
    case 80u: goto L_003808C4;
    case 81u: goto L_003808D0;
    case 82u: goto L_003808E8;
    case 83u: goto L_00380900;
    case 84u: goto L_0038093C;
    case 85u: goto L_00380950;
    case 86u: goto L_00380988;
    case 87u: goto L_003809B4;
    case 88u: goto L_003809C4;
    case 89u: goto L_00380A60;
    case 90u: goto L_00380A90;
    case 91u: goto L_00380AA0;
    case 92u: goto L_00380AC0;
    case 93u: goto L_00380AE0;
    case 94u: goto L_00380AF4;
    case 95u: goto L_00380B0C;
    case 96u: goto L_00380B20;
    case 97u: goto L_00380B34;
    case 98u: goto L_00380B4C;
    case 99u: goto L_00380B60;
    case 100u: goto L_00380B88;
    case 101u: goto L_00380B98;
    case 102u: goto L_00380BA8;
    case 103u: goto L_00380BB8;
    case 104u: goto L_00380BC8;
    case 105u: goto L_00380BD8;
    case 106u: goto L_00380C44;
    case 107u: goto L_00380D04;
    case 108u: goto L_00380D0C;
    case 109u: goto L_00380D30;
    case 110u: goto L_00380D44;
    case 111u: goto L_00380D5C;
    case 112u: goto L_00380D70;
    case 113u: goto L_00380D84;
    case 114u: goto L_00380D9C;
    case 115u: goto L_00380DB0;
    case 116u: goto L_00380DC8;
    case 117u: goto L_00380DE4;
    case 118u: goto L_00380DF8;
    case 119u: goto L_00380E08;
    case 120u: goto L_00380E18;
    case 121u: goto L_00380E28;
    case 122u: goto L_00380E3C;
    case 123u: goto L_00380E44;
    case 124u: goto L_00380E54;
    case 125u: goto L_00380E60;
    case 126u: goto L_00380E6C;
    case 127u: goto L_00380E80;
    case 128u: goto L_00380EAC;
    case 129u: goto L_00380EB4;
    case 130u: goto L_00380ED0;
    case 131u: goto L_00380EE0;
    case 132u: goto L_00380EF4;
    case 133u: goto L_00380F10;
    case 134u: goto L_00380F18;
    case 135u: goto L_00380F24;
    case 136u: goto L_00380F38;
    case 137u: goto L_00380F64;
    case 138u: goto L_00380F80;
    case 139u: goto L_00380F9C;
    case 140u: goto L_00380FA4;
    case 141u: goto L_00380FAC;
    case 142u: goto L_00380FC8;
    case 143u: goto L_00380FD0;
    case 144u: goto L_00380FDC;
    case 145u: goto L_00380FF0;
    case 146u: goto L_0038101C;
    case 147u: goto L_00381030;
    case 148u: goto L_00381048;
    case 149u: goto L_00381054;
    case 150u: goto L_00381078;
    case 151u: goto L_00381090;
    case 152u: goto L_003810A4;
    case 153u: goto L_003810AC;
    case 154u: goto L_003810B4;
    case 155u: goto L_003810F8;
    case 156u: goto L_00381108;
    case 157u: goto L_00381278;
    case 158u: goto L_00381280;
    case 159u: goto L_00381298;
    case 160u: goto L_003812A0;
    case 161u: goto L_003812F4;
    case 162u: goto L_00381324;
    case 163u: goto L_00381340;
    case 164u: goto L_00381398;
    case 165u: goto L_003813C0;
    case 166u: goto L_003813E8;
    case 167u: goto L_00381410;
    case 168u: goto L_00381438;
    case 169u: goto L_00381448;
    case 170u: goto L_00381464;
    case 171u: goto L_00381470;
    case 172u: goto L_00381490;
    case 173u: goto L_003814B8;
    case 174u: goto L_003814D4;
    case 175u: goto L_003814E0;
    case 176u: goto L_003814EC;
    case 177u: goto L_00381504;
    case 178u: goto L_00381520;
    case 179u: goto L_00381560;
    case 180u: goto L_00381584;
    case 181u: goto L_003815A8;
    case 182u: goto L_003815CC;
    case 183u: goto L_003815D8;
    case 184u: goto L_003815E0;
    case 185u: goto L_003815F4;
    case 186u: goto L_00381600;
    case 187u: goto L_00381620;
    case 188u: goto L_00381640;
    case 189u: goto L_00381654;
    case 190u: goto L_0038166C;
    case 191u: goto L_00381680;
    case 192u: goto L_00381694;
    case 193u: goto L_003816AC;
    case 194u: goto L_003816C0;
    case 195u: goto L_003816E4;
    case 196u: goto L_003817EC;
    case 197u: goto L_003817F4;
    case 198u: goto L_003818A8;
    case 199u: goto L_003818B0;
    case 200u: goto L_003818C8;
    case 201u: goto L_003818D8;
    case 202u: goto L_003818E8;
    case 203u: goto L_003818F8;
    case 204u: goto L_00381908;
    case 205u: goto L_00381950;
    case 206u: goto L_0038196C;
    case 207u: goto L_00381974;
    case 208u: goto L_003819B8;
    case 209u: goto L_003819D4;
    case 210u: goto L_003819DC;
    case 211u: goto L_003819F8;
    case 212u: goto L_00381A10;
    case 213u: goto L_00381BCC;
    case 214u: goto L_00381C38;
    case 215u: goto L_00381C40;
    case 216u: goto L_00381CF4;
    case 217u: goto L_00381D10;
    case 218u: goto L_00381DF0;
    case 219u: goto L_00381EC0;
    case 220u: goto L_00381ED4;
    case 221u: goto L_00381EEC;
    case 222u: goto L_00381F00;
    case 223u: goto L_00381F14;
    case 224u: goto L_00381F2C;
    case 225u: goto L_00381F40;
    case 226u: goto L_00381F58;
    case 227u: goto L_00381F74;
    case 228u: goto L_00381F88;
    case 229u: goto L_00381F98;
    case 230u: goto L_00381FA8;
    case 231u: goto L_00381FB8;
    case 232u: goto L_00381FCC;
    case 233u: goto L_00381FD4;
    case 234u: goto L_00381FE4;
    case 235u: goto L_00381FF0;
    case 236u: goto L_00382004;
    case 237u: goto L_00382018;
    case 238u: goto L_00382024;
    case 239u: goto L_00382074;
    case 240u: goto L_00382088;
    case 241u: goto L_0038209C;
    case 242u: goto L_003820A8;
    case 243u: goto L_003820D8;
    case 244u: goto L_003820EC;
    case 245u: goto L_00382100;
    case 246u: goto L_0038210C;
    case 247u: goto L_0038213C;
    case 248u: goto L_00382150;
    case 249u: goto L_00382164;
    case 250u: goto L_00382170;
    case 251u: goto L_003821A0;
    case 252u: goto L_003821B4;
    case 253u: goto L_003821E0;
    case 254u: goto L_003821E8;
    case 255u: goto L_00382200;
    case 256u: goto L_00382210;
    case 257u: goto L_00382224;
    case 258u: goto L_00382240;
    case 259u: goto L_00382254;
    case 260u: goto L_00382280;
    case 261u: goto L_00382290;
    case 262u: goto L_003822A4;
    case 263u: goto L_003822B8;
    case 264u: goto L_003822C0;
    case 265u: goto L_003822DC;
    case 266u: goto L_003822F0;
    case 267u: goto L_0038231C;
    case 268u: goto L_00382330;
    case 269u: goto L_00382340;
    case 270u: goto L_00382350;
    case 271u: goto L_00382360;
    case 272u: goto L_00382370;
    case 273u: goto L_00382394;
    case 274u: goto L_003823A0;
    case 275u: goto L_003823D0;
    case 276u: goto L_00382414;
    case 277u: goto L_00382464;
    case 278u: goto L_00382478;
    case 279u: goto L_00382480;
    case 280u: goto L_00382488;
    case 281u: goto L_00382510;
    case 282u: goto L_00382574;
    case 283u: goto L_0038259C;
    case 284u: goto L_003825C4;
    case 285u: goto L_003825D4;
    case 286u: goto L_003825E0;
    case 287u: goto L_003825EC;
    case 288u: goto L_003825F8;
    case 289u: goto L_00382604;
    case 290u: goto L_0038261C;
    case 291u: goto L_00382640;
    case 292u: goto L_00382714;
    case 293u: goto L_00382738;
    case 294u: goto L_00382798;
    case 295u: goto L_003827BC;
    case 296u: goto L_003827D0;
    case 297u: goto L_003827DC;
    case 298u: goto L_003827F0;
    case 299u: goto L_003827FC;
    case 300u: goto L_00382810;
    case 301u: goto L_0038281C;
    case 302u: goto L_00382830;
    case 303u: goto L_0038283C;
    case 304u: goto L_00382850;
    case 305u: goto L_0038285C;
    case 306u: goto L_00382870;
    case 307u: goto L_0038287C;
    case 308u: goto L_00382890;
    case 309u: goto L_0038289C;
    case 310u: goto L_003828B0;
    case 311u: goto L_003828CC;
    case 312u: goto L_003828DC;
    case 313u: goto L_003828FC;
    case 314u: goto L_0038291C;
    case 315u: goto L_00382960;
    case 316u: goto L_00382978;
    case 317u: goto L_003829A8;
    case 318u: goto L_003829C0;
    case 319u: goto L_003829D4;
    case 320u: goto L_003829E4;
    case 321u: goto L_00382A10;
    case 322u: goto L_00382A2C;
    case 323u: goto L_00382A40;
    case 324u: goto L_00382A5C;
    case 325u: goto L_00382A70;
    case 326u: goto L_00382A80;
    case 327u: goto L_00382A90;
    case 328u: goto L_00382AA0;
    case 329u: goto L_00382AB4;
    case 330u: goto L_00382AE4;
    case 331u: goto L_00382AF8;
    case 332u: goto L_00382B08;
    case 333u: goto L_00382B18;
    case 334u: goto L_00382B28;
    case 335u: goto L_00382B3C;
    case 336u: goto L_00382B80;
    case 337u: goto L_00382B88;
    case 338u: goto L_00382B90;
    case 339u: goto L_00382BB0;
    case 340u: goto L_00382BE8;
    case 341u: goto L_00382BF0;
    case 342u: goto L_00382C18;
    case 343u: goto L_00382C24;
    case 344u: goto L_00382C2C;
    case 345u: goto L_00382C54;
    case 346u: goto L_00382C60;
    case 347u: goto L_00382C68;
    case 348u: goto L_00382C90;
    case 349u: goto L_00382C9C;
    case 350u: goto L_00382CA4;
    case 351u: goto L_00382CCC;
    case 352u: goto L_00382CD8;
    case 353u: goto L_00382CE0;
    case 354u: goto L_00382D08;
    case 355u: goto L_00382D14;
    case 356u: goto L_00382D1C;
    case 357u: goto L_00382D44;
    case 358u: goto L_00382D50;
    case 359u: goto L_00382D58;
    case 360u: goto L_00382D80;
    case 361u: goto L_00382D8C;
    case 362u: goto L_00382D94;
    case 363u: goto L_00382DBC;
    case 364u: goto L_00382DD0;
    case 365u: goto L_00382DEC;
    case 366u: goto L_00382E24;
    case 367u: goto L_00382E6C;
    case 368u: goto L_00382E74;
    case 369u: goto L_00382E7C;
    case 370u: goto L_00382F10;
    case 371u: goto L_00382F24;
    case 372u: goto L_00382F40;
    case 373u: goto L_00382F78;
    case 374u: goto L_00382FC0;
    case 375u: goto L_00382FC8;
    case 376u: goto L_00382FE0;
    case 377u: goto L_00382FFC;
    case 378u: goto L_00383014;
    case 379u: goto L_00383030;
    case 380u: goto L_0038304C;
    case 381u: goto L_00383050;
    case 382u: goto L_00383060;
    case 383u: goto L_00383080;
    case 384u: goto L_00383094;
    case 385u: goto L_003830D0;
    case 386u: goto L_003830E4;
    case 387u: goto L_003830FC;
    case 388u: goto L_00383110;
    case 389u: goto L_00383124;
    case 390u: goto L_0038313C;
    case 391u: goto L_00383150;
    case 392u: goto L_0038317C;
    case 393u: goto L_003831AC;
    case 394u: goto L_003831C0;
    case 395u: goto L_003831C8;
    case 396u: goto L_003831DC;
    case 397u: goto L_003831E4;
    case 398u: goto L_003831F8;
    case 399u: goto L_00383200;
    case 400u: goto L_00383214;
    case 401u: goto L_0038321C;
    case 402u: goto L_00383230;
    case 403u: goto L_00383238;
    case 404u: goto L_0038324C;
    case 405u: goto L_00383254;
    case 406u: goto L_00383268;
    case 407u: goto L_00383270;
    case 408u: goto L_00383284;
    case 409u: goto L_00383298;
    case 410u: goto L_003832C8;
    case 411u: goto L_003832E0;
    case 412u: goto L_003832F4;
    case 413u: goto L_0038330C;
    case 414u: goto L_00383320;
    case 415u: goto L_00383334;
    case 416u: goto L_0038334C;
    case 417u: goto L_00383360;
    case 418u: goto L_00383390;
    case 419u: goto L_003833D0;
    case 420u: goto L_003833F4;
    case 421u: goto L_00383444;
    case 422u: goto L_00383458;
    case 423u: goto L_00383478;
    case 424u: goto L_00383484;
    case 425u: goto L_003834B0;
    case 426u: goto L_00383508;
    case 427u: goto L_00383518;
    case 428u: goto L_00383524;
    case 429u: goto L_00383530;
    case 430u: goto L_00383548;
    case 431u: goto L_00383560;
    case 432u: goto L_00383578;
    case 433u: goto L_003835A8;
    case 434u: goto L_003835C0;
    case 435u: goto L_003835D4;
    case 436u: goto L_003835E4;
    case 437u: goto L_00383610;
    case 438u: goto L_00383628;
    case 439u: goto L_0038363C;
    case 440u: goto L_00383658;
    case 441u: goto L_0038366C;
    case 442u: goto L_0038367C;
    case 443u: goto L_0038368C;
    case 444u: goto L_0038369C;
    case 445u: goto L_003836B0;
    case 446u: goto L_003836F4;
    case 447u: goto L_00383710;
    case 448u: goto L_00383724;
    case 449u: goto L_00383740;
    case 450u: goto L_0038376C;
    case 451u: goto L_00383780;
    case 452u: goto L_00383794;
    case 453u: goto L_0038379C;
    case 454u: goto L_003837B8;
    case 455u: goto L_003837E4;
    case 456u: goto L_00383800;
    case 457u: goto L_0038381C;
    case 458u: goto L_00383834;
    case 459u: goto L_00383850;
    case 460u: goto L_0038386C;
    case 461u: goto L_00383880;
    case 462u: goto L_003838A0;
    case 463u: goto L_003838B4;
    case 464u: goto L_003838E0;
    case 465u: goto L_003838F4;
    case 466u: goto L_0038390C;
    case 467u: goto L_00383920;
    case 468u: goto L_00383934;
    case 469u: goto L_0038394C;
    case 470u: goto L_00383960;
    case 471u: goto L_00383974;
    case 472u: goto L_0038398C;
    case 473u: goto L_003839A0;
    case 474u: goto L_003839B4;
    case 475u: goto L_003839CC;
    case 476u: goto L_003839E0;
    case 477u: goto L_00383A00;
    case 478u: goto L_00383A10;
    case 479u: goto L_00383A20;
    case 480u: goto L_00383A30;
    case 481u: goto L_00383A40;
    case 482u: goto L_00383A50;
    case 483u: goto L_00383A60;
    case 484u: goto L_00383A70;
    case 485u: goto L_00383A90;
    case 486u: goto L_00383A98;
    case 487u: goto L_00383AE8;
    case 488u: goto L_00383AF8;
    case 489u: goto L_00383B20;
    case 490u: goto L_00383B3C;
    case 491u: goto L_00383B4C;
    case 492u: goto L_00383B60;
    case 493u: goto L_00383B84;
    case 494u: goto L_00383B98;
    case 495u: goto L_00383BB0;
    case 496u: goto L_00383BC0;
    case 497u: goto L_00383BE0;
    case 498u: goto L_00383BE8;
    case 499u: goto L_00383C00;
    case 500u: goto L_00383C60;
    case 501u: goto L_00383C84;
    case 502u: goto L_00383C8C;
    case 503u: goto L_00383CB4;
    case 504u: goto L_00383CE0;
    case 505u: goto L_00383D00;
    case 506u: goto L_00383D08;
    case 507u: goto L_00383D20;
    case 508u: goto L_00383D30;
    case 509u: goto L_00383D58;
    case 510u: goto L_00383DA4;
    case 511u: goto L_00383DC0;
    case 512u: goto L_00383DE0;
    case 513u: goto L_00383E10;
    case 514u: goto L_00383E30;
    case 515u: goto L_00383E9C;
    case 516u: goto L_00383ED8;
    case 517u: goto L_00383EF0;
    case 518u: goto L_00383F18;
    case 519u: goto L_00383F20;
    case 520u: goto L_00383F38;
    case 521u: goto L_00383F9C;
    case 522u: goto L_00383FC0;
    case 523u: goto L_00383FC8;
    case 524u: goto L_00383FF0;
    default: bad_entry(c, 0x00380000u); return;
    }
L_00380000:
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038000Cu); set32(c.r[5], 0u + 6u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038000Cu) [[unlikely]] return; }
L_0038000C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380014u); set32(c.r[4], c.r[16].w[0] + 276u);  if (depth < kMaxDepth) unit_000D(c, 69u, depth + 1u); else { c.pc = 0x001348D0u; return; } if (c.pc != 0x00380014u) [[unlikely]] return; }
L_00380014:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[2], 0u + 5u);
    st32((c.r[16].w[0] + 252u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 216u);
    st32((c.r[16].w[0] + 256u), c.r[3].w[0]);
    set32(c.r[5], c.r[16].w[0] + 252u);
    st32((c.r[16].w[0] + 260u), 0u);
    st32((c.r[16].w[0] + 264u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 268u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380040u); st32((c.r[16].w[0] + 272u), 0u);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x00380040u) [[unlikely]] return; }
L_00380040:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380048u);  if (depth < kMaxDepth) unit_009F(c, 200u, depth + 1u); else { c.pc = 0x0037DCF0u; return; } if (c.pc != 0x00380048u) [[unlikely]] return; }
L_00380048:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380054u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_009F(c, 211u, depth + 1u); else { c.pc = 0x0037DE40u; return; } if (c.pc != 0x00380054u) [[unlikely]] return; }
L_00380054:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038005Cu);  if (depth < kMaxDepth) unit_007A(c, 423u, depth + 1u); else { c.pc = 0x002EB590u; return; } if (c.pc != 0x0038005Cu) [[unlikely]] return; }
L_0038005C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380064u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007A(c, 454u, depth + 1u); else { c.pc = 0x002EB870u; return; } if (c.pc != 0x00380064u) [[unlikely]] return; }
L_00380064:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00380080:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380094u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 321u, depth + 1u); else { c.pc = 0x0012E630u; return; } if (c.pc != 0x00380094u) [[unlikely]] return; }
L_00380094:
    set32(c.r[4], ld32((c.r[16].w[0] + 208u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003800B0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003800B0u); set32(c.r[5], 0u + 162u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003800B0u) [[unlikely]] return; }
L_003800B0:
    set32(c.r[4], ld32((c.r[16].w[0] + 212u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003800CC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003800CCu); set32(c.r[5], 0u + 6u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003800CCu) [[unlikely]] return; }
L_003800CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003800D4u); set32(c.r[4], c.r[16].w[0] + 276u);  if (depth < kMaxDepth) unit_000D(c, 69u, depth + 1u); else { c.pc = 0x001348D0u; return; } if (c.pc != 0x003800D4u) [[unlikely]] return; }
L_003800D4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[2], 0u + 5u);
    st32((c.r[16].w[0] + 252u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 216u);
    st32((c.r[16].w[0] + 256u), c.r[3].w[0]);
    set32(c.r[5], c.r[16].w[0] + 252u);
    st32((c.r[16].w[0] + 260u), 0u);
    st32((c.r[16].w[0] + 264u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 268u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380100u); st32((c.r[16].w[0] + 272u), 0u);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x00380100u) [[unlikely]] return; }
L_00380100:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380108u);  if (depth < kMaxDepth) unit_009F(c, 200u, depth + 1u); else { c.pc = 0x0037DCF0u; return; } if (c.pc != 0x00380108u) [[unlikely]] return; }
L_00380108:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380114u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_009F(c, 211u, depth + 1u); else { c.pc = 0x0037DE40u; return; } if (c.pc != 0x00380114u) [[unlikely]] return; }
L_00380114:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038011Cu);  if (depth < kMaxDepth) unit_007A(c, 423u, depth + 1u); else { c.pc = 0x002EB590u; return; } if (c.pc != 0x0038011Cu) [[unlikely]] return; }
L_0038011C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380124u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007A(c, 454u, depth + 1u); else { c.pc = 0x002EB870u; return; } if (c.pc != 0x00380124u) [[unlikely]] return; }
L_00380124:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00380140:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0037FB50u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 428u, depth); }
L_00380150:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0037FA50u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 418u, depth); }
L_00380160:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 8u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380178u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x00380178u) [[unlikely]] return; }
L_00380178:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[4], 0u + 30u);
    set32(c.r[2], c.r[2].w[0] - 31232u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038018Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009F(c, 119u, depth + 1u); else { c.pc = 0x0037D1D0u; return; } if (c.pc != 0x0038018Cu) [[unlikely]] return; }
L_0038018C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380198u); set32(c.r[4], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x00380198u) [[unlikely]] return; }
L_00380198:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003801A0u); set32(c.r[4], 0u + 31u);  if (depth < kMaxDepth) unit_009F(c, 119u, depth + 1u); else { c.pc = 0x0037D1D0u; return; } if (c.pc != 0x003801A0u) [[unlikely]] return; }
L_003801A0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003801ACu); set32(c.r[4], c.r[16].w[0] + 288u);  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x003801ACu) [[unlikely]] return; }
L_003801AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003801B4u); set32(c.r[4], c.r[16].w[0] + 560u);  if (depth < kMaxDepth) unit_0017(c, 177u, depth + 1u); else { c.pc = 0x0015E070u; return; } if (c.pc != 0x003801B4u) [[unlikely]] return; }
L_003801B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003801BCu); set32(c.r[4], c.r[16].w[0] + 816u);  if (depth < kMaxDepth) unit_0017(c, 177u, depth + 1u); else { c.pc = 0x0015E070u; return; } if (c.pc != 0x003801BCu) [[unlikely]] return; }
L_003801BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003801C4u); set32(c.r[4], c.r[16].w[0] + 1072u);  if (depth < kMaxDepth) unit_0017(c, 177u, depth + 1u); else { c.pc = 0x0015E070u; return; } if (c.pc != 0x003801C4u) [[unlikely]] return; }
L_003801C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003801CCu); set32(c.r[4], c.r[16].w[0] + 1328u);  if (depth < kMaxDepth) unit_0017(c, 177u, depth + 1u); else { c.pc = 0x0015E070u; return; } if (c.pc != 0x003801CCu) [[unlikely]] return; }
L_003801CC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[1].w[0] - 952u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44070000u);
    c.f[12] = c.r[2].w[0];
    c.f[14] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x434C0000u);
    c.f[13] = c.r[2].w[0];
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 960u));
    st32((c.r[16].w[0] + 36u), c.f[0]);
    st32((c.r[16].w[0] + 40u), c.r[3].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 192u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 17;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00380210u); set32(c.r[4], c.r[16].w[0] + 16u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00380210u) [[unlikely]] return; }
L_00380210:
    st32((c.r[16].w[0] + 64u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 68u), 0u);
    set32(c.r[2], 0u + 64u);
    st32((c.r[16].w[0] + 72u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[16].w[0] + 76u), c.r[2].w[0]);
    c.f[14] = c.r[3].w[0];
    c.f[0] = ld32((c.r[1].w[0] - 968u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A90000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x435C0000u);
    c.f[13] = c.r[2].w[0];
    st32((c.r[16].w[0] + 304u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 976u));
    st32((c.r[16].w[0] + 308u), c.f[0]);
    st32((c.r[16].w[0] + 312u), c.r[3].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 464u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 22;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00380268u); set32(c.r[4], c.r[16].w[0] + 288u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00380268u) [[unlikely]] return; }
L_00380268:
    st32((c.r[16].w[0] + 336u), 0u);
    set32(c.r[2], 0u + 64u);
    st32((c.r[16].w[0] + 340u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43AA0000u);
    st32((c.r[16].w[0] + 344u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    st32((c.r[16].w[0] + 348u), c.r[2].w[0]);
    c.f[14] = 0u;
    st32((c.r[16].w[0] + 720u), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43860000u);
    st32((c.r[16].w[0] + 724u), c.r[3].w[0]);
    c.f[12] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[16].w[0] + 736u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[13] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 18;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003802B0u); set32(c.r[4], c.r[16].w[0] + 560u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003802B0u) [[unlikely]] return; }
L_003802B0:
    st32((c.r[16].w[0] + 608u), 0u);
    set32(c.r[2], 0u + 64u);
    st32((c.r[16].w[0] + 612u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43AA0000u);
    st32((c.r[16].w[0] + 616u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    st32((c.r[16].w[0] + 620u), c.r[2].w[0]);
    c.f[14] = 0u;
    st32((c.r[16].w[0] + 976u), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43860000u);
    st32((c.r[16].w[0] + 980u), c.r[3].w[0]);
    c.f[12] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[16].w[0] + 992u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42780000u);
    c.f[13] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 18;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003802F8u); set32(c.r[4], c.r[16].w[0] + 816u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003802F8u) [[unlikely]] return; }
L_003802F8:
    st32((c.r[16].w[0] + 864u), 0u);
    set32(c.r[2], 0u + 64u);
    st32((c.r[16].w[0] + 868u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43AA0000u);
    st32((c.r[16].w[0] + 872u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    st32((c.r[16].w[0] + 876u), c.r[2].w[0]);
    c.f[14] = 0u;
    st32((c.r[16].w[0] + 1232u), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43860000u);
    st32((c.r[16].w[0] + 1236u), c.r[3].w[0]);
    c.f[12] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[16].w[0] + 1248u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C00000u);
    c.f[13] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 18;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00380340u); set32(c.r[4], c.r[16].w[0] + 1072u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00380340u) [[unlikely]] return; }
L_00380340:
    st32((c.r[16].w[0] + 1120u), 0u);
    set32(c.r[2], 0u + 64u);
    st32((c.r[16].w[0] + 1124u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43AA0000u);
    st32((c.r[16].w[0] + 1128u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    st32((c.r[16].w[0] + 1132u), c.r[2].w[0]);
    c.f[14] = 0u;
    st32((c.r[16].w[0] + 1488u), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43860000u);
    st32((c.r[16].w[0] + 1492u), c.r[3].w[0]);
    c.f[12] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[16].w[0] + 1504u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B00000u);
    c.f[13] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 18;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00380388u); set32(c.r[4], c.r[16].w[0] + 1328u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00380388u) [[unlikely]] return; }
L_00380388:
    st32((c.r[16].w[0] + 1376u), 0u);
    set32(c.r[3], 0u + 64u);
    st32((c.r[16].w[0] + 1380u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 1384u), 0u);
    st32((c.r[16].w[0] + 1388u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003803B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003804A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[4], c.r[17].w[0] + 1328u);
    set32(c.r[2], c.r[2].w[0] - 31232u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003803F4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 17408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003803F4u); st32((c.r[17].w[0] + 1504u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 264u, depth + 1u); else { c.pc = 0x0014ADA0u; return; } if (c.pc != 0x003803F4u) [[unlikely]] return; }
L_003803F4:
    set32(c.r[4], c.r[17].w[0] + 1072u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);  if (t) { goto L_00380410; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 17408u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380410u); st32((c.r[17].w[0] + 1248u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 264u, depth + 1u); else { c.pc = 0x0014ADA0u; return; } if (c.pc != 0x00380410u) [[unlikely]] return; }
L_00380410:
    set32(c.r[4], c.r[17].w[0] + 816u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);  if (t) { goto L_0038042C; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 17408u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038042Cu); st32((c.r[17].w[0] + 992u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 264u, depth + 1u); else { c.pc = 0x0014ADA0u; return; } if (c.pc != 0x0038042Cu) [[unlikely]] return; }
L_0038042C:
    set32(c.r[4], c.r[17].w[0] + 560u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);  if (t) { goto L_00380448; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 17408u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380448u); st32((c.r[17].w[0] + 736u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 264u, depth + 1u); else { c.pc = 0x0014ADA0u; return; } if (c.pc != 0x00380448u) [[unlikely]] return; }
L_00380448:
    set32(c.r[4], c.r[17].w[0] + 288u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);  if (t) { goto L_00380464; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 17536u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380464u); st32((c.r[17].w[0] + 464u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 264u, depth + 1u); else { c.pc = 0x0014ADA0u; return; } if (c.pc != 0x00380464u) [[unlikely]] return; }
L_00380464:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);  if (t) { goto L_00380480; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 17536u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380480u); st32((c.r[17].w[0] + 192u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 264u, depth + 1u); else { c.pc = 0x0014ADA0u; return; } if (c.pc != 0x00380480u) [[unlikely]] return; }
L_00380480:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038048Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x0038048Cu) [[unlikely]] return; }
L_0038048C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003804A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003804A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x003804A4u) [[unlikely]] return; }
L_003804A4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003804A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003804C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[16].w[0] + 192u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003804E0u); set32(c.r[4], c.r[16].w[0] + 16u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003804E0u) [[unlikely]] return; }
L_003804E0:
    set32(c.r[25], ld32((c.r[16].w[0] + 464u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003804F0u); set32(c.r[4], c.r[16].w[0] + 288u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003804F0u) [[unlikely]] return; }
L_003804F0:
    set32(c.r[25], ld32((c.r[16].w[0] + 736u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00380500u); set32(c.r[4], c.r[16].w[0] + 560u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00380500u) [[unlikely]] return; }
L_00380500:
    set32(c.r[25], ld32((c.r[16].w[0] + 992u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00380510u); set32(c.r[4], c.r[16].w[0] + 816u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00380510u) [[unlikely]] return; }
L_00380510:
    set32(c.r[25], ld32((c.r[16].w[0] + 1248u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00380520u); set32(c.r[4], c.r[16].w[0] + 1072u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00380520u) [[unlikely]] return; }
L_00380520:
    set32(c.r[25], ld32((c.r[16].w[0] + 1504u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00380530u); set32(c.r[4], c.r[16].w[0] + 1328u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00380530u) [[unlikely]] return; }
L_00380530:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], 0u + 64u);
    set32(c.r[5], ld32((c.r[1].w[0] + 26392u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], 0u + 164u);
    set32(c.r[16], ld32((c.r[5].w[0] + 548u)));
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380568u); st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00380568u) [[unlikely]] return; }
L_00380568:
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    c.f[14] = 0u;
    st32((c.r[16].w[0] + 356u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43890000u);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41600000u);
    c.f[13] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00380594u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00380594u) [[unlikely]] return; }
L_00380594:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003805A4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003805A4u) [[unlikely]] return; }
L_003805A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003805ACu); set32(c.r[4], 0u + 163u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x003805ACu) [[unlikely]] return; }
L_003805AC:
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    c.f[14] = 0u;
    st32((c.r[16].w[0] + 356u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43890000u);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[13] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003805D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003805D8u) [[unlikely]] return; }
L_003805D8:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003805E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003805E8u) [[unlikely]] return; }
L_003805E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00380600:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380618u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 298u, depth + 1u); else { c.pc = 0x0012E440u; return; } if (c.pc != 0x00380618u) [[unlikely]] return; }
L_00380618:
    set32(c.r[4], c.r[16].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380624u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x00380624u) [[unlikely]] return; }
L_00380624:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 31344u);
    set32(c.r[2], c.r[2].w[0] - 31256u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 32u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380648u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 271u, depth + 1u); else { c.pc = 0x002275A0u; return; } if (c.pc != 0x00380648u) [[unlikely]] return; }
L_00380648:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380650u); set32(c.r[4], c.r[16].w[0] + 92u);  if (depth < kMaxDepth) unit_00A1(c, 21u, depth + 1u); else { c.pc = 0x00384420u; return; } if (c.pc != 0x00380650u) [[unlikely]] return; }
L_00380650:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380658u); set32(c.r[4], c.r[16].w[0] + 132u);  if (depth < kMaxDepth) unit_00A1(c, 15u, depth + 1u); else { c.pc = 0x00384260u; return; } if (c.pc != 0x00380658u) [[unlikely]] return; }
L_00380658:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[16].w[0] + 160u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 224u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380670u); set32(c.r[6], 0u + 661u);  if (depth < kMaxDepth) unit_0018(c, 110u, depth + 1u); else { c.pc = 0x001630C0u; return; } if (c.pc != 0x00380670u) [[unlikely]] return; }
L_00380670:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380678u); set32(c.r[4], c.r[16].w[0] + 432u);  if (depth < kMaxDepth) unit_00A0(c, 21u, depth + 1u); else { c.pc = 0x00380160u; return; } if (c.pc != 0x00380678u) [[unlikely]] return; }
L_00380678:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    st32((c.r[16].w[0] + 2016u), 0u);
    st32((c.r[16].w[0] + 2020u), c.r[2].w[0]);
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[16].w[0] + 2016u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 2024u), c.f[0]);
    st32((c.r[16].w[0] + 2028u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003806A0u); st32((c.r[16].w[0] + 2032u), 0u);  if (depth < kMaxDepth) unit_0087(c, 101u, depth + 1u); else { c.pc = 0x0031CBF0u; return; } if (c.pc != 0x003806A0u) [[unlikely]] return; }
L_003806A0:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1085u));
    st8((c.r[16].w[0] + 2036u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2036u));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_003806C0; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003806D8; } }
L_003806C0:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 6;
L_003806D8:
    c.f[1] = ld32((c.r[16].w[0] + 2016u));
    c.f[0] = ld32((c.r[16].w[0] + 2020u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00380710; } }
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003806FC; } }
    c.f[2] = c.f[1];
    c.budget -= 1;
L_003806FC:
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00380730; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[2] = c.f[0];  if (t) { goto L_00380730; } }
L_00380710:
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00380720; } }
    c.f[2] = c.f[0];
    c.budget -= 1;
L_00380720:
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00380730; } }
    c.f[2] = c.f[1];
    c.budget -= 1;
L_00380730:
    c.f[0] = ld32((c.r[16].w[0] + 2024u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F80000u);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x435E0000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 92u);
    c.r[5].d[0] = 0ull + 0ull;
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 2028u), c.f[0]);
    st32((c.r[16].w[0] + 92u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 100u), 0u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380768u); st32((c.r[16].w[0] + 104u), c.r[6].w[0]);  if (depth < kMaxDepth) unit_00A1(c, 29u, depth + 1u); else { c.pc = 0x00384520u; return; } if (c.pc != 0x00380768u) [[unlikely]] return; }
L_00380768:
    set32(c.r[4], c.r[16].w[0] + 92u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380774u); st32((c.r[16].w[0] + 112u), 0u);  if (depth < kMaxDepth) unit_00A1(c, 26u, depth + 1u); else { c.pc = 0x003844D0u; return; } if (c.pc != 0x00380774u) [[unlikely]] return; }
L_00380774:
    set32(c.r[4], c.r[16].w[0] + 132u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038078Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 20u, depth + 1u); else { c.pc = 0x00384400u; return; } if (c.pc != 0x0038078Cu) [[unlikely]] return; }
L_0038078C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380794u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00380794u) [[unlikely]] return; }
L_00380794:
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42080000u);
    st128((c.r[16].w[0] + 208u) & ~15u, c.r[6]);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.f[0] = ld32((c.r[1].w[0] - 984u));
    st32((c.r[16].w[0] + 176u), c.f[0]);
    st32((c.r[16].w[0] + 180u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 184u), c.r[5].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 336u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 21;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003807E8u); set32(c.r[4], c.r[16].w[0] + 160u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003807E8u) [[unlikely]] return; }
L_003807E8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00380800:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003808E8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 31344u);
    set32(c.r[2], c.r[2].w[0] - 31256u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 2032u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00380858; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00380858; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00380858u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00380858u) [[unlikely]] return; }
L_00380858:
    set32(c.r[4], c.r[17].w[0] + 432u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380868u); st32((c.r[17].w[0] + 2032u), 0u);  if (depth < kMaxDepth) unit_00A0(c, 37u, depth + 1u); else { c.pc = 0x003803B0u; return; } if (c.pc != 0x00380868u) [[unlikely]] return; }
L_00380868:
    set32(c.r[4], c.r[17].w[0] + 160u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);  if (t) { goto L_00380884; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 17264u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380884u); st32((c.r[17].w[0] + 336u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 264u, depth + 1u); else { c.pc = 0x0014ADA0u; return; } if (c.pc != 0x00380884u) [[unlikely]] return; }
L_00380884:
    set32(c.r[4], c.r[17].w[0] + 132u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_003808A0; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 30800u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003808A0u); st32((c.r[17].w[0] + 132u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E490u; return; } if (c.pc != 0x003808A0u) [[unlikely]] return; }
L_003808A0:
    set32(c.r[4], c.r[17].w[0] + 92u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003808ACu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00A1(c, 23u, depth + 1u); else { c.pc = 0x00384460u; return; } if (c.pc != 0x003808ACu) [[unlikely]] return; }
L_003808AC:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003808B8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0049(c, 274u, depth + 1u); else { c.pc = 0x002275F0u; return; } if (c.pc != 0x003808B8u) [[unlikely]] return; }
L_003808B8:
    set32(c.r[4], c.r[17].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003808C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x003808C4u) [[unlikely]] return; }
L_003808C4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003808D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 300u, depth + 1u); else { c.pc = 0x0012E490u; return; } if (c.pc != 0x003808D0u) [[unlikely]] return; }
L_003808D0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003808EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003808E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x003808E8u) [[unlikely]] return; }
L_003808E8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003808EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00380900:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[17], c.f[0]);
    st32((c.r[4].w[0] + 220u), c.r[17].w[0]);
    set32(c.r[25], ld32((c.r[18].w[0] + 336u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038093Cu); set32(c.r[4], c.r[18].w[0] + 160u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038093Cu) [[unlikely]] return; }
L_0038093C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 440u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380950u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00380950u) [[unlikely]] return; }
L_00380950:
    ld128((c.r[2].w[0]) & ~15u, c.r[5]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[4], 0u + 661u);
    st128((c.r[16].w[0] + 48u) & ~15u, c.r[5]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 60u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 304u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 308u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 312u), 0u);
    st32((c.r[16].w[0] + 316u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380988u); st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00380988u) [[unlikely]] return; }
L_00380988:
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    c.f[14] = 0u;
    st32((c.r[16].w[0] + 356u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43020000u);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43240000u);
    c.f[13] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003809B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003809B4u) [[unlikely]] return; }
L_003809B4:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003809C4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003809C4u) [[unlikely]] return; }
L_003809C4:
    c.f[2] = ld32((c.r[18].w[0] + 2028u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_003809E4; } }
    c.f[2] = c.f[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 2;
L_003809E4:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x41B80000u);  if (t) { goto L_00380A00; } }
    c.f[2] = c.f[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B80000u);
    c.budget -= 2;
L_00380A00:
    c.f[0] = c.r[2].w[0];
    c.f[1] = 0u;
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    set32(c.r[2], 0u + 12u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    set32(c.r[3], c.r[4].w[0] + 63u);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_00380A34; } }
    breakpoint(c, 0x00380A30u);
    c.budget -= 1;
L_00380A34:
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[4].w[0] + 63u);
    set32(c.r[2], 0u + 12u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[7].d[0] = c.hi.d[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380A60u); set32(c.r[5], c.r[5].w[0] - 1080u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x00380A60u) [[unlikely]] return; }
L_00380A60:
    set32(c.r[3], c.r[29].w[0] + 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43020000u);
    st32((c.r[16].w[0] + 352u), c.r[3].w[0]);
    c.f[12] = c.r[2].w[0];
    st32((c.r[16].w[0] + 356u), 0u);
    c.f[14] = 0u;
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43390000u);
    c.f[13] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00380A90u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00380A90u) [[unlikely]] return; }
L_00380A90:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00380AA0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00380AA0u) [[unlikely]] return; }
L_00380AA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00380AC0:
    set32(c.r[3], ld32((c.r[4].w[0] + 2032u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00380AD0; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 137u));
    c.budget -= 1;
L_00380AD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00380AE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380AF4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 80u, depth + 1u); else { c.pc = 0x0037CE90u; return; } if (c.pc != 0x00380AF4u) [[unlikely]] return; }
L_00380AF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00380B0C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00380B0Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00380B0Cu) [[unlikely]] return; }
L_00380B0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00380B20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380B34u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 92u, depth + 1u); else { c.pc = 0x00380AC0u; return; } if (c.pc != 0x00380B34u) [[unlikely]] return; }
L_00380B34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00380B4C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00380B4Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00380B4Cu) [[unlikely]] return; }
L_00380B4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00380B60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], ld32((c.r[1].w[0] - 1536u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380B88u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 314u, depth + 1u); else { c.pc = 0x0013F0C0u; return; } if (c.pc != 0x00380B88u) [[unlikely]] return; }
L_00380B88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00380BB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380B98u); set32(c.r[4], 0u + 400u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x00380B98u) [[unlikely]] return; }
L_00380B98:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00380BA8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00380BA8u) [[unlikely]] return; }
L_00380BA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00380D10; } }
L_00380BB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380BB8u);  if (depth < kMaxDepth) unit_000F(c, 315u, depth + 1u); else { c.pc = 0x0013F0D0u; return; } if (c.pc != 0x00380BB8u) [[unlikely]] return; }
L_00380BB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_00380BE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380BC8u); set32(c.r[4], 0u + 401u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x00380BC8u) [[unlikely]] return; }
L_00380BC8:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00380BD8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00380BD8u) [[unlikely]] return; }
L_00380BD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00380D0C; } }
L_00380BE0:
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = ld32((c.r[1].w[0] - 992u));
    c.f[20] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00380C08; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[20] = ld32((c.r[1].w[0] - 1000u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00380C24; } }
L_00380C08:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 1008u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_00380C24; } }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[20] = ld32((c.r[1].w[0] - 1016u));
    c.budget -= 2;
L_00380C24:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00380D0C; } }
    c.f[12] = 0u;
    set32(c.r[4], c.r[17].w[0] + 132u);
    c.f[13] = c.f[20];
    c.f[14] = c.f[12];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380C44u); c.f[15] = c.f[12];  if (depth < kMaxDepth) unit_00A1(c, 18u, depth + 1u); else { c.pc = 0x003842D0u; return; } if (c.pc != 0x00380C44u) [[unlikely]] return; }
L_00380C44:
    c.f[3] = ld32((c.r[17].w[0] + 2028u));
    c.f[0] = 0u;
    c.f[3] = fp::add(c.f[3], c.f[20]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_00380C64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[3] = c.f[0];  if (t) { goto L_00380C7C; } }
L_00380C64:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00380C7C; } }
    c.f[3] = c.f[0];
    c.budget -= 1;
L_00380C7C:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_00380C94; } }
    c.f[3] = c.f[0];
    c.budget -= 1;
L_00380C94:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00380CAC; } }
    c.f[3] = c.f[0];
    c.budget -= 1;
L_00380CAC:
    st32((c.r[17].w[0] + 2028u), c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = ld32((c.r[17].w[0] + 2024u));
    c.f[1] = ld32((c.r[17].w[0] + 2016u));
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00380CE4; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[16], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00380CFC; } }
L_00380CE4:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[16], c.f[1]);
    c.r[16].d[0] = c.r[16].d[0] | c.r[2].d[0];
    c.budget -= 6;
L_00380CFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380D04u);  if (depth < kMaxDepth) unit_0087(c, 101u, depth + 1u); else { c.pc = 0x0031CBF0u; return; } if (c.pc != 0x00380D04u) [[unlikely]] return; }
L_00380D04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380D0Cu); st8((c.r[2].w[0] + 1085u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_007A(c, 324u, depth + 1u); else { c.pc = 0x002EA9F0u; return; } if (c.pc != 0x00380D0Cu) [[unlikely]] return; }
L_00380D0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00380D10:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00380D30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380D44u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 92u, depth + 1u); else { c.pc = 0x00380AC0u; return; } if (c.pc != 0x00380D44u) [[unlikely]] return; }
L_00380D44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00380D5C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00380D5Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00380D5Cu) [[unlikely]] return; }
L_00380D5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00380D70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380D84u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 92u, depth + 1u); else { c.pc = 0x00380AC0u; return; } if (c.pc != 0x00380D84u) [[unlikely]] return; }
L_00380D84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00380D9C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00380D9Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00380D9Cu) [[unlikely]] return; }
L_00380D9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00380DB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380DC8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 318u, depth + 1u); else { c.pc = 0x0012E5E0u; return; } if (c.pc != 0x00380DC8u) [[unlikely]] return; }
L_00380DC8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 2032u)));
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[3].w[0] + 624u);  if (t) { goto L_00380E28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380DE4u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00380DE4u) [[unlikely]] return; }
L_00380DE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00380DF8; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380DF8u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_002A(c, 287u, depth + 1u); else { c.pc = 0x001AB200u; return; } if (c.pc != 0x00380DF8u) [[unlikely]] return; }
L_00380DF8:
    st32((c.r[16].w[0] + 2032u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380E08u); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x00380E08u) [[unlikely]] return; }
L_00380E08:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380E18u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x00380E18u) [[unlikely]] return; }
L_00380E18:
    set32(c.r[4], ld32((c.r[16].w[0] + 2032u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380E28u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x00380E28u) [[unlikely]] return; }
L_00380E28:
    set32(c.r[4], ld32((c.r[16].w[0] + 2032u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00380E3Cu); set32(c.r[5], 0u + 163u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00380E3Cu) [[unlikely]] return; }
L_00380E3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380E44u);  if (depth < kMaxDepth) unit_009F(c, 200u, depth + 1u); else { c.pc = 0x0037DCF0u; return; } if (c.pc != 0x00380E44u) [[unlikely]] return; }
L_00380E44:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380E54u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 211u, depth + 1u); else { c.pc = 0x0037DE40u; return; } if (c.pc != 0x00380E54u) [[unlikely]] return; }
L_00380E54:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380E60u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_009F(c, 186u, depth + 1u); else { c.pc = 0x0037DB10u; return; } if (c.pc != 0x00380E60u) [[unlikely]] return; }
L_00380E60:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380E6Cu); set32(c.r[5], 0u + 18u);  if (depth < kMaxDepth) unit_009F(c, 179u, depth + 1u); else { c.pc = 0x0037D9B0u; return; } if (c.pc != 0x00380E6Cu) [[unlikely]] return; }
L_00380E6C:
    set32(c.r[4], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00380E80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380E80u);  if (depth < kMaxDepth) unit_0098(c, 259u, depth + 1u); else { c.pc = 0x00362CF0u; return; } if (c.pc != 0x00380E80u) [[unlikely]] return; }
L_00380E80:
    st32((c.r[16].w[0] + 68u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    st32((c.r[16].w[0] + 72u), 0u);
    set32(c.r[2], 0u + 15u);
    st32((c.r[16].w[0] + 76u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 32u);
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[5], c.r[16].w[0] + 68u);
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380EACu); st32((c.r[16].w[0] + 88u), 0u);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x00380EACu) [[unlikely]] return; }
L_00380EAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380EB4u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x00380EB4u) [[unlikely]] return; }
L_00380EB4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00380ED0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E600u | kUnwind; return; } [[clang::musttail]] return unit_000B(c, 319u, depth); }
L_00380EE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380EF4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 320u, depth + 1u); else { c.pc = 0x0012E610u; return; } if (c.pc != 0x00380EF4u) [[unlikely]] return; }
L_00380EF4:
    set32(c.r[4], ld32((c.r[16].w[0] + 2032u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00380F10; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00380F10u); set32(c.r[5], 0u + 164u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00380F10u) [[unlikely]] return; }
L_00380F10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380F18u);  if (depth < kMaxDepth) unit_009F(c, 200u, depth + 1u); else { c.pc = 0x0037DCF0u; return; } if (c.pc != 0x00380F18u) [[unlikely]] return; }
L_00380F18:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380F24u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_009F(c, 211u, depth + 1u); else { c.pc = 0x0037DE40u; return; } if (c.pc != 0x00380F24u) [[unlikely]] return; }
L_00380F24:
    set32(c.r[4], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);  if (t) { goto L_00380F3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380F38u);  if (depth < kMaxDepth) unit_0098(c, 262u, depth + 1u); else { c.pc = 0x00362D60u; return; } if (c.pc != 0x00380F38u) [[unlikely]] return; }
L_00380F38:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.budget -= 1;
L_00380F3C:
    set32(c.r[2], 0u + 15u);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 32u);
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[5], c.r[16].w[0] + 68u);
    st32((c.r[16].w[0] + 76u), 0u);
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 84u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380F64u); st32((c.r[16].w[0] + 88u), 0u);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x00380F64u) [[unlikely]] return; }
L_00380F64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00380F80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = ld8((c.r[4].w[0] + 2036u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380F9Cu); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 101u, depth + 1u); else { c.pc = 0x0031CBF0u; return; } if (c.pc != 0x00380F9Cu) [[unlikely]] return; }
L_00380F9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380FA4u); st8((c.r[2].w[0] + 1085u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_007A(c, 324u, depth + 1u); else { c.pc = 0x002EA9F0u; return; } if (c.pc != 0x00380FA4u) [[unlikely]] return; }
L_00380FA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380FACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 321u, depth + 1u); else { c.pc = 0x0012E630u; return; } if (c.pc != 0x00380FACu) [[unlikely]] return; }
L_00380FAC:
    set32(c.r[4], ld32((c.r[17].w[0] + 2032u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00380FC8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00380FC8u); set32(c.r[5], 0u + 164u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00380FC8u) [[unlikely]] return; }
L_00380FC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380FD0u);  if (depth < kMaxDepth) unit_009F(c, 200u, depth + 1u); else { c.pc = 0x0037DCF0u; return; } if (c.pc != 0x00380FD0u) [[unlikely]] return; }
L_00380FD0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380FDCu); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_009F(c, 211u, depth + 1u); else { c.pc = 0x0037DE40u; return; } if (c.pc != 0x00380FDCu) [[unlikely]] return; }
L_00380FDC:
    set32(c.r[4], ld32((c.r[17].w[0] + 120u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);  if (t) { goto L_00380FF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380FF0u);  if (depth < kMaxDepth) unit_0098(c, 262u, depth + 1u); else { c.pc = 0x00362D60u; return; } if (c.pc != 0x00380FF0u) [[unlikely]] return; }
L_00380FF0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.budget -= 1;
L_00380FF4:
    set32(c.r[2], 0u + 15u);
    st32((c.r[17].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 32u);
    st32((c.r[17].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[5], c.r[17].w[0] + 68u);
    st32((c.r[17].w[0] + 76u), 0u);
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 84u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038101Cu); st32((c.r[17].w[0] + 88u), 0u);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x0038101Cu) [[unlikely]] return; }
L_0038101C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00381030:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381048u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 298u, depth + 1u); else { c.pc = 0x0012E440u; return; } if (c.pc != 0x00381048u) [[unlikely]] return; }
L_00381048:
    set32(c.r[4], c.r[16].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381054u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x00381054u) [[unlikely]] return; }
L_00381054:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 31456u);
    set32(c.r[2], c.r[2].w[0] - 31368u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 32u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381078u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 484u, depth + 1u); else { c.pc = 0x00383A70u; return; } if (c.pc != 0x00381078u) [[unlikely]] return; }
L_00381078:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[16].w[0] + 544u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 224u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381090u); set32(c.r[6], 0u + 659u);  if (depth < kMaxDepth) unit_0018(c, 110u, depth + 1u); else { c.pc = 0x001630C0u; return; } if (c.pc != 0x00381090u) [[unlikely]] return; }
L_00381090:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[16].w[0] + 816u);
    set32(c.r[5], c.r[5].w[0] - 1072u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003810A4u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_00A1(c, 139u, depth + 1u); else { c.pc = 0x003857D0u; return; } if (c.pc != 0x003810A4u) [[unlikely]] return; }
L_003810A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003810ACu); set32(c.r[4], c.r[16].w[0] + 944u);  if (depth < kMaxDepth) unit_00A1(c, 21u, depth + 1u); else { c.pc = 0x00384420u; return; } if (c.pc != 0x003810ACu) [[unlikely]] return; }
L_003810AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003810B4u); set32(c.r[4], c.r[16].w[0] + 984u);  if (depth < kMaxDepth) unit_00A1(c, 15u, depth + 1u); else { c.pc = 0x00384260u; return; } if (c.pc != 0x003810B4u) [[unlikely]] return; }
L_003810B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    st32((c.r[16].w[0] + 1000u), 0u);
    st32((c.r[16].w[0] + 1004u), c.r[2].w[0]);
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[16].w[0] + 1000u));
    set32(c.r[4], c.r[16].w[0] + 1032u);
    c.r[5].d[0] = 0ull + 0ull;
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 1008u), c.f[0]);
    st32((c.r[16].w[0] + 1012u), 0u);
    st32((c.r[16].w[0] + 1016u), 0u);
    st32((c.r[16].w[0] + 1020u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1016u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 1024u), c.f[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003810F8u); st32((c.r[16].w[0] + 1028u), 0u);  if (depth < kMaxDepth) unit_0049(c, 271u, depth + 1u); else { c.pc = 0x002275A0u; return; } if (c.pc != 0x003810F8u) [[unlikely]] return; }
L_003810F8:
    st32((c.r[16].w[0] + 1092u), 0u);
    st32((c.r[16].w[0] + 1096u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381108u); st32((c.r[16].w[0] + 1112u), 0u);  if (depth < kMaxDepth) unit_0087(c, 101u, depth + 1u); else { c.pc = 0x0031CBF0u; return; } if (c.pc != 0x00381108u) [[unlikely]] return; }
L_00381108:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 1083u));
    set32(c.r[4], c.r[2].w[0] + 928u);
    st8((c.r[16].w[0] + 1116u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 1084u));
    st8((c.r[16].w[0] + 1117u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1083u));
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_00381134; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0038114C; } }
L_00381134:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 6;
L_0038114C:
    c.f[1] = ld32((c.r[16].w[0] + 1000u));
    c.f[0] = ld32((c.r[16].w[0] + 1004u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00381184; } }
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00381170; } }
    c.f[2] = c.f[1];
    c.budget -= 1;
L_00381170:
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003811A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[2] = c.f[0];  if (t) { goto L_003811A4; } }
L_00381184:
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00381194; } }
    c.f[2] = c.f[0];
    c.budget -= 1;
L_00381194:
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003811A4; } }
    c.f[2] = c.f[1];
    c.budget -= 1;
L_003811A4:
    c.f[0] = ld32((c.r[16].w[0] + 1008u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 1012u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 156u));
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_003811D0; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003811E8; } }
L_003811D0:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 6;
L_003811E8:
    c.f[1] = ld32((c.r[16].w[0] + 1016u));
    c.f[0] = ld32((c.r[16].w[0] + 1020u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00381220; } }
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0038120C; } }
    c.f[2] = c.f[1];
    c.budget -= 1;
L_0038120C:
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00381240; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[2] = c.f[0];  if (t) { goto L_00381240; } }
L_00381220:
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00381230; } }
    c.f[2] = c.f[0];
    c.budget -= 1;
L_00381230:
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00381240; } }
    c.f[2] = c.f[1];
    c.budget -= 1;
L_00381240:
    c.f[0] = ld32((c.r[16].w[0] + 1024u));
    set32(c.r[5], 0u + 1u);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43950000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43290000u);
    set32(c.r[4], c.r[16].w[0] + 944u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 1028u), c.f[0]);
    st32((c.r[16].w[0] + 944u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 948u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 952u), 0u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381278u); st32((c.r[16].w[0] + 956u), 0u);  if (depth < kMaxDepth) unit_00A1(c, 29u, depth + 1u); else { c.pc = 0x00384520u; return; } if (c.pc != 0x00381278u) [[unlikely]] return; }
L_00381278:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381280u); set32(c.r[4], c.r[16].w[0] + 944u);  if (depth < kMaxDepth) unit_00A1(c, 26u, depth + 1u); else { c.pc = 0x003844D0u; return; } if (c.pc != 0x00381280u) [[unlikely]] return; }
L_00381280:
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 984u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381298u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 20u, depth + 1u); else { c.pc = 0x00384400u; return; } if (c.pc != 0x00381298u) [[unlikely]] return; }
L_00381298:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003812A0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x003812A0u) [[unlikely]] return; }
L_003812A0:
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42080000u);
    st128((c.r[16].w[0] + 592u) & ~15u, c.r[6]);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.f[0] = ld32((c.r[1].w[0] - 984u));
    st32((c.r[16].w[0] + 560u), c.f[0]);
    st32((c.r[16].w[0] + 564u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 568u), c.r[5].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 720u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 21;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003812F4u); set32(c.r[4], c.r[16].w[0] + 544u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003812F4u) [[unlikely]] return; }
L_003812F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[29].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] + 4272u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[2]);
    st128((c.r[16].w[0] + 896u) & ~15u, c.r[2]);
    st32((c.r[16].w[0] + 1108u), 0u);
    st32((c.r[16].w[0] + 1104u), 0u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381324u); st32((c.r[16].w[0] + 1100u), 0u);  if (depth < kMaxDepth) unit_00A0(c, 217u, depth + 1u); else { c.pc = 0x00381D10u; return; } if (c.pc != 0x00381324u) [[unlikely]] return; }
L_00381324:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00381340:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00381504; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 31456u);
    set32(c.r[2], c.r[2].w[0] - 31368u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 1108u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00381398; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00381398; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00381398u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00381398u) [[unlikely]] return; }
L_00381398:
    st32((c.r[17].w[0] + 1108u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1104u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003813C0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003813C0; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003813C0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003813C0u) [[unlikely]] return; }
L_003813C0:
    st32((c.r[17].w[0] + 1104u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1100u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003813E8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003813E8; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003813E8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003813E8u) [[unlikely]] return; }
L_003813E8:
    st32((c.r[17].w[0] + 1100u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1096u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00381410; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00381410; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00381410u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00381410u) [[unlikely]] return; }
L_00381410:
    st32((c.r[17].w[0] + 1096u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1092u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00381438; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00381438; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00381438u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00381438u) [[unlikely]] return; }
L_00381438:
    set32(c.r[4], c.r[17].w[0] + 1032u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381448u); st32((c.r[17].w[0] + 1092u), 0u);  if (depth < kMaxDepth) unit_0049(c, 274u, depth + 1u); else { c.pc = 0x002275F0u; return; } if (c.pc != 0x00381448u) [[unlikely]] return; }
L_00381448:
    set32(c.r[4], c.r[17].w[0] + 984u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_00381464; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 30800u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381464u); st32((c.r[17].w[0] + 984u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E490u; return; } if (c.pc != 0x00381464u) [[unlikely]] return; }
L_00381464:
    set32(c.r[4], c.r[17].w[0] + 944u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381470u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00A1(c, 23u, depth + 1u); else { c.pc = 0x00384460u; return; } if (c.pc != 0x00381470u) [[unlikely]] return; }
L_00381470:
    set32(c.r[4], c.r[17].w[0] + 544u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] + 32u);  if (t) { goto L_00381494; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 17264u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381490u); st32((c.r[17].w[0] + 720u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 264u, depth + 1u); else { c.pc = 0x0014ADA0u; return; } if (c.pc != 0x00381490u) [[unlikely]] return; }
L_00381490:
    set32(c.r[2], c.r[17].w[0] + 32u);
    c.budget -= 1;
L_00381494:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 20u);  if (t) { goto L_003814D8; } }
    set32(c.r[4], c.r[17].w[0] + 288u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);  if (t) { goto L_003814B8; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 17408u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003814B8u); st32((c.r[17].w[0] + 464u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 264u, depth + 1u); else { c.pc = 0x0014ADA0u; return; } if (c.pc != 0x003814B8u) [[unlikely]] return; }
L_003814B8:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);  if (t) { goto L_003814D4; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 17408u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003814D4u); st32((c.r[17].w[0] + 208u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 264u, depth + 1u); else { c.pc = 0x0014ADA0u; return; } if (c.pc != 0x003814D4u) [[unlikely]] return; }
L_003814D4:
    set32(c.r[4], c.r[17].w[0] + 20u);
    c.budget -= 1;
L_003814D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003814E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x003814E0u) [[unlikely]] return; }
L_003814E0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003814ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 300u, depth + 1u); else { c.pc = 0x0012E490u; return; } if (c.pc != 0x003814ECu) [[unlikely]] return; }
L_003814EC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00381508; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381504u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00381504u) [[unlikely]] return; }
L_00381504:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00381508:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00381520:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[0] = ld32((c.r[4].w[0] + 1044u));
    set32(c.r[2], ld32((c.r[4].w[0] + 1096u)));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00381560; } }
    st32((c.r[2].w[0] + 60u), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 1096u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00381560u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00381560u) [[unlikely]] return; }
L_00381560:
    set32(c.r[2], ld32((c.r[17].w[0] + 1100u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00381584; } }
    st32((c.r[2].w[0] + 60u), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 1100u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00381584u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00381584u) [[unlikely]] return; }
L_00381584:
    set32(c.r[2], ld32((c.r[17].w[0] + 1104u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003815A8; } }
    st32((c.r[2].w[0] + 60u), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 1104u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003815A8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003815A8u) [[unlikely]] return; }
L_003815A8:
    set32(c.r[2], ld32((c.r[17].w[0] + 1108u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 32u);  if (t) { goto L_003815D0; } }
    st32((c.r[2].w[0] + 60u), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 1108u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003815CCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003815CCu) [[unlikely]] return; }
L_003815CC:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 1;
L_003815D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003815D8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 495u, depth + 1u); else { c.pc = 0x00383BB0u; return; } if (c.pc != 0x003815D8u) [[unlikely]] return; }
L_003815D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003815E0u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_00A0(c, 489u, depth + 1u); else { c.pc = 0x00383B20u; return; } if (c.pc != 0x003815E0u) [[unlikely]] return; }
L_003815E0:
    st32((c.r[17].w[0] + 604u), c.r[16].w[0]);
    set32(c.r[25], ld32((c.r[17].w[0] + 720u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003815F4u); set32(c.r[4], c.r[17].w[0] + 544u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003815F4u) [[unlikely]] return; }
L_003815F4:
    set32(c.r[4], c.r[17].w[0] + 816u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381600u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 142u, depth + 1u); else { c.pc = 0x00385880u; return; } if (c.pc != 0x00381600u) [[unlikely]] return; }
L_00381600:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00381620:
    set32(c.r[3], ld32((c.r[4].w[0] + 1092u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00381630; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 137u));
    c.budget -= 1;
L_00381630:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00381640:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381654u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 80u, depth + 1u); else { c.pc = 0x0037CE90u; return; } if (c.pc != 0x00381654u) [[unlikely]] return; }
L_00381654:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0038166C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038166Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038166Cu) [[unlikely]] return; }
L_0038166C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00381680:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381694u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 187u, depth + 1u); else { c.pc = 0x00381620u; return; } if (c.pc != 0x00381694u) [[unlikely]] return; }
L_00381694:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003816AC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003816ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003816ACu) [[unlikely]] return; }
L_003816AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003816C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[1].w[0] - 1536u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003816E4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 314u, depth + 1u); else { c.pc = 0x0013F0C0u; return; } if (c.pc != 0x003816E4u) [[unlikely]] return; }
L_003816E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003818E0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 1112u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_003818B8; } }
    c.f[1] = ld32((c.r[16].w[0] + 1000u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = ld32((c.r[16].w[0] + 1004u));
    c.f[2] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0038173C; } }
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00381728; } }
    c.f[2] = c.f[1];
    c.budget -= 1;
L_00381728:
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0038175C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[2] = c.f[0];  if (t) { goto L_0038175C; } }
L_0038173C:
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0038174C; } }
    c.f[2] = c.f[0];
    c.budget -= 1;
L_0038174C:
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0038175C; } }
    c.f[2] = c.f[1];
    c.budget -= 1;
L_0038175C:
    c.f[0] = ld32((c.r[16].w[0] + 1008u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[2] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 1012u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 1016u));
    c.f[0] = ld32((c.r[16].w[0] + 1020u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003817AC; } }
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00381798; } }
    c.f[2] = c.f[1];
    c.budget -= 1;
L_00381798:
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003817CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[2] = c.f[0];  if (t) { goto L_003817CC; } }
L_003817AC:
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003817BC; } }
    c.f[2] = c.f[0];
    c.budget -= 1;
L_003817BC:
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003817CC; } }
    c.f[2] = c.f[1];
    c.budget -= 1;
L_003817CC:
    c.f[0] = ld32((c.r[16].w[0] + 1024u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003817ECu); st32((c.r[16].w[0] + 1028u), c.f[0]);  if (depth < kMaxDepth) unit_00A0(c, 217u, depth + 1u); else { c.pc = 0x00381D10u; return; } if (c.pc != 0x003817ECu) [[unlikely]] return; }
L_003817EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003817F4u);  if (depth < kMaxDepth) unit_0087(c, 101u, depth + 1u); else { c.pc = 0x0031CBF0u; return; } if (c.pc != 0x003817F4u) [[unlikely]] return; }
L_003817F4:
    c.f[3] = ld32((c.r[16].w[0] + 1012u));
    set32(c.r[4], c.r[2].w[0] + 928u);
    c.f[2] = ld32((c.r[16].w[0] + 1008u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = ld32((c.r[16].w[0] + 1000u));
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00381830; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 155u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0038184C; } }
L_00381830:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st8((c.r[4].w[0] + 155u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_0038184C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[3] = ld32((c.r[16].w[0] + 1028u));
    c.f[2] = ld32((c.r[16].w[0] + 1024u));
    c.f[1] = ld32((c.r[16].w[0] + 1016u));
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00381884; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 156u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003818A0; } }
L_00381884:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st8((c.r[4].w[0] + 156u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_003818A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003818A8u);  if (depth < kMaxDepth) unit_007A(c, 324u, depth + 1u); else { c.pc = 0x002EA9F0u; return; } if (c.pc != 0x003818A8u) [[unlikely]] return; }
L_003818A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003818B0u); set32(c.r[4], 0u + 400u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x003818B0u) [[unlikely]] return; }
L_003818B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003819FC; } }
L_003818B8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003819F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003818C8u); set32(c.r[4], 0u + 400u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x003818C8u) [[unlikely]] return; }
L_003818C8:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003818D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003818D8u) [[unlikely]] return; }
L_003818D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003819F8; } }
L_003818E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003818E8u);  if (depth < kMaxDepth) unit_000F(c, 315u, depth + 1u); else { c.pc = 0x0013F0D0u; return; } if (c.pc != 0x003818E8u) [[unlikely]] return; }
L_003818E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 401u);  if (t) { goto L_00381910; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003818F8u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x003818F8u) [[unlikely]] return; }
L_003818F8:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00381908u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00381908u) [[unlikely]] return; }
L_00381908:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003819F8; } }
L_00381910:
    c.r[4].d[0] = ld16((c.r[17].w[0] + 4u));
    c.r[3].d[0] = c.r[4].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] & 16384ull;  if (t) { goto L_0038197C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1112u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[16].w[0] + 1112u), c.r[2].w[0]);  if (t) { goto L_00381938; } }
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 1112u), c.r[2].w[0]);
    c.budget -= 2;
L_00381938:
    set32(c.r[2], ld32((c.r[16].w[0] + 1112u)));
    set32(c.r[4], c.r[16].w[0] + 832u);
    st32((c.r[16].w[0] + 936u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 892u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381950u); st8((c.r[16].w[0] + 888u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x00381950u) [[unlikely]] return; }
L_00381950:
    set32(c.r[2], ld32((c.r[16].w[0] + 1112u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 972u)));
    c.r[5].d[0] = c.r[2].d[0] ^ 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_0038196C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038196Cu);  if (depth < kMaxDepth) unit_0098(c, 269u, depth + 1u); else { c.pc = 0x00362E60u; return; } if (c.pc != 0x0038196Cu) [[unlikely]] return; }
L_0038196C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381974u); set32(c.r[4], 0u + 402u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x00381974u) [[unlikely]] return; }
L_00381974:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003819F8; } }
L_0038197C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003819E4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1112u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 1112u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003819A0; } }
    st32((c.r[16].w[0] + 1112u), 0u);
    c.budget -= 1;
L_003819A0:
    set32(c.r[2], ld32((c.r[16].w[0] + 1112u)));
    set32(c.r[4], c.r[16].w[0] + 832u);
    st32((c.r[16].w[0] + 936u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 892u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003819B8u); st8((c.r[16].w[0] + 888u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x003819B8u) [[unlikely]] return; }
L_003819B8:
    set32(c.r[2], ld32((c.r[16].w[0] + 1112u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 972u)));
    c.r[5].d[0] = c.r[2].d[0] ^ 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_003819D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003819D4u);  if (depth < kMaxDepth) unit_0098(c, 269u, depth + 1u); else { c.pc = 0x00362E60u; return; } if (c.pc != 0x003819D4u) [[unlikely]] return; }
L_003819D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003819DCu); set32(c.r[4], 0u + 402u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x003819DCu) [[unlikely]] return; }
L_003819DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003819F8; } }
L_003819E4:
    set32(c.r[3], ld32((c.r[16].w[0] + 1112u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003819F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003819F8u);  if (depth < kMaxDepth) unit_00A0(c, 212u, depth + 1u); else { c.pc = 0x00381A10u; return; } if (c.pc != 0x003819F8u) [[unlikely]] return; }
L_003819F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003819FC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00381A10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[12] = 0u;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[1].w[0] - 1536u)));
    c.f[21] = ld32((c.r[4].w[0] + 1012u));
    c.f[20] = ld32((c.r[4].w[0] + 1028u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 992u));
    c.f[1] = ld32((c.r[3].w[0] + 48u));
    c.f[2] = ld32((c.r[3].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 19;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[13] = c.f[12];  if (t) { goto L_00381AA4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = ld32((c.r[1].w[0] - 1000u));
    c.f[0] = c.r[3].w[0];
    c.f[20] = fp::add(c.f[20], c.f[12]);
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00381B0C; } }
    c.f[0] = fp::sub(c.f[20], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00381B0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[21] = c.f[0];  if (t) { goto L_00381B0C; } }
L_00381AA4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 1008u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00381B0C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = ld32((c.r[1].w[0] - 1000u));
    c.f[0] = c.r[3].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[20] = fp::sub(c.f[20], c.f[1]);
    c.f[12] = ld32((c.r[1].w[0] - 1016u));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00381B0C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = c.r[4].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00381B0C; } }
    c.f[21] = c.f[0];
    c.budget -= 1;
L_00381B0C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 992u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_00381B34; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[13] = ld32((c.r[1].w[0] - 1000u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[21] = fp::add(c.f[21], c.f[13]);  if (t) { goto L_00381BB4; } }
L_00381B34:
    c.f[0] = ld32((c.r[1].w[0] - 1008u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00381BB4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 1000u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[13] = ld32((c.r[1].w[0] - 1016u));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != 0ull; c.f[21] = fp::sub(c.f[21], c.f[0]);  if (t) { goto L_00381BB0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[0] = fp::mul(c.f[1], c.f[21]);  if (t) { goto L_00381B9C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[21]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00381BB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[0];  if (t) { goto L_00381BB0; } }
L_00381B9C:
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00381BB0; } }
    c.f[20] = c.f[0];
    c.budget -= 1;
L_00381BB0:
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00381BB4:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00381CF4; } }
    c.f[14] = 0u;
    set32(c.r[4], c.r[16].w[0] + 984u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381BCCu); c.f[15] = c.f[14];  if (depth < kMaxDepth) unit_00A1(c, 18u, depth + 1u); else { c.pc = 0x003842D0u; return; } if (c.pc != 0x00381BCCu) [[unlikely]] return; }
L_00381BCC:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_00381BE4; } }
    c.f[21] = c.f[0];
    c.budget -= 1;
L_00381BE4:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00381BFC; } }
    c.f[21] = c.f[0];
    c.budget -= 1;
L_00381BFC:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1012u), c.f[21]);  if (t) { goto L_00381C14; } }
    c.f[20] = c.f[0];
    c.budget -= 1;
L_00381C14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00381C30; } }
    c.f[20] = c.f[0];
    c.budget -= 1;
L_00381C30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381C38u); st32((c.r[16].w[0] + 1028u), c.f[20]);  if (depth < kMaxDepth) unit_00A0(c, 217u, depth + 1u); else { c.pc = 0x00381D10u; return; } if (c.pc != 0x00381C38u) [[unlikely]] return; }
L_00381C38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381C40u);  if (depth < kMaxDepth) unit_0087(c, 101u, depth + 1u); else { c.pc = 0x0031CBF0u; return; } if (c.pc != 0x00381C40u) [[unlikely]] return; }
L_00381C40:
    c.f[3] = ld32((c.r[16].w[0] + 1012u));
    set32(c.r[4], c.r[2].w[0] + 928u);
    c.f[2] = ld32((c.r[16].w[0] + 1008u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = ld32((c.r[16].w[0] + 1000u));
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00381C7C; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 155u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00381C98; } }
L_00381C7C:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st8((c.r[4].w[0] + 155u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_00381C98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[3] = ld32((c.r[16].w[0] + 1028u));
    c.f[2] = ld32((c.r[16].w[0] + 1024u));
    c.f[1] = ld32((c.r[16].w[0] + 1016u));
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00381CD0; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 156u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00381CEC; } }
L_00381CD0:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st8((c.r[4].w[0] + 156u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_00381CEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381CF4u);  if (depth < kMaxDepth) unit_007A(c, 324u, depth + 1u); else { c.pc = 0x002EA9F0u; return; } if (c.pc != 0x00381CF4u) [[unlikely]] return; }
L_00381CF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00381D10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[0] = 0u;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.f[21] = ld32((c.r[4].w[0] + 1028u));
    c.f[20] = ld32((c.r[4].w[0] + 1012u));
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[4] = c.f[21];  if (t) { goto L_00381D44; } }
    c.f[4] = c.f[0];
    c.budget -= 1;
L_00381D44:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00381D60; } }
    c.f[4] = c.f[0];
    c.budget -= 1;
L_00381D60:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[3] = c.f[20];  if (t) { goto L_00381D78; } }
    c.f[3] = c.f[0];
    c.budget -= 1;
L_00381D78:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { goto L_00381D94; } }
    c.f[3] = c.f[0];
    c.budget -= 1;
L_00381D94:
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] + 4288u);
    set32(c.r[4], c.r[16].w[0] + 32u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42960000u);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43210000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[4], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43820000u);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    c.f[1] = c.r[2].w[0];
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC30A0000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381DF0u); st32((c.r[29].w[0] + 52u), c.f[0]);  if (depth < kMaxDepth) unit_00A0(c, 492u, depth + 1u); else { c.pc = 0x00383B60u; return; } if (c.pc != 0x00381DF0u) [[unlikely]] return; }
L_00381DF0:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_00381E08; } }
    c.f[21] = c.f[0];
    c.budget -= 1;
L_00381E08:
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00381E20; } }
    c.f[21] = c.f[0];
    c.budget -= 1;
L_00381E20:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0xC2C80000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[21], c.f[1]);
    c.f[2] = c.r[4].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 976u), c.r[3].w[0]);  if (t) { goto L_00381E58; } }
    c.f[20] = c.f[0];
    c.budget -= 1;
L_00381E58:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x43480000u);  if (t) { goto L_00381E74; } }
    c.f[20] = c.f[0];
    c.budget -= 1;
L_00381E74:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xC2C80000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = c.r[4].w[0];
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[16].w[0] + 980u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00381EC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381ED4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 187u, depth + 1u); else { c.pc = 0x00381620u; return; } if (c.pc != 0x00381ED4u) [[unlikely]] return; }
L_00381ED4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00381EEC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00381EECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00381EECu) [[unlikely]] return; }
L_00381EEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00381F00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381F14u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 187u, depth + 1u); else { c.pc = 0x00381620u; return; } if (c.pc != 0x00381F14u) [[unlikely]] return; }
L_00381F14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00381F2C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00381F2Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00381F2Cu) [[unlikely]] return; }
L_00381F2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00381F40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381F58u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 318u, depth + 1u); else { c.pc = 0x0012E5E0u; return; } if (c.pc != 0x00381F58u) [[unlikely]] return; }
L_00381F58:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 1092u)));
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[3].w[0] + 624u);  if (t) { goto L_00381FB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381F74u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00381F74u) [[unlikely]] return; }
L_00381F74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00381F88; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381F88u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_002A(c, 287u, depth + 1u); else { c.pc = 0x001AB200u; return; } if (c.pc != 0x00381F88u) [[unlikely]] return; }
L_00381F88:
    st32((c.r[16].w[0] + 1092u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381F98u); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x00381F98u) [[unlikely]] return; }
L_00381F98:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381FA8u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x00381FA8u) [[unlikely]] return; }
L_00381FA8:
    set32(c.r[4], ld32((c.r[16].w[0] + 1092u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381FB8u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x00381FB8u) [[unlikely]] return; }
L_00381FB8:
    set32(c.r[4], ld32((c.r[16].w[0] + 1092u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00381FCCu); set32(c.r[5], 0u + 173u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00381FCCu) [[unlikely]] return; }
L_00381FCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381FD4u);  if (depth < kMaxDepth) unit_009F(c, 200u, depth + 1u); else { c.pc = 0x0037DCF0u; return; } if (c.pc != 0x00381FD4u) [[unlikely]] return; }
L_00381FD4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381FE4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 211u, depth + 1u); else { c.pc = 0x0037DE40u; return; } if (c.pc != 0x00381FE4u) [[unlikely]] return; }
L_00381FE4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381FF0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009F(c, 186u, depth + 1u); else { c.pc = 0x0037DB10u; return; } if (c.pc != 0x00381FF0u) [[unlikely]] return; }
L_00381FF0:
    set32(c.r[2], ld32((c.r[16].w[0] + 1096u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 272u);  if (t) { goto L_00382074; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382004u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00382004u) [[unlikely]] return; }
L_00382004:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[4], 0u + 32u);  if (t) { goto L_00382028; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382018u);  if (depth < kMaxDepth) unit_009F(c, 119u, depth + 1u); else { c.pc = 0x0037D1D0u; return; } if (c.pc != 0x00382018u) [[unlikely]] return; }
L_00382018:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382024u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x00382024u) [[unlikely]] return; }
L_00382024:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00382028:
    st32((c.r[16].w[0] + 1096u), c.r[17].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 1024u));
    set32(c.r[3], ld32((c.r[16].w[0] + 1096u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x431C0000u);
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43400000u);
    c.f[13] = c.r[2].w[0];
    st32((c.r[3].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 1032u));
    st32((c.r[3].w[0] + 20u), c.f[0]);
    st32((c.r[3].w[0] + 24u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 1096u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 19;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00382074u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00382074u) [[unlikely]] return; }
L_00382074:
    set32(c.r[2], ld32((c.r[16].w[0] + 1100u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 272u);  if (t) { goto L_003820D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382088u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00382088u) [[unlikely]] return; }
L_00382088:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[4], 0u + 24u);  if (t) { goto L_003820AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038209Cu);  if (depth < kMaxDepth) unit_009F(c, 119u, depth + 1u); else { c.pc = 0x0037D1D0u; return; } if (c.pc != 0x0038209Cu) [[unlikely]] return; }
L_0038209C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003820A8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x003820A8u) [[unlikely]] return; }
L_003820A8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003820AC:
    st32((c.r[16].w[0] + 1100u), c.r[17].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42AA0000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 1100u)));
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42DE0000u);
    c.f[13] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003820D8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003820D8u) [[unlikely]] return; }
L_003820D8:
    set32(c.r[2], ld32((c.r[16].w[0] + 1104u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 272u);  if (t) { goto L_0038213C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003820ECu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003820ECu) [[unlikely]] return; }
L_003820EC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[4], 0u + 33u);  if (t) { goto L_00382110; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382100u);  if (depth < kMaxDepth) unit_009F(c, 119u, depth + 1u); else { c.pc = 0x0037D1D0u; return; } if (c.pc != 0x00382100u) [[unlikely]] return; }
L_00382100:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038210Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x0038210Cu) [[unlikely]] return; }
L_0038210C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00382110:
    st32((c.r[16].w[0] + 1104u), c.r[17].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x435C0000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 1104u)));
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42DE0000u);
    c.f[13] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038213Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038213Cu) [[unlikely]] return; }
L_0038213C:
    set32(c.r[2], ld32((c.r[16].w[0] + 1108u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 272u);  if (t) { goto L_003821A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382150u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00382150u) [[unlikely]] return; }
L_00382150:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[4], 0u + 34u);  if (t) { goto L_00382174; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382164u);  if (depth < kMaxDepth) unit_009F(c, 119u, depth + 1u); else { c.pc = 0x0037D1D0u; return; } if (c.pc != 0x00382164u) [[unlikely]] return; }
L_00382164:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382170u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x00382170u) [[unlikely]] return; }
L_00382170:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00382174:
    st32((c.r[16].w[0] + 1108u), c.r[17].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43390000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 1108u)));
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43830000u);
    c.f[13] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003821A0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003821A0u) [[unlikely]] return; }
L_003821A0:
    set32(c.r[4], ld32((c.r[16].w[0] + 972u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003821B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003821B4u);  if (depth < kMaxDepth) unit_0098(c, 259u, depth + 1u); else { c.pc = 0x00362CF0u; return; } if (c.pc != 0x003821B4u) [[unlikely]] return; }
L_003821B4:
    st32((c.r[16].w[0] + 1068u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    st32((c.r[16].w[0] + 1072u), 0u);
    set32(c.r[2], 0u + 15u);
    st32((c.r[16].w[0] + 1076u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 1032u);
    st32((c.r[16].w[0] + 1080u), c.r[2].w[0]);
    set32(c.r[5], c.r[16].w[0] + 1068u);
    st32((c.r[16].w[0] + 1084u), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003821E0u); st32((c.r[16].w[0] + 1088u), 0u);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x003821E0u) [[unlikely]] return; }
L_003821E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003821E8u); set32(c.r[4], 0u + 15u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x003821E8u) [[unlikely]] return; }
L_003821E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00382200:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E600u | kUnwind; return; } [[clang::musttail]] return unit_000B(c, 319u, depth); }
L_00382210:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382224u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 320u, depth + 1u); else { c.pc = 0x0012E610u; return; } if (c.pc != 0x00382224u) [[unlikely]] return; }
L_00382224:
    set32(c.r[4], ld32((c.r[16].w[0] + 1092u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00382240; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00382240u); set32(c.r[5], 0u + 174u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00382240u) [[unlikely]] return; }
L_00382240:
    set32(c.r[4], ld32((c.r[16].w[0] + 972u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);  if (t) { goto L_00382258; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382254u);  if (depth < kMaxDepth) unit_0098(c, 262u, depth + 1u); else { c.pc = 0x00362D60u; return; } if (c.pc != 0x00382254u) [[unlikely]] return; }
L_00382254:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.budget -= 1;
L_00382258:
    set32(c.r[2], 0u + 15u);
    st32((c.r[16].w[0] + 1068u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 1032u);
    st32((c.r[16].w[0] + 1072u), c.r[3].w[0]);
    set32(c.r[5], c.r[16].w[0] + 1068u);
    st32((c.r[16].w[0] + 1076u), 0u);
    st32((c.r[16].w[0] + 1080u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 1084u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382280u); st32((c.r[16].w[0] + 1088u), 0u);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x00382280u) [[unlikely]] return; }
L_00382280:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00382290:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003822A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 101u, depth + 1u); else { c.pc = 0x0031CBF0u; return; } if (c.pc != 0x003822A4u) [[unlikely]] return; }
L_003822A4:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1116u));
    st8((c.r[2].w[0] + 1083u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1117u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003822B8u); st8((c.r[2].w[0] + 1084u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_007A(c, 324u, depth + 1u); else { c.pc = 0x002EA9F0u; return; } if (c.pc != 0x003822B8u) [[unlikely]] return; }
L_003822B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003822C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 321u, depth + 1u); else { c.pc = 0x0012E630u; return; } if (c.pc != 0x003822C0u) [[unlikely]] return; }
L_003822C0:
    set32(c.r[4], ld32((c.r[16].w[0] + 1092u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003822DC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003822DCu); set32(c.r[5], 0u + 174u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003822DCu) [[unlikely]] return; }
L_003822DC:
    set32(c.r[4], ld32((c.r[16].w[0] + 972u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);  if (t) { goto L_003822F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003822F0u);  if (depth < kMaxDepth) unit_0098(c, 262u, depth + 1u); else { c.pc = 0x00362D60u; return; } if (c.pc != 0x003822F0u) [[unlikely]] return; }
L_003822F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.budget -= 1;
L_003822F4:
    set32(c.r[2], 0u + 15u);
    st32((c.r[16].w[0] + 1068u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 1032u);
    st32((c.r[16].w[0] + 1072u), c.r[3].w[0]);
    set32(c.r[5], c.r[16].w[0] + 1068u);
    st32((c.r[16].w[0] + 1076u), 0u);
    st32((c.r[16].w[0] + 1080u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 1084u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038231Cu); st32((c.r[16].w[0] + 1088u), 0u);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x0038231Cu) [[unlikely]] return; }
L_0038231C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00382330:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00380900u | kUnwind; return; } goto L_00380900; }
L_00382340:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00380800u | kUnwind; return; } goto L_00380800; }
L_00382350:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00381520u | kUnwind; return; } goto L_00381520; }
L_00382360:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00381340u | kUnwind; return; } goto L_00381340; }
L_00382370:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] + 4304u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 9u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382394u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 12u, depth + 1u); else { c.pc = 0x001300B0u; return; } if (c.pc != 0x00382394u) [[unlikely]] return; }
L_00382394:
    set32(c.r[4], c.r[16].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003823A0u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x003823A0u) [[unlikely]] return; }
L_003823A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 31056u);
    set32(c.r[3], c.r[3].w[0] - 30968u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 30908u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003823D0u); st32((c.r[16].w[0] + 40u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 271u, depth + 1u); else { c.pc = 0x002275A0u; return; } if (c.pc != 0x003823D0u) [[unlikely]] return; }
L_003823D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[12] = ld32((c.r[1].w[0] - 752u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[14] = c.r[2].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C00000u);
    set32(c.r[5], c.r[5].w[0] + 4304u);
    c.f[15] = c.r[3].w[0];
    set32(c.r[6], 0u + 9u);
    c.f[16] = c.r[2].w[0];
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382414u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_000C(c, 301u, depth + 1u); else { c.pc = 0x00132AA0u; return; } if (c.pc != 0x00382414u) [[unlikely]] return; }
L_00382414:
    st32((c.r[16].w[0] + 448u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    st32((c.r[16].w[0] + 452u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[14] = ld32((c.r[1].w[0] - 760u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[12] = c.r[2].w[0];
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[16].w[0] + 456u);
    set32(c.r[5], 0u + 11u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42400000u);
    set32(c.r[6], 0u + 471u);
    c.f[13] = c.r[2].w[0];
    set32(c.r[7], 0u + 830u);
    set32(c.r[8], c.r[8].w[0] - 944u);
    set32(c.r[9], c.r[9].w[0] - 912u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[15] = ld32((c.r[1].w[0] - 768u));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382464u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000D(c, 34u, depth + 1u); else { c.pc = 0x00134330u; return; } if (c.pc != 0x00382464u) [[unlikely]] return; }
L_00382464:
    st32((c.r[16].w[0] + 580u), 0u);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00382478u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00382478u) [[unlikely]] return; }
L_00382478:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382480u); set32(c.r[4], c.r[16].w[0] + 456u);  if (depth < kMaxDepth) unit_000D(c, 69u, depth + 1u); else { c.pc = 0x001348D0u; return; } if (c.pc != 0x00382480u) [[unlikely]] return; }
L_00382480:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382488u);  if (depth < kMaxDepth) unit_0087(c, 101u, depth + 1u); else { c.pc = 0x0031CBF0u; return; } if (c.pc != 0x00382488u) [[unlikely]] return; }
L_00382488:
    st32((c.r[16].w[0] + 584u), 0u);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 352u));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    st32((c.r[16].w[0] + 584u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 588u), 0u);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 352u));
    c.r[3].d[0] = c.r[3].d[0] & 15ull;
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    st32((c.r[16].w[0] + 588u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1088u)));
    st32((c.r[16].w[0] + 592u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1089u)));
    st32((c.r[16].w[0] + 596u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1090u)));
    st32((c.r[16].w[0] + 600u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1091u)));
    st32((c.r[16].w[0] + 604u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1092u)));
    st32((c.r[16].w[0] + 608u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1094u)));
    st32((c.r[16].w[0] + 612u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1095u)));
    st32((c.r[16].w[0] + 616u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1093u)));
    st32((c.r[16].w[0] + 620u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 440u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 32;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00382510:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0038261C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 31056u);
    set32(c.r[3], c.r[3].w[0] - 30968u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 30908u);
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 448u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00382574; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00382574; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00382574u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00382574u) [[unlikely]] return; }
L_00382574:
    st32((c.r[17].w[0] + 448u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 452u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0038259C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0038259C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038259Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038259Cu) [[unlikely]] return; }
L_0038259C:
    st32((c.r[17].w[0] + 452u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 580u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003825C4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003825C4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003825C4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003825C4u) [[unlikely]] return; }
L_003825C4:
    set32(c.r[4], c.r[17].w[0] + 456u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003825D4u); st32((c.r[17].w[0] + 580u), 0u);  if (depth < kMaxDepth) unit_000D(c, 54u, depth + 1u); else { c.pc = 0x00134720u; return; } if (c.pc != 0x003825D4u) [[unlikely]] return; }
L_003825D4:
    set32(c.r[4], c.r[17].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003825E0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 311u, depth + 1u); else { c.pc = 0x00132C60u; return; } if (c.pc != 0x003825E0u) [[unlikely]] return; }
L_003825E0:
    set32(c.r[4], c.r[17].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003825ECu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0049(c, 274u, depth + 1u); else { c.pc = 0x002275F0u; return; } if (c.pc != 0x003825ECu) [[unlikely]] return; }
L_003825EC:
    set32(c.r[4], c.r[17].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003825F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x003825F8u) [[unlikely]] return; }
L_003825F8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382604u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 15u, depth + 1u); else { c.pc = 0x00130130u; return; } if (c.pc != 0x00382604u) [[unlikely]] return; }
L_00382604:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00382620; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038261Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0038261Cu) [[unlikely]] return; }
L_0038261C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00382620:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00382640:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[2], c.r[2].w[0] + 4384u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    ld128((c.r[2].w[0]) & ~15u, c.r[16]);
    set32(c.r[24], c.r[29].w[0] + 80u);
    c.r[15].d[0] = ld64((c.r[2].w[0] + 16u));
    set32(c.r[13], c.r[13].w[0] + 4408u);
    set32(c.r[14], c.r[29].w[0] + 152u);
    set32(c.r[11], c.r[11].w[0] + 4416u);
    set32(c.r[12], c.r[29].w[0] + 144u);
    set32(c.r[9], c.r[9].w[0] + 4424u);
    set32(c.r[17], ld32((c.r[3].w[0] + 440u)));
    set32(c.r[10], c.r[29].w[0] + 136u);
    set32(c.r[7], c.r[7].w[0] + 4432u);
    set32(c.r[8], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[5].w[0] + 4440u);
    set32(c.r[6], c.r[29].w[0] + 120u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 4448u);
    st128((c.r[24].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[29].w[0] + 112u);
    st64((c.r[24].w[0] + 16u), c.r[15].d[0]);
    c.r[13].d[0] = ld64((c.r[13].w[0]));
    st64((c.r[14].w[0]), c.r[13].d[0]);
    c.r[11].d[0] = ld64((c.r[11].w[0]));
    st64((c.r[12].w[0]), c.r[11].d[0]);
    c.r[9].d[0] = ld64((c.r[9].w[0]));
    st64((c.r[10].w[0]), c.r[9].d[0]);
    c.r[7].d[0] = ld64((c.r[7].w[0]));
    st64((c.r[8].w[0]), c.r[7].d[0]);
    c.r[5].d[0] = ld64((c.r[5].w[0]));
    st64((c.r[6].w[0]), c.r[5].d[0]);
    c.r[2].d[0] = ld64((c.r[2].w[0]));
    st64((c.r[3].w[0]), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 51;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_00382730; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382714u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00382714u) [[unlikely]] return; }
L_00382714:
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[17].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[17].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (t) { goto L_00382750; } }
L_00382730:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382738u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00382738u) [[unlikely]] return; }
L_00382738:
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[17].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[17].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 6;
L_00382750:
    set32(c.r[5], ld32((c.r[18].w[0] + 624u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], c.r[2].w[0] + 4464u);
    set32(c.r[3], c.r[29].w[0] + 64u);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 60u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 624u)));
    st32((c.r[17].w[0] + 300u), c.r[5].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 752u));
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 752u));
    st32((c.r[17].w[0] + 20u), c.f[0]);
    st32((c.r[17].w[0] + 24u), c.r[4].w[0]);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.budget -= 18;
L_00382798:
    c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_003828B8; } }
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 880u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00380000u < 16384u) { entry = entries_00A0[(t - 0x00380000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003827BC:
    set32(c.r[2], ld32((c.r[18].w[0] + 584u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003827D0u); set32(c.r[4], ld32((c.r[2].w[0] + 80u)));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x003827D0u) [[unlikely]] return; }
L_003827D0:
    st32((c.r[17].w[0] + 352u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 356u), 0u);  if (t) { goto L_003828B8; } }
L_003827DC:
    set32(c.r[2], ld32((c.r[18].w[0] + 588u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003827F0u); set32(c.r[4], ld32((c.r[2].w[0] + 80u)));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x003827F0u) [[unlikely]] return; }
L_003827F0:
    st32((c.r[17].w[0] + 352u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 356u), 0u);  if (t) { goto L_003828B8; } }
L_003827FC:
    set32(c.r[2], ld32((c.r[18].w[0] + 592u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382810u); set32(c.r[4], ld32((c.r[2].w[0] + 152u)));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00382810u) [[unlikely]] return; }
L_00382810:
    st32((c.r[17].w[0] + 352u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 356u), 0u);  if (t) { goto L_003828B8; } }
L_0038281C:
    set32(c.r[2], ld32((c.r[18].w[0] + 596u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382830u); set32(c.r[4], ld32((c.r[2].w[0] + 144u)));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00382830u) [[unlikely]] return; }
L_00382830:
    st32((c.r[17].w[0] + 352u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 356u), 0u);  if (t) { goto L_003828B8; } }
L_0038283C:
    set32(c.r[2], ld32((c.r[18].w[0] + 600u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382850u); set32(c.r[4], ld32((c.r[2].w[0] + 136u)));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00382850u) [[unlikely]] return; }
L_00382850:
    st32((c.r[17].w[0] + 352u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 356u), 0u);  if (t) { goto L_003828B8; } }
L_0038285C:
    set32(c.r[2], ld32((c.r[18].w[0] + 604u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382870u); set32(c.r[4], ld32((c.r[2].w[0] + 128u)));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00382870u) [[unlikely]] return; }
L_00382870:
    st32((c.r[17].w[0] + 352u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 356u), 0u);  if (t) { goto L_003828B8; } }
L_0038287C:
    set32(c.r[2], ld32((c.r[18].w[0] + 608u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382890u); set32(c.r[4], ld32((c.r[2].w[0] + 120u)));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00382890u) [[unlikely]] return; }
L_00382890:
    st32((c.r[17].w[0] + 352u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 356u), 0u);  if (t) { goto L_003828B8; } }
L_0038289C:
    set32(c.r[2], ld32((c.r[18].w[0] + 620u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003828B0u); set32(c.r[4], ld32((c.r[2].w[0] + 112u)));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x003828B0u) [[unlikely]] return; }
L_003828B0:
    st32((c.r[17].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 356u), 0u);
    c.budget -= 2;
L_003828B8:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003828CCu); set32(c.r[5], c.r[29].w[0] + 64u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003828CCu) [[unlikely]] return; }
L_003828CC:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003828DCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003828DCu) [[unlikely]] return; }
L_003828DC:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003828FCu); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003828FCu) [[unlikely]] return; }
L_003828FC:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038291Cu); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038291Cu) [[unlikely]] return; }
L_0038291C:
    c.f[1] = ld32((c.r[29].w[0] + 68u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[29].w[0] + 68u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00382798u | kUnwind; return; } goto L_00382798; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00382960:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382978u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00382978u) [[unlikely]] return; }
L_00382978:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003829A8; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0038298C; } }
    set32(c.r[7], c.r[7].w[0] + 20u);
    c.budget -= 1;
L_0038298C:
    set32(c.r[8], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[9], ld32((c.r[16].w[0] + 32u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003829A8u); c.r[10].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 371u, depth + 1u); else { c.pc = 0x0012EBA0u; return; } if (c.pc != 0x003829A8u) [[unlikely]] return; }
L_003829A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003829C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003829D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 24u, depth + 1u); else { c.pc = 0x00130260u; return; } if (c.pc != 0x003829D4u) [[unlikely]] return; }
L_003829D4:
    st32((c.r[16].w[0] + 380u), 0u);
    set32(c.r[4], c.r[16].w[0] + 320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003829E4u); st8((c.r[16].w[0] + 376u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x003829E4u) [[unlikely]] return; }
L_003829E4:
    st32((c.r[16].w[0] + 412u), 0u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    st32((c.r[3].w[0] + 36u), c.r[4].w[0]);
    st8((c.r[16].w[0] + 440u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 441u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 408u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00382A10:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382A2Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000C(c, 25u, depth + 1u); else { c.pc = 0x00130270u; return; } if (c.pc != 0x00382A2Cu) [[unlikely]] return; }
L_00382A2C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382A40u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002A(c, 139u, depth + 1u); else { c.pc = 0x001A95F0u; return; } if (c.pc != 0x00382A40u) [[unlikely]] return; }
L_00382A40:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 448u)));
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[3].w[0] + 624u);  if (t) { goto L_00382AA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382A5Cu); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00382A5Cu) [[unlikely]] return; }
L_00382A5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00382A70; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382A70u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_002A(c, 287u, depth + 1u); else { c.pc = 0x001AB200u; return; } if (c.pc != 0x00382A70u) [[unlikely]] return; }
L_00382A70:
    st32((c.r[17].w[0] + 448u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382A80u); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x00382A80u) [[unlikely]] return; }
L_00382A80:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382A90u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x00382A90u) [[unlikely]] return; }
L_00382A90:
    set32(c.r[4], ld32((c.r[17].w[0] + 448u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382AA0u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x00382AA0u) [[unlikely]] return; }
L_00382AA0:
    set32(c.r[4], ld32((c.r[17].w[0] + 448u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00382AB4u); set32(c.r[5], 0u + 85u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00382AB4u) [[unlikely]] return; }
L_00382AB4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00150000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 448u)));
    c.r[3].d[0] = c.r[3].d[0] | 17999ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[2].w[0] + 104u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 452u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 160u);  if (t) { goto L_00382B28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382AE4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00382AE4u) [[unlikely]] return; }
L_00382AE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 3u);  if (t) { goto L_00382AF8; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382AF8u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 287u, depth + 1u); else { c.pc = 0x001AB200u; return; } if (c.pc != 0x00382AF8u) [[unlikely]] return; }
L_00382AF8:
    st32((c.r[17].w[0] + 452u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382B08u); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x00382B08u) [[unlikely]] return; }
L_00382B08:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382B18u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x00382B18u) [[unlikely]] return; }
L_00382B18:
    set32(c.r[4], ld32((c.r[17].w[0] + 452u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382B28u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x00382B28u) [[unlikely]] return; }
L_00382B28:
    set32(c.r[4], ld32((c.r[17].w[0] + 452u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00382B3Cu); set32(c.r[5], 0u + 46u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00382B3Cu) [[unlikely]] return; }
L_00382B3C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[6], ld32((c.r[17].w[0] + 452u)));
    c.f[0] = c.r[2].w[0];
    set32(c.r[3], c.r[3].w[0] + 4480u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[4], c.r[17].w[0] + 52u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[6].w[0] + 104u), c.f[0]);
    ld128((c.r[3].w[0]) & ~15u, c.r[6]);
    c.r[3].d[0] = ld64((c.r[3].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[6]);
    st64((c.r[5].w[0] + 16u), c.r[3].d[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382B80u); st32((c.r[17].w[0] + 412u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x00382B80u) [[unlikely]] return; }
L_00382B80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382B88u); set32(c.r[4], c.r[17].w[0] + 456u);  if (depth < kMaxDepth) unit_000D(c, 68u, depth + 1u); else { c.pc = 0x001348C0u; return; } if (c.pc != 0x00382B88u) [[unlikely]] return; }
L_00382B88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382B90u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x00382B90u) [[unlikely]] return; }
L_00382B90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00382BB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00382DC8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 848u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00380000u < 16384u) { entry = entries_00A0[(t - 0x00380000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00382BE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382BF0u); set32(c.r[4], 0u + 448u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00382BF0u) [[unlikely]] return; }
L_00382BF0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00382C1C; } }
    set32(c.r[7], ld32((c.r[16].w[0] + 584u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[5].w[0] + 4512u);
    set32(c.r[6], 0u + 6u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382C18u); set32(c.r[9], 0u + 1u);  if (depth < kMaxDepth) unit_00A0(c, 418u, depth + 1u); else { c.pc = 0x00383390u; return; } if (c.pc != 0x00382C18u) [[unlikely]] return; }
L_00382C18:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00382C1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 580u), c.r[4].w[0]);  if (t) { goto L_00382EEC; } }
L_00382C24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382C2Cu); set32(c.r[4], 0u + 448u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00382C2Cu) [[unlikely]] return; }
L_00382C2C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00382C58; } }
    set32(c.r[7], ld32((c.r[16].w[0] + 588u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[5].w[0] + 4512u);
    set32(c.r[6], 0u + 6u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382C54u); set32(c.r[9], 0u + 1u);  if (depth < kMaxDepth) unit_00A0(c, 418u, depth + 1u); else { c.pc = 0x00383390u; return; } if (c.pc != 0x00382C54u) [[unlikely]] return; }
L_00382C54:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00382C58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 580u), c.r[4].w[0]);  if (t) { goto L_00382EEC; } }
L_00382C60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382C68u); set32(c.r[4], 0u + 448u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00382C68u) [[unlikely]] return; }
L_00382C68:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00382C94; } }
    set32(c.r[7], ld32((c.r[16].w[0] + 592u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[5].w[0] + 4560u);
    set32(c.r[6], 0u + 2u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382C90u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 418u, depth + 1u); else { c.pc = 0x00383390u; return; } if (c.pc != 0x00382C90u) [[unlikely]] return; }
L_00382C90:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00382C94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 580u), c.r[4].w[0]);  if (t) { goto L_00382EEC; } }
L_00382C9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382CA4u); set32(c.r[4], 0u + 448u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00382CA4u) [[unlikely]] return; }
L_00382CA4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00382CD0; } }
    set32(c.r[7], ld32((c.r[16].w[0] + 596u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[5].w[0] + 4576u);
    set32(c.r[6], 0u + 2u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382CCCu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 418u, depth + 1u); else { c.pc = 0x00383390u; return; } if (c.pc != 0x00382CCCu) [[unlikely]] return; }
L_00382CCC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00382CD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 580u), c.r[4].w[0]);  if (t) { goto L_00382EEC; } }
L_00382CD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382CE0u); set32(c.r[4], 0u + 448u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00382CE0u) [[unlikely]] return; }
L_00382CE0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00382D0C; } }
    set32(c.r[7], ld32((c.r[16].w[0] + 600u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[5].w[0] + 4592u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[8], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382D08u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 418u, depth + 1u); else { c.pc = 0x00383390u; return; } if (c.pc != 0x00382D08u) [[unlikely]] return; }
L_00382D08:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00382D0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 580u), c.r[4].w[0]);  if (t) { goto L_00382EEC; } }
L_00382D14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382D1Cu); set32(c.r[4], 0u + 448u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00382D1Cu) [[unlikely]] return; }
L_00382D1C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00382D48; } }
    set32(c.r[7], ld32((c.r[16].w[0] + 604u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[5].w[0] + 4608u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[8], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382D44u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 418u, depth + 1u); else { c.pc = 0x00383390u; return; } if (c.pc != 0x00382D44u) [[unlikely]] return; }
L_00382D44:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00382D48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 580u), c.r[4].w[0]);  if (t) { goto L_00382EEC; } }
L_00382D50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382D58u); set32(c.r[4], 0u + 448u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00382D58u) [[unlikely]] return; }
L_00382D58:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00382D84; } }
    set32(c.r[7], ld32((c.r[16].w[0] + 608u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[5].w[0] + 4624u);
    set32(c.r[6], 0u + 2u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382D80u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 418u, depth + 1u); else { c.pc = 0x00383390u; return; } if (c.pc != 0x00382D80u) [[unlikely]] return; }
L_00382D80:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00382D84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 580u), c.r[4].w[0]);  if (t) { goto L_00382EEC; } }
L_00382D8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382D94u); set32(c.r[4], 0u + 448u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00382D94u) [[unlikely]] return; }
L_00382D94:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00382DC0; } }
    set32(c.r[7], ld32((c.r[16].w[0] + 620u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[5].w[0] + 4640u);
    set32(c.r[6], 0u + 2u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382DBCu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 418u, depth + 1u); else { c.pc = 0x00383390u; return; } if (c.pc != 0x00382DBCu) [[unlikely]] return; }
L_00382DBC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00382DC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 580u), c.r[4].w[0]);  if (t) { goto L_00382EEC; } }
L_00382DC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382DD0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 26u, depth + 1u); else { c.pc = 0x00130280u; return; } if (c.pc != 0x00382DD0u) [[unlikely]] return; }
L_00382DD0:
    set32(c.r[4], ld32((c.r[16].w[0] + 448u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00382E08; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00382DECu); set32(c.r[5], 0u + 86u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00382DECu) [[unlikely]] return; }
L_00382DEC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00260000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 448u)));
    c.r[3].d[0] = c.r[3].d[0] | 22647ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[2].w[0] + 104u), c.f[0]);
    c.budget -= 7;
L_00382E08:
    set32(c.r[4], ld32((c.r[16].w[0] + 452u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00382E40; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00382E24u); set32(c.r[5], 0u + 45u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00382E24u) [[unlikely]] return; }
L_00382E24:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 448u)));
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[2].w[0] + 104u), c.f[0]);
    c.budget -= 7;
L_00382E40:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] + 4656u);
    set32(c.r[2], 0u + 2u);
    ld128((c.r[3].w[0]) & ~15u, c.r[6]);
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.r[3].d[0] = ld64((c.r[3].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[6]);
    st64((c.r[5].w[0] + 16u), c.r[3].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382E6Cu); st32((c.r[16].w[0] + 412u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x00382E6Cu) [[unlikely]] return; }
L_00382E6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382E74u); set32(c.r[4], c.r[16].w[0] + 456u);  if (depth < kMaxDepth) unit_000D(c, 69u, depth + 1u); else { c.pc = 0x001348D0u; return; } if (c.pc != 0x00382E74u) [[unlikely]] return; }
L_00382E74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382E7Cu);  if (depth < kMaxDepth) unit_0087(c, 101u, depth + 1u); else { c.pc = 0x0031CBF0u; return; } if (c.pc != 0x00382E7Cu) [[unlikely]] return; }
L_00382E7C:
    st8((c.r[2].w[0] + 352u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[16].w[0] + 584u)));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 352u));
    set32(c.r[4], c.r[4].w[0] << 4);
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[2].w[0] + 352u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 588u));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 352u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[2].w[0] + 352u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 592u)));
    st8((c.r[2].w[0] + 1088u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 596u)));
    st8((c.r[2].w[0] + 1089u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 600u)));
    st8((c.r[2].w[0] + 1090u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 604u)));
    st8((c.r[2].w[0] + 1091u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 608u)));
    st8((c.r[2].w[0] + 1092u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 612u)));
    st8((c.r[2].w[0] + 1094u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 616u)));
    st8((c.r[2].w[0] + 1095u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 620u)));
    st8((c.r[2].w[0] + 1093u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 440u), static_cast<std::uint8_t>(0u));
    c.budget -= 28;
L_00382EEC:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[3], 0u + 1u);
    st32((c.r[4].w[0] + 36u), 0u);
    st8((c.r[16].w[0] + 441u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 408u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00382F10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382F24u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 27u, depth + 1u); else { c.pc = 0x00130290u; return; } if (c.pc != 0x00382F24u) [[unlikely]] return; }
L_00382F24:
    set32(c.r[4], ld32((c.r[16].w[0] + 448u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00382F5C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00382F40u); set32(c.r[5], 0u + 86u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00382F40u) [[unlikely]] return; }
L_00382F40:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00260000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 448u)));
    c.r[3].d[0] = c.r[3].d[0] | 22647ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[2].w[0] + 104u), c.f[0]);
    c.budget -= 7;
L_00382F5C:
    set32(c.r[4], ld32((c.r[16].w[0] + 452u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00382F94; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00382F78u); set32(c.r[5], 0u + 45u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00382F78u) [[unlikely]] return; }
L_00382F78:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 448u)));
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[2].w[0] + 104u), c.f[0]);
    c.budget -= 7;
L_00382F94:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] + 4688u);
    set32(c.r[2], 0u + 2u);
    ld128((c.r[3].w[0]) & ~15u, c.r[6]);
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.r[3].d[0] = ld64((c.r[3].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[6]);
    st64((c.r[5].w[0] + 16u), c.r[3].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382FC0u); st32((c.r[16].w[0] + 412u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x00382FC0u) [[unlikely]] return; }
L_00382FC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382FC8u); set32(c.r[4], c.r[16].w[0] + 456u);  if (depth < kMaxDepth) unit_000D(c, 69u, depth + 1u); else { c.pc = 0x001348D0u; return; } if (c.pc != 0x00382FC8u) [[unlikely]] return; }
L_00382FC8:
    st8((c.r[16].w[0] + 440u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 408u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00382FE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382FFCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 32u, depth + 1u); else { c.pc = 0x00130300u; return; } if (c.pc != 0x00382FFCu) [[unlikely]] return; }
L_00382FFC:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[4], c.r[17].w[0] + 320u);
    st32((c.r[17].w[0] + 396u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 380u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383014u); st8((c.r[17].w[0] + 376u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x00383014u) [[unlikely]] return; }
L_00383014:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00383030:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038304Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 29u, depth + 1u); else { c.pc = 0x001302B0u; return; } if (c.pc != 0x0038304Cu) [[unlikely]] return; }
L_0038304C:
    st32((c.r[17].w[0] + 396u), c.r[16].w[0]);
    c.budget -= 1;
L_00383050:
    set32(c.r[4], c.r[17].w[0] + 320u);
    st32((c.r[17].w[0] + 380u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383060u); st8((c.r[17].w[0] + 376u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x00383060u) [[unlikely]] return; }
L_00383060:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00383080:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383094u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 304u, depth + 1u); else { c.pc = 0x0012E500u; return; } if (c.pc != 0x00383094u) [[unlikely]] return; }
L_00383094:
    c.f[0] = ld32((c.r[16].w[0] + 64u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[16].w[0] + 400u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 64u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[16].w[0] + 624u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003830D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003830E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 135u, depth + 1u); else { c.pc = 0x001A9560u; return; } if (c.pc != 0x003830E4u) [[unlikely]] return; }
L_003830E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003830FC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003830FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003830FCu) [[unlikely]] return; }
L_003830FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00383110:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383124u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 417u, depth + 1u); else { c.pc = 0x00383360u; return; } if (c.pc != 0x00383124u) [[unlikely]] return; }
L_00383124:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0038313C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038313Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038313Cu) [[unlikely]] return; }
L_0038313C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00383150:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 580u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003832CC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038317Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038317Cu) [[unlikely]] return; }
L_0038317C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003832CC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_00383288; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 816u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00380000u < 16384u) { entry = entries_00A0[(t - 0x00380000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003831AC:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003831C0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003831C0u) [[unlikely]] return; }
L_003831C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 584u), c.r[2].w[0]);  if (t) { goto L_00383288; } }
L_003831C8:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003831DCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003831DCu) [[unlikely]] return; }
L_003831DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 588u), c.r[2].w[0]);  if (t) { goto L_00383288; } }
L_003831E4:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003831F8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003831F8u) [[unlikely]] return; }
L_003831F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 592u), c.r[2].w[0]);  if (t) { goto L_00383288; } }
L_00383200:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00383214u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00383214u) [[unlikely]] return; }
L_00383214:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 596u), c.r[2].w[0]);  if (t) { goto L_00383288; } }
L_0038321C:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00383230u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00383230u) [[unlikely]] return; }
L_00383230:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 600u), c.r[2].w[0]);  if (t) { goto L_00383288; } }
L_00383238:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038324Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038324Cu) [[unlikely]] return; }
L_0038324C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 604u), c.r[2].w[0]);  if (t) { goto L_00383288; } }
L_00383254:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00383268u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00383268u) [[unlikely]] return; }
L_00383268:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 608u), c.r[2].w[0]);  if (t) { goto L_00383288; } }
L_00383270:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00383284u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00383284u) [[unlikely]] return; }
L_00383284:
    st32((c.r[16].w[0] + 620u), c.r[2].w[0]);
    c.budget -= 1;
L_00383288:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00383298u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00383298u) [[unlikely]] return; }
L_00383298:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[5], 0u + 1u);
    st32((c.r[3].w[0] + 36u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003832C8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003832C8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003832C8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003832C8u) [[unlikely]] return; }
L_003832C8:
    st32((c.r[16].w[0] + 580u), 0u);
    c.budget -= 1;
L_003832CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003832E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003832F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 417u, depth + 1u); else { c.pc = 0x00383360u; return; } if (c.pc != 0x003832F4u) [[unlikely]] return; }
L_003832F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0038330C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038330Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038330Cu) [[unlikely]] return; }
L_0038330C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00383320:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383334u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 417u, depth + 1u); else { c.pc = 0x00383360u; return; } if (c.pc != 0x00383334u) [[unlikely]] return; }
L_00383334:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0038334C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038334Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038334Cu) [[unlikely]] return; }
L_0038334C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00383360:
    set32(c.r[3], ld32((c.r[4].w[0] + 452u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00383370; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 137u));
    c.budget -= 1;
L_00383370:
    set32(c.r[3], ld32((c.r[4].w[0] + 448u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00383380; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 137u));
    c.budget -= 1;
L_00383380:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00383390:
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
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    c.r[16].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003833D0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 12u, depth + 1u); else { c.pc = 0x001300B0u; return; } if (c.pc != 0x003833D0u) [[unlikely]] return; }
L_003833D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 31216u);
    set32(c.r[2], c.r[2].w[0] - 31128u);
    st32((c.r[21].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[21].w[0] + 40u);
    st32((c.r[21].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003833F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 271u, depth + 1u); else { c.pc = 0x002275A0u; return; } if (c.pc != 0x003833F4u) [[unlikely]] return; }
L_003833F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    set32(c.r[7], 0u + 517u);
    c.f[14] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = c.r[7].w[0];
    set32(c.r[3], c.r[16].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 784u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = ld32((c.r[1].w[0] - 776u));
    set32(c.r[4], c.r[21].w[0] + 80u);
    c.f[16] = ld32((c.r[2].w[0]));
    c.r[7].d[0] = 0ull + 0ull;
    c.f[15] = fp::cvt_s_w(c.f[0]);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383444u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_000C(c, 301u, depth + 1u); else { c.pc = 0x00132AA0u; return; } if (c.pc != 0x00383444u) [[unlikely]] return; }
L_00383444:
    st32((c.r[21].w[0] + 432u), 0u);
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00383458u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00383458u) [[unlikely]] return; }
L_00383458:
    set32(c.r[2], 0u + 1u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[21].w[0] + 396u), c.r[2].w[0]);
    st32((c.r[21].w[0] + 384u), 0u);
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 140u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00383478u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00383478u) [[unlikely]] return; }
L_00383478:
    set32(c.r[4], c.r[21].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383484u); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_000F(c, 269u, depth + 1u); else { c.pc = 0x0013E620u; return; } if (c.pc != 0x00383484u) [[unlikely]] return; }
L_00383484:
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
L_003834B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00383548; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 31216u);
    set32(c.r[2], c.r[2].w[0] - 31128u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 432u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00383508; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00383508; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00383508u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00383508u) [[unlikely]] return; }
L_00383508:
    set32(c.r[4], c.r[17].w[0] + 80u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383518u); st32((c.r[17].w[0] + 432u), 0u);  if (depth < kMaxDepth) unit_000C(c, 311u, depth + 1u); else { c.pc = 0x00132C60u; return; } if (c.pc != 0x00383518u) [[unlikely]] return; }
L_00383518:
    set32(c.r[4], c.r[17].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383524u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0049(c, 274u, depth + 1u); else { c.pc = 0x002275F0u; return; } if (c.pc != 0x00383524u) [[unlikely]] return; }
L_00383524:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383530u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 15u, depth + 1u); else { c.pc = 0x00130130u; return; } if (c.pc != 0x00383530u) [[unlikely]] return; }
L_00383530:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0038354C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383548u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00383548u) [[unlikely]] return; }
L_00383548:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0038354C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00383560:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383578u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00383578u) [[unlikely]] return; }
L_00383578:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003835A8; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0038358C; } }
    set32(c.r[7], c.r[7].w[0] + 20u);
    c.budget -= 1;
L_0038358C:
    set32(c.r[8], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[9], ld32((c.r[16].w[0] + 32u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003835A8u); c.r[10].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 371u, depth + 1u); else { c.pc = 0x0012EBA0u; return; } if (c.pc != 0x003835A8u) [[unlikely]] return; }
L_003835A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003835C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003835D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 24u, depth + 1u); else { c.pc = 0x00130260u; return; } if (c.pc != 0x003835D4u) [[unlikely]] return; }
L_003835D4:
    st32((c.r[16].w[0] + 364u), 0u);
    set32(c.r[4], c.r[16].w[0] + 304u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003835E4u); st8((c.r[16].w[0] + 360u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x003835E4u) [[unlikely]] return; }
L_003835E4:
    st32((c.r[16].w[0] + 396u), 0u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    st32((c.r[3].w[0] + 36u), c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00383610:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383628u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 25u, depth + 1u); else { c.pc = 0x00130270u; return; } if (c.pc != 0x00383628u) [[unlikely]] return; }
L_00383628:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038363Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002A(c, 139u, depth + 1u); else { c.pc = 0x001A95F0u; return; } if (c.pc != 0x0038363Cu) [[unlikely]] return; }
L_0038363C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 432u)));
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[3].w[0] + 624u);  if (t) { goto L_0038369C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383658u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00383658u) [[unlikely]] return; }
L_00383658:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0038366C; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038366Cu); set32(c.r[6], 0u + 11u);  if (depth < kMaxDepth) unit_002A(c, 287u, depth + 1u); else { c.pc = 0x001AB200u; return; } if (c.pc != 0x0038366Cu) [[unlikely]] return; }
L_0038366C:
    st32((c.r[16].w[0] + 432u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038367Cu); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x0038367Cu) [[unlikely]] return; }
L_0038367C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038368Cu); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x0038368Cu) [[unlikely]] return; }
L_0038368C:
    set32(c.r[4], ld32((c.r[16].w[0] + 432u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038369Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x0038369Cu) [[unlikely]] return; }
L_0038369C:
    set32(c.r[4], ld32((c.r[16].w[0] + 432u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003836B0u); set32(c.r[5], 0u + 88u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003836B0u) [[unlikely]] return; }
L_003836B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 432u)));
    c.f[0] = c.r[2].w[0];
    set32(c.r[3], c.r[3].w[0] + 4720u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[4], c.r[16].w[0] + 40u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[6].w[0] + 104u), c.f[0]);
    ld128((c.r[3].w[0]) & ~15u, c.r[6]);
    c.r[3].d[0] = ld64((c.r[3].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[6]);
    st64((c.r[5].w[0] + 16u), c.r[3].d[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003836F4u); st32((c.r[16].w[0] + 396u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x003836F4u) [[unlikely]] return; }
L_003836F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00383710:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383724u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 26u, depth + 1u); else { c.pc = 0x00130280u; return; } if (c.pc != 0x00383724u) [[unlikely]] return; }
L_00383724:
    set32(c.r[4], ld32((c.r[16].w[0] + 432u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00383740; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00383740u); set32(c.r[5], 0u + 90u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00383740u) [[unlikely]] return; }
L_00383740:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] + 4752u);
    set32(c.r[2], 0u + 2u);
    ld128((c.r[3].w[0]) & ~15u, c.r[6]);
    set32(c.r[4], c.r[16].w[0] + 40u);
    c.r[3].d[0] = ld64((c.r[3].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[6]);
    st64((c.r[5].w[0] + 16u), c.r[3].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038376Cu); st32((c.r[16].w[0] + 396u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x0038376Cu) [[unlikely]] return; }
L_0038376C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00383780:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383794u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 26u, depth + 1u); else { c.pc = 0x00130280u; return; } if (c.pc != 0x00383794u) [[unlikely]] return; }
L_00383794:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038379Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 27u, depth + 1u); else { c.pc = 0x00130290u; return; } if (c.pc != 0x0038379Cu) [[unlikely]] return; }
L_0038379C:
    set32(c.r[4], ld32((c.r[16].w[0] + 432u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003837B8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003837B8u); set32(c.r[5], 0u + 90u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003837B8u) [[unlikely]] return; }
L_003837B8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] + 4784u);
    set32(c.r[2], 0u + 2u);
    ld128((c.r[3].w[0]) & ~15u, c.r[6]);
    set32(c.r[4], c.r[16].w[0] + 40u);
    c.r[3].d[0] = ld64((c.r[3].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[6]);
    st64((c.r[5].w[0] + 16u), c.r[3].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003837E4u); st32((c.r[16].w[0] + 396u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x003837E4u) [[unlikely]] return; }
L_003837E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00383800:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038381Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 32u, depth + 1u); else { c.pc = 0x00130300u; return; } if (c.pc != 0x0038381Cu) [[unlikely]] return; }
L_0038381C:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[4], c.r[17].w[0] + 304u);
    st32((c.r[17].w[0] + 380u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 364u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383834u); st8((c.r[17].w[0] + 360u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x00383834u) [[unlikely]] return; }
L_00383834:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00383850:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038386Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 29u, depth + 1u); else { c.pc = 0x001302B0u; return; } if (c.pc != 0x0038386Cu) [[unlikely]] return; }
L_0038386C:
    st32((c.r[17].w[0] + 380u), c.r[16].w[0]);
    set32(c.r[4], c.r[17].w[0] + 304u);
    st32((c.r[17].w[0] + 364u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383880u); st8((c.r[17].w[0] + 360u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x00383880u) [[unlikely]] return; }
L_00383880:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003838A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003838B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 304u, depth + 1u); else { c.pc = 0x0012E500u; return; } if (c.pc != 0x003838B4u) [[unlikely]] return; }
L_003838B4:
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[16].w[0] + 384u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003838E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003838F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 135u, depth + 1u); else { c.pc = 0x001A9560u; return; } if (c.pc != 0x003838F4u) [[unlikely]] return; }
L_003838F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0038390C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038390Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038390Cu) [[unlikely]] return; }
L_0038390C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00383920:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383934u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 476u, depth + 1u); else { c.pc = 0x003839E0u; return; } if (c.pc != 0x00383934u) [[unlikely]] return; }
L_00383934:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0038394C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038394Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038394Cu) [[unlikely]] return; }
L_0038394C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00383960:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383974u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 476u, depth + 1u); else { c.pc = 0x003839E0u; return; } if (c.pc != 0x00383974u) [[unlikely]] return; }
L_00383974:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0038398C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038398Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038398Cu) [[unlikely]] return; }
L_0038398C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003839A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003839B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 476u, depth + 1u); else { c.pc = 0x003839E0u; return; } if (c.pc != 0x003839B4u) [[unlikely]] return; }
L_003839B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003839CC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003839CCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003839CCu) [[unlikely]] return; }
L_003839CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003839E0:
    set32(c.r[3], ld32((c.r[4].w[0] + 432u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003839F0; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 137u));
    c.budget -= 1;
L_003839F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00383A00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00383A10:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00382FE0u | kUnwind; return; } goto L_00382FE0; }
L_00383A20:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00382510u | kUnwind; return; } goto L_00382510; }
L_00383A30:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00382640u | kUnwind; return; } goto L_00382640; }
L_00383A40:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00382510u | kUnwind; return; } goto L_00382510; }
L_00383A50:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00383800u | kUnwind; return; } goto L_00383800; }
L_00383A60:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003834B0u | kUnwind; return; } goto L_003834B0; }
L_00383A70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383A90u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 177u, depth + 1u); else { c.pc = 0x0015E070u; return; } if (c.pc != 0x00383A90u) [[unlikely]] return; }
L_00383A90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383A98u); set32(c.r[4], c.r[16].w[0] + 256u);  if (depth < kMaxDepth) unit_0017(c, 177u, depth + 1u); else { c.pc = 0x0015E070u; return; } if (c.pc != 0x00383A98u) [[unlikely]] return; }
L_00383A98:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41500000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[17], 0u + 6u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 7;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[4], 0u + 19u);  if (t) { goto L_00383ABC; } }
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u + 6u);
    c.budget -= 2;
L_00383ABC:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x41100000u);  if (t) { goto L_00383AD4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
L_00383AD4:
    st32((c.r[16].w[0] + 160u), c.f[1]);
    st32((c.r[16].w[0] + 164u), c.f[1]);
    st32((c.r[16].w[0] + 416u), c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383AE8u); st32((c.r[16].w[0] + 420u), c.f[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00383AE8u) [[unlikely]] return; }
L_00383AE8:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383AF8u); st128((c.r[16].w[0] + 48u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00383AF8u) [[unlikely]] return; }
L_00383AF8:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[16].w[0] + 304u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00383B20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00383B3Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00383B3Cu) [[unlikely]] return; }
L_00383B3C:
    set32(c.r[25], ld32((c.r[16].w[0] + 432u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00383B4Cu); set32(c.r[4], c.r[16].w[0] + 256u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00383B4Cu) [[unlikely]] return; }
L_00383B4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00383B60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00383B84u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00383B84u) [[unlikely]] return; }
L_00383B84:
    set32(c.r[25], ld32((c.r[17].w[0] + 432u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00383B98u); set32(c.r[4], c.r[17].w[0] + 256u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00383B98u) [[unlikely]] return; }
L_00383B98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00383BB0:
    st32((c.r[4].w[0] + 60u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 316u), c.r[5].w[0]);  c.pc = t; return; }
L_00383BC0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383BE0u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0018(c, 27u, depth + 1u); else { c.pc = 0x00161280u; return; } if (c.pc != 0x00383BE0u) [[unlikely]] return; }
L_00383BE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383BE8u); set32(c.r[4], c.r[16].w[0] + 368u);  if (depth < kMaxDepth) unit_0017(c, 177u, depth + 1u); else { c.pc = 0x0015E070u; return; } if (c.pc != 0x00383BE8u) [[unlikely]] return; }
L_00383BE8:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[5].d[0];  if (t) { goto L_00383BF8; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00383BF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383C00u); set32(c.r[4], c.r[16].w[0] + 624u);  if (depth < kMaxDepth) unit_00A0(c, 484u, depth + 1u); else { c.pc = 0x00383A70u; return; } if (c.pc != 0x00383C00u) [[unlikely]] return; }
L_00383C00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 1136u), 0u);
    st32((c.r[16].w[0] + 1140u), c.r[2].w[0]);
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[16].w[0] + 1136u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43660000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43200000u);
    set32(c.r[4], 0u + 6u);
    c.f[2] = c.r[2].w[0];
    c.f[20] = c.r[3].w[0];
    set32(c.r[2], 0u + 1u);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 1144u), c.f[0]);
    c.budget -= 15;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; st32((c.r[16].w[0] + 1148u), 0u);  if (t) { goto L_00383C50; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43160000u);
    set32(c.r[4], 0u + 19u);
    c.f[2] = c.r[2].w[0];
    c.f[20] = c.f[2];
    c.budget -= 5;
L_00383C50:
    st32((c.r[16].w[0] + 528u), c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383C60u); st32((c.r[16].w[0] + 532u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00383C60u) [[unlikely]] return; }
L_00383C60:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[5], 0u + 10u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    st128((c.r[16].w[0] + 416u) & ~15u, c.r[3]);
    st32((c.r[16].w[0] + 160u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383C84u); st32((c.r[16].w[0] + 164u), c.f[20]);  if (depth < kMaxDepth) unit_0018(c, 37u, depth + 1u); else { c.pc = 0x00161410u; return; } if (c.pc != 0x00383C84u) [[unlikely]] return; }
L_00383C84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383C8Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00383C8Cu) [[unlikely]] return; }
L_00383C8C:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[6], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[6].w[0]) & ~15u, c.r[2]);
    mmi::paddub(c.r[2], c.r[2], c.r[0]);
    st128((c.r[5].w[0]) & ~15u, c.r[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383CB4u); st32((c.r[29].w[0] + 76u), 0u);  if (depth < kMaxDepth) unit_0018(c, 14u, depth + 1u); else { c.pc = 0x001609B0u; return; } if (c.pc != 0x00383CB4u) [[unlikely]] return; }
L_00383CB4:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[3]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st128((c.r[16].w[0] + 48u) & ~15u, c.r[3]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00383CE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[16].w[0] + 544u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00383D00u); set32(c.r[4], c.r[16].w[0] + 368u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00383D00u) [[unlikely]] return; }
L_00383D00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383D08u); set32(c.r[4], c.r[16].w[0] + 624u);  if (depth < kMaxDepth) unit_00A0(c, 489u, depth + 1u); else { c.pc = 0x00383B20u; return; } if (c.pc != 0x00383D08u) [[unlikely]] return; }
L_00383D08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00383D20:
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00380000u < 16384u) { entry = entries_00A0[(t - 0x00380000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00383D30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[17].w[0] + 544u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00383D58u); set32(c.r[4], c.r[17].w[0] + 368u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00383D58u) [[unlikely]] return; }
L_00383D58:
    c.f[3] = ld32((c.r[17].w[0] + 528u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = ld32((c.r[17].w[0] + 384u));
    c.f[1] = c.r[2].w[0];
    c.f[4] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.f[2] = fp::sub(c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[1] = fp::add(c.f[4], c.f[0]);
    c.f[2] = fp::sub(c.f[4], c.f[0]);
    st32((c.r[17].w[0] + 1140u), c.f[1]);
    c.f[0] = fp::sub(c.f[1], c.f[2]);
    st32((c.r[17].w[0] + 1136u), c.f[2]);
    st32((c.r[17].w[0] + 1144u), c.f[0]);
    c.f[12] = ld32((c.r[17].w[0] + 1148u));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383DA4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 514u, depth + 1u); else { c.pc = 0x00383E30u; return; } if (c.pc != 0x00383DA4u) [[unlikely]] return; }
L_00383DA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00383DC0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383DE0u); set32(c.r[4], c.r[17].w[0] + 624u);  if (depth < kMaxDepth) unit_00A0(c, 495u, depth + 1u); else { c.pc = 0x00383BB0u; return; } if (c.pc != 0x00383DE0u) [[unlikely]] return; }
L_00383DE0:
    st32((c.r[17].w[0] + 428u), c.r[16].w[0]);
    set32(c.r[5], c.r[29].w[0] + 48u);
    ld128((c.r[17].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[6].w[0]) & ~15u, c.r[2]);
    mmi::paddub(c.r[2], c.r[2], c.r[0]);
    st128((c.r[5].w[0]) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 76u), c.r[16].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383E10u); st32((c.r[29].w[0] + 60u), 0u);  if (depth < kMaxDepth) unit_0018(c, 14u, depth + 1u); else { c.pc = 0x001609B0u; return; } if (c.pc != 0x00383E10u) [[unlikely]] return; }
L_00383E10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00383E30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[0] = 0u;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[29].w[0] + 32u);
    ld128((c.r[4].w[0] + 368u) & ~15u, c.r[2]);
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (t) { goto L_00383E5C; } }
    c.f[12] = c.f[0];
    c.budget -= 1;
L_00383E5C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00383E78; } }
    c.f[12] = c.f[0];
    c.budget -= 1;
L_00383E78:
    st32((c.r[16].w[0] + 1148u), c.f[12]);
    set32(c.r[4], c.r[16].w[0] + 624u);
    c.f[1] = ld32((c.r[16].w[0] + 1144u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.f[0] = ld32((c.r[16].w[0] + 1136u));
    c.f[1] = fp::mul(c.f[12], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383E9Cu); st32((c.r[29].w[0] + 32u), c.f[0]);  if (depth < kMaxDepth) unit_00A0(c, 492u, depth + 1u); else { c.pc = 0x00383B60u; return; } if (c.pc != 0x00383E9Cu) [[unlikely]] return; }
L_00383E9C:
    c.f[3] = ld32((c.r[16].w[0] + 164u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = ld32((c.r[16].w[0] + 20u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[29].w[0] + 36u));
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    st32((c.r[29].w[0] + 40u), 0u);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 36u), c.f[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00383ED8u); set32(c.r[5], c.r[29].w[0] + 32u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00383ED8u) [[unlikely]] return; }
L_00383ED8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00383EF0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383F18u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0018(c, 2u, depth + 1u); else { c.pc = 0x001607D0u; return; } if (c.pc != 0x00383F18u) [[unlikely]] return; }
L_00383F18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383F20u); set32(c.r[4], c.r[18].w[0] + 368u);  if (depth < kMaxDepth) unit_0017(c, 177u, depth + 1u); else { c.pc = 0x0015E070u; return; } if (c.pc != 0x00383F20u) [[unlikely]] return; }
L_00383F20:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[5].d[0];  if (t) { goto L_00383F30; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00383F30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383F38u); set32(c.r[4], c.r[18].w[0] + 624u);  if (depth < kMaxDepth) unit_00A0(c, 484u, depth + 1u); else { c.pc = 0x00383A70u; return; } if (c.pc != 0x00383F38u) [[unlikely]] return; }
L_00383F38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[18].w[0] + 1136u), 0u);
    st32((c.r[18].w[0] + 1140u), c.r[2].w[0]);
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[18].w[0] + 1136u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43200000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43660000u);
    set32(c.r[4], 0u + 6u);
    c.f[2] = c.r[2].w[0];
    c.f[20] = c.r[3].w[0];
    set32(c.r[2], 0u + 1u);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 1144u), c.f[0]);
    st32((c.r[18].w[0] + 1148u), 0u);
    c.budget -= 16;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; st32((c.r[18].w[0] + 1152u), c.r[16].w[0]);  if (t) { goto L_00383F8C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43160000u);
    set32(c.r[4], 0u + 19u);
    c.f[2] = c.r[2].w[0];
    c.f[20] = c.f[2];
    c.budget -= 5;
L_00383F8C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    st32((c.r[18].w[0] + 528u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383F9Cu); st32((c.r[18].w[0] + 532u), c.f[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00383F9Cu) [[unlikely]] return; }
L_00383F9C:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[5], 0u + 15u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[18].w[0] + 416u) & ~15u, c.r[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    st32((c.r[18].w[0] + 160u), c.f[20]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383FC0u); st32((c.r[18].w[0] + 164u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0018(c, 17u, depth + 1u); else { c.pc = 0x00160A20u; return; } if (c.pc != 0x00383FC0u) [[unlikely]] return; }
L_00383FC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383FC8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00383FC8u) [[unlikely]] return; }
L_00383FC8:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[6], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[6].w[0]) & ~15u, c.r[2]);
    mmi::paddub(c.r[2], c.r[2], c.r[0]);
    st128((c.r[5].w[0]) & ~15u, c.r[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383FF0u); st32((c.r[29].w[0] + 92u), 0u);  if (depth < kMaxDepth) unit_0018(c, 14u, depth + 1u); else { c.pc = 0x001609B0u; return; } if (c.pc != 0x00383FF0u) [[unlikely]] return; }
L_00383FF0:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[3]);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    st128((c.r[18].w[0] + 48u) & ~15u, c.r[3]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 4;
    [[clang::musttail]] return unit_00A1(c, 1u, depth);
}

}
