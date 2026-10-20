#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0055[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0,
    9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0,
    0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0,
    0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 22, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 37, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 44,
    0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 49, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0,
    56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 61, 0, 0, 62, 0,
    0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 65, 0, 66, 0, 67, 0, 68, 0, 0, 0, 69, 0, 70, 0, 71,
    0, 72, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 84, 0, 0, 0,
    0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 92, 0, 0,
    93, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0,
    0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101,
    0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 105, 0,
    0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 110, 0, 0, 0,
    0, 0, 0, 111, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 115, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0,
    0, 0, 120, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 124, 0,
    0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0,
    0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 136,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0,
    140, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0,
    144, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 148,
    0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152,
    0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0,
    0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0,
    0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 170, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 176, 0, 177, 0, 0, 0, 0, 0,
    0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 180, 0, 0, 0, 0, 181, 0, 0, 0, 0, 182, 0, 183, 0, 0, 0, 0, 184, 0, 0, 0, 0,
    0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0,
    0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0,
    194, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0,
    198, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    205, 0, 0, 0, 0, 0, 0, 206, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 212, 0, 0,
    0, 213, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0,
    216, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 220, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0,
    0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0,
    0, 0, 229, 0, 230, 0, 0, 231, 0, 0, 0, 232, 0, 0, 233, 0, 0, 0, 234, 0, 0, 235, 0, 0, 0, 236, 0, 0, 237, 0, 0, 0,
    238, 0, 0, 239, 0, 0, 0, 240, 0, 0, 241, 0, 0, 0, 242, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 251, 0, 0, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0,
    256, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 260, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 273,
    0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0,
    0, 278, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 286, 0,
    0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0,
    291, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0,
    296, 0, 0, 0, 297, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 302,
    0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 304, 0, 305, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 309, 310, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0,
    0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0,
    0, 0, 0, 0, 320, 0, 0, 321, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 324, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 0, 0, 329, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 332, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0,
    334, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 339,
    0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0,
    0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 348,
    0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 351, 0, 0, 0, 352, 0, 0, 0, 353, 0, 354, 0, 0, 0, 0,
    0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 358,
    0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 361, 0, 362, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 364, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 366, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 369, 0, 0, 0, 0,
    0, 0, 370, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 376, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0,
    0, 0, 0, 378, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 384, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0,
    0, 0, 0, 386, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 392, 0, 393, 0, 0, 0, 0, 394, 0, 0, 0, 395,
    0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0,
    399, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 402, 0, 0, 0, 0, 403, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0,
    0, 0, 405, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 416, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 420, 0, 421, 0, 422, 0, 423, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 428, 0, 0, 0, 0,
    0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 432, 0, 433, 0, 434, 0, 435, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 438, 0,
    0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 450,
    0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 454, 0, 0, 0, 0,
    0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 461, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 464, 0, 0,
    0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0,
    468, 0, 0, 469, 0, 470, 0, 471, 0, 0, 0, 0, 0, 0, 472, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0,
};

void unit_0055(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00254000;
    case 2u: goto L_00254010;
    case 3u: goto L_00254024;
    case 4u: goto L_00254034;
    case 5u: goto L_00254060;
    case 6u: goto L_0025409C;
    case 7u: goto L_002540C0;
    case 8u: goto L_002540E4;
    case 9u: goto L_00254100;
    case 10u: goto L_00254130;
    case 11u: goto L_00254140;
    case 12u: goto L_00254170;
    case 13u: goto L_00254184;
    case 14u: goto L_002541A0;
    case 15u: goto L_002541B8;
    case 16u: goto L_002541D0;
    case 17u: goto L_002541F0;
    case 18u: goto L_00254214;
    case 19u: goto L_00254298;
    case 20u: goto L_002542B0;
    case 21u: goto L_002542DC;
    case 22u: goto L_002542F8;
    case 23u: goto L_00254340;
    case 24u: goto L_00254354;
    case 25u: goto L_00254390;
    case 26u: goto L_002543DC;
    case 27u: goto L_00254444;
    case 28u: goto L_002544A4;
    case 29u: goto L_002544B8;
    case 30u: goto L_002544D4;
    case 31u: goto L_002544F0;
    case 32u: goto L_00254524;
    case 33u: goto L_00254568;
    case 34u: goto L_002545E4;
    case 35u: goto L_00254614;
    case 36u: goto L_002546E0;
    case 37u: goto L_002546E8;
    case 38u: goto L_00254710;
    case 39u: goto L_00254720;
    case 40u: goto L_00254744;
    case 41u: goto L_002547AC;
    case 42u: goto L_002547B4;
    case 43u: goto L_002547E0;
    case 44u: goto L_002547FC;
    case 45u: goto L_00254808;
    case 46u: goto L_00254820;
    case 47u: goto L_00254830;
    case 48u: goto L_00254864;
    case 49u: goto L_00254870;
    case 50u: goto L_002548B4;
    case 51u: goto L_002548F0;
    case 52u: goto L_00254964;
    case 53u: goto L_0025498C;
    case 54u: goto L_002549E0;
    case 55u: goto L_002549F0;
    case 56u: goto L_00254A00;
    case 57u: goto L_00254A10;
    case 58u: goto L_00254A2C;
    case 59u: goto L_00254A40;
    case 60u: goto L_00254A60;
    case 61u: goto L_00254A6C;
    case 62u: goto L_00254A78;
    case 63u: goto L_00254A84;
    case 64u: goto L_00254AB8;
    case 65u: goto L_00254AC4;
    case 66u: goto L_00254ACC;
    case 67u: goto L_00254AD4;
    case 68u: goto L_00254ADC;
    case 69u: goto L_00254AEC;
    case 70u: goto L_00254AF4;
    case 71u: goto L_00254AFC;
    case 72u: goto L_00254B04;
    case 73u: goto L_00254B18;
    case 74u: goto L_00254B30;
    case 75u: goto L_00254B44;
    case 76u: goto L_00254B58;
    case 77u: goto L_00254B70;
    case 78u: goto L_00254BC8;
    case 79u: goto L_00254C30;
    case 80u: goto L_00254C38;
    case 81u: goto L_00254C60;
    case 82u: goto L_00254C90;
    case 83u: goto L_00254CE4;
    case 84u: goto L_00254CF0;
    case 85u: goto L_00254D08;
    case 86u: goto L_00254D20;
    case 87u: goto L_00254D50;
    case 88u: goto L_00254DA4;
    case 89u: goto L_00254DB0;
    case 90u: goto L_00254DC8;
    case 91u: goto L_00254DE0;
    case 92u: goto L_00254DF4;
    case 93u: goto L_00254E00;
    case 94u: goto L_00254E14;
    case 95u: goto L_00254E40;
    case 96u: goto L_00254E50;
    case 97u: goto L_00254E64;
    case 98u: goto L_00254E84;
    case 99u: goto L_00254EA0;
    case 100u: goto L_00254ED0;
    case 101u: goto L_00254EFC;
    case 102u: goto L_00254F20;
    case 103u: goto L_00254F3C;
    case 104u: goto L_00254F6C;
    case 105u: goto L_00254F78;
    case 106u: goto L_00254F88;
    case 107u: goto L_00254FA0;
    case 108u: goto L_00254FC0;
    case 109u: goto L_00254FE4;
    case 110u: goto L_00254FF0;
    case 111u: goto L_0025500C;
    case 112u: goto L_00255024;
    case 113u: goto L_00255040;
    case 114u: goto L_0025505C;
    case 115u: goto L_0025508C;
    case 116u: goto L_00255098;
    case 117u: goto L_002550A8;
    case 118u: goto L_002550C0;
    case 119u: goto L_002550EC;
    case 120u: goto L_00255108;
    case 121u: goto L_00255124;
    case 122u: goto L_00255140;
    case 123u: goto L_0025515C;
    case 124u: goto L_00255178;
    case 125u: goto L_00255194;
    case 126u: goto L_002551B0;
    case 127u: goto L_002551CC;
    case 128u: goto L_002551E8;
    case 129u: goto L_00255204;
    case 130u: goto L_00255228;
    case 131u: goto L_0025523C;
    case 132u: goto L_00255260;
    case 133u: goto L_0025527C;
    case 134u: goto L_002552C0;
    case 135u: goto L_002552E0;
    case 136u: goto L_002552FC;
    case 137u: goto L_00255330;
    case 138u: goto L_0025533C;
    case 139u: goto L_00255360;
    case 140u: goto L_00255380;
    case 141u: goto L_0025539C;
    case 142u: goto L_002553D0;
    case 143u: goto L_002553DC;
    case 144u: goto L_00255400;
    case 145u: goto L_00255420;
    case 146u: goto L_0025543C;
    case 147u: goto L_00255470;
    case 148u: goto L_0025547C;
    case 149u: goto L_0025549C;
    case 150u: goto L_002554B0;
    case 151u: goto L_002554C8;
    case 152u: goto L_002554FC;
    case 153u: goto L_00255508;
    case 154u: goto L_00255520;
    case 155u: goto L_0025554C;
    case 156u: goto L_00255578;
    case 157u: goto L_00255584;
    case 158u: goto L_002555E8;
    case 159u: goto L_002555FC;
    case 160u: goto L_00255630;
    case 161u: goto L_0025565C;
    case 162u: goto L_00255684;
    case 163u: goto L_0025569C;
    case 164u: goto L_002556B0;
    case 165u: goto L_002556E0;
    case 166u: goto L_002556F8;
    case 167u: goto L_00255718;
    case 168u: goto L_00255750;
    case 169u: goto L_00255790;
    case 170u: goto L_002557B0;
    case 171u: goto L_002557B8;
    case 172u: goto L_002557DC;
    case 173u: goto L_00255808;
    case 174u: goto L_00255824;
    case 175u: goto L_00255840;
    case 176u: goto L_00255860;
    case 177u: goto L_00255868;
    case 178u: goto L_0025588C;
    case 179u: goto L_002558A0;
    case 180u: goto L_002558A8;
    case 181u: goto L_002558BC;
    case 182u: goto L_002558D0;
    case 183u: goto L_002558D8;
    case 184u: goto L_002558EC;
    case 185u: goto L_00255904;
    case 186u: goto L_002559CC;
    case 187u: goto L_00255A14;
    case 188u: goto L_00255A40;
    case 189u: goto L_00255A74;
    case 190u: goto L_00255A8C;
    case 191u: goto L_00255AA0;
    case 192u: goto L_00255AE0;
    case 193u: goto L_00255AF4;
    case 194u: goto L_00255B00;
    case 195u: goto L_00255B18;
    case 196u: goto L_00255B50;
    case 197u: goto L_00255B6C;
    case 198u: goto L_00255B80;
    case 199u: goto L_00255BA4;
    case 200u: goto L_00255BB8;
    case 201u: goto L_00255BD8;
    case 202u: goto L_00255C04;
    case 203u: goto L_00255C30;
    case 204u: goto L_00255C58;
    case 205u: goto L_00255C80;
    case 206u: goto L_00255C9C;
    case 207u: goto L_00255CA8;
    case 208u: goto L_00255CB8;
    case 209u: goto L_00255CD0;
    case 210u: goto L_00255D58;
    case 211u: goto L_00255D68;
    case 212u: goto L_00255D74;
    case 213u: goto L_00255D84;
    case 214u: goto L_00255D94;
    case 215u: goto L_00255E68;
    case 216u: goto L_00255E80;
    case 217u: goto L_00255E8C;
    case 218u: goto L_00255E9C;
    case 219u: goto L_00255ED0;
    case 220u: goto L_00255F04;
    case 221u: goto L_00255F1C;
    case 222u: goto L_00255F30;
    case 223u: goto L_00255F44;
    case 224u: goto L_00255F64;
    case 225u: goto L_00255F78;
    case 226u: goto L_00255F94;
    case 227u: goto L_00255FC4;
    case 228u: goto L_00255FF4;
    case 229u: goto L_00256008;
    case 230u: goto L_00256010;
    case 231u: goto L_0025601C;
    case 232u: goto L_0025602C;
    case 233u: goto L_00256038;
    case 234u: goto L_00256048;
    case 235u: goto L_00256054;
    case 236u: goto L_00256064;
    case 237u: goto L_00256070;
    case 238u: goto L_00256080;
    case 239u: goto L_0025608C;
    case 240u: goto L_0025609C;
    case 241u: goto L_002560A8;
    case 242u: goto L_002560B8;
    case 243u: goto L_002560C4;
    case 244u: goto L_002560D4;
    case 245u: goto L_00256100;
    case 246u: goto L_00256130;
    case 247u: goto L_0025614C;
    case 248u: goto L_002561A4;
    case 249u: goto L_00256208;
    case 250u: goto L_0025629C;
    case 251u: goto L_002562A8;
    case 252u: goto L_002562C0;
    case 253u: goto L_002562D0;
    case 254u: goto L_002562E0;
    case 255u: goto L_002562F0;
    case 256u: goto L_00256300;
    case 257u: goto L_00256310;
    case 258u: goto L_00256330;
    case 259u: goto L_00256360;
    case 260u: goto L_0025636C;
    case 261u: goto L_002563AC;
    case 262u: goto L_002563BC;
    case 263u: goto L_002563CC;
    case 264u: goto L_002563DC;
    case 265u: goto L_002563EC;
    case 266u: goto L_00256428;
    case 267u: goto L_00256438;
    case 268u: goto L_00256474;
    case 269u: goto L_002564B0;
    case 270u: goto L_002564EC;
    case 271u: goto L_00256528;
    case 272u: goto L_0025656C;
    case 273u: goto L_0025657C;
    case 274u: goto L_0025658C;
    case 275u: goto L_0025659C;
    case 276u: goto L_002565AC;
    case 277u: goto L_002565E0;
    case 278u: goto L_00256604;
    case 279u: goto L_00256614;
    case 280u: goto L_00256650;
    case 281u: goto L_0025668C;
    case 282u: goto L_002566C8;
    case 283u: goto L_00256708;
    case 284u: goto L_00256730;
    case 285u: goto L_00256774;
    case 286u: goto L_00256778;
    case 287u: goto L_00256794;
    case 288u: goto L_002567C0;
    case 289u: goto L_002567D4;
    case 290u: goto L_002567EC;
    case 291u: goto L_00256800;
    case 292u: goto L_00256810;
    case 293u: goto L_00256834;
    case 294u: goto L_00256850;
    case 295u: goto L_00256874;
    case 296u: goto L_00256880;
    case 297u: goto L_00256890;
    case 298u: goto L_002568A4;
    case 299u: goto L_002568BC;
    case 300u: goto L_002568C8;
    case 301u: goto L_002568F0;
    case 302u: goto L_002568FC;
    case 303u: goto L_00256910;
    case 304u: goto L_0025692C;
    case 305u: goto L_00256934;
    case 306u: goto L_00256950;
    case 307u: goto L_0025699C;
    case 308u: goto L_002569B8;
    case 309u: goto L_002569D0;
    case 310u: goto L_002569D4;
    case 311u: goto L_002569DC;
    case 312u: goto L_00256A10;
    case 313u: goto L_00256A44;
    case 314u: goto L_00256A54;
    case 315u: goto L_00256A60;
    case 316u: goto L_00256A84;
    case 317u: goto L_00256AAC;
    case 318u: goto L_00256AD0;
    case 319u: goto L_00256AF8;
    case 320u: goto L_00256B10;
    case 321u: goto L_00256B1C;
    case 322u: goto L_00256B38;
    case 323u: goto L_00256B58;
    case 324u: goto L_00256B70;
    case 325u: goto L_00256B98;
    case 326u: goto L_00256BBC;
    case 327u: goto L_00256BC8;
    case 328u: goto L_00256BD8;
    case 329u: goto L_00256BF0;
    case 330u: goto L_00256C1C;
    case 331u: goto L_00256C3C;
    case 332u: goto L_00256C48;
    case 333u: goto L_00256C5C;
    case 334u: goto L_00256C80;
    case 335u: goto L_00256CA4;
    case 336u: goto L_00256CBC;
    case 337u: goto L_00256CD0;
    case 338u: goto L_00256CE8;
    case 339u: goto L_00256CFC;
    case 340u: goto L_00256D20;
    case 341u: goto L_00256D40;
    case 342u: goto L_00256DB4;
    case 343u: goto L_00256DF0;
    case 344u: goto L_00256E10;
    case 345u: goto L_00256E28;
    case 346u: goto L_00256E4C;
    case 347u: goto L_00256E64;
    case 348u: goto L_00256E7C;
    case 349u: goto L_00256E94;
    case 350u: goto L_00256EB4;
    case 351u: goto L_00256EC4;
    case 352u: goto L_00256ED4;
    case 353u: goto L_00256EE4;
    case 354u: goto L_00256EEC;
    case 355u: goto L_00256F10;
    case 356u: goto L_00256F48;
    case 357u: goto L_00256F60;
    case 358u: goto L_00256F7C;
    case 359u: goto L_00256F88;
    case 360u: goto L_00256FBC;
    case 361u: goto L_00256FC4;
    case 362u: goto L_00256FCC;
    case 363u: goto L_00256FD4;
    case 364u: goto L_00257004;
    case 365u: goto L_00257018;
    case 366u: goto L_00257030;
    case 367u: goto L_00257040;
    case 368u: goto L_00257064;
    case 369u: goto L_0025706C;
    case 370u: goto L_00257088;
    case 371u: goto L_00257090;
    case 372u: goto L_002570B4;
    case 373u: goto L_002570EC;
    case 374u: goto L_00257120;
    case 375u: goto L_00257148;
    case 376u: goto L_00257150;
    case 377u: goto L_00257170;
    case 378u: goto L_0025718C;
    case 379u: goto L_00257194;
    case 380u: goto L_002571B8;
    case 381u: goto L_002571F0;
    case 382u: goto L_00257220;
    case 383u: goto L_00257248;
    case 384u: goto L_00257250;
    case 385u: goto L_00257270;
    case 386u: goto L_0025728C;
    case 387u: goto L_00257294;
    case 388u: goto L_002572B8;
    case 389u: goto L_002572F0;
    case 390u: goto L_00257320;
    case 391u: goto L_00257330;
    case 392u: goto L_00257350;
    case 393u: goto L_00257358;
    case 394u: goto L_0025736C;
    case 395u: goto L_0025737C;
    case 396u: goto L_00257390;
    case 397u: goto L_002573D0;
    case 398u: goto L_002573DC;
    case 399u: goto L_00257400;
    case 400u: goto L_00257414;
    case 401u: goto L_0025742C;
    case 402u: goto L_00257440;
    case 403u: goto L_00257454;
    case 404u: goto L_00257468;
    case 405u: goto L_00257488;
    case 406u: goto L_00257498;
    case 407u: goto L_002574BC;
    case 408u: goto L_002574D0;
    case 409u: goto L_00257530;
    case 410u: goto L_0025754C;
    case 411u: goto L_0025761C;
    case 412u: goto L_00257640;
    case 413u: goto L_002576B0;
    case 414u: goto L_002576D4;
    case 415u: goto L_0025773C;
    case 416u: goto L_00257748;
    case 417u: goto L_00257764;
    case 418u: goto L_002577D0;
    case 419u: goto L_002577DC;
    case 420u: goto L_00257810;
    case 421u: goto L_00257818;
    case 422u: goto L_00257820;
    case 423u: goto L_00257828;
    case 424u: goto L_00257830;
    case 425u: goto L_00257854;
    case 426u: goto L_00257890;
    case 427u: goto L_002578DC;
    case 428u: goto L_002578EC;
    case 429u: goto L_0025790C;
    case 430u: goto L_0025794C;
    case 431u: goto L_00257958;
    case 432u: goto L_0025798C;
    case 433u: goto L_00257994;
    case 434u: goto L_0025799C;
    case 435u: goto L_002579A4;
    case 436u: goto L_002579BC;
    case 437u: goto L_002579E0;
    case 438u: goto L_002579F8;
    case 439u: goto L_00257A08;
    case 440u: goto L_00257A38;
    case 441u: goto L_00257A50;
    case 442u: goto L_00257AA4;
    case 443u: goto L_00257AB4;
    case 444u: goto L_00257AEC;
    case 445u: goto L_00257B30;
    case 446u: goto L_00257B94;
    case 447u: goto L_00257C18;
    case 448u: goto L_00257C3C;
    case 449u: goto L_00257C58;
    case 450u: goto L_00257C7C;
    case 451u: goto L_00257C94;
    case 452u: goto L_00257CC0;
    case 453u: goto L_00257CE4;
    case 454u: goto L_00257CEC;
    case 455u: goto L_00257D10;
    case 456u: goto L_00257D44;
    case 457u: goto L_00257D68;
    case 458u: goto L_00257DC8;
    case 459u: goto L_00257DE8;
    case 460u: goto L_00257E20;
    case 461u: goto L_00257E90;
    case 462u: goto L_00257EA0;
    case 463u: goto L_00257ED8;
    case 464u: goto L_00257EF4;
    case 465u: goto L_00257F08;
    case 466u: goto L_00257F28;
    case 467u: goto L_00257F68;
    case 468u: goto L_00257F80;
    case 469u: goto L_00257F8C;
    case 470u: goto L_00257F94;
    case 471u: goto L_00257F9C;
    case 472u: goto L_00257FB8;
    case 473u: goto L_00257FC4;
    case 474u: goto L_00257FE4;
    default: bad_entry(c, 0x00254000u); return;
    }
L_00254000:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 878u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254010u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x00254010u) [[unlikely]] return; }
L_00254010:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00254034; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254024u); set32(c.r[5], 0u + 873u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x00254024u) [[unlikely]] return; }
L_00254024:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254034u); set32(c.r[5], 0u + 874u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x00254034u) [[unlikely]] return; }
L_00254034:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00254060:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002540E4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0025409C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[5], 0u + 521u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025409Cu); set32(c.r[6], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0025409Cu) [[unlikely]] return; }
L_0025409C:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002540C0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 522u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002540C0u); set32(c.r[6], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x002540C0u) [[unlikely]] return; }
L_002540C0:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002540E4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 523u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002540E4u); set32(c.r[6], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x002540E4u) [[unlikely]] return; }
L_002540E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00254100:
    set32(c.r[5], ld32((c.r[5].w[0] + 4u)));
    c.r[1].d[0] = c.r[5].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = c.r[5].sd[0] < 3ll ? 1ull : 0ull;  if (t) { goto L_00254128; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_00254128; } }
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] - 27128u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
L_00254128:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00254130:
    set32(c.r[5], 0u + 520u);
    c.budget -= 3;
    { set32(c.r[6], 0u + 1u);  [[clang::musttail]] return unit_0058(c, 37u, depth); }
L_00254140:
    set32(c.r[5], ld32((c.r[5].w[0] + 4u)));
    c.r[1].d[0] = c.r[5].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = c.r[5].sd[0] < 3ll ? 1ull : 0ull;  if (t) { goto L_00254168; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_00254168; } }
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] - 27136u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
L_00254168:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00254170:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254184u); set32(c.r[16], 0u + 1u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00254184u) [[unlikely]] return; }
L_00254184:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] - 25560u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002541A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002541B8u); set32(c.r[4], ld32((c.r[7].w[0])));  if (depth < kMaxDepth) unit_0054(c, 439u, depth + 1u); else { c.pc = 0x00252C00u; return; } if (c.pc != 0x002541B8u) [[unlikely]] return; }
L_002541B8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002541D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[8], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[8].sd[0] >= 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002541FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002541F0u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x002541F0u) [[unlikely]] return; }
L_002541F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[8], ld32((c.r[1].w[0] - 25584u)));
    c.budget -= 3;
L_002541FC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[1].w[0] - 27648u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 100u);
    set32(c.r[2], c.r[7].w[0] << 1);
    c.budget -= 6;
L_00254214:
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 212u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_0025427C; } }
    set32(c.r[2], c.r[5].w[0] - 10000u);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00254248; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);  if (t) { goto L_0025423C; } }
    breakpoint(c, 0x00254238u);
    c.budget -= 1;
L_0025423C:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025424C; } }
L_00254248:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0025424C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0025425C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 86u);  if (t) { goto L_00254270; } }
L_0025425C:
    c.r[2].d[0] = c.r[5].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);  if (t) { goto L_0025426C; } }
    breakpoint(c, 0x00254268u);
    c.budget -= 1;
L_0025426C:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_00254270:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != c.r[2].d[0];  if (t) { goto L_0025427C; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_0025427C:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[7].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[7].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00254214u | kUnwind; return; } goto L_00254214; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254298u); set32(c.r[5], 0u + 902u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x00254298u) [[unlikely]] return; }
L_00254298:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002542B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[19], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 9;
    { const bool t = c.r[19].sd[0] >= 0; set32(c.r[3], 0u + 999u);  if (t) { goto L_002542EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002542DCu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x002542DCu) [[unlikely]] return; }
L_002542DC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[19], ld32((c.r[1].w[0] - 25584u)));
    set32(c.r[3], 0u + 999u);
    c.budget -= 4;
L_002542EC:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[3].d[0]; c.r[1].d[0] = c.r[19].sd[0] < 7ll ? 1ull : 0ull;  if (t) { goto L_00254458; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002542F8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 28320u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00254444; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 1252u)));
    c.r[3].d[0] = c.r[3].sd[0] < 10000ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;  if (t) { goto L_00254360; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00254334; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_00254334:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45440000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254340u); c.r[5].d[0] = c.r[2].d[0] | 19531ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x00254340u) [[unlikely]] return; }
L_00254340:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0025434C; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_0025434C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254354u);  if (depth < kMaxDepth) unit_0075(c, 231u, depth + 1u); else { c.pc = 0x002D6EA0u; return; } if (c.pc != 0x00254354u) [[unlikely]] return; }
L_00254354:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00254360; } }
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00254360:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[5], c.r[18].w[0] << 5);
    set32(c.r[4], c.r[4].w[0] + 8384u);
    set32(c.r[8], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = ld16((c.r[8].w[0] + 266u));
    c.r[1].d[0] = c.r[4].sd[0] < 10001ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002543C8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[1].w[0] - 27648u)));
    set32(c.r[4], c.r[7].w[0] << 1);
    c.budget -= 4;
L_00254390:
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 212u)));
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_002543B0; } }
    c.r[4].d[0] = ld16((c.r[8].w[0] + 266u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_002543B0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_002543B0:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[4].d[0] = c.r[7].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[4], c.r[7].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00254390u | kUnwind; return; } goto L_00254390; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025442C; } }
L_002543C8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[9], ld32((c.r[1].w[0] - 27648u)));
    set32(c.r[6], 0u + 100u);
    set32(c.r[4], c.r[10].w[0] << 1);
    c.budget -= 5;
L_002543DC:
    set32(c.r[4], c.r[9].w[0] + c.r[4].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 212u)));
    c.budget -= 4;
    { const bool t = c.r[7].sd[0] < 0;  if (t) { goto L_0025441C; } }
    c.r[4].d[0] = ld16((c.r[8].w[0] + 266u));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull; mmi::div(c, 0, c.r[4].w[0], c.r[6].w[0]);  if (t) { goto L_002543FC; } }
    breakpoint(c, 0x002543F8u);
    c.budget -= 1;
L_002543FC:
    c.r[5].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull; mmi::div(c, 0, c.r[7].w[0], c.r[6].w[0]);  if (t) { goto L_0025440C; } }
    breakpoint(c, 0x00254408u);
    c.budget -= 1;
L_0025440C:
    c.r[4].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_0025441C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0025441C:
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.r[4].d[0] = c.r[10].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[4], c.r[10].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002543DCu | kUnwind; return; } goto L_002543DC; } }
L_0025442C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00254444; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00254444; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254444u);  if (depth < kMaxDepth) unit_0037(c, 31u, depth + 1u); else { c.pc = 0x001DC580u; return; } if (c.pc != 0x00254444u) [[unlikely]] return; }
L_00254444:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002542F8u | kUnwind; return; } goto L_002542F8; } }
    c.r[1].d[0] = c.r[19].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 1;
L_00254458:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_002544D4; } }
    set32(c.r[4], c.r[19].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 28320u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[17], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002544D4; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 1252u)));
    c.r[3].d[0] = c.r[3].sd[0] < 10000ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;  if (t) { goto L_002544C4; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00254498; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_00254498:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45440000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002544A4u); c.r[5].d[0] = c.r[2].d[0] | 19531ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x002544A4u) [[unlikely]] return; }
L_002544A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002544B0; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_002544B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002544B8u);  if (depth < kMaxDepth) unit_0075(c, 231u, depth + 1u); else { c.pc = 0x002D6EA0u; return; } if (c.pc != 0x002544B8u) [[unlikely]] return; }
L_002544B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002544C4; } }
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002544C4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002544D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002544D4u);  if (depth < kMaxDepth) unit_0037(c, 31u, depth + 1u); else { c.pc = 0x001DC580u; return; } if (c.pc != 0x002544D4u) [[unlikely]] return; }
L_002544D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002544F0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[8], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[8].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0025452C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 18065u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002546FC; } }
    set32(c.r[5], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254524u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 90u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x00254524u) [[unlikely]] return; }
L_00254524:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00254700; } }
L_0025452C:
    set32(c.r[3], 0u - 2u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != c.r[3].d[0]; set32(c.r[3], 0u - 3u);  if (t) { goto L_002545D0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] - 22608u);
    set32(c.r[7], c.r[29].w[0] + 96u);
    ld128((c.r[3].w[0]) & ~15u, c.r[4]);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 27248u);
    set32(c.r[5], 0u + 11u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    st128((c.r[7].w[0]) & ~15u, c.r[4]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st16((c.r[7].w[0] + 16u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002545B4; } }
L_00254568:
    set32(c.r[3], ld32((c.r[1].w[0] - 27152u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[1].w[0] - 27152u)));
    set32(c.r[3], c.r[3].w[0] + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 27152u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27152u)));
    c.r[3].d[0] = c.r[4].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] - 2u);  if (t) { goto L_002545B0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 27152u), c.r[3].w[0]);  if (t) { goto L_002546FC; } }
L_002545B0:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_002545B4:
    set32(c.r[3], c.r[8].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 96u)));
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] > 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00254568u | kUnwind; return; } goto L_00254568; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002546FC; } }
L_002545D0:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != c.r[3].d[0]; c.r[6].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { goto L_0025467C; } }
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[6], c.r[6].w[0] - 22576u);
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
L_002545E4:
    ld128((c.r[6].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002545E4u | kUnwind; return; } goto L_002545E4; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 27248u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 29u);  if (t) { goto L_00254660; } }
L_00254614:
    set32(c.r[3], ld32((c.r[1].w[0] - 27152u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[1].w[0] - 27152u)));
    set32(c.r[3], c.r[3].w[0] + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 27152u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27152u)));
    c.r[3].d[0] = c.r[4].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] - 2u);  if (t) { goto L_0025465C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 27152u), c.r[3].w[0]);  if (t) { goto L_002546FC; } }
L_0025465C:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_00254660:
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 32u)));
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] > 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00254614u | kUnwind; return; } goto L_00254614; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002546FC; } }
L_0025467C:
    c.budget -= 2;
    { const bool t = c.r[8].sd[0] <= 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002546FC; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[7], ld32((c.r[1].w[0] - 27152u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[6], c.r[6].w[0] - 27248u);
    set32(c.r[3], c.r[3].w[0] - 27246u);
    set32(c.r[7], c.r[7].w[0] << 1);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[8].w[0]));
    set32(c.r[5], ld32((c.r[5].w[0] + 12u)));
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[1].w[0] - 27152u)));
    set32(c.r[3], c.r[3].w[0] + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 27152u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 27152u)));
    c.r[3].d[0] = c.r[3].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 21;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002546FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002546E0u);  if (depth < kMaxDepth) unit_0058(c, 47u, depth + 1u); else { c.pc = 0x00260460u; return; } if (c.pc != 0x002546E0u) [[unlikely]] return; }
L_002546E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002546E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 48u, depth + 1u); else { c.pc = 0x00260470u; return; } if (c.pc != 0x002546E8u) [[unlikely]] return; }
L_002546E8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 27152u)));
    set32(c.r[3], c.r[3].w[0] - 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 27152u), c.r[3].w[0]);
    c.budget -= 5;
L_002546FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00254700:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00254710:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00254720:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[8], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[8].sd[0] > 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0025474C; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254744u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 253u, depth + 1u); else { c.pc = 0x003ADD70u; return; } if (c.pc != 0x00254744u) [[unlikely]] return; }
L_00254744:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002547CC; } }
L_0025474C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[7], ld32((c.r[1].w[0] - 27264u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[6], c.r[6].w[0] - 27312u);
    set32(c.r[3], c.r[3].w[0] - 27310u);
    set32(c.r[7], c.r[7].w[0] << 1);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[8].w[0]));
    set32(c.r[5], ld32((c.r[5].w[0] + 12u)));
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[1].w[0] - 27264u)));
    set32(c.r[3], c.r[3].w[0] + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 27264u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 27264u)));
    c.r[3].d[0] = c.r[3].sd[0] < 24ll ? 1ull : 0ull;
    c.budget -= 22;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002547C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002547ACu);  if (depth < kMaxDepth) unit_0058(c, 47u, depth + 1u); else { c.pc = 0x00260460u; return; } if (c.pc != 0x002547ACu) [[unlikely]] return; }
L_002547AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002547B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 48u, depth + 1u); else { c.pc = 0x00260470u; return; } if (c.pc != 0x002547B4u) [[unlikely]] return; }
L_002547B4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 27264u)));
    set32(c.r[3], c.r[3].w[0] - 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 27264u), c.r[3].w[0]);
    c.budget -= 5;
L_002547C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002547CC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002547E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[4], 0u + 2000u);  if (t) { goto L_00254810; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002547FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 257u, depth + 1u); else { c.pc = 0x003ADE20u; return; } if (c.pc != 0x002547FCu) [[unlikely]] return; }
L_002547FC:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254808u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 257u, depth + 1u); else { c.pc = 0x003ADE20u; return; } if (c.pc != 0x00254808u) [[unlikely]] return; }
L_00254808:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00254824; } }
L_00254810:
    c.r[5].d[0] = c.r[2].d[0] << 48;
    set32(c.r[4], 0u + 2000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254820u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);  if (depth < kMaxDepth) unit_00AB(c, 257u, depth + 1u); else { c.pc = 0x003ADE20u; return; } if (c.pc != 0x00254820u) [[unlikely]] return; }
L_00254820:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00254824:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00254830:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 999u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_00254854; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025487C; } }
L_00254854:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00254878; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254864u);  if (depth < kMaxDepth) unit_0054(c, 299u, depth + 1u); else { c.pc = 0x00251F40u; return; } if (c.pc != 0x00254864u) [[unlikely]] return; }
L_00254864:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254870u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00254870u) [[unlikely]] return; }
L_00254870:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld8((c.r[2].w[0] + 350u));  if (t) { goto L_0025487C; } }
L_00254878:
    set32(c.r[16], 0u - c.r[16].w[0]);
    c.budget -= 1;
L_0025487C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 27648u)));
    st32((c.r[3].w[0] + 232u), c.r[16].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 27648u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 236u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 999u);  if (t) { goto L_002548BC; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_002548BC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002548B4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002548B4u) [[unlikely]] return; }
L_002548B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002549E4; } }
L_002548BC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002549E0; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0; set32(c.r[3], 0u + 999u);  if (t) { goto L_002549E0; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_002549E0; } }
    c.r[3].d[0] = c.r[16].sd[0] < 1000ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0025496C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002548F0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002548F0u) [[unlikely]] return; }
L_002548F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], 0u + 12u);
    set32(c.r[5], ld32((c.r[1].w[0] - 27648u)));
    set32(c.r[3], 0u + 11776u);
    set32(c.r[2], 0u + 7u);
    set32(c.r[5], ld32((c.r[5].w[0] + 236u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[5].w[0] + 76u), c.r[4].w[0]);
    st32((c.r[5].w[0] + 64u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 68u), c.r[2].w[0]);
    st32((c.r[5].w[0] + 72u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 8982u));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00254938; } }
    c.r[1].d[0] = c.r[16].sd[0] < 1026ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00254938; } }
    set32(c.r[16], c.r[16].w[0] + 26u);
    c.budget -= 1;
L_00254938:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 27648u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 236u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[2].w[0] + 56u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] - 27648u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 236u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00254964u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00254964u) [[unlikely]] return; }
L_00254964:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002549E0; } }
L_0025496C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 84u)));
    c.r[1].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002549E0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025498Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025498Cu) [[unlikely]] return; }
L_0025498C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], 0u + 12u);
    set32(c.r[5], ld32((c.r[1].w[0] - 27648u)));
    set32(c.r[3], 0u + 11008u);
    set32(c.r[2], 0u + 8u);
    set32(c.r[5], ld32((c.r[5].w[0] + 236u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[5].w[0] + 76u), c.r[4].w[0]);
    st32((c.r[5].w[0] + 64u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 68u), c.r[2].w[0]);
    st32((c.r[5].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] - 27648u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 236u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[2].w[0] + 56u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] - 27648u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 236u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 21;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002549E0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002549E0u) [[unlikely]] return; }
L_002549E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002549E4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002549F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254A00u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00254A00u) [[unlikely]] return; }
L_00254A00:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254A10u); st8((c.r[1].w[0] - 25576u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00254A10u) [[unlikely]] return; }
L_00254A10:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25568u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_00254A38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254A2Cu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00254A2Cu) [[unlikely]] return; }
L_00254A2C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] - 25574u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.budget -= 3;
L_00254A38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254A40u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00254A40u) [[unlikely]] return; }
L_00254A40:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[6], 0u + 32u);
    c.r[1].d[0] = c.r[1].d[0] | 21770ull;
    set32(c.r[5], c.r[2].w[0] + c.r[1].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 27648u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254A60u); set32(c.r[4], c.r[2].w[0] + 100u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x00254A60u) [[unlikely]] return; }
L_00254A60:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254A6Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 257u, depth + 1u); else { c.pc = 0x003ADE20u; return; } if (c.pc != 0x00254A6Cu) [[unlikely]] return; }
L_00254A6C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254A78u); set32(c.r[4], ld32((c.r[1].w[0] - 27648u)));  if (depth < kMaxDepth) unit_0054(c, 602u, depth + 1u); else { c.pc = 0x00253DB0u; return; } if (c.pc != 0x00254A78u) [[unlikely]] return; }
L_00254A78:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254A84u); set32(c.r[4], ld32((c.r[1].w[0] - 27648u)));  if (depth < kMaxDepth) unit_0054(c, 607u, depth + 1u); else { c.pc = 0x00253E50u; return; } if (c.pc != 0x00254A84u) [[unlikely]] return; }
L_00254A84:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[2], ld32((c.r[1].w[0] - 27616u)));
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 36u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 27648u)));
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254AB8u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0057(c, 387u, depth + 1u); else { c.pc = 0x0025EEC0u; return; } if (c.pc != 0x00254AB8u) [[unlikely]] return; }
L_00254AB8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254AC4u); set32(c.r[4], ld32((c.r[1].w[0] - 27648u)));  if (depth < kMaxDepth) unit_0054(c, 514u, depth + 1u); else { c.pc = 0x002533B0u; return; } if (c.pc != 0x00254AC4u) [[unlikely]] return; }
L_00254AC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254ACCu);  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002D98E0u; return; } if (c.pc != 0x00254ACCu) [[unlikely]] return; }
L_00254ACC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254AD4u);  if (depth < kMaxDepth) unit_002A(c, 133u, depth + 1u); else { c.pc = 0x001A9520u; return; } if (c.pc != 0x00254AD4u) [[unlikely]] return; }
L_00254AD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254ADCu);  if (depth < kMaxDepth) unit_004F(c, 122u, depth + 1u); else { c.pc = 0x0023DD20u; return; } if (c.pc != 0x00254ADCu) [[unlikely]] return; }
L_00254ADC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], 0u + 255u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254AECu); st8((c.r[1].w[0] - 1488u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002C(c, 23u, depth + 1u); else { c.pc = 0x001B0420u; return; } if (c.pc != 0x00254AECu) [[unlikely]] return; }
L_00254AEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254AF4u);  if (depth < kMaxDepth) unit_0011(c, 196u, depth + 1u); else { c.pc = 0x00146E30u; return; } if (c.pc != 0x00254AF4u) [[unlikely]] return; }
L_00254AF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254AFCu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00254AFCu) [[unlikely]] return; }
L_00254AFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254B04u); set32(c.r[4], 0u + 36u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00254B04u) [[unlikely]] return; }
L_00254B04:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00254B18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254B18u);  if (depth < kMaxDepth) unit_0057(c, 313u, depth + 1u); else { c.pc = 0x0025E540u; return; } if (c.pc != 0x00254B18u) [[unlikely]] return; }
L_00254B18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00254B30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254B44u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 227u, depth + 1u); else { c.pc = 0x00196270u; return; } if (c.pc != 0x00254B44u) [[unlikely]] return; }
L_00254B44:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00254B58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254B58u); set32(c.r[5], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0025(c, 232u, depth + 1u); else { c.pc = 0x001962E0u; return; } if (c.pc != 0x00254B58u) [[unlikely]] return; }
L_00254B58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00254B70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], ld32((c.r[5].w[0] + 20u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.budget -= 8;
    { const bool t = c.r[7].d[0] != c.r[4].d[0]; c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(128ll);  if (t) { goto L_00254BAC; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[3].d[0];  if (t) { goto L_00254BAC; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[4].d[0]; set32(c.r[3], 0u + 104u);  if (t) { goto L_00254BA8; } }
    set32(c.r[3], 0u + 64u);
    c.budget -= 1;
L_00254BA8:
    c.r[6].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_00254BAC:
    set32(c.r[7], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[7].sd[0] > 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_00254BD0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27648u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254BC8u); set32(c.r[5], ld32((c.r[5].w[0] + 12u)));  if (depth < kMaxDepth) unit_0054(c, 501u, depth + 1u); else { c.pc = 0x00253260u; return; } if (c.pc != 0x00254BC8u) [[unlikely]] return; }
L_00254BC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00254C50; } }
L_00254BD0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[6], ld32((c.r[1].w[0] - 27264u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] - 27312u);
    set32(c.r[3], c.r[3].w[0] - 27310u);
    set32(c.r[6], c.r[6].w[0] << 1);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[4], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[4], 0u - c.r[4].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[1].w[0] - 27264u)));
    set32(c.r[3], c.r[3].w[0] + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 27264u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 27264u)));
    c.r[3].d[0] = c.r[3].sd[0] < 24ll ? 1ull : 0ull;
    c.budget -= 22;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00254C4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254C30u);  if (depth < kMaxDepth) unit_0058(c, 47u, depth + 1u); else { c.pc = 0x00260460u; return; } if (c.pc != 0x00254C30u) [[unlikely]] return; }
L_00254C30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254C38u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 48u, depth + 1u); else { c.pc = 0x00260470u; return; } if (c.pc != 0x00254C38u) [[unlikely]] return; }
L_00254C38:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 27264u)));
    set32(c.r[3], c.r[3].w[0] - 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 27264u), c.r[3].w[0]);
    c.budget -= 5;
L_00254C4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00254C50:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00254C60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].sd[0] >= 0; c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_00254C9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254C90u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00254C90u) [[unlikely]] return; }
L_00254C90:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[4].d[0] = ld16((c.r[1].w[0] - 25584u));
    c.budget -= 3;
L_00254C9C:
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(128ll);  if (t) { goto L_00254CB8; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[17].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_00254CD0; } }
L_00254CB8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 96u);  if (t) { goto L_00254CC8; } }
    set32(c.r[2], 0u + 64u);
    c.budget -= 1;
L_00254CC8:
    c.r[18].d[0] = c.r[2].d[0] & 255ull;
    c.r[17].d[0] = c.r[4].d[0] & 65535ull;
    c.budget -= 2;
L_00254CD0:
    c.r[1].d[0] = c.r[17].sd[0] < 118ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00254CF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254CE4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 299u, depth + 1u); else { c.pc = 0x00251F40u; return; } if (c.pc != 0x00254CE4u) [[unlikely]] return; }
L_00254CE4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254CF0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00254CF0u) [[unlikely]] return; }
L_00254CF0:
    c.r[16].d[0] = ld8((c.r[2].w[0] + 351u));
    c.budget -= 1;
L_00254CF4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[1].w[0] - 27648u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254D08u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 501u, depth + 1u); else { c.pc = 0x00253260u; return; } if (c.pc != 0x00254D08u) [[unlikely]] return; }
L_00254D08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00254D20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].sd[0] >= 0; c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_00254D5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254D50u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00254D50u) [[unlikely]] return; }
L_00254D50:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[4].d[0] = ld16((c.r[1].w[0] - 25584u));
    c.budget -= 3;
L_00254D5C:
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(128ll);  if (t) { goto L_00254D78; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[17].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_00254D90; } }
L_00254D78:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 96u);  if (t) { goto L_00254D88; } }
    set32(c.r[2], 0u + 64u);
    c.budget -= 1;
L_00254D88:
    c.r[18].d[0] = c.r[2].d[0] & 255ull;
    c.r[17].d[0] = c.r[4].d[0] & 65535ull;
    c.budget -= 2;
L_00254D90:
    c.r[1].d[0] = c.r[17].sd[0] < 118ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00254DB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254DA4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 299u, depth + 1u); else { c.pc = 0x00251F40u; return; } if (c.pc != 0x00254DA4u) [[unlikely]] return; }
L_00254DA4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254DB0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00254DB0u) [[unlikely]] return; }
L_00254DB0:
    c.r[16].d[0] = ld8((c.r[2].w[0] + 347u));
    c.budget -= 1;
L_00254DB4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[1].w[0] - 27648u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254DC8u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 501u, depth + 1u); else { c.pc = 0x00253260u; return; } if (c.pc != 0x00254DC8u) [[unlikely]] return; }
L_00254DC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00254DE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00254DF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254DF4u); set32(c.r[4], ld32((c.r[7].w[0])));  if (depth < kMaxDepth) unit_0054(c, 514u, depth + 1u); else { c.pc = 0x002533B0u; return; } if (c.pc != 0x00254DF4u) [[unlikely]] return; }
L_00254DF4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00254E00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254E14u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00254E14u) [[unlikely]] return; }
L_00254E14:
    c.r[1].d[0] = 0ull | 35856ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254E40u); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x00254E40u) [[unlikely]] return; }
L_00254E40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00254E50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254E64u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00254E64u) [[unlikely]] return; }
L_00254E64:
    c.r[1].d[0] = 0ull | 35856ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254E84u); set32(c.r[5], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x00254E84u) [[unlikely]] return; }
L_00254E84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00254EA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254ED0u); c.f[20] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0010(c, 21u, depth + 1u); else { c.pc = 0x00140440u; return; } if (c.pc != 0x00254ED0u) [[unlikely]] return; }
L_00254ED0:
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00254EF4; } }
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00254EF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254EFCu); set32(c.r[5], 0u + 865u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x00254EFCu) [[unlikely]] return; }
L_00254EFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00254F20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254F3Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00254F3Cu) [[unlikely]] return; }
L_00254F3C:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[1].d[0] = 0ull | 35856ull;
    set32(c.r[5], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] >= 0; c.r[4].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_00254F54; } }
    c.r[4].d[0] = ld16((c.r[5].w[0] + 4096u));
    c.budget -= 1;
L_00254F54:
    c.r[16].d[0] = c.r[4].d[0] & 65535ull;
    c.r[1].d[0] = c.r[16].sd[0] < 118ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00254F88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254F6Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 299u, depth + 1u); else { c.pc = 0x00251F40u; return; } if (c.pc != 0x00254F6Cu) [[unlikely]] return; }
L_00254F6C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254F78u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00254F78u) [[unlikely]] return; }
L_00254F78:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[2].w[0] + 278u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254F88u); set32(c.r[5], 0u + 866u);  if (depth < kMaxDepth) unit_0058(c, 40u, depth + 1u); else { c.pc = 0x00260370u; return; } if (c.pc != 0x00254F88u) [[unlikely]] return; }
L_00254F88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00254FA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254FC0u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00254FC0u) [[unlikely]] return; }
L_00254FC0:
    c.r[1].d[0] = 0ull | 35856ull;
    set32(c.r[3], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] >= 0; c.r[18].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_00254FD8; } }
    c.r[18].d[0] = ld16((c.r[3].w[0] + 4096u));
    c.budget -= 1;
L_00254FD8:
    c.r[17].d[0] = c.r[18].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254FE4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 299u, depth + 1u); else { c.pc = 0x00251F40u; return; } if (c.pc != 0x00254FE4u) [[unlikely]] return; }
L_00254FE4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254FF0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00254FF0u) [[unlikely]] return; }
L_00254FF0:
    c.r[3].d[0] = c.r[17].d[0] + 0ull;
    c.r[1].d[0] = c.r[3].sd[0] < 118ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00255024; } }
    set32(c.r[18], c.r[17].w[0] + 324u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025500Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 237u, depth + 1u); else { c.pc = 0x00127D00u; return; } if (c.pc != 0x0025500Cu) [[unlikely]] return; }
L_0025500C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00255018; } }
    set32(c.r[18], c.r[17].w[0] + 278u);
    c.budget -= 1;
L_00255018:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255024u); set32(c.r[5], 0u + 867u);  if (depth < kMaxDepth) unit_0058(c, 40u, depth + 1u); else { c.pc = 0x00260370u; return; } if (c.pc != 0x00255024u) [[unlikely]] return; }
L_00255024:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00255040:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025505Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0025505Cu) [[unlikely]] return; }
L_0025505C:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[1].d[0] = 0ull | 35856ull;
    set32(c.r[5], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] >= 0; c.r[4].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_00255074; } }
    c.r[4].d[0] = ld16((c.r[5].w[0] + 4096u));
    c.budget -= 1;
L_00255074:
    c.r[16].d[0] = c.r[4].d[0] & 65535ull;
    c.r[1].d[0] = c.r[16].sd[0] < 118ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002550A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025508Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 299u, depth + 1u); else { c.pc = 0x00251F40u; return; } if (c.pc != 0x0025508Cu) [[unlikely]] return; }
L_0025508C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255098u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00255098u) [[unlikely]] return; }
L_00255098:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 349u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002550A8u); set32(c.r[5], 0u + 919u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x002550A8u) [[unlikely]] return; }
L_002550A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002550C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld16((c.r[5].w[0] + 4u));
    set32(c.r[17], 0u - 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002550ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x002550ECu) [[unlikely]] return; }
L_002550EC:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_00255100; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00255214; } }
L_00255100:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255108u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x00255108u) [[unlikely]] return; }
L_00255108:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 3u);  if (t) { goto L_0025511C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_00255214; } }
L_0025511C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255124u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x00255124u) [[unlikely]] return; }
L_00255124:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 3u);  if (t) { goto L_00255138; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 3u);  if (t) { goto L_00255214; } }
L_00255138:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255140u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x00255140u) [[unlikely]] return; }
L_00255140:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 2u);  if (t) { goto L_00255154; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 3u);  if (t) { goto L_00255214; } }
L_00255154:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025515Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x0025515Cu) [[unlikely]] return; }
L_0025515C:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 2u);  if (t) { goto L_00255170; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 2u);  if (t) { goto L_00255214; } }
L_00255170:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255178u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x00255178u) [[unlikely]] return; }
L_00255178:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 4u);  if (t) { goto L_0025518C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 2u);  if (t) { goto L_00255214; } }
L_0025518C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255194u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x00255194u) [[unlikely]] return; }
L_00255194:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 7u);  if (t) { goto L_002551A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 4u);  if (t) { goto L_00255214; } }
L_002551A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002551B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x002551B0u) [[unlikely]] return; }
L_002551B0:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 5u);  if (t) { goto L_002551C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 7u);  if (t) { goto L_00255214; } }
L_002551C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002551CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x002551CCu) [[unlikely]] return; }
L_002551CC:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 6u);  if (t) { goto L_002551E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 5u);  if (t) { goto L_00255214; } }
L_002551E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002551E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x002551E8u) [[unlikely]] return; }
L_002551E8:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 8u);  if (t) { goto L_002551FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 6u);  if (t) { goto L_00255214; } }
L_002551FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255204u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x00255204u) [[unlikely]] return; }
L_00255204:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_00255214; } }
    set32(c.r[17], 0u + 8u);
    c.budget -= 1;
L_00255214:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00255230; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255228u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 344u, depth + 1u); else { c.pc = 0x0033B460u; return; } if (c.pc != 0x00255228u) [[unlikely]] return; }
L_00255228:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_00255230:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025523Cu); set32(c.r[5], 0u + 902u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0025523Cu) [[unlikely]] return; }
L_0025523C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00255260:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025527Cu); set32(c.r[16], 0u + 2u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0025527Cu) [[unlikely]] return; }
L_0025527C:
    c.r[1].d[0] = 0ull | 35856ull;
    set32(c.r[3], c.r[2].w[0] + c.r[1].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 4104u));
    set32(c.r[2], 0u + 16u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0025529C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_002552B0; } }
L_0025529C:
    set32(c.r[2], 0u + 15u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].d[0] = c.r[3].sd[0] < 15ll ? 1ull : 0ull;  if (t) { goto L_002552B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002552B0; } }
L_002552B0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002552C0u); set32(c.r[5], 0u + 902u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x002552C0u) [[unlikely]] return; }
L_002552C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002552E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002552FCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x002552FCu) [[unlikely]] return; }
L_002552FC:
    c.r[1].d[0] = 0ull | 35856ull;
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0; c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_00255318; } }
    c.r[4].d[0] = ld16((c.r[5].w[0] + 4096u));
    c.budget -= 1;
L_00255318:
    c.r[17].d[0] = c.r[4].d[0] & 65535ull;
    c.r[1].d[0] = c.r[17].sd[0] < 118ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] << 56;  if (t) { goto L_00255344; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255330u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 299u, depth + 1u); else { c.pc = 0x00251F40u; return; } if (c.pc != 0x00255330u) [[unlikely]] return; }
L_00255330:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025533Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0025533Cu) [[unlikely]] return; }
L_0025533C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 346u)));
    c.r[2].d[0] = c.r[3].d[0] << 56;
    c.budget -= 2;
L_00255344:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[5], 0u + 902u);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[6].d[0] = c.r[2].d[0] << 56;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255360u); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x00255360u) [[unlikely]] return; }
L_00255360:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00255380:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025539Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0025539Cu) [[unlikely]] return; }
L_0025539C:
    c.r[1].d[0] = 0ull | 35856ull;
    c.r[3].d[0] = ld8((c.r[16].w[0] + 12u));
    set32(c.r[5], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0; c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_002553B8; } }
    c.r[4].d[0] = ld16((c.r[5].w[0] + 4096u));
    c.budget -= 1;
L_002553B8:
    c.r[16].d[0] = c.r[4].d[0] & 65535ull;
    c.r[1].d[0] = c.r[16].sd[0] < 86ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[16].sd[0] < 118ll ? 1ull : 0ull;  if (t) { goto L_002553E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002553D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 299u, depth + 1u); else { c.pc = 0x00251F40u; return; } if (c.pc != 0x002553D0u) [[unlikely]] return; }
L_002553D0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002553DCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x002553DCu) [[unlikely]] return; }
L_002553DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[2].w[0] + 356u));  if (t) { goto L_002553F0; } }
L_002553E4:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_002553F4; } }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(50ll);
    c.budget -= 1;
L_002553F0:
    c.r[6].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_002553F4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255400u); set32(c.r[5], 0u + 868u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x00255400u) [[unlikely]] return; }
L_00255400:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00255420:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025543Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0025543Cu) [[unlikely]] return; }
L_0025543C:
    c.r[1].d[0] = 0ull | 35856ull;
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0; c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_00255458; } }
    c.r[4].d[0] = ld16((c.r[5].w[0] + 4096u));
    c.budget -= 1;
L_00255458:
    c.r[17].d[0] = c.r[4].d[0] & 65535ull;
    c.r[1].d[0] = c.r[17].sd[0] < 118ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = c.r[3].d[0] << 48;  if (t) { goto L_0025548C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255470u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 299u, depth + 1u); else { c.pc = 0x00251F40u; return; } if (c.pc != 0x00255470u) [[unlikely]] return; }
L_00255470:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025547Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0025547Cu) [[unlikely]] return; }
L_0025547C:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 356u));
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[6].d[0] = c.r[3].d[0] << 48;
    c.budget -= 4;
L_0025548C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025549Cu); set32(c.r[5], 0u + 868u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0025549Cu) [[unlikely]] return; }
L_0025549C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002554B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002554C8u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x002554C8u) [[unlikely]] return; }
L_002554C8:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[1].d[0] = 0ull | 35856ull;
    c.r[17].d[0] = ld8((c.r[16].w[0] + 12u));
    set32(c.r[5], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; c.r[4].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_002554E4; } }
    c.r[4].d[0] = ld16((c.r[5].w[0] + 4096u));
    c.budget -= 1;
L_002554E4:
    c.r[16].d[0] = c.r[4].d[0] & 65535ull;
    c.r[1].d[0] = c.r[16].sd[0] < 118ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0025550C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002554FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 299u, depth + 1u); else { c.pc = 0x00251F40u; return; } if (c.pc != 0x002554FCu) [[unlikely]] return; }
L_002554FC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255508u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00255508u) [[unlikely]] return; }
L_00255508:
    st8((c.r[2].w[0] + 356u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.budget -= 1;
L_0025550C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00255520:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025554Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0025554Cu) [[unlikely]] return; }
L_0025554C:
    c.r[1].d[0] = 0ull | 35856ull;
    set32(c.r[17], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[18], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] >= 0; c.r[21].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_0025556C; } }
    c.r[21].d[0] = ld16((c.r[18].w[0] + 4096u));
    c.budget -= 1;
L_0025556C:
    c.r[20].d[0] = c.r[21].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255578u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 299u, depth + 1u); else { c.pc = 0x00251F40u; return; } if (c.pc != 0x00255578u) [[unlikely]] return; }
L_00255578:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255584u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00255584u) [[unlikely]] return; }
L_00255584:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[1].d[0] = c.r[4].sd[0] < 86ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[4].sd[0] < 118ll ? 1ull : 0ull;  if (t) { goto L_0025559C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld8((c.r[2].w[0] + 356u));  if (t) { goto L_002555A8; } }
L_0025559C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002555A8; } }
    c.r[16].d[0] = ld8((c.r[2].w[0] + 356u));
    c.budget -= 1;
L_002555A8:
    set32(c.r[16], c.r[16].w[0] + c.r[17].w[0]);
    c.r[1].d[0] = c.r[16].sd[0] < 100ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002555BC; } }
    set32(c.r[16], 0u + 99u);
    c.budget -= 1;
L_002555BC:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; c.r[1].d[0] = c.r[4].sd[0] < 118ll ? 1ull : 0ull;  if (t) { goto L_002555C8; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002555C8:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00255608; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 4096u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00255604; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002555E8u); set32(c.r[5], 0u + 405u);  if (depth < kMaxDepth) unit_0058(c, 46u, depth + 1u); else { c.pc = 0x00260440u; return; } if (c.pc != 0x002555E8u) [[unlikely]] return; }
L_002555E8:
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 405u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002555FCu); set32(c.r[6], c.r[17].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x002555FCu) [[unlikely]] return; }
L_002555FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_0025560C; } }
L_00255604:
    st8((c.r[2].w[0] + 356u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.budget -= 1;
L_00255608:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_0025560C:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00255630:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[3].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00255664; } }
    c.r[4].d[0] = ld16((c.r[5].w[0] + 4u));
    c.r[5].d[0] = ld16((c.r[5].w[0] + 12u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025565Cu); set32(c.r[6], 0u + 25500u);  if (depth < kMaxDepth) unit_001C(c, 285u, depth + 1u); else { c.pc = 0x00173260u; return; } if (c.pc != 0x0025565Cu) [[unlikely]] return; }
L_0025565C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_00255688; } }
L_00255664:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[3].d[0] ^ 1ull;  if (t) { goto L_0025568C; } }
    c.r[4].d[0] = ld16((c.r[5].w[0] + 4u));
    c.r[2].d[0] = ld16((c.r[5].w[0] + 12u));
    c.r[6].d[0] = ld16((c.r[5].w[0] + 20u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255684u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 285u, depth + 1u); else { c.pc = 0x00173260u; return; } if (c.pc != 0x00255684u) [[unlikely]] return; }
L_00255684:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_00255688:
    c.r[2].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 1;
L_0025568C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025569Cu); set32(c.r[5], 0u + 902u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0025569Cu) [[unlikely]] return; }
L_0025569C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002556B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00255778; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[18], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002556E0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_008E(c, 352u, depth + 1u); else { c.pc = 0x0033B590u; return; } if (c.pc != 0x002556E0u) [[unlikely]] return; }
L_002556E0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].d[0] = c.r[17].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00255704; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002556F8u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x002556F8u) [[unlikely]] return; }
L_002556F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[17], ld32((c.r[1].w[0] - 25584u)));
    c.budget -= 3;
L_00255704:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[3].d[0]; set32(c.r[16], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_00255740; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255718u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00255718u) [[unlikely]] return; }
L_00255718:
    set32(c.r[3], c.r[18].w[0] << 1);
    c.r[1].d[0] = 0ull | 40076ull;
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[1].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[3].w[0] + 16u);  if (t) { goto L_00255748; } }
L_00255740:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], c.r[5].w[0] - 27588u);
    c.budget -= 2;
L_00255748:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0025576C; } }
L_00255750:
    set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[3].d[0];  if (t) { goto L_00255768; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 17u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (t) { goto L_00255778; } }
L_00255768:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0025576C:
    c.r[3].d[0] = c.r[6].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[6].w[0] << 5);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00255750u | kUnwind; return; } goto L_00255750; } }
L_00255778:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00255790:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[1].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002557C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002557B0u);  if (depth < kMaxDepth) unit_0058(c, 47u, depth + 1u); else { c.pc = 0x00260460u; return; } if (c.pc != 0x002557B0u) [[unlikely]] return; }
L_002557B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002557B8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 48u, depth + 1u); else { c.pc = 0x00260470u; return; } if (c.pc != 0x002557B8u) [[unlikely]] return; }
L_002557B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00255828; } }
L_002557C0:
    c.r[1].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(11ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002557D0; } }
    set32(c.r[6], 0u + 10u);
    c.budget -= 1;
L_002557D0:
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002557F4; } }
L_002557DC:
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[2].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 6;
L_002557F4:
    c.r[2].d[0] = c.r[4].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] << 3);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002557DCu | kUnwind; return; } goto L_002557DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255808u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00255808u) [[unlikely]] return; }
L_00255808:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[4], c.r[16].w[0] + 1u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[2], ld32((c.r[1].w[0] - 25584u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255824u); st32((c.r[29].w[0] + 32u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0082(c, 221u, depth + 1u); else { c.pc = 0x0030A450u; return; } if (c.pc != 0x00255824u) [[unlikely]] return; }
L_00255824:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00255828:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00255840:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255860u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0084(c, 33u, depth + 1u); else { c.pc = 0x003101F0u; return; } if (c.pc != 0x00255860u) [[unlikely]] return; }
L_00255860:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 255u);
    c.budget -= 2;
L_00255868:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[3].w[0] + 96u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[5].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 160u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00255868u | kUnwind; return; } goto L_00255868; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025588Cu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0025588Cu) [[unlikely]] return; }
L_0025588C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] - 25584u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002558A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x002558A0u) [[unlikely]] return; }
L_002558A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002558A8u); c.r[18].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 353u)));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x002558A8u) [[unlikely]] return; }
L_002558A8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] - 25584u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002558BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x002558BCu) [[unlikely]] return; }
L_002558BC:
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 354u)));
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[19], 0u + 99u);
    c.r[20].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
L_002558D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002558D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 108u, depth + 1u); else { c.pc = 0x0012D050u; return; } if (c.pc != 0x002558D8u) [[unlikely]] return; }
L_002558D8:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_002559A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002558ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x002558ECu) [[unlikely]] return; }
L_002558EC:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 355u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002559A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_0025596C; } }
L_00255904:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 359u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[6].d[0];  if (t) { goto L_00255938; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 353u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00255938; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 354u)));
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 160u), c.r[20].w[0]);  if (t) { goto L_00255978; } }
L_00255938:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[6].d[0];  if (t) { goto L_00255968; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 353u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00255968; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 354u)));
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 96u), c.r[20].w[0]);  if (t) { goto L_00255978; } }
L_00255968:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0025596C:
    c.r[3].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00255904u | kUnwind; return; } goto L_00255904; } }
L_00255978:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 353u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[18].d[0];  if (t) { goto L_002559A8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 354u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[17].d[0];  if (t) { goto L_002559A8; } }
    c.r[2].d[0] = ld8((c.r[2].w[0] + 356u));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002559A8; } }
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[16].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 2;
L_002559A8:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < 118ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002558D0u | kUnwind; return; } goto L_002558D0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002559CCu); set32(c.r[5], 0u + 209u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x002559CCu) [[unlikely]] return; }
L_002559CC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_002559F0; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_002559E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[29].w[0] + 164u)));  if (t) { goto L_002559E8; } }
L_002559E4:
    set32(c.r[6], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 1;
L_002559E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00255A04; } }
L_002559F0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_00255A00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[29].w[0] + 100u)));  if (t) { goto L_00255A04; } }
L_00255A00:
    set32(c.r[6], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 1;
L_00255A04:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255A14u); set32(c.r[5], 0u + 311u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x00255A14u) [[unlikely]] return; }
L_00255A14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_00255A40:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255A74u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00255A74u) [[unlikely]] return; }
L_00255A74:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[23], ld32((c.r[1].w[0] - 25584u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255A8Cu); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00255A8Cu) [[unlikely]] return; }
L_00255A8C:
    c.r[22].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 353u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[4].w[0] - 22512u);
    set32(c.r[7], c.r[29].w[0] + 160u);
    set32(c.r[3], 0u + 3u);
    c.budget -= 5;
L_00255AA0:
    ld128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[7].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], c.r[4].w[0] + 16u);
    set32(c.r[7], c.r[7].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00255AA0u | kUnwind; return; } goto L_00255AA0; } }
    c.r[2].d[0] = ld64((c.r[4].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    set32(c.r[5], 0u + 732u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    st64((c.r[7].w[0]), c.r[2].d[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255AE0u); st32((c.r[7].w[0] + 8u), c.f[0]);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x00255AE0u) [[unlikely]] return; }
L_00255AE0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 731u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255AF4u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x00255AF4u) [[unlikely]] return; }
L_00255AF4:
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[30].d[0] = c.r[22].d[0] & 1ull;  if (t) { goto L_00255CBC; } }
L_00255B00:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], c.r[2].w[0] + 160u);
    set32(c.r[20], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255B18u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 108u, depth + 1u); else { c.pc = 0x0012D050u; return; } if (c.pc != 0x00255B18u) [[unlikely]] return; }
L_00255B18:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00255B48; } }
    set32(c.r[2], 0u + 20u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 21u);  if (t) { goto L_00255B44; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_00255B44; } }
    set32(c.r[2], 0u + 22u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00255B64; } }
L_00255B44:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_00255B48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255B50u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00255B50u) [[unlikely]] return; }
L_00255B50:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 355u)));
    c.r[2].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00255B88; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_00255B64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255B6Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00255B6Cu) [[unlikely]] return; }
L_00255B6C:
    set32(c.r[2], c.r[21].w[0] + 700u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255B80u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x00255B80u) [[unlikely]] return; }
L_00255B80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00255CA0; } }
L_00255B88:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] != c.r[20].d[0]; set32(c.r[2], c.r[21].w[0] + 700u);  if (t) { goto L_00255BAC; } }
    set32(c.r[2], c.r[21].w[0] + 700u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255BA4u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x00255BA4u) [[unlikely]] return; }
L_00255BA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00255C9C; } }
L_00255BAC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255BB8u); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0058(c, 46u, depth + 1u); else { c.pc = 0x00260440u; return; } if (c.pc != 0x00255BB8u) [[unlikely]] return; }
L_00255BB8:
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00255C9C; } }
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == c.r[20].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00255C9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255BD8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00255BD8u) [[unlikely]] return; }
L_00255BD8:
    c.r[18].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 353u)));
    set32(c.r[2], 0u + 21u);
    c.budget -= 4;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { goto L_00255C0C; } }
    set32(c.r[2], c.r[21].w[0] + 700u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255C04u); set32(c.r[17], c.r[17].w[0] + 1u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x00255C04u) [[unlikely]] return; }
L_00255C04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00255C9C; } }
L_00255C0C:
    set32(c.r[2], 0u + 22u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 20u);  if (t) { goto L_00255C38; } }
    set32(c.r[2], c.r[21].w[0] + 700u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255C30u); set32(c.r[16], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x00255C30u) [[unlikely]] return; }
L_00255C30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00255C9C; } }
L_00255C38:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { goto L_00255C60; } }
    set32(c.r[2], c.r[21].w[0] + 700u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255C58u); set32(c.r[17], c.r[17].w[0] + 1u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x00255C58u) [[unlikely]] return; }
L_00255C58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00255C9C; } }
L_00255C60:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; set32(c.r[2], c.r[21].w[0] + 700u);  if (t) { goto L_00255C88; } }
    set32(c.r[2], c.r[21].w[0] + 700u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255C80u); set32(c.r[16], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x00255C80u) [[unlikely]] return; }
L_00255C80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00255C9C; } }
L_00255C88:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255C9Cu); set32(c.r[17], c.r[17].w[0] + 1u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x00255C9Cu) [[unlikely]] return; }
L_00255C9C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_00255CA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255CA8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00255CA8u) [[unlikely]] return; }
L_00255CA8:
    set32(c.r[2], c.r[21].w[0] + 700u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255CB8u); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0058(c, 46u, depth + 1u); else { c.pc = 0x00260440u; return; } if (c.pc != 0x00255CB8u) [[unlikely]] return; }
L_00255CB8:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_00255CBC:
    c.r[2].d[0] = c.r[21].d[0] < static_cast<std::uint64_t>(15ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[21].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00255B00u | kUnwind; return; } goto L_00255B00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255CD0u); set32(c.r[21], 0u - 1u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00255CD0u) [[unlikely]] return; }
L_00255CD0:
    c.r[1].d[0] = 0ull | 35856ull;
    set32(c.r[3], c.r[2].w[0] + c.r[1].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 4104u));
    set32(c.r[2], 0u + 16u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00255CF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 1u);  if (t) { goto L_00255D10; } }
L_00255CF0:
    set32(c.r[2], 0u + 15u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].d[0] = c.r[3].sd[0] < 15ll ? 1ull : 0ull;  if (t) { goto L_00255D04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00255D10; } }
L_00255D04:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00255D10; } }
    set32(c.r[18], 0u + 2u);
    c.budget -= 1;
L_00255D10:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00255D20; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00255D4C; } }
L_00255D20:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00255D30; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_00255D48; } }
L_00255D30:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00255D60; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_00255D60; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_00255D60; } }
L_00255D48:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00255D4C:
    set32(c.r[5], 0u + 912u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255D58u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x00255D58u) [[unlikely]] return; }
L_00255D58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_00255EA0; } }
L_00255D60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255D68u);  if (depth < kMaxDepth) unit_0010(c, 15u, depth + 1u); else { c.pc = 0x00140210u; return; } if (c.pc != 0x00255D68u) [[unlikely]] return; }
L_00255D68:
    set32(c.r[5], 0u + 14u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255D74u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 228u, depth + 1u); else { c.pc = 0x0011B928u; return; } if (c.pc != 0x00255D74u) [[unlikely]] return; }
L_00255D74:
    c.r[20].d[0] = c.r[2].d[0] << 32;
    c.r[23].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 32);  if (t) { goto L_00255E34; } }
L_00255D84:
    set32(c.r[2], c.r[20].w[0] + 700u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255D94u); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0058(c, 46u, depth + 1u); else { c.pc = 0x00260440u; return; } if (c.pc != 0x00255D94u) [[unlikely]] return; }
L_00255D94:
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00255E10; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00255DBC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00255E14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00255E10; } }
L_00255DBC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_00255DD4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00255E10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00255E10; } }
L_00255DD4:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == c.r[3].d[0];  if (t) { goto L_00255DE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00255E10; } }
L_00255DE4:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00255DFC; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_00255DF8; } }
    c.r[21].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_00255DF8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00255DFC:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != c.r[2].d[0];  if (t) { goto L_00255E10; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00255E10; } }
    c.r[21].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_00255E10:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_00255E14:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != c.r[2].d[0];  if (t) { goto L_00255E30; } }
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].d[0] < static_cast<std::uint64_t>(15ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00255E30; } }
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00255E30:
    set32(c.r[23], c.r[23].w[0] + 1u);
    c.budget -= 1;
L_00255E34:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[23].sd[0] < 50ll ? 1ull : 0ull;  if (t) { goto L_00255E48; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00255D84u | kUnwind; return; } goto L_00255D84; } }
L_00255E48:
    c.budget -= 2;
    { const bool t = c.r[21].sd[0] < 0; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00255E5C; } }
    c.r[2].d[0] = c.r[21].d[0] < static_cast<std::uint64_t>(15ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[21].w[0] << 2);  if (t) { goto L_00255E70; } }
L_00255E5C:
    set32(c.r[5], 0u + 912u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255E68u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x00255E68u) [[unlikely]] return; }
L_00255E68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00255E9C; } }
L_00255E70:
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 160u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255E80u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 299u, depth + 1u); else { c.pc = 0x00251F40u; return; } if (c.pc != 0x00255E80u) [[unlikely]] return; }
L_00255E80:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255E8Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00255E8Cu) [[unlikely]] return; }
L_00255E8C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255E9Cu); set32(c.r[5], 0u + 912u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x00255E9Cu) [[unlikely]] return; }
L_00255E9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_00255EA0:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_00255ED0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255F04u); c.r[20].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 345u, depth + 1u); else { c.pc = 0x0033B480u; return; } if (c.pc != 0x00255F04u) [[unlikely]] return; }
L_00255F04:
    set32(c.r[17], ld32((c.r[21].w[0] + 12u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], 0u + 999u);  if (t) { goto L_00255F28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255F1Cu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00255F1Cu) [[unlikely]] return; }
L_00255F1C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[17], ld32((c.r[1].w[0] - 25584u)));
    c.budget -= 3;
L_00255F28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255F30u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00255F30u) [[unlikely]] return; }
L_00255F30:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] - 25584u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255F44u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00255F44u) [[unlikely]] return; }
L_00255F44:
    c.r[2].d[0] = c.r[20].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_00255FA4; } }
    set32(c.r[16], ld32((c.r[21].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { goto L_00255F70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255F64u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00255F64u) [[unlikely]] return; }
L_00255F64:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[16], ld32((c.r[1].w[0] - 25584u)));
    c.budget -= 3;
L_00255F70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255F78u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00255F78u) [[unlikely]] return; }
L_00255F78:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] - 25584u)));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_00255FA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255F94u); c.r[16].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00255F94u) [[unlikely]] return; }
L_00255F94:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[17], ld32((c.r[1].w[0] - 25584u)));
    c.budget -= 3;
L_00255FA0:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_00255FA4:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_00255FD0; } }
    set32(c.r[2], 0u + 999u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00255FCC; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255FC4u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0088(c, 564u, depth + 1u); else { c.pc = 0x00323800u; return; } if (c.pc != 0x00255FC4u) [[unlikely]] return; }
L_00255FC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00256008; } }
L_00255FCC:
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_00255FD0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00255FFC; } }
    set32(c.r[2], 0u + 999u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00256000; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255FF4u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0088(c, 564u, depth + 1u); else { c.pc = 0x00323800u; return; } if (c.pc != 0x00255FF4u) [[unlikely]] return; }
L_00255FF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00256008; } }
L_00255FFC:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00256000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256008u); set32(c.r[6], 0u + 25500u);  if (depth < kMaxDepth) unit_0088(c, 564u, depth + 1u); else { c.pc = 0x00323800u; return; } if (c.pc != 0x00256008u) [[unlikely]] return; }
L_00256008:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256010u);  if (depth < kMaxDepth) unit_0054(c, 612u, depth + 1u); else { c.pc = 0x00253EE0u; return; } if (c.pc != 0x00256010u) [[unlikely]] return; }
L_00256010:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025601Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x0025601Cu) [[unlikely]] return; }
L_0025601C:
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025602Cu); set32(c.r[5], 0u + 871u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0025602Cu) [[unlikely]] return; }
L_0025602C:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256038u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x00256038u) [[unlikely]] return; }
L_00256038:
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256048u); set32(c.r[5], 0u + 872u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x00256048u) [[unlikely]] return; }
L_00256048:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256054u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x00256054u) [[unlikely]] return; }
L_00256054:
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256064u); set32(c.r[5], 0u + 879u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x00256064u) [[unlikely]] return; }
L_00256064:
    set32(c.r[4], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256070u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x00256070u) [[unlikely]] return; }
L_00256070:
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256080u); set32(c.r[5], 0u + 880u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x00256080u) [[unlikely]] return; }
L_00256080:
    set32(c.r[4], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025608Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x0025608Cu) [[unlikely]] return; }
L_0025608C:
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025609Cu); set32(c.r[5], 0u + 881u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0025609Cu) [[unlikely]] return; }
L_0025609C:
    set32(c.r[4], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002560A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x002560A8u) [[unlikely]] return; }
L_002560A8:
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002560B8u); set32(c.r[5], 0u + 882u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x002560B8u) [[unlikely]] return; }
L_002560B8:
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002560C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x002560C4u) [[unlikely]] return; }
L_002560C4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002560D4u); set32(c.r[5], 0u + 883u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x002560D4u) [[unlikely]] return; }
L_002560D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00256100:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[9].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 128u);  if (t) { goto L_00256188; } }
L_00256130:
    set32(c.r[7], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] + c.r[9].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[9].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[16].w[0] + c.r[4].w[0]);  if (t) { goto L_00256164; } }
L_0025614C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0025615C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00256174; } }
L_0025615C:
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 2;
L_00256164:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[4], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025614Cu | kUnwind; return; } goto L_0025614C; } }
L_00256174:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00256184; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_00256194; } }
L_00256184:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 1;
L_00256188:
    c.r[4].d[0] = c.r[9].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[4], c.r[9].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00256130u | kUnwind; return; } goto L_00256130; } }
L_00256194:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] >= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002561DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_002561D4; } }
L_002561A4:
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 22u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002561CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002561DC; } }
L_002561CC:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[4].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 2;
L_002561D4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[4], c.r[5].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002561A4u | kUnwind; return; } goto L_002561A4; } }
L_002561DC:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_00256310; } }
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00256214; } }
L_00256208:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
L_00256214:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00256208u | kUnwind; return; } goto L_00256208; } }
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 28u), c.r[3].w[0]);  if (t) { goto L_0025624C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 32u), c.r[2].w[0]);  if (t) { goto L_00256254; } }
L_0025624C:
    set32(c.r[2], 0u + 25500u);
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 2;
L_00256254:
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 25500u);  if (t) { goto L_0025626C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_00256270; } }
L_0025626C:
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 1;
L_00256270:
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 25500u);  if (t) { goto L_00256288; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 40u), c.r[2].w[0]);  if (t) { goto L_0025628C; } }
L_00256288:
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 1;
L_0025628C:
    set32(c.r[2], c.r[6].w[0] - 1u);
    st8((c.r[16].w[0] + 22u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025629Cu); set32(c.r[4], ld32((c.r[17].w[0] + 12u)));  if (depth < kMaxDepth) unit_0054(c, 299u, depth + 1u); else { c.pc = 0x00251F40u; return; } if (c.pc != 0x0025629Cu) [[unlikely]] return; }
L_0025629C:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002562A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x002562A8u) [[unlikely]] return; }
L_002562A8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 354u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 146u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002562C0u); st8((c.r[16].w[0] + 23u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0058(c, 40u, depth + 1u); else { c.pc = 0x00260370u; return; } if (c.pc != 0x002562C0u) [[unlikely]] return; }
L_002562C0:
    set32(c.r[6], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002562D0u); set32(c.r[5], 0u + 147u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x002562D0u) [[unlikely]] return; }
L_002562D0:
    set32(c.r[6], ld32((c.r[16].w[0] + 28u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002562E0u); set32(c.r[5], 0u + 148u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x002562E0u) [[unlikely]] return; }
L_002562E0:
    set32(c.r[6], ld32((c.r[16].w[0] + 32u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002562F0u); set32(c.r[5], 0u + 149u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x002562F0u) [[unlikely]] return; }
L_002562F0:
    set32(c.r[6], ld32((c.r[16].w[0] + 36u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256300u); set32(c.r[5], 0u + 150u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x00256300u) [[unlikely]] return; }
L_00256300:
    set32(c.r[6], ld32((c.r[16].w[0] + 40u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256310u); set32(c.r[5], 0u + 233u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x00256310u) [[unlikely]] return; }
L_00256310:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00256330:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[16], c.r[16].w[0] + 128u);  if (t) { goto L_00256410; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_002563FC; } }
L_00256360:
    set32(c.r[6], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00256384; } }
L_0025636C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0025637C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00256394; } }
L_0025637C:
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 2;
L_00256384:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025636Cu | kUnwind; return; } goto L_0025636C; } }
L_00256394:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002563F4; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002563ACu); set32(c.r[5], 0u + 147u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x002563ACu) [[unlikely]] return; }
L_002563AC:
    set32(c.r[6], ld32((c.r[16].w[0] + 28u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002563BCu); set32(c.r[5], 0u + 148u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x002563BCu) [[unlikely]] return; }
L_002563BC:
    set32(c.r[6], ld32((c.r[16].w[0] + 32u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002563CCu); set32(c.r[5], 0u + 149u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x002563CCu) [[unlikely]] return; }
L_002563CC:
    set32(c.r[6], ld32((c.r[16].w[0] + 36u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002563DCu); set32(c.r[5], 0u + 150u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x002563DCu) [[unlikely]] return; }
L_002563DC:
    set32(c.r[6], ld32((c.r[16].w[0] + 40u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002563ECu); set32(c.r[5], 0u + 233u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x002563ECu) [[unlikely]] return; }
L_002563EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002565CC; } }
L_002563F4:
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 44u);
    c.budget -= 2;
L_002563FC:
    c.r[3].d[0] = c.r[8].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00256360u | kUnwind; return; } goto L_00256360; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002565C8; } }
L_00256410:
    c.r[8].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.r[12].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[11], 0u + 5u);  if (t) { goto L_002565BC; } }
L_00256428:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_00256464; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[13].d[0] = 0ull + 0ull;  if (t) { goto L_00256458; } }
L_00256438:
    set32(c.r[9], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[10], c.r[16].w[0] + c.r[10].w[0]);
    set32(c.r[10], ld32((c.r[10].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[10].d[0] != c.r[9].d[0];  if (t) { goto L_00256454; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_00256464; } }
L_00256454:
    set32(c.r[13], c.r[13].w[0] + 1u);
    c.budget -= 1;
L_00256458:
    c.r[9].d[0] = c.r[13].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[9].d[0] != 0ull; set32(c.r[10], c.r[13].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00256438u | kUnwind; return; } goto L_00256438; } }
L_00256464:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; c.r[13].d[0] = 0ull + 0ull;  if (t) { goto L_002564A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = c.r[13].sd[0] < 5ll ? 1ull : 0ull;  if (t) { goto L_00256498; } }
L_00256474:
    set32(c.r[9], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[10], c.r[16].w[0] + c.r[10].w[0]);
    set32(c.r[10], ld32((c.r[10].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[10].d[0] != c.r[9].d[0];  if (t) { goto L_00256490; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_002564A0; } }
L_00256490:
    set32(c.r[13], c.r[13].w[0] + 1u);
    c.r[9].d[0] = c.r[13].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 2;
L_00256498:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != 0ull; set32(c.r[10], c.r[13].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00256474u | kUnwind; return; } goto L_00256474; } }
L_002564A0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[13].d[0] = 0ull + 0ull;  if (t) { goto L_002564DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = c.r[13].sd[0] < 5ll ? 1ull : 0ull;  if (t) { goto L_002564D4; } }
L_002564B0:
    set32(c.r[9], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[10], c.r[16].w[0] + c.r[10].w[0]);
    set32(c.r[10], ld32((c.r[10].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[10].d[0] != c.r[9].d[0];  if (t) { goto L_002564CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_002564DC; } }
L_002564CC:
    set32(c.r[13], c.r[13].w[0] + 1u);
    c.r[9].d[0] = c.r[13].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 2;
L_002564D4:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != 0ull; set32(c.r[10], c.r[13].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002564B0u | kUnwind; return; } goto L_002564B0; } }
L_002564DC:
    c.budget -= 2;
    { const bool t = c.r[12].d[0] != 0ull; c.r[13].d[0] = 0ull + 0ull;  if (t) { goto L_00256518; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = c.r[13].sd[0] < 5ll ? 1ull : 0ull;  if (t) { goto L_00256510; } }
L_002564EC:
    set32(c.r[9], ld32((c.r[5].w[0] + 28u)));
    set32(c.r[10], c.r[16].w[0] + c.r[10].w[0]);
    set32(c.r[10], ld32((c.r[10].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[10].d[0] != c.r[9].d[0];  if (t) { goto L_00256508; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_00256518; } }
L_00256508:
    set32(c.r[13], c.r[13].w[0] + 1u);
    c.r[9].d[0] = c.r[13].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 2;
L_00256510:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != 0ull; set32(c.r[10], c.r[13].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002564ECu | kUnwind; return; } goto L_002564EC; } }
L_00256518:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[11].d[0]; c.r[13].d[0] = 0ull + 0ull;  if (t) { goto L_00256554; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = c.r[13].sd[0] < 5ll ? 1ull : 0ull;  if (t) { goto L_0025654C; } }
L_00256528:
    set32(c.r[9], ld32((c.r[5].w[0] + 36u)));
    set32(c.r[10], c.r[16].w[0] + c.r[10].w[0]);
    set32(c.r[10], ld32((c.r[10].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[10].d[0] != c.r[9].d[0];  if (t) { goto L_00256544; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_00256554; } }
L_00256544:
    set32(c.r[13], c.r[13].w[0] + 1u);
    c.r[9].d[0] = c.r[13].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 2;
L_0025654C:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != 0ull; set32(c.r[10], c.r[13].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00256528u | kUnwind; return; } goto L_00256528; } }
L_00256554:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[7].d[0];  if (t) { goto L_002565B4; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025656Cu); set32(c.r[5], 0u + 147u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0025656Cu) [[unlikely]] return; }
L_0025656C:
    set32(c.r[6], ld32((c.r[16].w[0] + 28u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025657Cu); set32(c.r[5], 0u + 148u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0025657Cu) [[unlikely]] return; }
L_0025657C:
    set32(c.r[6], ld32((c.r[16].w[0] + 32u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025658Cu); set32(c.r[5], 0u + 149u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0025658Cu) [[unlikely]] return; }
L_0025658C:
    set32(c.r[6], ld32((c.r[16].w[0] + 36u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025659Cu); set32(c.r[5], 0u + 150u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0025659Cu) [[unlikely]] return; }
L_0025659C:
    set32(c.r[6], ld32((c.r[16].w[0] + 40u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002565ACu); set32(c.r[5], 0u + 233u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x002565ACu) [[unlikely]] return; }
L_002565AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002565C8; } }
L_002565B4:
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 44u);
    c.budget -= 2;
L_002565BC:
    c.r[7].d[0] = c.r[8].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00256428u | kUnwind; return; } goto L_00256428; } }
L_002565C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002565CC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002565E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[9], c.r[9].w[0] + 128u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.r[13].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[12].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;  if (t) { goto L_00256718; } }
L_00256604:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_00256640; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[14].d[0] = 0ull + 0ull;  if (t) { goto L_00256634; } }
L_00256614:
    set32(c.r[10], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[11], c.r[9].w[0] + c.r[11].w[0]);
    set32(c.r[11], ld32((c.r[11].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[11].d[0] != c.r[10].d[0];  if (t) { goto L_00256630; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_00256640; } }
L_00256630:
    set32(c.r[14], c.r[14].w[0] + 1u);
    c.budget -= 1;
L_00256634:
    c.r[10].d[0] = c.r[14].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[10].d[0] != 0ull; set32(c.r[11], c.r[14].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00256614u | kUnwind; return; } goto L_00256614; } }
L_00256640:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[14].d[0] = 0ull + 0ull;  if (t) { goto L_0025667C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = c.r[14].sd[0] < 5ll ? 1ull : 0ull;  if (t) { goto L_00256674; } }
L_00256650:
    set32(c.r[10], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[11], c.r[9].w[0] + c.r[11].w[0]);
    set32(c.r[11], ld32((c.r[11].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[11].d[0] != c.r[10].d[0];  if (t) { goto L_0025666C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_0025667C; } }
L_0025666C:
    set32(c.r[14], c.r[14].w[0] + 1u);
    c.r[10].d[0] = c.r[14].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 2;
L_00256674:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] != 0ull; set32(c.r[11], c.r[14].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00256650u | kUnwind; return; } goto L_00256650; } }
L_0025667C:
    c.budget -= 2;
    { const bool t = c.r[13].d[0] != 0ull; c.r[14].d[0] = 0ull + 0ull;  if (t) { goto L_002566B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = c.r[14].sd[0] < 5ll ? 1ull : 0ull;  if (t) { goto L_002566B0; } }
L_0025668C:
    set32(c.r[10], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[11], c.r[9].w[0] + c.r[11].w[0]);
    set32(c.r[11], ld32((c.r[11].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[11].d[0] != c.r[10].d[0];  if (t) { goto L_002566A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_002566B8; } }
L_002566A8:
    set32(c.r[14], c.r[14].w[0] + 1u);
    c.r[10].d[0] = c.r[14].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 2;
L_002566B0:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] != 0ull; set32(c.r[11], c.r[14].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025668Cu | kUnwind; return; } goto L_0025668C; } }
L_002566B8:
    c.budget -= 2;
    { const bool t = c.r[12].d[0] != 0ull; c.r[14].d[0] = 0ull + 0ull;  if (t) { goto L_002566F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = c.r[14].sd[0] < 5ll ? 1ull : 0ull;  if (t) { goto L_002566EC; } }
L_002566C8:
    set32(c.r[10], ld32((c.r[5].w[0] + 28u)));
    set32(c.r[11], c.r[9].w[0] + c.r[11].w[0]);
    set32(c.r[11], ld32((c.r[11].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[11].d[0] != c.r[10].d[0];  if (t) { goto L_002566E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_002566F4; } }
L_002566E4:
    set32(c.r[14], c.r[14].w[0] + 1u);
    c.r[10].d[0] = c.r[14].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 2;
L_002566EC:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] != 0ull; set32(c.r[11], c.r[14].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002566C8u | kUnwind; return; } goto L_002566C8; } }
L_002566F4:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[7].d[0];  if (t) { goto L_00256710; } }
    c.r[6].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256708u); set32(c.r[5], 0u + 146u);  if (depth < kMaxDepth) unit_0058(c, 40u, depth + 1u); else { c.pc = 0x00260370u; return; } if (c.pc != 0x00256708u) [[unlikely]] return; }
L_00256708:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00256728; } }
L_00256710:
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[9], c.r[9].w[0] + 44u);
    c.budget -= 2;
L_00256718:
    c.r[7].d[0] = c.r[8].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00256604u | kUnwind; return; } goto L_00256604; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00256728:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00256730:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[4].w[0] - 22448u);
    ld128((c.r[4].w[0]) & ~15u, c.r[7]);
    c.r[4].d[0] = ld64((c.r[4].w[0] + 16u));
    st128((c.r[6].w[0]) & ~15u, c.r[7]);
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; st64((c.r[6].w[0] + 16u), c.r[4].d[0]);  if (t) { goto L_002567A4; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256774u); set32(c.r[5], ld32((c.r[5].w[0] + 12u)));  if (depth < kMaxDepth) unit_0082(c, 201u, depth + 1u); else { c.pc = 0x0030A060u; return; } if (c.pc != 0x00256774u) [[unlikely]] return; }
L_00256774:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00256778:
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[17].w[0] + 806u);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[6], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256794u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x00256794u) [[unlikely]] return; }
L_00256794:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00256778u | kUnwind; return; } goto L_00256778; } }
L_002567A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002567C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002567D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 282u, depth + 1u); else { c.pc = 0x00173210u; return; } if (c.pc != 0x002567D4u) [[unlikely]] return; }
L_002567D4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002567F4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 902u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002567ECu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x002567ECu) [[unlikely]] return; }
L_002567EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00256804; } }
L_002567F4:
    set32(c.r[5], 0u + 902u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256800u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x00256800u) [[unlikely]] return; }
L_00256800:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00256804:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00256810:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256834u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_001C(c, 282u, depth + 1u); else { c.pc = 0x00173210u; return; } if (c.pc != 0x00256834u) [[unlikely]] return; }
L_00256834:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] >= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { goto L_00256858; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 902u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256850u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x00256850u) [[unlikely]] return; }
L_00256850:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00256938; } }
L_00256858:
    set32(c.r[3], c.r[29].w[0] + 80u);
    set32(c.r[4], c.r[4].w[0] - 22416u);
    ld128((c.r[4].w[0]) & ~15u, c.r[2]);
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256874u); st32((c.r[3].w[0] + 16u), c.f[0]);  if (depth < kMaxDepth) unit_001C(c, 271u, depth + 1u); else { c.pc = 0x001730D0u; return; } if (c.pc != 0x00256874u) [[unlikely]] return; }
L_00256874:
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256880u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_008E(c, 352u, depth + 1u); else { c.pc = 0x0033B590u; return; } if (c.pc != 0x00256880u) [[unlikely]] return; }
L_00256880:
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256890u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_008E(c, 352u, depth + 1u); else { c.pc = 0x0033B590u; return; } if (c.pc != 0x00256890u) [[unlikely]] return; }
L_00256890:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] & 65535ull;
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002568A4u); set32(c.r[6], 0u + 25500u);  if (depth < kMaxDepth) unit_001C(c, 285u, depth + 1u); else { c.pc = 0x00173260u; return; } if (c.pc != 0x002568A4u) [[unlikely]] return; }
L_002568A4:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 112u);  if (t) { goto L_00256934; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002568BCu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_001C(c, 260u, depth + 1u); else { c.pc = 0x00172FC0u; return; } if (c.pc != 0x002568BCu) [[unlikely]] return; }
L_002568BC:
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 112u);  if (t) { goto L_002568D4; } }
L_002568C8:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 3;
L_002568D4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002568C8u | kUnwind; return; } goto L_002568C8; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002568F0u); set32(c.r[4], ld32((c.r[19].w[0] + 12u)));  if (depth < kMaxDepth) unit_0054(c, 299u, depth + 1u); else { c.pc = 0x00251F40u; return; } if (c.pc != 0x002568F0u) [[unlikely]] return; }
L_002568F0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002568FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x002568FCu) [[unlikely]] return; }
L_002568FC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 353u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256910u); st8((c.r[29].w[0] + 135u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00256910u) [[unlikely]] return; }
L_00256910:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 354u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 112u);
    st8((c.r[29].w[0] + 136u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[29].w[0] + 138u), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025692Cu); st16((c.r[29].w[0] + 140u), static_cast<std::uint16_t>(c.r[17].w[0]));  if (depth < kMaxDepth) unit_001C(c, 268u, depth + 1u); else { c.pc = 0x00173090u; return; } if (c.pc != 0x0025692Cu) [[unlikely]] return; }
L_0025692C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256934u);  if (depth < kMaxDepth) unit_001C(c, 271u, depth + 1u); else { c.pc = 0x001730D0u; return; } if (c.pc != 0x00256934u) [[unlikely]] return; }
L_00256934:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00256938:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00256950:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002569F0; } }
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002569F0; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00256988; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002569F4; } }
L_00256988:
    set32(c.r[17], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], ld32((c.r[5].w[0] + 12u)));  if (t) { goto L_002569A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025699Cu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0025699Cu) [[unlikely]] return; }
L_0025699C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[17], ld32((c.r[1].w[0] - 25584u)));
    c.budget -= 3;
L_002569A8:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; c.r[4].d[0] = c.r[17].d[0] & 65535ull;  if (t) { goto L_002569C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002569B8u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x002569B8u) [[unlikely]] return; }
L_002569B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[16], ld32((c.r[1].w[0] - 25584u)));
    c.r[4].d[0] = c.r[17].d[0] & 65535ull;
    c.budget -= 4;
L_002569C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002569D0u); c.r[5].d[0] = c.r[16].d[0] & 65535ull;  if (depth < kMaxDepth) unit_001C(c, 300u, depth + 1u); else { c.pc = 0x00173420u; return; } if (c.pc != 0x002569D0u) [[unlikely]] return; }
L_002569D0:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002569D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002569DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 292u, depth + 1u); else { c.pc = 0x00173380u; return; } if (c.pc != 0x002569DCu) [[unlikely]] return; }
L_002569DC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 27ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002569D4u | kUnwind; return; } goto L_002569D4; } }
L_002569F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002569F4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00256A10:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00256A90; } }
L_00256A44:
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[21], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256A54u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 299u, depth + 1u); else { c.pc = 0x00251F40u; return; } if (c.pc != 0x00256A54u) [[unlikely]] return; }
L_00256A54:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256A60u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00256A60u) [[unlikely]] return; }
L_00256A60:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 353u)));  if (t) { goto L_00256A70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00256A8C; } }
L_00256A70:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00256A8C; } }
    set32(c.r[5], 0u + 902u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256A84u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x00256A84u) [[unlikely]] return; }
L_00256A84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_00256AB0; } }
L_00256A8C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00256A90:
    c.r[2].d[0] = c.r[16].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 3);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00256A44u | kUnwind; return; } goto L_00256A44; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 902u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256AACu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x00256AACu) [[unlikely]] return; }
L_00256AAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_00256AB0:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00256AD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_00256B04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256AF8u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00256AF8u) [[unlikely]] return; }
L_00256AF8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[3].d[0] = ld16((c.r[1].w[0] - 25584u));
    c.budget -= 3;
L_00256B04:
    c.r[16].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256B10u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 299u, depth + 1u); else { c.pc = 0x00251F40u; return; } if (c.pc != 0x00256B10u) [[unlikely]] return; }
L_00256B10:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256B1Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00256B1Cu) [[unlikely]] return; }
L_00256B1C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 353u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00256B40; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 303u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256B38u); set32(c.r[6], 0u + 22u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x00256B38u) [[unlikely]] return; }
L_00256B38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00256B5C; } }
L_00256B40:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00256B58; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 303u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256B58u); set32(c.r[6], 0u + 20u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x00256B58u) [[unlikely]] return; }
L_00256B58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00256B5C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00256B70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 8;
    { const bool t = c.r[16].sd[0] >= 0; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00256BA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256B98u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00256B98u) [[unlikely]] return; }
L_00256B98:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25570u)));  if (t) { goto L_00256BCC; } }
L_00256BA8:
    c.r[1].d[0] = c.r[16].sd[0] < 118ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00256BD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256BBCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 299u, depth + 1u); else { c.pc = 0x00251F40u; return; } if (c.pc != 0x00256BBCu) [[unlikely]] return; }
L_00256BBC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256BC8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00256BC8u) [[unlikely]] return; }
L_00256BC8:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 354u)));
    c.budget -= 1;
L_00256BCC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00256BD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256BD8u); set32(c.r[5], 0u + 903u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x00256BD8u) [[unlikely]] return; }
L_00256BD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00256BF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 9;
    { const bool t = c.r[16].sd[0] >= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00256C28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256C1Cu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00256C1Cu) [[unlikely]] return; }
L_00256C1C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[16], ld32((c.r[1].w[0] - 25584u)));
    c.budget -= 3;
L_00256C28:
    c.r[1].d[0] = c.r[16].sd[0] < 118ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00256C50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256C3Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 299u, depth + 1u); else { c.pc = 0x00251F40u; return; } if (c.pc != 0x00256C3Cu) [[unlikely]] return; }
L_00256C3C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256C48u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00256C48u) [[unlikely]] return; }
L_00256C48:
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 354u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_00256C50:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256C5Cu); set32(c.r[5], 0u + 903u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x00256C5Cu) [[unlikely]] return; }
L_00256C5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00256C80:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256CA4u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00256CA4u) [[unlikely]] return; }
L_00256CA4:
    c.r[1].d[0] = 0ull | 35856ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[17], c.r[2].w[0] + c.r[1].w[0]);
    c.r[19].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4105u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256CBCu); set32(c.r[5], 0u + 905u);  if (depth < kMaxDepth) unit_0058(c, 46u, depth + 1u); else { c.pc = 0x00260440u; return; } if (c.pc != 0x00256CBCu) [[unlikely]] return; }
L_00256CBC:
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00256CD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256CD0u); set32(c.r[5], 0u + 905u);  if (depth < kMaxDepth) unit_0058(c, 46u, depth + 1u); else { c.pc = 0x00260440u; return; } if (c.pc != 0x00256CD0u) [[unlikely]] return; }
L_00256CD0:
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st8((c.r[17].w[0] + 4105u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00256CD8:
    c.r[19].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4107u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256CE8u); set32(c.r[5], 0u + 906u);  if (depth < kMaxDepth) unit_0058(c, 46u, depth + 1u); else { c.pc = 0x00260440u; return; } if (c.pc != 0x00256CE8u) [[unlikely]] return; }
L_00256CE8:
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00256D04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256CFCu); set32(c.r[5], 0u + 906u);  if (depth < kMaxDepth) unit_0058(c, 46u, depth + 1u); else { c.pc = 0x00260440u; return; } if (c.pc != 0x00256CFCu) [[unlikely]] return; }
L_00256CFC:
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st8((c.r[17].w[0] + 4107u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00256D04:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4105u)));
    set32(c.r[6], c.r[2].w[0] - 3u);
    c.budget -= 4;
    { const bool t = c.r[6].sd[0] > 0; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00256D18; } }
    set32(c.r[6], c.r[6].w[0] + 12u);
    c.budget -= 1;
L_00256D18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256D20u); set32(c.r[5], 0u + 908u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x00256D20u) [[unlikely]] return; }
L_00256D20:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00256DA0; } }
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4105u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256D40u); set32(c.r[5], 0u + 111u);  if (depth < kMaxDepth) unit_0058(c, 46u, depth + 1u); else { c.pc = 0x00260440u; return; } if (c.pc != 0x00256D40u) [[unlikely]] return; }
L_00256D40:
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00256D58; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4113u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00256DD0; } }
L_00256D58:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4105u)));
    set32(c.r[4], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0]; set32(c.r[3], 0u + 11u);  if (t) { goto L_00256D80; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4107u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00256D7C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 14u);  if (t) { goto L_00256DD0; } }
L_00256D7C:
    set32(c.r[3], 0u + 11u);
    c.budget -= 1;
L_00256D80:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00256DD0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4107u)));
    set32(c.r[3], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00256DD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 13u);  if (t) { goto L_00256DD0; } }
L_00256DA0:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] >= 0; c.r[3].d[0] = c.r[4].d[0] & 1ull;  if (t) { goto L_00256DC8; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 4096u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256DB4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00256DB4u) [[unlikely]] return; }
L_00256DB4:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 353u)));
    c.r[3].d[0] = c.r[4].d[0] & 1ull;
    set32(c.r[16], c.r[4].w[0] + 15u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 4109u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00256DD0; } }
L_00256DC8:
    set32(c.r[16], c.r[4].w[0] + 15u);
    st8((c.r[17].w[0] + 4109u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00256DD0:
    st8((c.r[17].w[0] + 4104u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00256DF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256E10u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 351u, depth + 1u); else { c.pc = 0x002522C0u; return; } if (c.pc != 0x00256E10u) [[unlikely]] return; }
L_00256E10:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] - 27136u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - 27128u);  if (t) { goto L_00256E38; } }
L_00256E28:
    set32(c.r[2], c.r[3].w[0] + c.r[6].w[0]);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_00256E38:
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[5].w[0] + c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00256E28u | kUnwind; return; } goto L_00256E28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256E4Cu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00256E4Cu) [[unlikely]] return; }
L_00256E4C:
    c.r[1].d[0] = 0ull | 35856ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[18], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[5], 0u + 894u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256E64u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x00256E64u) [[unlikely]] return; }
L_00256E64:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[18].d[0] = ld8((c.r[18].w[0] + 4104u));  if (t) { goto L_00256E84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256E7Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 355u, depth + 1u); else { c.pc = 0x0033B610u; return; } if (c.pc != 0x00256E7Cu) [[unlikely]] return; }
L_00256E7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_00256E8C; } }
L_00256E84:
    c.r[2].d[0] = c.r[3].d[0] & 65535ull;
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 2;
L_00256E8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256E94u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00256E94u) [[unlikely]] return; }
L_00256E94:
    c.r[1].d[0] = 0ull | 40072ull;
    c.r[7].d[0] = c.r[18].d[0] & 255ull;
    set32(c.r[6], c.r[2].w[0] + c.r[1].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27640u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256EB4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0082(c, 312u, depth + 1u); else { c.pc = 0x0030B2F0u; return; } if (c.pc != 0x00256EB4u) [[unlikely]] return; }
L_00256EB4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 521u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256EC4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x00256EC4u) [[unlikely]] return; }
L_00256EC4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 522u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256ED4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x00256ED4u) [[unlikely]] return; }
L_00256ED4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 523u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256EE4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x00256EE4u) [[unlikely]] return; }
L_00256EE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256EECu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00256EECu) [[unlikely]] return; }
L_00256EEC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[16].d[0] = ld16((c.r[1].w[0] - 25464u));
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00256F08; } }
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.budget -= 1;
L_00256F08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256F10u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00256F10u) [[unlikely]] return; }
L_00256F10:
    c.r[5].d[0] = c.r[16].d[0] & 65535ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[5].w[0] << 1);
    c.r[1].d[0] = 0ull | 40076ull;
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] - 27588u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[6], 0u + 192u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256F48u); set32(c.r[5], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x00256F48u) [[unlikely]] return; }
L_00256F48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00256F60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256F7Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 257u, depth + 1u); else { c.pc = 0x003ADE20u; return; } if (c.pc != 0x00256F7Cu) [[unlikely]] return; }
L_00256F7C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256F88u); set32(c.r[4], ld32((c.r[1].w[0] - 27648u)));  if (depth < kMaxDepth) unit_0054(c, 602u, depth + 1u); else { c.pc = 0x00253DB0u; return; } if (c.pc != 0x00256F88u) [[unlikely]] return; }
L_00256F88:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[2], ld32((c.r[1].w[0] - 27616u)));
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 36u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 27648u)));
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256FBCu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0057(c, 387u, depth + 1u); else { c.pc = 0x0025EEC0u; return; } if (c.pc != 0x00256FBCu) [[unlikely]] return; }
L_00256FBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256FC4u);  if (depth < kMaxDepth) unit_002A(c, 64u, depth + 1u); else { c.pc = 0x001A8F40u; return; } if (c.pc != 0x00256FC4u) [[unlikely]] return; }
L_00256FC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256FCCu);  if (depth < kMaxDepth) unit_0051(c, 160u, depth + 1u); else { c.pc = 0x002454D0u; return; } if (c.pc != 0x00256FCCu) [[unlikely]] return; }
L_00256FCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256FD4u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00256FD4u) [[unlikely]] return; }
L_00256FD4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 25576u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] - 7934u);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] - 27648u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257004u); set32(c.r[6], 0u + 128u);  if (depth < kMaxDepth) unit_0054(c, 501u, depth + 1u); else { c.pc = 0x00253260u; return; } if (c.pc != 0x00257004u) [[unlikely]] return; }
L_00257004:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], 0u + 20u);
    set32(c.r[16], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257018u); if (c.r[2].d[0] != 0) c.r[16].d[0] = 0ull;  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00257018u) [[unlikely]] return; }
L_00257018:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_00257030; } }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257030u); set32(c.r[5], c.r[5].w[0] - 27600u);  if (depth < kMaxDepth) unit_0084(c, 180u, depth + 1u); else { c.pc = 0x00311DE0u; return; } if (c.pc != 0x00257030u) [[unlikely]] return; }
L_00257030:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00257040:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00257074; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257064u);  if (depth < kMaxDepth) unit_0058(c, 47u, depth + 1u); else { c.pc = 0x00260460u; return; } if (c.pc != 0x00257064u) [[unlikely]] return; }
L_00257064:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025706Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 48u, depth + 1u); else { c.pc = 0x00260470u; return; } if (c.pc != 0x0025706Cu) [[unlikely]] return; }
L_0025706C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00257110; } }
L_00257074:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27640u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257088u); set32(c.r[5], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_0083(c, 35u, depth + 1u); else { c.pc = 0x0030C440u; return; } if (c.pc != 0x00257088u) [[unlikely]] return; }
L_00257088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257090u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00257090u) [[unlikely]] return; }
L_00257090:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[16].d[0] = ld16((c.r[1].w[0] - 25464u));
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002570AC; } }
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.budget -= 1;
L_002570AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002570B4u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x002570B4u) [[unlikely]] return; }
L_002570B4:
    c.r[5].d[0] = c.r[16].d[0] & 65535ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[5].w[0] << 1);
    c.r[1].d[0] = 0ull | 40076ull;
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] - 27588u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[6], 0u + 192u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002570ECu); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x002570ECu) [[unlikely]] return; }
L_002570EC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], 0u - 1u);
    st8((c.r[1].w[0] - 27332u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st8((c.r[1].w[0] + 9072u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st8((c.r[1].w[0] + 9073u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 9;
L_00257110:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00257120:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00257158; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257148u);  if (depth < kMaxDepth) unit_0058(c, 47u, depth + 1u); else { c.pc = 0x00260460u; return; } if (c.pc != 0x00257148u) [[unlikely]] return; }
L_00257148:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257150u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 48u, depth + 1u); else { c.pc = 0x00260470u; return; } if (c.pc != 0x00257150u) [[unlikely]] return; }
L_00257150:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00257208; } }
L_00257158:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.r[1].d[0] = c.r[4].sd[0] < 99ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00257170; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257170u);  if (depth < kMaxDepth) unit_0054(c, 299u, depth + 1u); else { c.pc = 0x00251F40u; return; } if (c.pc != 0x00257170u) [[unlikely]] return; }
L_00257170:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[1].w[0] - 27640u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025718Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0082(c, 394u, depth + 1u); else { c.pc = 0x0030BB30u; return; } if (c.pc != 0x0025718Cu) [[unlikely]] return; }
L_0025718C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257194u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00257194u) [[unlikely]] return; }
L_00257194:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[16].d[0] = ld16((c.r[1].w[0] - 25464u));
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002571B0; } }
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.budget -= 1;
L_002571B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002571B8u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x002571B8u) [[unlikely]] return; }
L_002571B8:
    c.r[5].d[0] = c.r[16].d[0] & 65535ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[5].w[0] << 1);
    c.r[1].d[0] = 0ull | 40076ull;
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] - 27588u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[6], 0u + 192u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002571F0u); set32(c.r[5], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x002571F0u) [[unlikely]] return; }
L_002571F0:
    set32(c.r[3], 0u - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st8((c.r[1].w[0] + 9072u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st8((c.r[1].w[0] + 9073u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 6;
L_00257208:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00257220:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00257258; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257248u);  if (depth < kMaxDepth) unit_0058(c, 47u, depth + 1u); else { c.pc = 0x00260460u; return; } if (c.pc != 0x00257248u) [[unlikely]] return; }
L_00257248:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257250u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 48u, depth + 1u); else { c.pc = 0x00260470u; return; } if (c.pc != 0x00257250u) [[unlikely]] return; }
L_00257250:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00257308; } }
L_00257258:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.r[1].d[0] = c.r[4].sd[0] < 99ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00257270; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257270u);  if (depth < kMaxDepth) unit_0054(c, 299u, depth + 1u); else { c.pc = 0x00251F40u; return; } if (c.pc != 0x00257270u) [[unlikely]] return; }
L_00257270:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[1].w[0] - 27640u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025728Cu); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0082(c, 394u, depth + 1u); else { c.pc = 0x0030BB30u; return; } if (c.pc != 0x0025728Cu) [[unlikely]] return; }
L_0025728C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257294u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00257294u) [[unlikely]] return; }
L_00257294:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[16].d[0] = ld16((c.r[1].w[0] - 25464u));
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002572B0; } }
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.budget -= 1;
L_002572B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002572B8u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x002572B8u) [[unlikely]] return; }
L_002572B8:
    c.r[5].d[0] = c.r[16].d[0] & 65535ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[5].w[0] << 1);
    c.r[1].d[0] = 0ull | 40076ull;
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] - 27588u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[6], 0u + 192u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002572F0u); set32(c.r[5], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x002572F0u) [[unlikely]] return; }
L_002572F0:
    set32(c.r[3], 0u - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st8((c.r[1].w[0] + 9072u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st8((c.r[1].w[0] + 9073u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 6;
L_00257308:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00257320:
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 3;
    { set32(c.r[5], ld32((c.r[5].w[0] + 12u)));  [[clang::musttail]] return unit_0083(c, 63u, depth); }
L_00257330:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00257360; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257350u);  if (depth < kMaxDepth) unit_0058(c, 47u, depth + 1u); else { c.pc = 0x00260460u; return; } if (c.pc != 0x00257350u) [[unlikely]] return; }
L_00257350:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257358u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 48u, depth + 1u); else { c.pc = 0x00260470u; return; } if (c.pc != 0x00257358u) [[unlikely]] return; }
L_00257358:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00257380; } }
L_00257360:
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025736Cu); set32(c.r[5], ld32((c.r[5].w[0] + 12u)));  if (depth < kMaxDepth) unit_0083(c, 232u, depth + 1u); else { c.pc = 0x0030E1F0u; return; } if (c.pc != 0x0025736Cu) [[unlikely]] return; }
L_0025736C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 902u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025737Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0025737Cu) [[unlikely]] return; }
L_0025737C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00257380:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00257390:
    set32(c.r[29], c.r[29].w[0] - 448u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[5], 0u + 503u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[6], 0u - 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002573D0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x002573D0u) [[unlikely]] return; }
L_002573D0:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00257854; } }
    set32(c.r[3], 0u + 118u);
    c.budget -= 1;
L_002573DC:
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st16((c.r[2].w[0] + 240u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[4].sd[0] < 99ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002573DCu | kUnwind; return; } goto L_002573DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257400u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00257400u) [[unlikely]] return; }
L_00257400:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] - 25584u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257414u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00257414u) [[unlikely]] return; }
L_00257414:
    c.r[20].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 353u)));
    set32(c.r[4], 0u + 3u);
    c.r[22].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 354u)));
    c.r[30].d[0] = ld8((c.r[2].w[0] + 356u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025742Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x0025742Cu) [[unlikely]] return; }
L_0025742C:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], 0u + 3u);
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257440u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x00257440u) [[unlikely]] return; }
L_00257440:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], 0u + 2u);
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257454u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x00257454u) [[unlikely]] return; }
L_00257454:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], 0u + 2u);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257468u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x00257468u) [[unlikely]] return; }
L_00257468:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[19].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    c.r[18].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], c.r[3].w[0] + 128u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 224u), c.r[3].w[0]);  if (t) { goto L_0025771C; } }
L_00257488:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0025772C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257498u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00257498u) [[unlikely]] return; }
L_00257498:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] - 25584u)));
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == c.r[3].d[0]; set32(c.r[3], c.r[18].w[0] + 1u);  if (t) { goto L_00257718; } }
    c.r[16].d[0] = c.r[18].d[0] & 65535ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002574BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 108u, depth + 1u); else { c.pc = 0x0012D050u; return; } if (c.pc != 0x002574BCu) [[unlikely]] return; }
L_002574BC:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00257714; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002574D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x002574D0u) [[unlikely]] return; }
L_002574D0:
    set32(c.r[4], ld32((c.r[23].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00257580; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 355u)));
    set32(c.r[3], c.r[3].w[0] - 3u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00257714; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 208u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[3].d[0];  if (t) { goto L_00257714; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[3].d[0];  if (t) { goto L_00257714; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[3].d[0];  if (t) { goto L_00257714; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[3].d[0];  if (t) { goto L_00257714; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 356u));
    set32(c.r[4], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257530u); set32(c.r[17], c.r[30].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_008E(c, 204u, depth + 1u); else { c.pc = 0x00339E80u; return; } if (c.pc != 0x00257530u) [[unlikely]] return; }
L_00257530:
    c.r[3].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00257714; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 356u));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025754Cu); set32(c.r[17], c.r[30].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_008E(c, 204u, depth + 1u); else { c.pc = 0x00339E80u; return; } if (c.pc != 0x0025754Cu) [[unlikely]] return; }
L_0025754C:
    c.r[3].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00257714; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 353u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[20].d[0];  if (t) { goto L_00257714; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 354u)));
    c.budget -= 3;
    { const bool t = c.r[22].d[0] != c.r[3].d[0]; set32(c.r[3], c.r[19].w[0] << 1);  if (t) { goto L_00257714; } }
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 240u), static_cast<std::uint16_t>(c.r[18].w[0]));  if (t) { goto L_00257714; } }
L_00257580:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_002575C4; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 355u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00257714; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 353u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[20].d[0];  if (t) { goto L_00257714; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 354u)));
    c.budget -= 3;
    { const bool t = c.r[22].d[0] != c.r[3].d[0]; set32(c.r[3], c.r[19].w[0] << 1);  if (t) { goto L_00257714; } }
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 240u), static_cast<std::uint16_t>(c.r[18].w[0]));  if (t) { goto L_00257714; } }
L_002575C4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002575F8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 355u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00257714; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 353u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[20].d[0]; set32(c.r[3], c.r[19].w[0] << 1);  if (t) { goto L_00257714; } }
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 240u), static_cast<std::uint16_t>(c.r[18].w[0]));  if (t) { goto L_00257714; } }
L_002575F8:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 4u);  if (t) { goto L_00257690; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 355u)));
    set32(c.r[3], c.r[3].w[0] - 3u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00257714; } }
    set32(c.r[3], c.r[6].w[0] << 2);
    c.budget -= 1;
L_0025761C:
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[3], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 22u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00257644; } }
L_00257640:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_00257644:
    c.r[1].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = c.r[5].sd[0] < 5ll ? 1ull : 0ull;  if (t) { goto L_00257658; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00257640u | kUnwind; return; } goto L_00257640; } }
L_00257658:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[6].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025761Cu | kUnwind; return; } goto L_0025761C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 353u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[20].d[0];  if (t) { goto L_00257714; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 354u)));
    c.budget -= 3;
    { const bool t = c.r[22].d[0] != c.r[3].d[0]; set32(c.r[3], c.r[19].w[0] << 1);  if (t) { goto L_00257714; } }
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 240u), static_cast<std::uint16_t>(c.r[18].w[0]));  if (t) { goto L_00257714; } }
L_00257690:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00257714; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 355u)));
    set32(c.r[3], c.r[3].w[0] - 3u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00257714; } }
    set32(c.r[3], c.r[6].w[0] << 2);
    c.budget -= 1;
L_002576B0:
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[3], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 22u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002576D8; } }
L_002576D4:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_002576D8:
    c.r[1].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = c.r[5].sd[0] < 5ll ? 1ull : 0ull;  if (t) { goto L_002576EC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002576D4u | kUnwind; return; } goto L_002576D4; } }
L_002576EC:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[6].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002576B0u | kUnwind; return; } goto L_002576B0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 353u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[20].d[0]; set32(c.r[3], c.r[19].w[0] << 1);  if (t) { goto L_00257714; } }
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    st16((c.r[3].w[0] + 240u), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.budget -= 3;
L_00257714:
    set32(c.r[3], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00257718:
    c.r[18].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 1;
L_0025771C:
    c.r[17].d[0] = c.r[18].d[0] & 65535ull;
    c.r[3].d[0] = c.r[17].sd[0] < 118ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[19].sd[0] < 99ll ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00257488u | kUnwind; return; } goto L_00257488; } }
L_0025772C:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] <= 0; set32(c.r[8], 0u + 1u);  if (t) { goto L_00257854; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 118u);  if (t) { goto L_002577A8; } }
L_0025773C:
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[23].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[7].w[0] << 1);
    c.budget -= 3;
L_00257748:
    c.r[3].d[0] = ld16((c.r[6].w[0] + 4u));
    set32(c.r[5], c.r[5].w[0] + c.r[29].w[0]);
    c.r[5].d[0] = ld16((c.r[5].w[0] + 240u));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[9].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00257794; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[9].sd[0] < 98ll ? 1ull : 0ull;  if (t) { goto L_0025777C; } }
L_00257764:
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[5], c.r[3].w[0] + 240u);
    c.r[3].d[0] = ld16((c.r[5].w[0] + 2u));
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[9].sd[0] < 98ll ? 1ull : 0ull;
    c.budget -= 6;
L_0025777C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[9].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00257764u | kUnwind; return; } goto L_00257764; } }
    set32(c.r[3], c.r[9].w[0] << 1);
    set32(c.r[19], c.r[19].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    st16((c.r[3].w[0] + 240u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 4;
L_00257794:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].sd[0] < 99ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[7].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00257748u | kUnwind; return; } goto L_00257748; } }
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_002577A8:
    c.r[3].d[0] = c.r[8].d[0] < c.r[21].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[8].w[0] << 3);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025773Cu | kUnwind; return; } goto L_0025773C; } }
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] > 0; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002577C8; } }
    c.r[1].d[0] = c.r[21].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00257854; } }
L_002577C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002577D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 257u, depth + 1u); else { c.pc = 0x003ADE20u; return; } if (c.pc != 0x002577D0u) [[unlikely]] return; }
L_002577D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002577DCu); set32(c.r[4], ld32((c.r[1].w[0] - 27648u)));  if (depth < kMaxDepth) unit_0054(c, 602u, depth + 1u); else { c.pc = 0x00253DB0u; return; } if (c.pc != 0x002577DCu) [[unlikely]] return; }
L_002577DC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[2], ld32((c.r[1].w[0] - 27616u)));
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 36u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 27648u)));
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257810u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0057(c, 387u, depth + 1u); else { c.pc = 0x0025EEC0u; return; } if (c.pc != 0x00257810u) [[unlikely]] return; }
L_00257810:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257818u);  if (depth < kMaxDepth) unit_002A(c, 64u, depth + 1u); else { c.pc = 0x001A8F40u; return; } if (c.pc != 0x00257818u) [[unlikely]] return; }
L_00257818:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257820u);  if (depth < kMaxDepth) unit_0051(c, 160u, depth + 1u); else { c.pc = 0x002454D0u; return; } if (c.pc != 0x00257820u) [[unlikely]] return; }
L_00257820:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257828u);  if (depth < kMaxDepth) unit_004F(c, 117u, depth + 1u); else { c.pc = 0x0023DCD0u; return; } if (c.pc != 0x00257828u) [[unlikely]] return; }
L_00257828:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257830u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00257830u) [[unlikely]] return; }
L_00257830:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_00257854; } }
    set32(c.r[6], c.r[29].w[0] + 240u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257854u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0085(c, 278u, depth + 1u); else { c.pc = 0x003167A0u; return; } if (c.pc != 0x00257854u) [[unlikely]] return; }
L_00257854:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 448u);  c.pc = t; return; }
L_00257890:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[7], c.r[29].w[0] + 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], 0u + 503u);
    set32(c.r[6], c.r[6].w[0] - 22384u);
    ld128((c.r[6].w[0]) & ~15u, c.r[3]);
    c.f[0] = ld32((c.r[6].w[0] + 24u));
    c.r[2].d[0] = ld64((c.r[6].w[0] + 16u));
    st128((c.r[7].w[0]) & ~15u, c.r[3]);
    set32(c.r[6], 0u - 1u);
    st64((c.r[7].w[0] + 16u), c.r[2].d[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002578DCu); st32((c.r[7].w[0] + 24u), c.f[0]);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x002578DCu) [[unlikely]] return; }
L_002578DC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002579BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = c.r[16].d[0] < c.r[17].d[0] ? 1ull : 0ull;  if (t) { goto L_00257914; } }
L_002578EC:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 96u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025790Cu); set32(c.r[4], ld32((c.r[3].w[0])));  if (depth < kMaxDepth) unit_0054(c, 299u, depth + 1u); else { c.pc = 0x00251F40u; return; } if (c.pc != 0x0025790Cu) [[unlikely]] return; }
L_0025790C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[16].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_00257914:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { goto L_0025792C; } }
    c.r[2].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 3);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002578ECu | kUnwind; return; } goto L_002578EC; } }
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 1;
L_0025792C:
    set32(c.r[4], 0u + 118u);
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[3].w[0] + 96u), c.r[4].w[0]);
    set32(c.r[2], 0u + 55u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025794Cu); st32((c.r[3].w[0] + 64u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AB(c, 257u, depth + 1u); else { c.pc = 0x003ADE20u; return; } if (c.pc != 0x0025794Cu) [[unlikely]] return; }
L_0025794C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257958u); set32(c.r[4], ld32((c.r[1].w[0] - 27648u)));  if (depth < kMaxDepth) unit_0054(c, 602u, depth + 1u); else { c.pc = 0x00253DB0u; return; } if (c.pc != 0x00257958u) [[unlikely]] return; }
L_00257958:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[2], ld32((c.r[1].w[0] - 27616u)));
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 36u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 27648u)));
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025798Cu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0057(c, 387u, depth + 1u); else { c.pc = 0x0025EEC0u; return; } if (c.pc != 0x0025798Cu) [[unlikely]] return; }
L_0025798C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257994u);  if (depth < kMaxDepth) unit_002A(c, 64u, depth + 1u); else { c.pc = 0x001A8F40u; return; } if (c.pc != 0x00257994u) [[unlikely]] return; }
L_00257994:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025799Cu);  if (depth < kMaxDepth) unit_004F(c, 117u, depth + 1u); else { c.pc = 0x0023DCD0u; return; } if (c.pc != 0x0025799Cu) [[unlikely]] return; }
L_0025799C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002579A4u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002579A4u) [[unlikely]] return; }
L_002579A4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_002579BC; } }
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002579BCu); set32(c.r[7], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0098(c, 274u, depth + 1u); else { c.pc = 0x00362EF0u; return; } if (c.pc != 0x002579BCu) [[unlikely]] return; }
L_002579BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002579E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002579F8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x002579F8u) [[unlikely]] return; }
L_002579F8:
    c.r[1].d[0] = 0ull | 35856ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
L_00257A08:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[6].w[0] << 1);
    set32(c.r[3], ld32((c.r[1].w[0] - 27648u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 8ll ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st16((c.r[3].w[0] + 212u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00257A08u | kUnwind; return; } goto L_00257A08; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257A38u); set32(c.r[4], c.r[4].w[0] + 8640u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x00257A38u) [[unlikely]] return; }
L_00257A38:
    c.r[9].d[0] = 0ull + 0ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], 0u + 255u);
    set32(c.r[7], c.r[7].w[0] + 8384u);
    set32(c.r[6], 0u + 25500u);
    c.budget -= 6;
L_00257A50:
    set32(c.r[2], c.r[9].w[0] << 5);
    c.r[5].d[0] = 0ull < c.r[9].d[0] ? 1ull : 0ull;
    set32(c.r[8], c.r[7].w[0] + c.r[2].w[0]);
    st16((c.r[8].w[0] + 266u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[2].d[0] = c.r[9].d[0] & 1ull;
    st8((c.r[8].w[0] + 264u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 8;
    { const bool t = c.r[9].sd[0] >= 0; st8((c.r[8].w[0] + 256u), static_cast<std::uint8_t>(c.r[9].w[0]));  if (t) { goto L_00257A7C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00257A7C; } }
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.budget -= 1;
L_00257A7C:
    st8((c.r[8].w[0] + 265u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[9], c.r[9].w[0] + 1u);
    st8((c.r[8].w[0] + 268u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[2].d[0] = c.r[9].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[8].w[0] + 274u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00257A50u | kUnwind; return; } goto L_00257A50; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[5], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257AA4u); set32(c.r[4], c.r[4].w[0] + 8384u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x00257AA4u) [[unlikely]] return; }
L_00257AA4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[5], 0u + 88u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257AB4u); set32(c.r[4], c.r[4].w[0] + 8896u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x00257AB4u) [[unlikely]] return; }
L_00257AB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] - 22352u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    st64((c.r[4].w[0] + 16u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[1].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_00257C10; } }
    set32(c.r[5], 0u + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257AECu); set32(c.r[4], c.r[4].w[0] - 27600u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x00257AECu) [[unlikely]] return; }
L_00257AEC:
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st16((c.r[1].w[0] - 27600u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st8((c.r[1].w[0] - 27332u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st16((c.r[1].w[0] - 27598u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4108u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st16((c.r[1].w[0] - 27596u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], 0u + 255u);
    set32(c.r[6], c.r[6].w[0] - 27600u);
    set32(c.r[4], 0u + 118u);
    set32(c.r[3], 0u + 5u);
    c.budget -= 17;
L_00257B30:
    set32(c.r[2], c.r[7].w[0] << 5);
    set32(c.r[8], c.r[6].w[0] + c.r[2].w[0]);
    st8((c.r[8].w[0] + 34u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[8].w[0] + 12u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[8].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[8].w[0] + 28u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[7].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[8].w[0] + 29u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00257B30u | kUnwind; return; } goto L_00257B30; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 27332u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00257BD4; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00257BD4; } }
    c.r[1].d[0] = c.r[3].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00257BD4; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], c.r[4].w[0] - 27600u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
L_00257B94:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], c.r[6].w[0] << (c.r[7].w[0] & 31u));
    c.r[2].d[0] = ld8((c.r[1].w[0] - 27332u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 44u)));
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[7].w[0] << 5);  if (t) { goto L_00257BC4; } }
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st8((c.r[2].w[0] + 29u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 3;
L_00257BC4:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[7].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00257B94u | kUnwind; return; } goto L_00257B94; } }
L_00257BD4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], 0u + 13u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 27332u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 255u);  if (t) { goto L_00257BF0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st16((c.r[1].w[0] - 27594u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_00257BF0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st8((c.r[1].w[0] + 8901u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st8((c.r[1].w[0] - 27331u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 27144u), c.r[3].w[0]);  if (t) { goto L_00257C9C; } }
L_00257C10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257C18u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00257C18u) [[unlikely]] return; }
L_00257C18:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[3].d[0] = ld16((c.r[1].w[0] - 25464u));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257C3Cu); set32(c.r[17], c.r[2].w[0] << 4);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00257C3Cu) [[unlikely]] return; }
L_00257C3C:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 25456u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257C58u); st8((c.r[1].w[0] + 8901u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00257C58u) [[unlikely]] return; }
L_00257C58:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[3].d[0] = ld16((c.r[1].w[0] - 25464u));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257C7Cu); set32(c.r[17], c.r[2].w[0] << 4);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00257C7Cu) [[unlikely]] return; }
L_00257C7C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[1].d[0] = 0ull | 40076ull;
    set32(c.r[4], c.r[4].w[0] - 27600u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257C94u); set32(c.r[5], c.r[2].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0083(c, 66u, depth + 1u); else { c.pc = 0x0030C910u; return; } if (c.pc != 0x00257C94u) [[unlikely]] return; }
L_00257C94:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st16((c.r[1].w[0] - 27600u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_00257C9C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], 0u + 13u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 27332u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_00257CC0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 8896u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257CC0u); set32(c.r[5], c.r[5].w[0] - 27588u);  if (depth < kMaxDepth) unit_0084(c, 49u, depth + 1u); else { c.pc = 0x00310560u; return; } if (c.pc != 0x00257CC0u) [[unlikely]] return; }
L_00257CC0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 4104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] - 7936u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257CE4u); st8((c.r[1].w[0] + 8896u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x00257CE4u) [[unlikely]] return; }
L_00257CE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257CECu); c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 512u)));  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x00257CECu) [[unlikely]] return; }
L_00257CEC:
    st8((c.r[2].w[0] + 513u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00257D10:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[21], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[20], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257D44u); c.r[22].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00257D44u) [[unlikely]] return; }
L_00257D44:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[22].w[0] + 12u)));
    set32(c.r[19], ld32((c.r[1].w[0] - 25584u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00257D60; } }
    c.r[20].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00257D60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257D68u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 299u, depth + 1u); else { c.pc = 0x00251F40u; return; } if (c.pc != 0x00257D68u) [[unlikely]] return; }
L_00257D68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].d[0] = c.r[20].d[0] ^ c.r[19].d[0];
    set32(c.r[16], c.r[21].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] - 27576u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    st32((c.r[2].w[0]), c.r[20].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] - 27580u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 12;
    { const bool t = c.r[20].d[0] == c.r[19].d[0]; st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00257DAC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 27144u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 27144u), c.r[2].w[0]);
    c.budget -= 5;
L_00257DAC:
    set32(c.r[3], ld32((c.r[22].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] - 27579u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257DC8u); set32(c.r[4], ld32((c.r[22].w[0] + 28u)));  if (depth < kMaxDepth) unit_008E(c, 345u, depth + 1u); else { c.pc = 0x0033B480u; return; } if (c.pc != 0x00257DC8u) [[unlikely]] return; }
L_00257DC8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] - 27566u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] - 27600u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00257E04; } }
L_00257DE8:
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 12u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00257E00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00257E10; } }
L_00257E00:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_00257E04:
    c.r[3].d[0] = c.r[5].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] << 5);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00257DE8u | kUnwind; return; } goto L_00257DE8; } }
L_00257E10:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == c.r[19].d[0]; c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_00257E28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257E20u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 219u, depth + 1u); else { c.pc = 0x0030A3D0u; return; } if (c.pc != 0x00257E20u) [[unlikely]] return; }
L_00257E20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00257E48; } }
L_00257E28:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], c.r[5].w[0] - 27588u);
    set32(c.r[3], c.r[17].w[0] << 5);
    st16((c.r[1].w[0] - 27598u), static_cast<std::uint16_t>(c.r[21].w[0]));
    set32(c.r[4], c.r[5].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[21].w[0]));
    c.budget -= 8;
L_00257E48:
    set32(c.r[3], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_00257E60; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st8((c.r[1].w[0] - 27331u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00257E60:
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
L_00257E90:
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[1].w[0] + 8896u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00257EA0:
    set32(c.r[29], c.r[29].w[0] - 336u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257ED8u); st32((c.r[29].w[0] + 300u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00257ED8u) [[unlikely]] return; }
L_00257ED8:
    c.r[1].d[0] = 0ull | 40072ull;
    set32(c.r[22], c.r[2].w[0] + c.r[1].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8896u)));
    st32((c.r[29].w[0] + 272u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257EF4u); set32(c.r[16], ld32((c.r[21].w[0])));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00257EF4u) [[unlikely]] return; }
L_00257EF4:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0])));
    c.r[1].d[0] = 0ull | 35856ull;
    set32(c.r[23], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257F08u); set32(c.r[4], 0u + 255u);  if (depth < kMaxDepth) unit_0082(c, 193u, depth + 1u); else { c.pc = 0x00309ED0u; return; } if (c.pc != 0x00257F08u) [[unlikely]] return; }
L_00257F08:
    c.r[3].d[0] = ld16((c.r[22].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 27600u);
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 132u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00257F54; } }
L_00257F28:
    set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00257F50; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[23].w[0] + 4096u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00257F50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 132u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00257F60; } }
L_00257F50:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_00257F54:
    c.r[2].d[0] = c.r[5].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[5].w[0] << 5);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00257F28u | kUnwind; return; } goto L_00257F28; } }
L_00257F60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257F68u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00257F68u) [[unlikely]] return; }
L_00257F68:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[4], c.r[16].w[0] + 100u);
    c.r[1].d[0] = c.r[1].d[0] | 21770ull;
    set32(c.r[6], 0u + 32u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257F80u); set32(c.r[5], c.r[2].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x00257F80u) [[unlikely]] return; }
L_00257F80:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257F8Cu); c.r[16].d[0] = ld8((c.r[1].w[0] - 27332u));  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00257F8Cu) [[unlikely]] return; }
L_00257F8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257F94u); st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x00257F94u) [[unlikely]] return; }
L_00257F94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257F9Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x00257F9Cu) [[unlikely]] return; }
L_00257F9C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = ld8((c.r[1].w[0] + 8901u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].d[0] = ld8((c.r[1].w[0] - 27332u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257FB8u); set32(c.r[5], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_008E(c, 424u, depth + 1u); else { c.pc = 0x0033BE20u; return; } if (c.pc != 0x00257FB8u) [[unlikely]] return; }
L_00257FB8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257FC4u); c.r[4].d[0] = ld8((c.r[1].w[0] - 27332u));  if (depth < kMaxDepth) unit_008D(c, 238u, depth + 1u); else { c.pc = 0x00336B70u; return; } if (c.pc != 0x00257FC4u) [[unlikely]] return; }
L_00257FC4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 22u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] - 27332u));
    c.r[30].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[4].d[0] ^ 84ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257FE4u); st8((c.r[29].w[0] + 256u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006E(c, 95u, depth + 1u); else { c.pc = 0x002B86C0u; return; } if (c.pc != 0x00257FE4u) [[unlikely]] return; }
L_00257FE4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    c.r[4].d[0] = ld8((c.r[1].w[0] - 27332u));
    set32(c.r[2], 0u - 1u);
    st32((c.r[29].w[0] + 224u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258000u); st8((c.r[29].w[0] + 240u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_008E(c, 422u, depth + 1u); else { c.pc = 0x0033BDF0u; return; } if (c.pc != 0x00258000u) [[unlikely]] return; }
    [[clang::musttail]] return unit_0056(c, 1u, depth);
}

}
