#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00AF[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 0,
    0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0,
    0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0,
    0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 21, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 0,
    0, 36, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 41, 42, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 45,
    0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 49, 0, 0, 50, 0, 51, 0, 0, 0, 0, 0, 0, 0, 52, 0,
    53, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 58, 0, 59, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 62,
    0, 63, 0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 69, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0,
    76, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 0, 85,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0,
    98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0,
    0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 112, 0, 113, 0, 0, 0, 114, 0, 0, 0,
    115, 0, 116, 0, 117, 0, 118, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0,
    0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0,
    0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 134, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0,
    137, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 145, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 149, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0,
    0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0,
    0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0,
    162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 165, 0, 0, 0, 166, 0, 167, 0, 0, 0, 0, 168, 0, 0,
    0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 171, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0,
    0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 178, 0, 0,
    0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 183, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 0, 188, 0,
    0, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0,
    0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0,
    0, 208, 0, 0, 209, 0, 0, 0, 0, 0, 0, 210, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 212, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 217, 0, 218, 0, 0,
    0, 0, 219, 0, 220, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0,
    0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0,
    0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0,
    232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0, 236, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 239, 0, 0, 0, 240, 0, 0, 241, 0, 242, 0, 243, 0, 0, 0,
    0, 0, 244, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    247, 0, 248, 0, 0, 249, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 252, 0, 0, 253, 0, 0, 254, 0, 0, 255, 0,
    256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 261, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0,
    0, 0, 264, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 270, 0, 0, 271, 0, 0, 272,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 274, 0, 0, 275, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 279, 0,
    0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0,
    0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 284, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 286, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 289, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    291, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0,
    0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0,
    306, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 310, 0, 311, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 318, 0,
    0, 0, 319, 0, 0, 0, 320, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0,
    0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0,
    0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 336, 0, 0, 337, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    339, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 343, 0,
    0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 347, 0, 348, 0, 349, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0,
    353, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 357, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0,
    361, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 365, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 369, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 375, 0, 0, 0,
    0, 0, 376, 0, 377, 0, 378, 0, 379, 0, 0, 0, 0, 0, 380, 0, 381, 0, 382, 0, 383, 0, 384, 0, 385, 0, 386, 0, 0, 0, 0, 0,
    387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 389, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 392, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 394, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0,
    397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0,
    0, 0, 403, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    407, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    411, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 414, 0, 415, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 420,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    425, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0,
    428, 0, 0, 429, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 433, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 437, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 441, 0, 0, 442, 0, 0, 443, 0, 0, 444, 0, 0, 0, 445, 0, 0, 0, 446, 0, 0, 447, 0, 0, 448, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 451, 0, 0, 452, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 456, 0, 0, 457,
    0, 0, 0, 458, 0, 0, 459, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 463, 0,
    464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 467, 0, 0, 0, 468, 0, 0, 0, 469, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 472, 0, 0, 0,
    473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0,
    0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 479, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0,
    0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0,
    0, 0, 485, 0, 0, 0, 0, 486, 0, 0, 0, 487, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00AF(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003BC000;
    case 2u: goto L_003BC024;
    case 3u: goto L_003BC02C;
    case 4u: goto L_003BC058;
    case 5u: goto L_003BC06C;
    case 6u: goto L_003BC088;
    case 7u: goto L_003BC0A8;
    case 8u: goto L_003BC0BC;
    case 9u: goto L_003BC0D0;
    case 10u: goto L_003BC0F8;
    case 11u: goto L_003BC118;
    case 12u: goto L_003BC140;
    case 13u: goto L_003BC180;
    case 14u: goto L_003BC1A8;
    case 15u: goto L_003BC1BC;
    case 16u: goto L_003BC1E0;
    case 17u: goto L_003BC1F0;
    case 18u: goto L_003BC210;
    case 19u: goto L_003BC22C;
    case 20u: goto L_003BC240;
    case 21u: goto L_003BC248;
    case 22u: goto L_003BC250;
    case 23u: goto L_003BC28C;
    case 24u: goto L_003BC30C;
    case 25u: goto L_003BC324;
    case 26u: goto L_003BC360;
    case 27u: goto L_003BC3D0;
    case 28u: goto L_003BC428;
    case 29u: goto L_003BC440;
    case 30u: goto L_003BC4B0;
    case 31u: goto L_003BC508;
    case 32u: goto L_003BC520;
    case 33u: goto L_003BC548;
    case 34u: goto L_003BC558;
    case 35u: goto L_003BC568;
    case 36u: goto L_003BC584;
    case 37u: goto L_003BC58C;
    case 38u: goto L_003BC5C0;
    case 39u: goto L_003BC5F4;
    case 40u: goto L_003BC630;
    case 41u: goto L_003BC644;
    case 42u: goto L_003BC648;
    case 43u: goto L_003BC650;
    case 44u: goto L_003BC668;
    case 45u: goto L_003BC67C;
    case 46u: goto L_003BC684;
    case 47u: goto L_003BC6A8;
    case 48u: goto L_003BC6BC;
    case 49u: goto L_003BC6C4;
    case 50u: goto L_003BC6D0;
    case 51u: goto L_003BC6D8;
    case 52u: goto L_003BC6F8;
    case 53u: goto L_003BC700;
    case 54u: goto L_003BC708;
    case 55u: goto L_003BC750;
    case 56u: goto L_003BC768;
    case 57u: goto L_003BC7A0;
    case 58u: goto L_003BC7B4;
    case 59u: goto L_003BC7BC;
    case 60u: goto L_003BC7CC;
    case 61u: goto L_003BC7E0;
    case 62u: goto L_003BC7FC;
    case 63u: goto L_003BC804;
    case 64u: goto L_003BC80C;
    case 65u: goto L_003BC828;
    case 66u: goto L_003BC83C;
    case 67u: goto L_003BC890;
    case 68u: goto L_003BC8AC;
    case 69u: goto L_003BC8B0;
    case 70u: goto L_003BC8B8;
    case 71u: goto L_003BC8E0;
    case 72u: goto L_003BC8F0;
    case 73u: goto L_003BC930;
    case 74u: goto L_003BC948;
    case 75u: goto L_003BC978;
    case 76u: goto L_003BC980;
    case 77u: goto L_003BC9A0;
    case 78u: goto L_003BC9C0;
    case 79u: goto L_003BC9D8;
    case 80u: goto L_003BC9F0;
    case 81u: goto L_003BCA58;
    case 82u: goto L_003BCABC;
    case 83u: goto L_003BCAD4;
    case 84u: goto L_003BCAE8;
    case 85u: goto L_003BCAFC;
    case 86u: goto L_003BCB4C;
    case 87u: goto L_003BCB64;
    case 88u: goto L_003BCBA0;
    case 89u: goto L_003BCC08;
    case 90u: goto L_003BCC18;
    case 91u: goto L_003BCC4C;
    case 92u: goto L_003BCC60;
    case 93u: goto L_003BCCC0;
    case 94u: goto L_003BCD24;
    case 95u: goto L_003BCD34;
    case 96u: goto L_003BCD4C;
    case 97u: goto L_003BCD68;
    case 98u: goto L_003BCD80;
    case 99u: goto L_003BCDA8;
    case 100u: goto L_003BCDB0;
    case 101u: goto L_003BCDC4;
    case 102u: goto L_003BCE2C;
    case 103u: goto L_003BCE40;
    case 104u: goto L_003BCE78;
    case 105u: goto L_003BCE90;
    case 106u: goto L_003BCEB4;
    case 107u: goto L_003BCEC8;
    case 108u: goto L_003BCEDC;
    case 109u: goto L_003BCF10;
    case 110u: goto L_003BCF24;
    case 111u: goto L_003BCF40;
    case 112u: goto L_003BCF58;
    case 113u: goto L_003BCF60;
    case 114u: goto L_003BCF70;
    case 115u: goto L_003BCF80;
    case 116u: goto L_003BCF88;
    case 117u: goto L_003BCF90;
    case 118u: goto L_003BCF98;
    case 119u: goto L_003BCFA0;
    case 120u: goto L_003BCFB8;
    case 121u: goto L_003BCFD0;
    case 122u: goto L_003BCFE0;
    case 123u: goto L_003BCFF4;
    case 124u: goto L_003BD038;
    case 125u: goto L_003BD04C;
    case 126u: goto L_003BD068;
    case 127u: goto L_003BD08C;
    case 128u: goto L_003BD0A0;
    case 129u: goto L_003BD0B8;
    case 130u: goto L_003BD0C4;
    case 131u: goto L_003BD0E8;
    case 132u: goto L_003BD0F8;
    case 133u: goto L_003BD118;
    case 134u: goto L_003BD128;
    case 135u: goto L_003BD130;
    case 136u: goto L_003BD178;
    case 137u: goto L_003BD180;
    case 138u: goto L_003BD190;
    case 139u: goto L_003BD1B8;
    case 140u: goto L_003BD1D0;
    case 141u: goto L_003BD1FC;
    case 142u: goto L_003BD248;
    case 143u: goto L_003BD258;
    case 144u: goto L_003BD26C;
    case 145u: goto L_003BD274;
    case 146u: goto L_003BD29C;
    case 147u: goto L_003BD2C0;
    case 148u: goto L_003BD2D8;
    case 149u: goto L_003BD304;
    case 150u: goto L_003BD320;
    case 151u: goto L_003BD338;
    case 152u: goto L_003BD378;
    case 153u: goto L_003BD388;
    case 154u: goto L_003BD3A0;
    case 155u: goto L_003BD3C8;
    case 156u: goto L_003BD3F0;
    case 157u: goto L_003BD408;
    case 158u: goto L_003BD420;
    case 159u: goto L_003BD438;
    case 160u: goto L_003BD450;
    case 161u: goto L_003BD468;
    case 162u: goto L_003BD480;
    case 163u: goto L_003BD4A8;
    case 164u: goto L_003BD4C0;
    case 165u: goto L_003BD4C8;
    case 166u: goto L_003BD4D8;
    case 167u: goto L_003BD4E0;
    case 168u: goto L_003BD4F4;
    case 169u: goto L_003BD508;
    case 170u: goto L_003BD548;
    case 171u: goto L_003BD550;
    case 172u: goto L_003BD558;
    case 173u: goto L_003BD570;
    case 174u: goto L_003BD594;
    case 175u: goto L_003BD5B0;
    case 176u: goto L_003BD5C0;
    case 177u: goto L_003BD5D8;
    case 178u: goto L_003BD5F4;
    case 179u: goto L_003BD610;
    case 180u: goto L_003BD628;
    case 181u: goto L_003BD640;
    case 182u: goto L_003BD658;
    case 183u: goto L_003BD678;
    case 184u: goto L_003BD6A8;
    case 185u: goto L_003BD6B8;
    case 186u: goto L_003BD6D0;
    case 187u: goto L_003BD6E8;
    case 188u: goto L_003BD6F8;
    case 189u: goto L_003BD708;
    case 190u: goto L_003BD724;
    case 191u: goto L_003BD740;
    case 192u: goto L_003BD778;
    case 193u: goto L_003BD7C8;
    case 194u: goto L_003BD7D0;
    case 195u: goto L_003BD840;
    case 196u: goto L_003BD8BC;
    case 197u: goto L_003BD8D0;
    case 198u: goto L_003BD8E8;
    case 199u: goto L_003BD910;
    case 200u: goto L_003BD93C;
    case 201u: goto L_003BD950;
    case 202u: goto L_003BD960;
    case 203u: goto L_003BD970;
    case 204u: goto L_003BD984;
    case 205u: goto L_003BD9E8;
    case 206u: goto L_003BDA44;
    case 207u: goto L_003BDA68;
    case 208u: goto L_003BDA84;
    case 209u: goto L_003BDA90;
    case 210u: goto L_003BDAAC;
    case 211u: goto L_003BDAB8;
    case 212u: goto L_003BDB08;
    case 213u: goto L_003BDB10;
    case 214u: goto L_003BDB28;
    case 215u: goto L_003BDB3C;
    case 216u: goto L_003BDB50;
    case 217u: goto L_003BDB6C;
    case 218u: goto L_003BDB74;
    case 219u: goto L_003BDB88;
    case 220u: goto L_003BDB90;
    case 221u: goto L_003BDBB0;
    case 222u: goto L_003BDBC8;
    case 223u: goto L_003BDBE8;
    case 224u: goto L_003BDC08;
    case 225u: goto L_003BDC28;
    case 226u: goto L_003BDC54;
    case 227u: goto L_003BDC64;
    case 228u: goto L_003BDC88;
    case 229u: goto L_003BDCB0;
    case 230u: goto L_003BDCC4;
    case 231u: goto L_003BDCE8;
    case 232u: goto L_003BDD00;
    case 233u: goto L_003BDD38;
    case 234u: goto L_003BDD4C;
    case 235u: goto L_003BDD68;
    case 236u: goto L_003BDD74;
    case 237u: goto L_003BDDF0;
    case 238u: goto L_003BDE38;
    case 239u: goto L_003BDE44;
    case 240u: goto L_003BDE54;
    case 241u: goto L_003BDE60;
    case 242u: goto L_003BDE68;
    case 243u: goto L_003BDE70;
    case 244u: goto L_003BDE88;
    case 245u: goto L_003BDE90;
    case 246u: goto L_003BDEB8;
    case 247u: goto L_003BDF00;
    case 248u: goto L_003BDF08;
    case 249u: goto L_003BDF14;
    case 250u: goto L_003BDF28;
    case 251u: goto L_003BDF40;
    case 252u: goto L_003BDF54;
    case 253u: goto L_003BDF60;
    case 254u: goto L_003BDF6C;
    case 255u: goto L_003BDF78;
    case 256u: goto L_003BDF80;
    case 257u: goto L_003BDFB0;
    case 258u: goto L_003BDFC4;
    case 259u: goto L_003BDFE0;
    case 260u: goto L_003BE034;
    case 261u: goto L_003BE040;
    case 262u: goto L_003BE054;
    case 263u: goto L_003BE06C;
    case 264u: goto L_003BE088;
    case 265u: goto L_003BE0A0;
    case 266u: goto L_003BE0B8;
    case 267u: goto L_003BE0D0;
    case 268u: goto L_003BE108;
    case 269u: goto L_003BE148;
    case 270u: goto L_003BE164;
    case 271u: goto L_003BE170;
    case 272u: goto L_003BE17C;
    case 273u: goto L_003BE1D0;
    case 274u: goto L_003BE214;
    case 275u: goto L_003BE220;
    case 276u: goto L_003BE22C;
    case 277u: goto L_003BE23C;
    case 278u: goto L_003BE26C;
    case 279u: goto L_003BE278;
    case 280u: goto L_003BE284;
    case 281u: goto L_003BE2F0;
    case 282u: goto L_003BE308;
    case 283u: goto L_003BE358;
    case 284u: goto L_003BE374;
    case 285u: goto L_003BE3E8;
    case 286u: goto L_003BE494;
    case 287u: goto L_003BE49C;
    case 288u: goto L_003BE534;
    case 289u: goto L_003BE540;
    case 290u: goto L_003BE54C;
    case 291u: goto L_003BE600;
    case 292u: goto L_003BE614;
    case 293u: goto L_003BE650;
    case 294u: goto L_003BE668;
    case 295u: goto L_003BE6A0;
    case 296u: goto L_003BE6B8;
    case 297u: goto L_003BE6F0;
    case 298u: goto L_003BE708;
    case 299u: goto L_003BE740;
    case 300u: goto L_003BE758;
    case 301u: goto L_003BE790;
    case 302u: goto L_003BE7A8;
    case 303u: goto L_003BE7E0;
    case 304u: goto L_003BE830;
    case 305u: goto L_003BE870;
    case 306u: goto L_003BE880;
    case 307u: goto L_003BE898;
    case 308u: goto L_003BE8B4;
    case 309u: goto L_003BE8D8;
    case 310u: goto L_003BE910;
    case 311u: goto L_003BE918;
    case 312u: goto L_003BE930;
    case 313u: goto L_003BE948;
    case 314u: goto L_003BE960;
    case 315u: goto L_003BE9A8;
    case 316u: goto L_003BE9C8;
    case 317u: goto L_003BE9E0;
    case 318u: goto L_003BE9F8;
    case 319u: goto L_003BEA08;
    case 320u: goto L_003BEA18;
    case 321u: goto L_003BEA28;
    case 322u: goto L_003BEA38;
    case 323u: goto L_003BEA50;
    case 324u: goto L_003BEA60;
    case 325u: goto L_003BEA90;
    case 326u: goto L_003BEB20;
    case 327u: goto L_003BEB50;
    case 328u: goto L_003BEB68;
    case 329u: goto L_003BEB8C;
    case 330u: goto L_003BEBB0;
    case 331u: goto L_003BEBD0;
    case 332u: goto L_003BEBF8;
    case 333u: goto L_003BEC18;
    case 334u: goto L_003BEC48;
    case 335u: goto L_003BEC60;
    case 336u: goto L_003BEC88;
    case 337u: goto L_003BEC94;
    case 338u: goto L_003BECA0;
    case 339u: goto L_003BED00;
    case 340u: goto L_003BED20;
    case 341u: goto L_003BED44;
    case 342u: goto L_003BED70;
    case 343u: goto L_003BED78;
    case 344u: goto L_003BED90;
    case 345u: goto L_003BEDB0;
    case 346u: goto L_003BEDD4;
    case 347u: goto L_003BEE08;
    case 348u: goto L_003BEE10;
    case 349u: goto L_003BEE18;
    case 350u: goto L_003BEE30;
    case 351u: goto L_003BEE44;
    case 352u: goto L_003BEE60;
    case 353u: goto L_003BEE80;
    case 354u: goto L_003BEE98;
    case 355u: goto L_003BEEB0;
    case 356u: goto L_003BEEC8;
    case 357u: goto L_003BEF08;
    case 358u: goto L_003BEF20;
    case 359u: goto L_003BEF38;
    case 360u: goto L_003BEF68;
    case 361u: goto L_003BEF80;
    case 362u: goto L_003BEF98;
    case 363u: goto L_003BEFC8;
    case 364u: goto L_003BEFE0;
    case 365u: goto L_003BEFF8;
    case 366u: goto L_003BF024;
    case 367u: goto L_003BF044;
    case 368u: goto L_003BF068;
    case 369u: goto L_003BF078;
    case 370u: goto L_003BF0A4;
    case 371u: goto L_003BF10C;
    case 372u: goto L_003BF128;
    case 373u: goto L_003BF140;
    case 374u: goto L_003BF158;
    case 375u: goto L_003BF170;
    case 376u: goto L_003BF188;
    case 377u: goto L_003BF190;
    case 378u: goto L_003BF198;
    case 379u: goto L_003BF1A0;
    case 380u: goto L_003BF1B8;
    case 381u: goto L_003BF1C0;
    case 382u: goto L_003BF1C8;
    case 383u: goto L_003BF1D0;
    case 384u: goto L_003BF1D8;
    case 385u: goto L_003BF1E0;
    case 386u: goto L_003BF1E8;
    case 387u: goto L_003BF200;
    case 388u: goto L_003BF238;
    case 389u: goto L_003BF240;
    case 390u: goto L_003BF258;
    case 391u: goto L_003BF2E8;
    case 392u: goto L_003BF2F0;
    case 393u: goto L_003BF328;
    case 394u: goto L_003BF330;
    case 395u: goto L_003BF348;
    case 396u: goto L_003BF360;
    case 397u: goto L_003BF380;
    case 398u: goto L_003BF3EC;
    case 399u: goto L_003BF418;
    case 400u: goto L_003BF458;
    case 401u: goto L_003BF4C4;
    case 402u: goto L_003BF4F0;
    case 403u: goto L_003BF508;
    case 404u: goto L_003BF520;
    case 405u: goto L_003BF538;
    case 406u: goto L_003BF554;
    case 407u: goto L_003BF580;
    case 408u: goto L_003BF594;
    case 409u: goto L_003BF5AC;
    case 410u: goto L_003BF5C4;
    case 411u: goto L_003BF600;
    case 412u: goto L_003BF618;
    case 413u: goto L_003BF648;
    case 414u: goto L_003BF660;
    case 415u: goto L_003BF668;
    case 416u: goto L_003BF698;
    case 417u: goto L_003BF6A8;
    case 418u: goto L_003BF6C4;
    case 419u: goto L_003BF6EC;
    case 420u: goto L_003BF6FC;
    case 421u: goto L_003BF748;
    case 422u: goto L_003BF760;
    case 423u: goto L_003BF7A8;
    case 424u: goto L_003BF7B4;
    case 425u: goto L_003BF800;
    case 426u: goto L_003BF818;
    case 427u: goto L_003BF878;
    case 428u: goto L_003BF880;
    case 429u: goto L_003BF88C;
    case 430u: goto L_003BF8A0;
    case 431u: goto L_003BF8C8;
    case 432u: goto L_003BF8DC;
    case 433u: goto L_003BF8F8;
    case 434u: goto L_003BF960;
    case 435u: goto L_003BF9A4;
    case 436u: goto L_003BF9E0;
    case 437u: goto L_003BF9F4;
    case 438u: goto L_003BFA20;
    case 439u: goto L_003BFA34;
    case 440u: goto L_003BFA68;
    case 441u: goto L_003BFA94;
    case 442u: goto L_003BFAA0;
    case 443u: goto L_003BFAAC;
    case 444u: goto L_003BFAB8;
    case 445u: goto L_003BFAC8;
    case 446u: goto L_003BFAD8;
    case 447u: goto L_003BFAE4;
    case 448u: goto L_003BFAF0;
    case 449u: goto L_003BFB20;
    case 450u: goto L_003BFB54;
    case 451u: goto L_003BFB60;
    case 452u: goto L_003BFB6C;
    case 453u: goto L_003BFB9C;
    case 454u: goto L_003BFBB8;
    case 455u: goto L_003BFBD8;
    case 456u: goto L_003BFBF0;
    case 457u: goto L_003BFBFC;
    case 458u: goto L_003BFC0C;
    case 459u: goto L_003BFC18;
    case 460u: goto L_003BFC24;
    case 461u: goto L_003BFC44;
    case 462u: goto L_003BFC60;
    case 463u: goto L_003BFC78;
    case 464u: goto L_003BFC80;
    case 465u: goto L_003BFCB0;
    case 466u: goto L_003BFCE0;
    case 467u: goto L_003BFD08;
    case 468u: goto L_003BFD18;
    case 469u: goto L_003BFD28;
    case 470u: goto L_003BFD40;
    case 471u: goto L_003BFD68;
    case 472u: goto L_003BFD70;
    case 473u: goto L_003BFD80;
    case 474u: goto L_003BFDC0;
    case 475u: goto L_003BFDEC;
    case 476u: goto L_003BFE0C;
    case 477u: goto L_003BFE38;
    case 478u: goto L_003BFE5C;
    case 479u: goto L_003BFE74;
    case 480u: goto L_003BFE9C;
    case 481u: goto L_003BFECC;
    case 482u: goto L_003BFEEC;
    case 483u: goto L_003BFF08;
    case 484u: goto L_003BFF64;
    case 485u: goto L_003BFF88;
    case 486u: goto L_003BFF9C;
    case 487u: goto L_003BFFAC;
    case 488u: goto L_003BFFC4;
    case 489u: goto L_003BFFDC;
    default: bad_entry(c, 0x003BC000u); return;
    }
L_003BC000:
    c.r[2].d[0] = ld16((c.r[3].w[0] + 576u));
    set32(c.r[19], c.r[19].w[0] - 1u);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] + 2u);
    c.r[2].d[0] = ld16((c.r[4].w[0] + 576u));
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = c.r[19].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BC000u | kUnwind; return; } goto L_003BC000; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003BC024:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC02Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 372u, depth + 1u); else { c.pc = 0x003BB1D8u; return; } if (c.pc != 0x003BC02Cu) [[unlikely]] return; }
L_003BC02C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_003BC084; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] <= 0; st32((c.r[17].w[0] + 44u), c.r[2].w[0]);  if (t) { goto L_003BC07C; } }
    set32(c.r[16], c.r[17].w[0] + 128u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
L_003BC058:
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[5], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC06Cu); set32(c.r[6], ld32((c.r[17].w[0] + 92u)));  if (depth < kMaxDepth) unit_00AE(c, 302u, depth + 1u); else { c.pc = 0x003BA4B0u; return; } if (c.pc != 0x003BC06Cu) [[unlikely]] return; }
L_003BC06C:
    set32(c.r[2], ld32((c.r[17].w[0] + 88u)));
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BC058u | kUnwind; return; } goto L_003BC058; }
L_003BC07C:
    set32(c.r[2], 0u + 2u);
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003BC084:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003BC088:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003BC0A8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
L_003BC0BC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_003BC110; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BC0F0; } }
L_003BC0D0:
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[16].w[0] + 44u), c.r[2].w[0]);  if (t) { goto L_003BC0F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BC0BCu | kUnwind; return; } goto L_003BC0BC; } }
L_003BC0F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC0F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 361u, depth + 1u); else { c.pc = 0x003BB028u; return; } if (c.pc != 0x003BC0F8u) [[unlikely]] return; }
L_003BC0F8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[5].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 44u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BC0D0u | kUnwind; return; } goto L_003BC0D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003BC12C; } }
    c.budget -= 1;
L_003BC110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC118u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 366u, depth + 1u); else { c.pc = 0x003BB0D8u; return; } if (c.pc != 0x003BC118u) [[unlikely]] return; }
L_003BC118:
    c.budget -= 2;
    if (c.r[2].sd[0] <= 0) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003BC12C; }
    set32(c.r[2], 0u + 3u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
L_003BC12C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003BC140:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_003BC168; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BBF38u | kUnwind; return; } [[clang::musttail]] return unit_00AE(c, 472u, depth); }
L_003BC168:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003BC178; } }
    c.budget -= 2;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BC0A8u | kUnwind; return; } goto L_003BC0A8; }
L_003BC178:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BC180:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[2].w[0] - 3936u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], 0u + 7u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], 0u + 1u);
    c.budget -= 10;
L_003BC1A8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_003BC1C0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC1BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 12u, depth + 1u); else { c.pc = 0x003BC140u; return; } if (c.pc != 0x003BC1BCu) [[unlikely]] return; }
L_003BC1BC:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_003BC1C0:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] + 752u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BC1A8u | kUnwind; return; } goto L_003BC1A8; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003BC1E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0] + 4580u), c.r[4].w[0]);  c.pc = t; return; }
L_003BC1F0:
    set32(c.r[2], 0u + 40u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st32((c.r[3].w[0] + 4584u), c.r[2].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 4588u), c.r[4].w[0]);  c.pc = t; return; }
L_003BC210:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 4608u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC22Cu); set32(c.r[6], 0u + 3680u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003BC22Cu) [[unlikely]] return; }
L_003BC22C:
    set32(c.r[2], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BC240:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003BC248:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003BC250:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC28Cu); set32(c.r[21], 0u + 1u);  if (depth < kMaxDepth) unit_00AC(c, 155u, depth + 1u); else { c.pc = 0x003B1E00u; return; } if (c.pc != 0x003BC28Cu) [[unlikely]] return; }
L_003BC28C:
    set32(c.r[7], c.r[16].w[0] + 2047u);
    c.r[3].d[0] = c.r[16].sd[0] < 0ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[7].d[0];
    set32(c.r[7], 0u + 512u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 11));
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    set32(c.r[3], c.r[2].w[0] << 11);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], c.r[16].w[0] - c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[2].w[0] + 1u);
    st32((c.r[19].w[0] + 8u), c.r[17].w[0]);
    st32((c.r[19].w[0] + 12u), c.r[18].w[0]);
    st32((c.r[19].w[0] + 40u), c.r[7].w[0]);
    st32((c.r[19].w[0] + 88u), c.r[6].w[0]);
    st8((c.r[19].w[0] + 1u), static_cast<std::uint8_t>(c.r[21].w[0]));
    st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st32((c.r[19].w[0] + 4u), c.r[20].w[0]);
    st32((c.r[19].w[0] + 44u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 16u), c.r[16].w[0]);
    c.budget -= 24;
    { const bool t = c.r[3].sd[0] <= 0; st32((c.r[19].w[0] + 84u), 0u);  if (t) { goto L_003BC2F0; } }
    st32((c.r[19].w[0] + 44u), c.r[8].w[0]);
    c.budget -= 1;
L_003BC2F0:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[21].w[0]));  goto L_003BC338; }
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC30Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BC30Cu) [[unlikely]] return; }
L_003BC30C:
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC324u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BC324u) [[unlikely]] return; }
L_003BC324:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[19].w[0] + 24u), c.r[16].w[0]);
    st32((c.r[19].w[0] + 60u), c.r[16].w[0]);
    st32((c.r[19].w[0] + 20u), c.r[16].w[0]);
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[21].w[0]));
    c.budget -= 5;
L_003BC338:
    st8((c.r[19].w[0] + 64u), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B1E18u | kUnwind; return; } [[clang::musttail]] return unit_00AC(c, 156u, depth); }
L_003BC360:
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[9], ld32((c.r[13].w[0] + 4580u)));
    c.r[10].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.r[12].d[0] = c.r[4].d[0] + 0ull;
    c.r[11].d[0] = c.r[6].d[0] + 0ull;
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 12;
    { const bool t = c.r[9].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003BC408; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[7], c.r[2].w[0] + 4576u);
    set32(c.r[4], c.r[4].w[0] + 4608u);
    set32(c.r[3], ld32((c.r[7].w[0])));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[16], c.r[2].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], ld32((c.r[13].w[0] + 4580u)));  if (t) { goto L_003BC40C; } }
    c.r[6].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 2;
L_003BC3D0:
    c.r[2].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[13].w[0] + 4580u)));  if (t) { goto L_003BC40C; } }
    set32(c.r[2], ld32((c.r[7].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 11;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BC3D0u | kUnwind; return; } goto L_003BC3D0; }
L_003BC408:
    set32(c.r[3], ld32((c.r[13].w[0] + 4580u)));
    c.budget -= 1;
L_003BC40C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003BC42C; } }
    c.r[5].d[0] = c.r[12].d[0] + 0ull;
    c.r[6].d[0] = c.r[10].d[0] + 0ull;
    c.r[7].d[0] = c.r[11].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC428u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 22u, depth + 1u); else { c.pc = 0x003BC250u; return; } if (c.pc != 0x003BC428u) [[unlikely]] return; }
L_003BC428:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003BC42C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BC440:
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[9], ld32((c.r[13].w[0] + 4588u)));
    c.r[10].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.r[12].d[0] = c.r[4].d[0] + 0ull;
    c.r[11].d[0] = c.r[6].d[0] + 0ull;
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 12;
    { const bool t = c.r[9].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003BC4E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[7], c.r[2].w[0] + 4584u);
    set32(c.r[4], c.r[4].w[0] + 4608u);
    set32(c.r[3], ld32((c.r[7].w[0])));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[16], c.r[2].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], ld32((c.r[13].w[0] + 4588u)));  if (t) { goto L_003BC4EC; } }
    c.r[6].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 2;
L_003BC4B0:
    c.r[2].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[13].w[0] + 4588u)));  if (t) { goto L_003BC4EC; } }
    set32(c.r[2], ld32((c.r[7].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 11;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BC4B0u | kUnwind; return; } goto L_003BC4B0; }
L_003BC4E8:
    set32(c.r[3], ld32((c.r[13].w[0] + 4588u)));
    c.budget -= 1;
L_003BC4EC:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003BC50C; } }
    c.r[5].d[0] = c.r[12].d[0] + 0ull;
    c.r[6].d[0] = c.r[10].d[0] + 0ull;
    c.r[7].d[0] = c.r[11].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC508u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 22u, depth + 1u); else { c.pc = 0x003BC250u; return; } if (c.pc != 0x003BC508u) [[unlikely]] return; }
L_003BC508:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003BC50C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BC520:
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[5].sd[0] < 256ll ? 1ull : 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003BC550; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC548u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 26u, depth + 1u); else { c.pc = 0x003BC360u; return; } if (c.pc != 0x003BC548u) [[unlikely]] return; }
L_003BC548:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003BC55C; } }
L_003BC550:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC558u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 29u, depth + 1u); else { c.pc = 0x003BC440u; return; } if (c.pc != 0x003BC558u) [[unlikely]] return; }
L_003BC558:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003BC55C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BC568:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_003BC5B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC584u);  if (depth < kMaxDepth) unit_00AF(c, 67u, depth + 1u); else { c.pc = 0x003BC890u; return; } if (c.pc != 0x003BC584u) [[unlikely]] return; }
L_003BC584:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC58Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 47u, depth + 1u); else { c.pc = 0x003BC6A8u; return; } if (c.pc != 0x003BC58Cu) [[unlikely]] return; }
L_003BC58C:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 92u);
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00124ED8u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 49u, depth); }
L_003BC5B0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BC5C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC5F4u); c.r[20].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 316u, depth + 1u); else { c.pc = 0x003D3278u; return; } if (c.pc != 0x003BC5F4u) [[unlikely]] return; }
L_003BC5F4:
    set32(c.r[17], c.r[17].w[0] << 11);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 12u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 76u), c.r[19].w[0]);
    st32((c.r[16].w[0] + 80u), c.r[20].w[0]);
    st8((c.r[16].w[0] + 65u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 15;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_00B4(c, 317u, depth); }
L_003BC630:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC644u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 38u, depth + 1u); else { c.pc = 0x003BC5C0u; return; } if (c.pc != 0x003BC644u) [[unlikely]] return; }
L_003BC644:
    c.budget -= 1;
L_003BC648:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC650u);  if (depth < kMaxDepth) unit_00AD(c, 177u, depth + 1u); else { c.pc = 0x003B5940u; return; } if (c.pc != 0x003BC650u) [[unlikely]] return; }
L_003BC650:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 65u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BC648u | kUnwind; return; } goto L_003BC648; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BC668:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC67Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 65u, depth + 1u); else { c.pc = 0x003BC828u; return; } if (c.pc != 0x003BC67Cu) [[unlikely]] return; }
L_003BC67C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC684u);  if (depth < kMaxDepth) unit_00B4(c, 316u, depth + 1u); else { c.pc = 0x003D3278u; return; } if (c.pc != 0x003BC684u) [[unlikely]] return; }
L_003BC684:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 69u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { st8((c.r[16].w[0] + 66u), static_cast<std::uint8_t>(c.r[3].w[0]));  goto L_003BC694; }
L_003BC694:
    st8((c.r[16].w[0] + 65u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B4(c, 317u, depth); }
L_003BC6A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC6BCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 67u, depth + 1u); else { c.pc = 0x003BC890u; return; } if (c.pc != 0x003BC6BCu) [[unlikely]] return; }
L_003BC6BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC6C4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 44u, depth + 1u); else { c.pc = 0x003BC668u; return; } if (c.pc != 0x003BC6C4u) [[unlikely]] return; }
L_003BC6C4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 69u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003BC6E8; }
L_003BC6D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC6D8u);  if (depth < kMaxDepth) unit_00AD(c, 177u, depth + 1u); else { c.pc = 0x003B5940u; return; } if (c.pc != 0x003BC6D8u) [[unlikely]] return; }
L_003BC6D8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 69u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BC6D0u | kUnwind; return; } goto L_003BC6D0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003BC6E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BC6F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 69u)));  c.pc = t; return; }
L_003BC700:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));  c.pc = t; return; }
L_003BC708:
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[5].w[0] << 11);
    set32(c.r[6], ld32((c.r[7].w[0] + 16u)));
    st32((c.r[7].w[0] + 84u), c.r[5].w[0]);
    set32(c.r[4], c.r[6].w[0] + 2047u);
    c.r[3].d[0] = c.r[6].sd[0] < 0ll ? 1ull : 0ull;
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; if (c.r[3].d[0] != 0) c.r[5].d[0] = c.r[4].d[0];  if (t) { goto L_003BC748; } }
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 11));
    set32(c.r[2], c.r[3].w[0] << 11);
    set32(c.r[2], c.r[6].w[0] - c.r[2].w[0]);
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[7].w[0] + 84u), c.r[3].w[0]);
    c.budget -= 6;
L_003BC748:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[7].w[0] + 84u)));  c.pc = t; return; }
L_003BC750:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003BC760; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 84u)));
    c.budget -= 1;
L_003BC760:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003BC768:
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    st32((c.r[4].w[0] + 48u), 0u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003BC780; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_003BC784; } }
L_003BC780:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_003BC784:
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 67u), static_cast<std::uint8_t>(c.r[2].w[0]));  c.pc = t; return; }
L_003BC7A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC7B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 155u, depth + 1u); else { c.pc = 0x003B1E00u; return; } if (c.pc != 0x003BC7B4u) [[unlikely]] return; }
L_003BC7B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC7BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 56u, depth + 1u); else { c.pc = 0x003BC768u; return; } if (c.pc != 0x003BC7BCu) [[unlikely]] return; }
L_003BC7BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC7CCu); st32((c.r[16].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AC(c, 156u, depth + 1u); else { c.pc = 0x003B1E18u; return; } if (c.pc != 0x003BC7CCu) [[unlikely]] return; }
L_003BC7CC:
    set32(c.r[2], 0u + 1u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BC7E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC7FCu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 155u, depth + 1u); else { c.pc = 0x003B1E00u; return; } if (c.pc != 0x003BC7FCu) [[unlikely]] return; }
L_003BC7FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC804u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 56u, depth + 1u); else { c.pc = 0x003BC768u; return; } if (c.pc != 0x003BC804u) [[unlikely]] return; }
L_003BC804:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC80Cu); st32((c.r[16].w[0] + 88u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_00AC(c, 156u, depth + 1u); else { c.pc = 0x003B1E18u; return; } if (c.pc != 0x003BC80Cu) [[unlikely]] return; }
L_003BC80C:
    set32(c.r[2], 0u + 1u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003BC828:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC83Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 316u, depth + 1u); else { c.pc = 0x003D3278u; return; } if (c.pc != 0x003BC83Cu) [[unlikely]] return; }
L_003BC83C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65280ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] | 512ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_003BC878; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 67u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; st8((c.r[16].w[0] + 68u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003BC880; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 67u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003BC880; } }
    c.budget -= 1;
L_003BC878:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003BC880:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B4(c, 317u, depth); }
L_003BC890:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC8ACu); set32(c.r[17], 0u + 1u);  if (depth < kMaxDepth) unit_00AF(c, 65u, depth + 1u); else { c.pc = 0x003BC828u; return; } if (c.pc != 0x003BC8ACu) [[unlikely]] return; }
L_003BC8AC:
    c.budget -= 1;
L_003BC8B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC8B8u);  if (depth < kMaxDepth) unit_00AD(c, 177u, depth + 1u); else { c.pc = 0x003B5940u; return; } if (c.pc != 0x003BC8B8u) [[unlikely]] return; }
L_003BC8B8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BC8B0u | kUnwind; return; } goto L_003BC8B0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BC8B0u | kUnwind; return; } goto L_003BC8B0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003BC8E0:
    st32((c.r[4].w[0] + 56u), c.r[6].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 52u), c.r[5].w[0]);  c.pc = t; return; }
L_003BC8F0:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0; c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003BC900; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[6].w[0] + 44u), c.r[5].w[0]);  c.pc = t; return; }
L_003BC900:
    set32(c.r[3], ld32((c.r[6].w[0] + 16u)));
    c.r[4].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[5], c.r[3].w[0] + 2047u);
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    if (c.r[4].d[0] != 0) c.r[2].d[0] = c.r[5].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 11));
    set32(c.r[4], c.r[2].w[0] << 11);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[6].w[0] + 44u), c.r[2].w[0]);  c.pc = t; return; }
L_003BC930:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] + 4600u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0]), c.r[2].w[0]);  c.pc = t; return; }
L_003BC948:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    set32(c.r[17], 0u + 1u);
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC978u); set32(c.r[20], ld32((c.r[19].w[0] + 4u)));  if (depth < kMaxDepth) unit_00B1(c, 236u, depth + 1u); else { c.pc = 0x003C72B0u; return; } if (c.pc != 0x003BC978u) [[unlikely]] return; }
L_003BC978:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC980u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 316u, depth + 1u); else { c.pc = 0x003D3278u; return; } if (c.pc != 0x003BC980u) [[unlikely]] return; }
L_003BC980:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 2u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[17].d[0]) { st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(c.r[17].w[0]));  goto L_003BCAF0; }
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[17].d[0]) { set32(c.r[2], 0u + 3u);  goto L_003BCAA8; }
    st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC9A0u); set32(c.r[18], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_00B4(c, 317u, depth + 1u); else { c.pc = 0x003D3290u; return; } if (c.pc != 0x003BC9A0u) [[unlikely]] return; }
L_003BC9A0:
    set32(c.r[16], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[17], c.r[29].w[0] + 16u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] << 11);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC9C0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 230u, depth + 1u); else { c.pc = 0x003D2388u; return; } if (c.pc != 0x003BC9C0u) [[unlikely]] return; }
L_003BC9C0:
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC9D8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BC9D8u) [[unlikely]] return; }
L_003BC9D8:
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC9F0u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BC9F0u) [[unlikely]] return; }
L_003BC9F0:
    set32(c.r[6], ld32((c.r[19].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 48u)));
    c.r[4].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[7], c.r[2].w[0] + 2047u);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[19].w[0] + 28u)));
    if (c.r[4].d[0] != 0) c.r[3].d[0] = c.r[7].d[0];
    set32(c.r[9], ld32((c.r[19].w[0] + 44u)));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 11));
    set32(c.r[5], c.r[5].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[3].w[0] << 11);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    st32((c.r[19].w[0] + 48u), c.r[5].w[0]);
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    st32((c.r[18].w[0]), 0u);
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[19].w[0] + 84u), c.r[6].w[0]);
    c.budget -= 21;
    { const bool t = c.r[6].d[0] != c.r[9].d[0]; st32((c.r[19].w[0] + 36u), 0u);  if (t) { goto L_003BCA58; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 52u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 84u)));  goto L_003BCA5C; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCA58u); set32(c.r[4], ld32((c.r[19].w[0] + 56u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BCA58u) [[unlikely]] return; }
L_003BCA58:
    set32(c.r[2], ld32((c.r[19].w[0] + 84u)));
    c.budget -= 1;
L_003BCA5C:
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_003BCA98; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] >> 11);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { st8((c.r[19].w[0] + 3u), static_cast<std::uint8_t>(0u));  goto L_003BCCA0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65534ull;
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { st8((c.r[19].w[0] + 3u), static_cast<std::uint8_t>(0u));  goto L_003BCCA0; }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_003BCA98:
    st8((c.r[19].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003BCCA0; } }
    c.budget -= 1;
L_003BCAA8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_003BCAE0; } }
    st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCABCu); set32(c.r[16], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_00B4(c, 317u, depth + 1u); else { c.pc = 0x003D3290u; return; } if (c.pc != 0x003BCABCu) [[unlikely]] return; }
L_003BCABC:
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCAD4u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BCAD4u) [[unlikely]] return; }
L_003BCAD4:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 36u), 0u);  if (t) { goto L_003BCC6C; } }
L_003BCAE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCAE8u);  if (depth < kMaxDepth) unit_00B4(c, 317u, depth + 1u); else { c.pc = 0x003D3290u; return; } if (c.pc != 0x003BCAE8u) [[unlikely]] return; }
L_003BCAE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003BCCA4; } }
L_003BCAF0:
    st32((c.r[19].w[0] + 32u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCAFCu); st32((c.r[19].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_00B4(c, 317u, depth + 1u); else { c.pc = 0x003D3290u; return; } if (c.pc != 0x003BCAFCu) [[unlikely]] return; }
L_003BCAFC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[17].d[0]) { st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(0u));  goto L_003BCCA0; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[17].d[0]) { st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(0u));  goto L_003BCCA0; }
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_003BCB30; } }
    st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[19].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 28u), 0u);  if (t) { goto L_003BCCA0; } }
L_003BCB30:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_003BCB44; } }
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[2].w[0] + 36u)));  goto L_003BCB58; }
L_003BCB44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCB4Cu); st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00AF(c, 73u, depth + 1u); else { c.pc = 0x003BC930u; return; } if (c.pc != 0x003BCB4Cu) [[unlikely]] return; }
L_003BCB4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003BCCA4; } }
    c.budget -= 1;
L_003BCB58:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCB64u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BCB64u) [[unlikely]] return; }
L_003BCB64:
    set32(c.r[3], ld32((c.r[19].w[0] + 60u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[20].w[0])));  goto L_003BCB88; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003BCCA0; } }
    c.budget -= 1;
L_003BCB88:
    set32(c.r[7], c.r[29].w[0] + 16u);
    set32(c.r[6], ld32((c.r[19].w[0] + 20u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCBA0u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BCBA0u) [[unlikely]] return; }
L_003BCBA0:
    set32(c.r[7], ld32((c.r[19].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 20u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[10], ld32((c.r[19].w[0] + 84u)));
    set32(c.r[8], c.r[4].w[0] + 2047u);
    c.r[5].d[0] = c.r[4].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[9], c.r[2].w[0] + 2047u);
    if (c.r[5].d[0] != 0) c.r[4].d[0] = c.r[8].d[0];
    set32(c.r[5], ld32((c.r[19].w[0] + 12u)));
    c.r[3].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[7], c.r[7].w[0] - c.r[10].w[0]);
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[9].d[0];
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 11));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 11));
    if (c.r[3].d[0] != 0) c.r[7].d[0] = c.r[4].d[0];
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - c.r[10].w[0]);
    set32(c.r[16], ld32((c.r[19].w[0] + 40u)));
    c.r[3].d[0] = c.r[7].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + c.r[10].w[0]);
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[7].d[0];
    c.r[3].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCC08u); if (c.r[3].d[0] != 0) c.r[16].d[0] = c.r[2].d[0];  if (depth < kMaxDepth) unit_00B1(c, 219u, depth + 1u); else { c.pc = 0x003C70C0u; return; } if (c.pc != 0x003BCC08u) [[unlikely]] return; }
L_003BCC08:
    set32(c.r[6], ld32((c.r[29].w[0] + 16u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCC18u); set32(c.r[4], ld32((c.r[19].w[0] + 8u)));  if (depth < kMaxDepth) unit_00B1(c, 223u, depth + 1u); else { c.pc = 0x003C7128u; return; } if (c.pc != 0x003BCC18u) [[unlikely]] return; }
L_003BCC18:
    set32(c.r[4], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 16u)));
    st32((c.r[19].w[0] + 36u), c.r[4].w[0]);
    st32((c.r[19].w[0] + 32u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] > 0; st32((c.r[19].w[0] + 28u), c.r[2].w[0]);  if (t) { goto L_003BCCA0; } }
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[16], c.r[19].w[0] + 32u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCC4Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BCC4Cu) [[unlikely]] return; }
L_003BCC4C:
    st32((c.r[16].w[0]), 0u);
    st32((c.r[19].w[0] + 36u), 0u);
    st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCC60u); set32(c.r[4], ld32((c.r[19].w[0] + 8u)));  if (depth < kMaxDepth) unit_00B1(c, 236u, depth + 1u); else { c.pc = 0x003C72B0u; return; } if (c.pc != 0x003BCC60u) [[unlikely]] return; }
L_003BCC60:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003BCCA4; } }
L_003BCC6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 4596u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003BCCA4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = ld8((c.r[19].w[0] + 3u));  if (t) { goto L_003BCC98; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003BCCA4; } }
L_003BCC98:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[19].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003BCCA0:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003BCCA4:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003BCCC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.budget -= 8;
    if (c.r[2].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));  goto L_003BCE54; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 68u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 66u)));  goto L_003BCD08; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 67u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[16].w[0] + 68u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003BCD00; } }
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_003BCD00:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 66u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_003BCD08:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003BCD2C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st8((c.r[16].w[0] + 66u), static_cast<std::uint8_t>(0u));  goto L_003BCD28; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCD24u); st32((c.r[16].w[0] + 8u), 0u);  if (depth < kMaxDepth) unit_00B1(c, 213u, depth + 1u); else { c.pc = 0x003C6FE0u; return; } if (c.pc != 0x003BCD24u) [[unlikely]] return; }
L_003BCD24:
    st8((c.r[16].w[0] + 66u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_003BCD28:
    st8((c.r[16].w[0] + 69u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_003BCD2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCD34u);  if (depth < kMaxDepth) unit_00B4(c, 316u, depth + 1u); else { c.pc = 0x003D3278u; return; } if (c.pc != 0x003BCD34u) [[unlikely]] return; }
L_003BCD34:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 65u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003BCE38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCD4Cu); st8((c.r[16].w[0] + 69u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_00B4(c, 317u, depth + 1u); else { c.pc = 0x003D3290u; return; } if (c.pc != 0x003BCD4Cu) [[unlikely]] return; }
L_003BCD4C:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 67u)));  goto L_003BCE44; }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCD68u); set32(c.r[5], ld32((c.r[16].w[0] + 80u)));  if (depth < kMaxDepth) unit_00B1(c, 194u, depth + 1u); else { c.pc = 0x003C6C90u; return; } if (c.pc != 0x003BCD68u) [[unlikely]] return; }
L_003BCD68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_003BCD98; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCD80u); set32(c.r[4], c.r[4].w[0] + 11728u);  if (depth < kMaxDepth) unit_00AC(c, 207u, depth + 1u); else { c.pc = 0x003B3A48u; return; } if (c.pc != 0x003BCD80u) [[unlikely]] return; }
L_003BCD80:
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 65u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 69u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003BCE78; } }
    c.budget -= 1;
L_003BCD98:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCDA8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 219u, depth + 1u); else { c.pc = 0x003C70C0u; return; } if (c.pc != 0x003BCDA8u) [[unlikely]] return; }
L_003BCDA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCDB0u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00B1(c, 215u, depth + 1u); else { c.pc = 0x003C7058u; return; } if (c.pc != 0x003BCDB0u) [[unlikely]] return; }
L_003BCDB0:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCDC4u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 219u, depth + 1u); else { c.pc = 0x003C70C0u; return; } if (c.pc != 0x003BCDC4u) [[unlikely]] return; }
L_003BCDC4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] | 63488ull;
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[3], c.r[17].w[0] << 11);  if (t) { goto L_003BCDE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_003BCE20; } }
L_003BCDE0:
    set32(c.r[6], ld32((c.r[16].w[0] + 12u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[5].w[0] + 2047u);  if (t) { goto L_003BCDF8; } }
    st32((c.r[16].w[0] + 12u), c.r[17].w[0]);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_003BCDF8:
    c.r[3].d[0] = c.r[5].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[5].d[0] = c.r[4].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 11));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003BCE24; } }
    set32(c.r[2], c.r[17].w[0] - c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] << 11);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 3;
L_003BCE20:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003BCE24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCE2Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 54u, depth + 1u); else { c.pc = 0x003BC708u; return; } if (c.pc != 0x003BCE2Cu) [[unlikely]] return; }
L_003BCE2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 65u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003BCE40; } }
    c.budget -= 1;
L_003BCE38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCE40u);  if (depth < kMaxDepth) unit_00B4(c, 317u, depth + 1u); else { c.pc = 0x003D3290u; return; } if (c.pc != 0x003BCE40u) [[unlikely]] return; }
L_003BCE40:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 67u)));
    c.budget -= 1;
L_003BCE44:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { st8((c.r[16].w[0] + 67u), static_cast<std::uint8_t>(0u));  goto L_003BCE50; }
L_003BCE50:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 1;
L_003BCE54:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003BCE7C; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 69u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003BCE7C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCE78u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 74u, depth + 1u); else { c.pc = 0x003BC948u; return; } if (c.pc != 0x003BCE78u) [[unlikely]] return; }
L_003BCE78:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003BCE7C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003BCE90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCEB4u); set32(c.r[4], c.r[19].w[0] + 4592u);  if (depth < kMaxDepth) unit_00B4(c, 398u, depth + 1u); else { c.pc = 0x003D3D38u; return; } if (c.pc != 0x003BCEB4u) [[unlikely]] return; }
L_003BCEB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);  if (t) { goto L_003BCEF0; } }
    set32(c.r[18], 0u + 1u);
    set32(c.r[16], c.r[2].w[0] + 4608u);
    set32(c.r[17], 0u + 39u);
    c.budget -= 3;
L_003BCEC8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_003BCEE0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCEDCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 93u, depth + 1u); else { c.pc = 0x003BCCC0u; return; } if (c.pc != 0x003BCEDCu) [[unlikely]] return; }
L_003BCEDC:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_003BCEE0:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] + 92u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BCEC8u | kUnwind; return; } goto L_003BCEC8; } }
    set32(c.r[2], c.r[19].w[0] + 4592u);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 2;
L_003BCEF0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003BCF10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCF24u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 55u, depth + 1u); else { c.pc = 0x003BC750u; return; } if (c.pc != 0x003BCF24u) [[unlikely]] return; }
L_003BCF24:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BCF40:
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[6].w[0]), c.r[5].w[0]);  c.pc = t; return; }
L_003BCF58:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 4u)));  c.pc = t; return; }
L_003BCF60:
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 20u), c.r[6].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 24u), c.r[5].w[0]);  c.pc = t; return; }
L_003BCF70:
    st32((c.r[4].w[0] + 40u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_003BCF80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003BCF88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 16u)));  c.pc = t; return; }
L_003BCF90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 64u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_003BCF98:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 64u)));  c.pc = t; return; }
L_003BCFA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCFB8u); set32(c.r[4], ld32((c.r[4].w[0] + 8u)));  if (depth < kMaxDepth) unit_00B1(c, 236u, depth + 1u); else { c.pc = 0x003C72B0u; return; } if (c.pc != 0x003BCFB8u) [[unlikely]] return; }
L_003BCFB8:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BCFD0:
    st32((c.r[5].w[0]), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_003BCFE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCFF4u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 240u, depth + 1u); else { c.pc = 0x003C7318u; return; } if (c.pc != 0x003BCFF4u) [[unlikely]] return; }
L_003BCFF4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    set32(c.r[6], c.r[5].w[0] + 2047u);
    c.r[4].d[0] = c.r[5].sd[0] < 0ll ? 1ull : 0ull;
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    if (c.r[4].d[0] != 0) c.r[3].d[0] = c.r[6].d[0];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 11));
    set32(c.r[4], c.r[3].w[0] << 11);
    set32(c.r[6], c.r[3].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] - c.r[4].w[0]);
    c.budget -= 12;
    { const bool t = c.r[5].sd[0] <= 0; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003BD028; } }
    st32((c.r[16].w[0]), c.r[6].w[0]);
    c.budget -= 1;
L_003BD028:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BD038:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD04Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 240u, depth + 1u); else { c.pc = 0x003C7318u; return; } if (c.pc != 0x003BD04Cu) [[unlikely]] return; }
L_003BD04C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BD068:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD08Cu); st32((c.r[18].w[0] + 4u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_00AC(c, 155u, depth + 1u); else { c.pc = 0x003B1E00u; return; } if (c.pc != 0x003BD08Cu) [[unlikely]] return; }
L_003BD08C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD0A0u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BD0A0u) [[unlikely]] return; }
L_003BD0A0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD0B8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BD0B8u) [[unlikely]] return; }
L_003BD0B8:
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD0C4u); st32((c.r[18].w[0] + 60u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_00AC(c, 156u, depth + 1u); else { c.pc = 0x003B1E18u; return; } if (c.pc != 0x003BD0C4u) [[unlikely]] return; }
L_003BD0C4:
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003BD0E8:
    set32(c.r[5], c.r[5].w[0] << 11);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 16u), c.r[5].w[0]);  c.pc = t; return; }
L_003BD0F8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[4].w[0] + 12u), c.r[5].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BC708u | kUnwind; return; } goto L_003BC708; }
L_003BD118:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0] + 4596u), c.r[4].w[0]);  c.pc = t; return; }
L_003BD128:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));  c.pc = t; return; }
L_003BD130:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003BD1A4; }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003BD1A4; }
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st8((c.r[16].w[0] + 65u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[17], c.r[3].w[0] + 4592u);
    set32(c.r[18], 0u + 1u);
    c.budget -= 6;
L_003BD178:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD180u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 398u, depth + 1u); else { c.pc = 0x003D3D38u; return; } if (c.pc != 0x003BD180u) [[unlikely]] return; }
L_003BD180:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[18].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003BD194; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD190u);  if (depth < kMaxDepth) unit_00AF(c, 93u, depth + 1u); else { c.pc = 0x003BCCC0u; return; } if (c.pc != 0x003BD190u) [[unlikely]] return; }
L_003BD190:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_003BD194:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 65u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BD178u | kUnwind; return; } goto L_003BD178; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003BD1A4:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003BD1B8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B39F0u | kUnwind; return; } [[clang::musttail]] return unit_00AC(c, 204u, depth); }
L_003BD1D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], c.r[2].w[0] + 8288u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD1FCu); set32(c.r[6], 0u + 96u);  if (depth < kMaxDepth) unit_0009(c, 37u, depth + 1u); else { c.pc = 0x00124C88u; return; } if (c.pc != 0x003BD1FCu) [[unlikely]] return; }
L_003BD1FC:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[4], c.r[4].w[0] + 8304u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] + 8302u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], 0u + 232u);
    set32(c.r[8], c.r[8].w[0] + 8300u);
    set32(c.r[7], c.r[7].w[0] + 8301u);
    set32(c.r[2], c.r[2].w[0] + 8303u);
    c.r[9].d[0] = ld8((c.r[8].w[0]));
    c.r[10].d[0] = ld8((c.r[7].w[0]));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[8].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[16], c.r[16].w[0] + 11776u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD248u); c.r[7].d[0] = ld8((c.r[2].w[0]));  if (depth < kMaxDepth) unit_0009(c, 37u, depth + 1u); else { c.pc = 0x00124C88u; return; } if (c.pc != 0x003BD248u) [[unlikely]] return; }
L_003BD248:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD258u); set32(c.r[4], c.r[4].w[0] - 11848u);  if (depth < kMaxDepth) unit_00B1(c, 325u, depth + 1u); else { c.pc = 0x003C7DE0u; return; } if (c.pc != 0x003BD258u) [[unlikely]] return; }
L_003BD258:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[5], c.r[5].w[0] - 22232u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD26Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 157u, depth + 1u); else { c.pc = 0x003C6758u; return; } if (c.pc != 0x003BD26Cu) [[unlikely]] return; }
L_003BD26C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD274u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 179u, depth + 1u); else { c.pc = 0x003C6A90u; return; } if (c.pc != 0x003BD274u) [[unlikely]] return; }
L_003BD274:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003BD2B8; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD29Cu); set32(c.r[7], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_00B3(c, 10u, depth + 1u); else { c.pc = 0x003CC150u; return; } if (c.pc != 0x003BD29Cu) [[unlikely]] return; }
L_003BD29C:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00B3(c, 11u, depth); }
L_003BD2B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD2C0u);  if (depth < kMaxDepth) unit_00B3(c, 10u, depth + 1u); else { c.pc = 0x003CC150u; return; } if (c.pc != 0x003BD2C0u) [[unlikely]] return; }
L_003BD2C0:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00B3(c, 11u, depth); }
L_003BD2D8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_003BD310; } }
    set32(c.r[7], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD304u); set32(c.r[6], ld32((c.r[2].w[0] + 12u)));  if (depth < kMaxDepth) unit_00B2(c, 507u, depth + 1u); else { c.pc = 0x003CBE10u; return; } if (c.pc != 0x003BD304u) [[unlikely]] return; }
L_003BD304:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003BD320; } }
    c.budget -= 1;
L_003BD310:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD320u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 507u, depth + 1u); else { c.pc = 0x003CBE10u; return; } if (c.pc != 0x003BD320u) [[unlikely]] return; }
L_003BD320:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BD338:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_003BD380; } }
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[8], ld32((c.r[2].w[0] + 4u)));
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD378u); set32(c.r[6], ld32((c.r[2].w[0] + 8u)));  if (depth < kMaxDepth) unit_00B2(c, 519u, depth + 1u); else { c.pc = 0x003CBFC0u; return; } if (c.pc != 0x003BD378u) [[unlikely]] return; }
L_003BD378:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003BD388; } }
L_003BD380:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD388u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 507u, depth + 1u); else { c.pc = 0x003CBE10u; return; } if (c.pc != 0x003BD388u) [[unlikely]] return; }
L_003BD388:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BD3A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_003BD3E0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD3C8u); set32(c.r[7], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00B3(c, 10u, depth + 1u); else { c.pc = 0x003CC150u; return; } if (c.pc != 0x003BD3C8u) [[unlikely]] return; }
L_003BD3C8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B3(c, 11u, depth); }
L_003BD3E0:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD3F0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 10u, depth + 1u); else { c.pc = 0x003CC150u; return; } if (c.pc != 0x003BD3F0u) [[unlikely]] return; }
L_003BD3F0:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B3(c, 11u, depth); }
L_003BD408:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B3(c, 8u, depth); }
L_003BD420:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B2(c, 424u, depth); }
L_003BD438:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B2(c, 425u, depth); }
L_003BD450:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B3(c, 16u, depth); }
L_003BD468:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B39F0u | kUnwind; return; } [[clang::musttail]] return unit_00AC(c, 204u, depth); }
L_003BD480:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD4A8u); set32(c.r[4], c.r[2].w[0] - 11160u);  if (depth < kMaxDepth) unit_00B1(c, 325u, depth + 1u); else { c.pc = 0x003C7DE0u; return; } if (c.pc != 0x003BD4A8u) [[unlikely]] return; }
L_003BD4A8:
    set32(c.r[16], c.r[16].w[0] + 11784u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[5], c.r[5].w[0] - 15680u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD4C0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 157u, depth + 1u); else { c.pc = 0x003C6758u; return; } if (c.pc != 0x003BD4C0u) [[unlikely]] return; }
L_003BD4C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD4C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 179u, depth + 1u); else { c.pc = 0x003C6A90u; return; } if (c.pc != 0x003BD4C8u) [[unlikely]] return; }
L_003BD4C8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003BD540; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD4D8u); set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_00B3(c, 245u, depth + 1u); else { c.pc = 0x003CDD48u; return; } if (c.pc != 0x003BD4D8u) [[unlikely]] return; }
L_003BD4D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD4E0u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_00B3(c, 246u, depth + 1u); else { c.pc = 0x003CDD78u; return; } if (c.pc != 0x003BD4E0u) [[unlikely]] return; }
L_003BD4E0:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_003BD500; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD4F4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 17u, depth + 1u); else { c.pc = 0x003CC260u; return; } if (c.pc != 0x003BD4F4u) [[unlikely]] return; }
L_003BD4F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 12u)));  if (t) { goto L_003BD50C; } }
    c.budget -= 1;
L_003BD500:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD508u);  if (depth < kMaxDepth) unit_00B3(c, 17u, depth + 1u); else { c.pc = 0x003CC260u; return; } if (c.pc != 0x003BD508u) [[unlikely]] return; }
L_003BD508:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 1;
L_003BD50C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003BD528; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00B3(c, 19u, depth); }
L_003BD528:
    set32(c.r[4], 0u + 1u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00B3(c, 19u, depth); }
L_003BD540:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD548u);  if (depth < kMaxDepth) unit_00B3(c, 245u, depth + 1u); else { c.pc = 0x003CDD48u; return; } if (c.pc != 0x003BD548u) [[unlikely]] return; }
L_003BD548:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD550u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 246u, depth + 1u); else { c.pc = 0x003CDD78u; return; } if (c.pc != 0x003BD550u) [[unlikely]] return; }
L_003BD550:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD558u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 17u, depth + 1u); else { c.pc = 0x003CC260u; return; } if (c.pc != 0x003BD558u) [[unlikely]] return; }
L_003BD558:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00B3(c, 19u, depth); }
L_003BD570:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003BD5A0; } }
    set32(c.r[7], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD594u); set32(c.r[6], ld32((c.r[2].w[0] + 12u)));  if (depth < kMaxDepth) unit_00B3(c, 231u, depth + 1u); else { c.pc = 0x003CDB98u; return; } if (c.pc != 0x003BD594u) [[unlikely]] return; }
L_003BD594:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003BD5B4; } }
    c.budget -= 1;
L_003BD5A0:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD5B0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 231u, depth + 1u); else { c.pc = 0x003CDB98u; return; } if (c.pc != 0x003BD5B0u) [[unlikely]] return; }
L_003BD5B0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003BD5B4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BD5C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B3(c, 243u, depth); }
L_003BD5D8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_003BD608; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD5F4u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00B3(c, 245u, depth + 1u); else { c.pc = 0x003CDD48u; return; } if (c.pc != 0x003BD5F4u) [[unlikely]] return; }
L_003BD5F4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B3(c, 246u, depth); }
L_003BD608:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD610u);  if (depth < kMaxDepth) unit_00B3(c, 245u, depth + 1u); else { c.pc = 0x003CDD48u; return; } if (c.pc != 0x003BD610u) [[unlikely]] return; }
L_003BD610:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B3(c, 246u, depth); }
L_003BD628:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B39F0u | kUnwind; return; } [[clang::musttail]] return unit_00AC(c, 204u, depth); }
L_003BD640:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD658u); set32(c.r[4], c.r[4].w[0] - 10712u);  if (depth < kMaxDepth) unit_00B1(c, 325u, depth + 1u); else { c.pc = 0x003C7DE0u; return; } if (c.pc != 0x003BD658u) [[unlikely]] return; }
L_003BD658:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[4], c.r[4].w[0] + 11792u);
    set32(c.r[5], c.r[5].w[0] - 4584u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B1(c, 157u, depth); }
L_003BD678:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD6A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 111u, depth + 1u); else { c.pc = 0x003D0D88u; return; } if (c.pc != 0x003BD6A8u) [[unlikely]] return; }
L_003BD6A8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD6B8u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 110u, depth + 1u); else { c.pc = 0x003D0D70u; return; } if (c.pc != 0x003BD6B8u) [[unlikely]] return; }
L_003BD6B8:
    set32(c.r[5], 0u + 1u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD6D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BD6D0u) [[unlikely]] return; }
L_003BD6D0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD6E8u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BD6E8u) [[unlikely]] return; }
L_003BD6E8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD6F8u); c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 258u, depth + 1u); else { c.pc = 0x003D2978u; return; } if (c.pc != 0x003BD6F8u) [[unlikely]] return; }
L_003BD6F8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD708u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 258u, depth + 1u); else { c.pc = 0x003D2978u; return; } if (c.pc != 0x003BD708u) [[unlikely]] return; }
L_003BD708:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[7], c.r[18].w[0] + c.r[19].w[0]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 11800u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD724u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003BD724u) [[unlikely]] return; }
L_003BD724:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[7], c.r[16].w[0] + c.r[17].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + c.r[19].w[0]);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD740u); set32(c.r[4], c.r[4].w[0] + 11832u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003BD740u) [[unlikely]] return; }
L_003BD740:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[18], c.r[18].w[0] + c.r[17].w[0]);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[6], c.r[18].w[0] + c.r[16].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 1u)));
    set32(c.r[4], c.r[4].w[0] + 11864u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 13;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010DCC0u | kUnwind; return; } [[clang::musttail]] return unit_0003(c, 243u, depth); }
L_003BD778:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], c.r[5].w[0] + 63u);
    set32(c.r[3], 0u - 64u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    set32(c.r[2], c.r[16].w[0] - c.r[5].w[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], c.r[6].w[0] - c.r[2].w[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.budget -= 13;
    { const bool t = c.r[19].sd[0] < 0; st64((c.r[29].w[0] + 32u), c.r[31].d[0]);  if (t) { goto L_003BD7BC; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);  goto L_003BD7C0; }
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] >= 0; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003BD7D0; } }
L_003BD7BC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 1;
L_003BD7C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD7C8u); set32(c.r[4], c.r[4].w[0] + 11888u);  if (depth < kMaxDepth) unit_00AC(c, 204u, depth + 1u); else { c.pc = 0x003B39F0u; return; } if (c.pc != 0x003BD7C8u) [[unlikely]] return; }
L_003BD7C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003BDA4C; } }
L_003BD7D0:
    c.r[2].d[0] = c.r[4].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 16u);  if (t) { goto L_003BD808; } }
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 23752u)));
    c.budget -= 10;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], c.r[4].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BD7D0u | kUnwind; return; } goto L_003BD7D0; }
    set32(c.r[3], 0u + 16u);
    c.budget -= 1;
L_003BD808:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003BDA4C; } }
    set32(c.r[2], c.r[4].w[0] << 1);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[6], 0u + 196u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[17], c.r[17].w[0] + 23752u);
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD840u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003BD840u) [[unlikely]] return; }
L_003BD840:
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[19].w[0]));
    set32(c.r[2], c.r[19].w[0] << 6);
    set32(c.r[10], 0u + 36u);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[8], 0u + 8192u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[9], 0u + 8288u);
    set32(c.r[2], c.r[2].w[0] - c.r[19].w[0]);
    set32(c.r[6], 0u + 36u);
    set32(c.r[2], c.r[2].w[0] << 6);
    st32((c.r[17].w[0] + 44u), c.r[16].w[0]);
    set32(c.r[5], c.r[18].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[5].w[0] - 292u);
    set32(c.r[5], c.r[5].w[0] + 1755u);
    c.r[7].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    if (c.r[7].d[0] != 0) c.r[3].d[0] = c.r[5].d[0];
    st32((c.r[17].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 11));
    st32((c.r[17].w[0] + 48u), c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] << 11);
    st32((c.r[17].w[0] + 52u), c.r[9].w[0]);
    set32(c.r[7], c.r[3].w[0] + c.r[10].w[0]);
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    st32((c.r[17].w[0] + 36u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 176u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 40u), c.r[10].w[0]);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD8BCu); st32((c.r[17].w[0] + 20u), 0u);  if (depth < kMaxDepth) unit_00B4(c, 157u, depth + 1u); else { c.pc = 0x003D1450u; return; } if (c.pc != 0x003BD8BCu) [[unlikely]] return; }
L_003BD8BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_003BD968; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD8D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 32u, depth + 1u); else { c.pc = 0x003BC520u; return; } if (c.pc != 0x003BD8D0u) [[unlikely]] return; }
L_003BD8D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_003BD968; } }
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003BD928; } }
    set32(c.r[18], c.r[17].w[0] + 24u);
    set32(c.r[6], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 2;
L_003BD8E8:
    set32(c.r[5], ld32((c.r[17].w[0] + 48u)));
    mmi::mult(c, 0, c.r[6].w[0], c.r[16].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[6], c.r[6].w[0] - c.r[5].w[0]);
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] << 1);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD910u); set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);  if (depth < kMaxDepth) unit_00B4(c, 157u, depth + 1u); else { c.pc = 0x003D1450u; return; } if (c.pc != 0x003BD910u) [[unlikely]] return; }
L_003BD910:
    c.r[3].d[0] = c.r[16].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { goto L_003BD968; } }
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[6], ld32((c.r[17].w[0] + 52u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BD8E8u | kUnwind; return; } goto L_003BD8E8; }
L_003BD928:
    set32(c.r[16], c.r[17].w[0] + 24u);
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD93Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 112u, depth + 1u); else { c.pc = 0x003B8A90u; return; } if (c.pc != 0x003BD93Cu) [[unlikely]] return; }
L_003BD93C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_003BD968; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD950u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 70u, depth + 1u); else { c.pc = 0x003B8720u; return; } if (c.pc != 0x003BD950u) [[unlikely]] return; }
L_003BD950:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_003BD968; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD960u); set32(c.r[4], ld32((c.r[17].w[0] + 16u)));  if (depth < kMaxDepth) unit_00B3(c, 255u, depth + 1u); else { c.pc = 0x003CDF10u; return; } if (c.pc != 0x003BD960u) [[unlikely]] return; }
L_003BD960:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0] + 148u), c.r[2].w[0]);  if (t) { goto L_003BD978; } }
L_003BD968:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD970u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 211u, depth + 1u); else { c.pc = 0x003BDAB8u; return; } if (c.pc != 0x003BD970u) [[unlikely]] return; }
L_003BD970:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003BDA4C; } }
L_003BD978:
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD984u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 266u, depth + 1u); else { c.pc = 0x003CE068u; return; } if (c.pc != 0x003BD984u) [[unlikely]] return; }
L_003BD984:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F590000u);
    c.r[1].d[0] = c.r[1].d[0] | 39321ull;
    c.f[1] = c.r[1].w[0];
    c.r[3].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[4], c.r[2].w[0] + 2047u);
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];
    set32(c.r[5], ld32((c.r[6].w[0] + 8344u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 11));
    st16((c.r[17].w[0] + 64u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], c.r[2].w[0] << 16);
    st16((c.r[17].w[0] + 60u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    st32((c.r[17].w[0] + 56u), c.r[5].w[0]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    c.budget -= 22;
    { const bool t = c.r[19].sd[0] <= 0; st16((c.r[17].w[0] + 62u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003BDA04; } }
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], 0u - 128u);
    set32(c.r[2], c.r[17].w[0] + 66u);
    c.budget -= 3;
L_003BD9E8:
    set32(c.r[16], c.r[16].w[0] - 1u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[2], c.r[2].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BD9E8u | kUnwind; return; } goto L_003BD9E8; } }
L_003BDA04:
    set32(c.r[16], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st16((c.r[17].w[0] + 70u), static_cast<std::uint16_t>(0u));
    st8((c.r[17].w[0] + 108u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[17].w[0] + 84u), 0u);
    st32((c.r[17].w[0] + 88u), 0u);
    st32((c.r[17].w[0] + 92u), 0u);
    st16((c.r[17].w[0] + 96u), static_cast<std::uint16_t>(0u));
    st32((c.r[17].w[0] + 100u), 0u);
    st16((c.r[17].w[0] + 104u), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0] + 106u), static_cast<std::uint16_t>(0u));
    st8((c.r[17].w[0] + 109u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st8((c.r[17].w[0] + 114u), static_cast<std::uint8_t>(0u));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDA44u); st32((c.r[17].w[0] + 136u), 0u);  if (depth < kMaxDepth) unit_00AF(c, 392u, depth + 1u); else { c.pc = 0x003BF2F0u; return; } if (c.pc != 0x003BDA44u) [[unlikely]] return; }
L_003BDA44:
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_003BDA4C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003BDA68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], ld32((c.r[2].w[0] + 8400u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003BDA84; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDA84u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BDA84u) [[unlikely]] return; }
L_003BDA84:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BDA90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], ld32((c.r[2].w[0] + 8404u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003BDAAC; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDAACu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BDAACu) [[unlikely]] return; }
L_003BDAAC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BDAB8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.budget -= 8;
    { const bool t = c.r[17].d[0] != 0ull; st64((c.r[29].w[0] + 32u), c.r[31].d[0]);  if (t) { goto L_003BDB00; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 11928u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B39F0u | kUnwind; return; } [[clang::musttail]] return unit_00AC(c, 204u, depth); }
L_003BDB00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDB08u);  if (depth < kMaxDepth) unit_00AF(c, 207u, depth + 1u); else { c.pc = 0x003BDA68u; return; } if (c.pc != 0x003BDB08u) [[unlikely]] return; }
L_003BDB08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDB10u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 209u, depth + 1u); else { c.pc = 0x003BDA90u; return; } if (c.pc != 0x003BDB10u) [[unlikely]] return; }
L_003BDB10:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 12u)));  goto L_003BDB2C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDB28u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 259u, depth + 1u); else { c.pc = 0x003BDFE0u; return; } if (c.pc != 0x003BDB28u) [[unlikely]] return; }
L_003BDB28:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 1;
L_003BDB2C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  goto L_003BDB40; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDB3Cu); st32((c.r[17].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_00AE(c, 71u, depth + 1u); else { c.pc = 0x003B8738u; return; } if (c.pc != 0x003BDB3Cu) [[unlikely]] return; }
L_003BDB3C:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_003BDB40:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], ld32((c.r[17].w[0] + 8u)));  goto L_003BDB54; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDB50u); st32((c.r[17].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_00AE(c, 121u, depth + 1u); else { c.pc = 0x003B8C08u; return; } if (c.pc != 0x003BDB50u) [[unlikely]] return; }
L_003BDB50:
    set32(c.r[16], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 1;
L_003BDB54:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003BDB74; } }
    st32((c.r[17].w[0] + 8u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDB6Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 71u, depth + 1u); else { c.pc = 0x003BC8E0u; return; } if (c.pc != 0x003BDB6Cu) [[unlikely]] return; }
L_003BDB6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDB74u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 35u, depth + 1u); else { c.pc = 0x003BC568u; return; } if (c.pc != 0x003BDB74u) [[unlikely]] return; }
L_003BDB74:
    set32(c.r[4], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003BDB88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDB88u); st32((c.r[17].w[0] + 148u), 0u);  if (depth < kMaxDepth) unit_00B3(c, 264u, depth + 1u); else { c.pc = 0x003CE018u; return; } if (c.pc != 0x003BDB88u) [[unlikely]] return; }
L_003BDB88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDB90u);  if (depth < kMaxDepth) unit_00AC(c, 155u, depth + 1u); else { c.pc = 0x003B1E00u; return; } if (c.pc != 0x003BDB90u) [[unlikely]] return; }
L_003BDB90:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));  goto L_003BDBB4; }
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[17].w[0] + 16u), 0u);
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDBB0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BDBB0u) [[unlikely]] return; }
L_003BDBB0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 1;
L_003BDBB4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_003BDC40; } }
    set32(c.r[18], c.r[17].w[0] + 128u);
    set32(c.r[16], c.r[17].w[0] + 120u);
    c.budget -= 3;
L_003BDBC8:
    set32(c.r[3], ld32((c.r[16].w[0] - 96u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_003BDBE8; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[16].w[0] - 96u), 0u);
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDBE8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BDBE8u) [[unlikely]] return; }
L_003BDBE8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0])));  goto L_003BDC0C; }
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDC08u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BDC08u) [[unlikely]] return; }
L_003BDC08:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_003BDC0C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));  goto L_003BDC2C; }
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[18].w[0]), 0u);
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDC28u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BDC28u) [[unlikely]] return; }
L_003BDC28:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 1;
L_003BDC2C:
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BDBC8u | kUnwind; return; } goto L_003BDBC8; } }
L_003BDC40:
    set32(c.r[4], ld32((c.r[17].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003BDC58; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDC54u); st32((c.r[17].w[0] + 116u), 0u);  if (depth < kMaxDepth) unit_00AB(c, 282u, depth + 1u); else { c.pc = 0x003AE210u; return; } if (c.pc != 0x003BDC54u) [[unlikely]] return; }
L_003BDC54:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003BDC58:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDC64u); set32(c.r[6], 0u + 196u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003BDC64u) [[unlikely]] return; }
L_003BDC64:
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B1E18u | kUnwind; return; } [[clang::musttail]] return unit_00AC(c, 156u, depth); }
L_003BDC88:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[2].w[0] + 23752u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], 0u + 15u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], 0u + 1u);
    c.budget -= 10;
L_003BDCB0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_003BDCC8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDCC4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 211u, depth + 1u); else { c.pc = 0x003BDAB8u; return; } if (c.pc != 0x003BDCC4u) [[unlikely]] return; }
L_003BDCC4:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_003BDCC8:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] + 196u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BDCB0u | kUnwind; return; } goto L_003BDCB0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003BDCE8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BDC88u | kUnwind; return; } goto L_003BDC88; }
L_003BDD00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 11;
    { const bool t = c.r[2].sd[0] <= 0; c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003BDD5C; } }
    set32(c.r[17], c.r[16].w[0] + 24u);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
L_003BDD38:
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDD4Cu); set32(c.r[18], c.r[18].w[0] + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BDD4Cu) [[unlikely]] return; }
L_003BDD4C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BDD38u | kUnwind; return; } goto L_003BDD38; }
L_003BDD5C:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDD68u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 126u, depth + 1u); else { c.pc = 0x003B8C70u; return; } if (c.pc != 0x003BDD68u) [[unlikely]] return; }
L_003BDD68:
    st32((c.r[16].w[0] + 20u), c.r[19].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDD74u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00AE(c, 133u, depth + 1u); else { c.pc = 0x003B8D30u; return; } if (c.pc != 0x003BDD74u) [[unlikely]] return; }
L_003BDD74:
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[4], 0u - 1u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 144u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st32((c.r[16].w[0] + 140u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 76u), 0u);
    st8((c.r[16].w[0] + 113u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 156u), 0u);
    st32((c.r[16].w[0] + 164u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 23748u)));
    c.budget -= 16;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[16].w[0] + 160u), c.r[2].w[0]);  if (t) { goto L_003BDDD0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE268u | kUnwind; return; } [[clang::musttail]] return unit_00AB(c, 286u, depth); }
L_003BDDD0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003BDDF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 62u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 60u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], c.r[5].w[0] << 11);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDE38u); set32(c.r[6], c.r[6].w[0] << 11);  if (depth < kMaxDepth) unit_00AF(c, 113u, depth + 1u); else { c.pc = 0x003BCF60u; return; } if (c.pc != 0x003BDE38u) [[unlikely]] return; }
L_003BDE38:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDE44u); set32(c.r[5], 0u + 25u);  if (depth < kMaxDepth) unit_00AF(c, 72u, depth + 1u); else { c.pc = 0x003BC8F0u; return; } if (c.pc != 0x003BDE44u) [[unlikely]] return; }
L_003BDE44:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDE54u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 71u, depth + 1u); else { c.pc = 0x003BC8E0u; return; } if (c.pc != 0x003BDE54u) [[unlikely]] return; }
L_003BDE54:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDE60u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 54u, depth + 1u); else { c.pc = 0x003BC708u; return; } if (c.pc != 0x003BDE60u) [[unlikely]] return; }
L_003BDE60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDE68u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00AF(c, 65u, depth + 1u); else { c.pc = 0x003BC828u; return; } if (c.pc != 0x003BDE68u) [[unlikely]] return; }
L_003BDE68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDE70u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00AF(c, 44u, depth + 1u); else { c.pc = 0x003BC668u; return; } if (c.pc != 0x003BDE70u) [[unlikely]] return; }
L_003BDE70:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDE88u); c.r[8].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 38u, depth + 1u); else { c.pc = 0x003BC5C0u; return; } if (c.pc != 0x003BDE88u) [[unlikely]] return; }
L_003BDE88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDE90u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00AF(c, 57u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x003BDE90u) [[unlikely]] return; }
L_003BDE90:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BDD00u | kUnwind; return; } goto L_003BDD00; }
L_003BDEB8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_003BDEDC; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_003BDEF8; } }
L_003BDEDC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 11968u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B39F0u | kUnwind; return; } [[clang::musttail]] return unit_00AC(c, 204u, depth); }
L_003BDEF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDF00u);  if (depth < kMaxDepth) unit_00AF(c, 259u, depth + 1u); else { c.pc = 0x003BDFE0u; return; } if (c.pc != 0x003BDF00u) [[unlikely]] return; }
L_003BDF00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDF08u);  if (depth < kMaxDepth) unit_00AC(c, 155u, depth + 1u); else { c.pc = 0x003B1E00u; return; } if (c.pc != 0x003BDF08u) [[unlikely]] return; }
L_003BDF08:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDF14u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 232u, depth + 1u); else { c.pc = 0x003BDD00u; return; } if (c.pc != 0x003BDF14u) [[unlikely]] return; }
L_003BDF14:
    set32(c.r[2], 0u + 3u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDF28u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00AF(c, 392u, depth + 1u); else { c.pc = 0x003BF2F0u; return; } if (c.pc != 0x003BDF28u) [[unlikely]] return; }
L_003BDF28:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B1E18u | kUnwind; return; } [[clang::musttail]] return unit_00AC(c, 156u, depth); }
L_003BDF40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDF54u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 155u, depth + 1u); else { c.pc = 0x003B1E00u; return; } if (c.pc != 0x003BDF54u) [[unlikely]] return; }
L_003BDF54:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDF60u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 76u, depth + 1u); else { c.pc = 0x003B87A0u; return; } if (c.pc != 0x003BDF60u) [[unlikely]] return; }
L_003BDF60:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDF6Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 77u, depth + 1u); else { c.pc = 0x003B87B8u; return; } if (c.pc != 0x003BDF6Cu) [[unlikely]] return; }
L_003BDF6C:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDF78u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B4(c, 60u, depth + 1u); else { c.pc = 0x003D0800u; return; } if (c.pc != 0x003BDF78u) [[unlikely]] return; }
L_003BDF78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDF80u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00AE(c, 135u, depth + 1u); else { c.pc = 0x003B8D60u; return; } if (c.pc != 0x003BDF80u) [[unlikely]] return; }
L_003BDF80:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 116u)));  goto L_003BDFB4; }
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 116u)));  goto L_003BDFB4; }
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[16].w[0] + 20u), 0u);
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDFB0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BDFB0u) [[unlikely]] return; }
L_003BDFB0:
    set32(c.r[4], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 1;
L_003BDFB4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st8((c.r[16].w[0] + 172u), static_cast<std::uint8_t>(0u));  goto L_003BDFC8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDFC4u);  if (depth < kMaxDepth) unit_00AB(c, 300u, depth + 1u); else { c.pc = 0x003AE408u; return; } if (c.pc != 0x003BDFC4u) [[unlikely]] return; }
L_003BDFC4:
    st8((c.r[16].w[0] + 172u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_003BDFC8:
    st32((c.r[16].w[0] + 20u), 0u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B1E18u | kUnwind; return; } [[clang::musttail]] return unit_00AC(c, 156u, depth); }
L_003BDFE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_003BE018; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 12008u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B39F0u | kUnwind; return; } [[clang::musttail]] return unit_00AC(c, 204u, depth); }
L_003BE018:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[17], c.r[2].w[0] + 8408u);
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  goto L_003BE044; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE034u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00AE(c, 135u, depth + 1u); else { c.pc = 0x003B8D60u; return; } if (c.pc != 0x003BE034u) [[unlikely]] return; }
L_003BE034:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE040u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BE040u) [[unlikely]] return; }
L_003BE040:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_003BE044:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));  goto L_003BE058; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE054u);  if (depth < kMaxDepth) unit_00AF(c, 44u, depth + 1u); else { c.pc = 0x003BC668u; return; } if (c.pc != 0x003BE054u) [[unlikely]] return; }
L_003BE054:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.budget -= 1;
L_003BE058:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_003BE08C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE06Cu); set32(c.r[4], ld32((c.r[16].w[0] + 148u)));  if (depth < kMaxDepth) unit_00B3(c, 276u, depth + 1u); else { c.pc = 0x003CE2D8u; return; } if (c.pc != 0x003BE06Cu) [[unlikely]] return; }
L_003BE06C:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003BE088; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE088u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BE088u) [[unlikely]] return; }
L_003BE088:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003BE08C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BDF40u | kUnwind; return; } goto L_003BDF40; }
L_003BE0A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003BE0C0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE0B8u); set32(c.r[4], c.r[4].w[0] + 12048u);  if (depth < kMaxDepth) unit_00AC(c, 204u, depth + 1u); else { c.pc = 0x003B39F0u; return; } if (c.pc != 0x003BE0B8u) [[unlikely]] return; }
L_003BE0B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003BE0C4; } }
L_003BE0C0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 1;
L_003BE0C4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BE0D0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 2u);  goto L_003BE0E8; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 5994u);  if (t) { goto L_003BE0F8; } }
L_003BE0E8:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);  goto L_003BE100; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], 0u + 5000u);
    c.budget -= 2;
L_003BE0F8:
    st32((c.r[3].w[0] + 8392u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.budget -= 2;
L_003BE100:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0] + 8336u), c.r[4].w[0]);  c.pc = t; return; }
L_003BE108:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[3], c.r[2].w[0] << 24);
    set32(c.r[2], c.r[2].w[0] - 3u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 24));  if (t) { goto L_003BE150; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE148u); set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  if (depth < kMaxDepth) unit_00AE(c, 78u, depth + 1u); else { c.pc = 0x003B87D0u; return; } if (c.pc != 0x003BE148u) [[unlikely]] return; }
L_003BE148:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 136u)));  if (t) { goto L_003BE1AC; } }
L_003BE150:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_003BE1A0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE164u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00AE(c, 235u, depth + 1u); else { c.pc = 0x003B9950u; return; } if (c.pc != 0x003BE164u) [[unlikely]] return; }
L_003BE164:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE170u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 230u, depth + 1u); else { c.pc = 0x003B98D8u; return; } if (c.pc != 0x003BE170u) [[unlikely]] return; }
L_003BE170:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE17Cu); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 232u, depth + 1u); else { c.pc = 0x003B9908u; return; } if (c.pc != 0x003BE17Cu) [[unlikely]] return; }
L_003BE17C:
    set32(c.r[3], 0u + 16u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x003BE188u);  goto L_003BE18C; }
L_003BE18C:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[3].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003BE1A8; } }
L_003BE1A0:
    st32((c.r[17].w[0]), 0u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_003BE1A8:
    set32(c.r[3], ld32((c.r[16].w[0] + 136u)));
    c.budget -= 1;
L_003BE1AC:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003BE1D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 1u));
    set32(c.r[3], c.r[2].w[0] << 24);
    set32(c.r[2], c.r[2].w[0] - 3u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 24));  if (t) { goto L_003BE258; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE214u); set32(c.r[4], ld32((c.r[18].w[0] + 4u)));  if (depth < kMaxDepth) unit_00AE(c, 230u, depth + 1u); else { c.pc = 0x003B98D8u; return; } if (c.pc != 0x003BE214u) [[unlikely]] return; }
L_003BE214:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE220u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 214u, depth + 1u); else { c.pc = 0x003B9818u; return; } if (c.pc != 0x003BE220u) [[unlikely]] return; }
L_003BE220:
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE22Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 79u, depth + 1u); else { c.pc = 0x003B87E8u; return; } if (c.pc != 0x003BE22Cu) [[unlikely]] return; }
L_003BE22C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE23Cu); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 330u, depth + 1u); else { c.pc = 0x003BEBB0u; return; } if (c.pc != 0x003BE23Cu) [[unlikely]] return; }
L_003BE23C:
    set32(c.r[3], ld32((c.r[18].w[0] + 164u)));
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] - c.r[17].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.r[16].w[0]);  if (t) { goto L_003BE2C0; } }
    c.budget -= 1;
L_003BE258:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_003BE2B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE26Cu); set32(c.r[4], ld32((c.r[18].w[0] + 4u)));  if (depth < kMaxDepth) unit_00AE(c, 235u, depth + 1u); else { c.pc = 0x003B9950u; return; } if (c.pc != 0x003BE26Cu) [[unlikely]] return; }
L_003BE26C:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE278u); st32((c.r[19].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 230u, depth + 1u); else { c.pc = 0x003B98D8u; return; } if (c.pc != 0x003BE278u) [[unlikely]] return; }
L_003BE278:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE284u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 232u, depth + 1u); else { c.pc = 0x003B9908u; return; } if (c.pc != 0x003BE284u) [[unlikely]] return; }
L_003BE284:
    set32(c.r[3], 0u + 16u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x003BE290u);  goto L_003BE294; }
L_003BE294:
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[3].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.r[2].w[0]);  if (t) { goto L_003BE2C0; } }
    c.budget -= 1;
L_003BE2B8:
    st32((c.r[19].w[0]), 0u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_003BE2C0:
    set32(c.r[3], ld32((c.r[18].w[0] + 136u)));
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003BE2F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] + 8348u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0]), c.r[2].w[0]);  c.pc = t; return; }
L_003BE308:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[22].d[0]);
    c.budget -= 13;
    { const bool t = c.r[18].d[0] == 0ull; st64((c.r[29].w[0] + 72u), c.r[31].d[0]);  if (t) { goto L_003BE34C; } }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);  goto L_003BE350; }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x00430000u);  if (t) { goto L_003BE360; } }
L_003BE34C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 1;
L_003BE350:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE358u); set32(c.r[4], c.r[4].w[0] + 12088u);  if (depth < kMaxDepth) unit_00AC(c, 204u, depth + 1u); else { c.pc = 0x003B39F0u; return; } if (c.pc != 0x003BE358u) [[unlikely]] return; }
L_003BE358:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003BE5D8; } }
L_003BE360:
    set32(c.r[2], ld32((c.r[16].w[0] + 8336u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].sd[0] = static_cast<std::int32_t>(0x00430000u);  if (t) { goto L_003BE380; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE374u);  if (depth < kMaxDepth) unit_00AF(c, 273u, depth + 1u); else { c.pc = 0x003BE1D0u; return; } if (c.pc != 0x003BE374u) [[unlikely]] return; }
L_003BE374:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003BE5D8; } }
    c.budget -= 1;
L_003BE380:
    st32((c.r[17].w[0] + 8396u), 0u);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 1u));
    set32(c.r[2], c.r[3].w[0] - 3u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] << 24);  if (t) { goto L_003BE518; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 114u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 156u)));  goto L_003BE3D0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], ld32((c.r[18].w[0] + 160u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 23748u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 156u)));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 11;
L_003BE3D0:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 4u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE3E8u); c.r[22].sd[0] = static_cast<std::int32_t>(0x00430000u);  if (depth < kMaxDepth) unit_00AF(c, 273u, depth + 1u); else { c.pc = 0x003BE1D0u; return; } if (c.pc != 0x003BE3E8u) [[unlikely]] return; }
L_003BE3E8:
    c.f[1] = ld32((c.r[19].w[0]));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[20], c.r[22].w[0] + 8392u);
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[6], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[7], ld32((c.r[20].w[0])));
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[3] = c.r[6].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.f[5] = c.r[1].w[0];
    c.f[2] = c.r[7].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[4] = c.r[1].w[0];
    fpu_div(c, 0u, c.f[0], c.f[3]);
    fpu_div(c, 1u, c.f[1], c.f[2]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[1] = fp::mul(c.f[0], c.f[5]);
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[1]));
    c.budget -= 27;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[17].w[0] + 8396u), c.f[1]);  if (t) { goto L_003BE468; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC2700000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[2], ld32((c.r[18].w[0] + 136u)));  goto L_003BE5C0; }
L_003BE468:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] + 8352u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; set32(c.r[16], c.r[16].w[0] + 8336u);  if (t) { goto L_003BE4A8; } }
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[16].w[0])));
    set32(c.r[6], c.r[29].w[0] + 4u);
    st32((c.r[16].w[0]), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE494u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 282u, depth + 1u); else { c.pc = 0x003BE308u; return; } if (c.pc != 0x003BE494u) [[unlikely]] return; }
L_003BE494:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE49Cu); st32((c.r[16].w[0]), c.r[17].w[0]);  if (depth < kMaxDepth) unit_00AF(c, 281u, depth + 1u); else { c.pc = 0x003BE2F0u; return; } if (c.pc != 0x003BE49Cu) [[unlikely]] return; }
L_003BE49C:
    set32(c.r[7], ld32((c.r[20].w[0])));
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[6], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
L_003BE4A8:
    c.f[1] = c.r[6].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[3] = c.r[1].w[0];
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[2] = c.r[7].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[1]);
    c.budget -= 17;
    if (!(c.fcr31 & kFpuCondition)) { st32((c.r[18].w[0] + 156u), c.r[3].w[0]);  goto L_003BE504; }
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[18].w[0] + 156u), c.r[3].w[0]);
    c.budget -= 6;
L_003BE504:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 23748u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 160u), c.r[2].w[0]);  if (t) { goto L_003BE5BC; } }
    c.budget -= 1;
L_003BE518:
    set32(c.r[3], 0u + 5u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[19].w[0]), 0u);  goto L_003BE5B8; }
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE534u); c.r[22].sd[0] = static_cast<std::int32_t>(0x00430000u);  if (depth < kMaxDepth) unit_00AE(c, 235u, depth + 1u); else { c.pc = 0x003B9950u; return; } if (c.pc != 0x003BE534u) [[unlikely]] return; }
L_003BE534:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE540u); st32((c.r[29].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 230u, depth + 1u); else { c.pc = 0x003B98D8u; return; } if (c.pc != 0x003BE540u) [[unlikely]] return; }
L_003BE540:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE54Cu); st32((c.r[29].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 232u, depth + 1u); else { c.pc = 0x003B9908u; return; } if (c.pc != 0x003BE54Cu) [[unlikely]] return; }
L_003BE54C:
    set32(c.r[3], 0u + 16u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x003BE558u);  goto L_003BE55C; }
L_003BE55C:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.f[2] = ld32((c.r[29].w[0] + 4u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = ld32((c.r[22].w[0] + 8392u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[3].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[29].w[0]), c.r[5].w[0]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[1]);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 156u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 22;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.r[3].w[0]);  if (t) { goto L_003BE5BC; } }
    c.budget -= 1;
L_003BE5B8:
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.budget -= 1;
L_003BE5BC:
    set32(c.r[2], ld32((c.r[18].w[0] + 136u)));
    c.budget -= 1;
L_003BE5C0:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[22].w[0] + 8392u)));
    st32((c.r[21].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
L_003BE5D8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003BE600:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE614u); set32(c.r[6], c.r[29].w[0] + 4u);  if (depth < kMaxDepth) unit_00AF(c, 282u, depth + 1u); else { c.pc = 0x003BE308u; return; } if (c.pc != 0x003BE614u) [[unlikely]] return; }
L_003BE614:
    c.f[1] = ld32((c.r[29].w[0]));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[0] = c.r[1].w[0];
    c.f[2] = ld32((c.r[29].w[0] + 4u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    fpu_div(c, 1u, c.f[1], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[0]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003BE650:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003BE670; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE668u); set32(c.r[4], c.r[4].w[0] + 12128u);  if (depth < kMaxDepth) unit_00AC(c, 204u, depth + 1u); else { c.pc = 0x003B39F0u; return; } if (c.pc != 0x003BE668u) [[unlikely]] return; }
L_003BE668:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003BE690; } }
L_003BE670:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003BE690; }
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9950u | kUnwind; return; } [[clang::musttail]] return unit_00AE(c, 235u, depth); }
L_003BE690:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BE6A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003BE6C0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE6B8u); set32(c.r[4], c.r[4].w[0] + 12176u);  if (depth < kMaxDepth) unit_00AC(c, 204u, depth + 1u); else { c.pc = 0x003B39F0u; return; } if (c.pc != 0x003BE6B8u) [[unlikely]] return; }
L_003BE6B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003BE6E0; } }
L_003BE6C0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003BE6E0; }
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B98D8u | kUnwind; return; } [[clang::musttail]] return unit_00AE(c, 230u, depth); }
L_003BE6E0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BE6F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003BE710; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE708u); set32(c.r[4], c.r[4].w[0] + 12224u);  if (depth < kMaxDepth) unit_00AC(c, 204u, depth + 1u); else { c.pc = 0x003B39F0u; return; } if (c.pc != 0x003BE708u) [[unlikely]] return; }
L_003BE708:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003BE730; } }
L_003BE710:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003BE730; }
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B98F0u | kUnwind; return; } [[clang::musttail]] return unit_00AE(c, 231u, depth); }
L_003BE730:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BE740:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003BE760; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE758u); set32(c.r[4], c.r[4].w[0] + 12272u);  if (depth < kMaxDepth) unit_00AC(c, 204u, depth + 1u); else { c.pc = 0x003B39F0u; return; } if (c.pc != 0x003BE758u) [[unlikely]] return; }
L_003BE758:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003BE780; } }
L_003BE760:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003BE780; }
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9B58u | kUnwind; return; } [[clang::musttail]] return unit_00AE(c, 252u, depth); }
L_003BE780:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BE790:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003BE7B0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE7A8u); set32(c.r[4], c.r[4].w[0] + 12320u);  if (depth < kMaxDepth) unit_00AC(c, 204u, depth + 1u); else { c.pc = 0x003B39F0u; return; } if (c.pc != 0x003BE7A8u) [[unlikely]] return; }
L_003BE7A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003BE7D0; } }
L_003BE7B0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003BE7D0; }
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9B60u | kUnwind; return; } [[clang::musttail]] return unit_00AE(c, 253u, depth); }
L_003BE7D0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BE7E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 24u), c.r[31].d[0]);  if (t) { goto L_003BE828; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 12368u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B39F0u | kUnwind; return; } [[clang::musttail]] return unit_00AC(c, 204u, depth); }
L_003BE828:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE830u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00AE(c, 247u, depth + 1u); else { c.pc = 0x003B9A98u; return; } if (c.pc != 0x003BE830u) [[unlikely]] return; }
L_003BE830:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], 0u - 128u);
    set32(c.r[7], c.r[17].w[0] << 1);
    c.r[3].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    set32(c.r[7], c.r[7].w[0] + c.r[16].w[0]);
    if (c.r[3].d[0] == 0) c.r[2].d[0] = 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    st16((c.r[7].w[0] + 66u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 12416u);  if (t) { goto L_003BE878; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE870u); set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  if (depth < kMaxDepth) unit_00AE(c, 89u, depth + 1u); else { c.pc = 0x003B88C8u; return; } if (c.pc != 0x003BE870u) [[unlikely]] return; }
L_003BE870:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003BE884; } }
L_003BE878:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE880u);  if (depth < kMaxDepth) unit_00AC(c, 204u, depth + 1u); else { c.pc = 0x003B39F0u; return; } if (c.pc != 0x003BE880u) [[unlikely]] return; }
L_003BE880:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003BE884:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003BE898:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], c.r[5].w[0] << 1);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003BE8C0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE8B4u); set32(c.r[4], c.r[4].w[0] + 12464u);  if (depth < kMaxDepth) unit_00AC(c, 204u, depth + 1u); else { c.pc = 0x003B39F0u; return; } if (c.pc != 0x003BE8B4u) [[unlikely]] return; }
L_003BE8B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003BE8C8; } }
    c.budget -= 1;
L_003BE8C0:
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 66u)));
    c.budget -= 2;
L_003BE8C8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BE8D8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_003BE908; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 12512u);
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B39F0u | kUnwind; return; } [[clang::musttail]] return unit_00AC(c, 204u, depth); }
L_003BE908:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE910u); set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  if (depth < kMaxDepth) unit_00AE(c, 90u, depth + 1u); else { c.pc = 0x003B88E0u; return; } if (c.pc != 0x003BE910u) [[unlikely]] return; }
L_003BE910:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE918u); set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  if (depth < kMaxDepth) unit_00AE(c, 95u, depth + 1u); else { c.pc = 0x003B8948u; return; } if (c.pc != 0x003BE918u) [[unlikely]] return; }
L_003BE918:
    st16((c.r[16].w[0] + 70u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BE930:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003BE950; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE948u); set32(c.r[4], c.r[4].w[0] + 12560u);  if (depth < kMaxDepth) unit_00AC(c, 204u, depth + 1u); else { c.pc = 0x003B39F0u; return; } if (c.pc != 0x003BE948u) [[unlikely]] return; }
L_003BE948:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003BE954; } }
L_003BE950:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 70u)));
    c.budget -= 1;
L_003BE954:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BE960:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.budget -= 6;
    { const bool t = c.r[17].d[0] != 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_003BE998; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 12608u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B39F0u | kUnwind; return; } [[clang::musttail]] return unit_00AC(c, 204u, depth); }
L_003BE998:
    st16((c.r[17].w[0] + 64u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE9A8u); set32(c.r[16], ld32((c.r[17].w[0] + 12u)));  if (depth < kMaxDepth) unit_00AE(c, 244u, depth + 1u); else { c.pc = 0x003B9A40u; return; } if (c.pc != 0x003BE9A8u) [[unlikely]] return; }
L_003BE9A8:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 64u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B88B0u | kUnwind; return; } [[clang::musttail]] return unit_00AE(c, 88u, depth); }
L_003BE9C8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003BE9E8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE9E0u); set32(c.r[4], c.r[4].w[0] + 12656u);  if (depth < kMaxDepth) unit_00AC(c, 204u, depth + 1u); else { c.pc = 0x003B39F0u; return; } if (c.pc != 0x003BE9E0u) [[unlikely]] return; }
L_003BE9E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003BE9EC; } }
L_003BE9E8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 64u)));
    c.budget -= 1;
L_003BE9EC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BE9F8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEA08u); set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  if (depth < kMaxDepth) unit_00AE(c, 244u, depth + 1u); else { c.pc = 0x003B9A40u; return; } if (c.pc != 0x003BEA08u) [[unlikely]] return; }
L_003BEA08:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BEA18:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEA28u); set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  if (depth < kMaxDepth) unit_00AE(c, 247u, depth + 1u); else { c.pc = 0x003B9A98u; return; } if (c.pc != 0x003BEA28u) [[unlikely]] return; }
L_003BEA28:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BEA38:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9B00u | kUnwind; return; } [[clang::musttail]] return unit_00AE(c, 250u, depth); }
L_003BEA50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0] + 8344u), c.r[4].w[0]);  c.pc = t; return; }
L_003BEA60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003BEA80; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 12704u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B39F0u | kUnwind; return; } [[clang::musttail]] return unit_00AC(c, 204u, depth); }
L_003BEA80:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[4].w[0] + 56u), c.r[5].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BEA90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != 0ull; c.r[8].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003BEAB8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 12752u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B39F0u | kUnwind; return; } [[clang::musttail]] return unit_00AC(c, 204u, depth); }
L_003BEAB8:
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 60u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[0] = fp::mul(c.f[12], c.f[0]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[1]);
    set32(c.r[4], c.r[3].w[0] + 31u);
    c.r[2].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[3].d[0] = c.r[4].d[0];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    mmi::mult(c, 0, c.r[3].w[0], c.r[8].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[2].w[0] + 2047u);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[3].d[0] = c.r[4].d[0];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 11));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[5].d[0] = c.r[3].d[0];
    st16((c.r[7].w[0] + 62u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BEB20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003BEB40; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 12800u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B39F0u | kUnwind; return; } [[clang::musttail]] return unit_00AC(c, 204u, depth); }
L_003BEB40:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st16((c.r[4].w[0] + 62u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BEB50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003BEB70; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEB68u); set32(c.r[4], c.r[4].w[0] + 12848u);  if (depth < kMaxDepth) unit_00AC(c, 204u, depth + 1u); else { c.pc = 0x003B39F0u; return; } if (c.pc != 0x003BEB68u) [[unlikely]] return; }
L_003BEB68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003BEBA4; } }
L_003BEB70:
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_003BEBA0; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEB8Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BEB8Cu) [[unlikely]] return; }
L_003BEB8C:
    set32(c.r[4], c.r[2].w[0] + 2047u);
    c.r[3].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 11));  if (t) { goto L_003BEBA4; } }
L_003BEBA0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003BEBA4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BEBB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003BEBC4; } }
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] >= 0; set32(c.r[2], c.r[5].w[0] << 2);  if (t) { goto L_003BEBD8; } }
L_003BEBC4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEBD0u); set32(c.r[4], c.r[4].w[0] + 12896u);  if (depth < kMaxDepth) unit_00AC(c, 204u, depth + 1u); else { c.pc = 0x003B39F0u; return; } if (c.pc != 0x003BEBD0u) [[unlikely]] return; }
L_003BEBD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003BEC0C; } }
L_003BEBD8:
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003BEC08; } }
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEBF8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BEBF8u) [[unlikely]] return; }
L_003BEBF8:
    set32(c.r[3], c.r[2].w[0] >> 31);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_003BEC0C; } }
L_003BEC08:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003BEC0C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BEC18:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 32u), c.f[20]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.f[20] = 0u;
    c.budget -= 9;
    { const bool t = c.r[18].d[0] != 0ull; st64((c.r[29].w[0] + 24u), c.r[31].d[0]);  if (t) { goto L_003BEC58; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEC48u); set32(c.r[4], c.r[4].w[0] + 12944u);  if (depth < kMaxDepth) unit_00AC(c, 204u, depth + 1u); else { c.pc = 0x003B39F0u; return; } if (c.pc != 0x003BEC48u) [[unlikely]] return; }
L_003BEC48:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[1].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003BECE4; } }
L_003BEC58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEC60u);  if (depth < kMaxDepth) unit_00AF(c, 265u, depth + 1u); else { c.pc = 0x003BE0A0u; return; } if (c.pc != 0x003BEC60u) [[unlikely]] return; }
L_003BEC60:
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.f[0] = c.f[20];  if (t) { goto L_003BECE0; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_003BECE0; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEC88u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BEC88u) [[unlikely]] return; }
L_003BEC88:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEC94u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 297u, depth + 1u); else { c.pc = 0x003BE6F0u; return; } if (c.pc != 0x003BEC94u) [[unlikely]] return; }
L_003BEC94:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BECA0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 295u, depth + 1u); else { c.pc = 0x003BE6A0u; return; } if (c.pc != 0x003BECA0u) [[unlikely]] return; }
L_003BECA0:
    set32(c.r[3], c.r[17].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[3], c.r[3].w[0] << 1);
    mmi::div(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x003BECBCu);  goto L_003BECC0; }
L_003BECC0:
    c.r[16].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[16].w[0] << 5);
    c.f[0] = c.r[16].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 20u, c.f[0], c.f[1]);
    c.f[0] = c.f[20];
    c.budget -= 8;
L_003BECE0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003BECE4:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.f[20] = ld32((c.r[29].w[0] + 32u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003BED00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_003BED28; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BED20u); set32(c.r[4], c.r[4].w[0] + 13000u);  if (depth < kMaxDepth) unit_00AC(c, 204u, depth + 1u); else { c.pc = 0x003B39F0u; return; } if (c.pc != 0x003BED20u) [[unlikely]] return; }
L_003BED20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003BED5C; } }
L_003BED28:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_003BED58; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BED44u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BED44u) [[unlikely]] return; }
L_003BED44:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 62u)));
    set32(c.r[3], c.r[3].w[0] << 11);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_003BED5C; } }
L_003BED58:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003BED5C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BED70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 109u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_003BED78:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003BED98; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BED90u); set32(c.r[4], c.r[4].w[0] + 13048u);  if (depth < kMaxDepth) unit_00AC(c, 204u, depth + 1u); else { c.pc = 0x003B39F0u; return; } if (c.pc != 0x003BED90u) [[unlikely]] return; }
L_003BED90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003BEDA4; } }
L_003BED98:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 5ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_003BEDA4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BEDB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEDD4u); set32(c.r[17], c.r[19].w[0] + 8340u);  if (depth < kMaxDepth) unit_00AC(c, 155u, depth + 1u); else { c.pc = 0x003B1E00u; return; } if (c.pc != 0x003BEDD4u) [[unlikely]] return; }
L_003BEDD4:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003BEDF8; } }
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B1E18u | kUnwind; return; } [[clang::musttail]] return unit_00AC(c, 156u, depth); }
L_003BEDF8:
    set32(c.r[2], 0u + 1u);
    set32(c.r[18], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEE08u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AC(c, 156u, depth + 1u); else { c.pc = 0x003B1E18u; return; } if (c.pc != 0x003BEE08u) [[unlikely]] return; }
L_003BEE08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEE10u);  if (depth < kMaxDepth) unit_00AC(c, 155u, depth + 1u); else { c.pc = 0x003B1E00u; return; } if (c.pc != 0x003BEE10u) [[unlikely]] return; }
L_003BEE10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEE18u);  if (depth < kMaxDepth) unit_00AE(c, 210u, depth + 1u); else { c.pc = 0x003B97B0u; return; } if (c.pc != 0x003BEE18u) [[unlikely]] return; }
L_003BEE18:
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[16], c.r[3].w[0] + 23752u);
    set32(c.r[17], 0u + 15u);
    c.budget -= 6;
L_003BEE30:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_003BEE48; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEE44u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B0(c, 143u, depth + 1u); else { c.pc = 0x003C0E68u; return; } if (c.pc != 0x003BEE44u) [[unlikely]] return; }
L_003BEE44:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_003BEE48:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] + 196u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BEE30u | kUnwind; return; } goto L_003BEE30; } }
    set32(c.r[16], c.r[19].w[0] + 8340u);
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEE60u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 84u, depth + 1u); else { c.pc = 0x003B8850u; return; } if (c.pc != 0x003BEE60u) [[unlikely]] return; }
L_003BEE60:
    st32((c.r[16].w[0]), 0u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B1E18u | kUnwind; return; } [[clang::musttail]] return unit_00AC(c, 156u, depth); }
L_003BEE80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BEDB0u | kUnwind; return; } goto L_003BEDB0; }
L_003BEE98:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003BEEB8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEEB0u); set32(c.r[4], c.r[4].w[0] + 13096u);  if (depth < kMaxDepth) unit_00AC(c, 204u, depth + 1u); else { c.pc = 0x003B39F0u; return; } if (c.pc != 0x003BEEB0u) [[unlikely]] return; }
L_003BEEB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003BEEBC; } }
L_003BEEB8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 96u)));
    c.budget -= 1;
L_003BEEBC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BEEC8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003BEEE8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 13144u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B39F0u | kUnwind; return; } [[clang::musttail]] return unit_00AC(c, 204u, depth); }
L_003BEEE8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st16((c.r[4].w[0] + 106u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 96u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 100u), 0u);
    st16((c.r[4].w[0] + 104u), static_cast<std::uint16_t>(0u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BEF08:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003BEF28; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEF20u); set32(c.r[4], c.r[4].w[0] + 13192u);  if (depth < kMaxDepth) unit_00AC(c, 204u, depth + 1u); else { c.pc = 0x003B39F0u; return; } if (c.pc != 0x003BEF20u) [[unlikely]] return; }
L_003BEF20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003BEF2C; } }
L_003BEF28:
    set32(c.r[2], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 1;
L_003BEF2C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BEF38:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003BEF58; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 13240u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B39F0u | kUnwind; return; } [[clang::musttail]] return unit_00AC(c, 204u, depth); }
L_003BEF58:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st8((c.r[4].w[0] + 108u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BEF68:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003BEF88; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEF80u); set32(c.r[4], c.r[4].w[0] + 13288u);  if (depth < kMaxDepth) unit_00AC(c, 204u, depth + 1u); else { c.pc = 0x003B39F0u; return; } if (c.pc != 0x003BEF80u) [[unlikely]] return; }
L_003BEF80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003BEF8C; } }
L_003BEF88:
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 1;
L_003BEF8C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BEF98:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003BEFB8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 13336u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B39F0u | kUnwind; return; } [[clang::musttail]] return unit_00AC(c, 204u, depth); }
L_003BEFB8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st8((c.r[4].w[0] + 112u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BEFC8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003BEFE8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEFE0u); set32(c.r[4], c.r[4].w[0] + 13392u);  if (depth < kMaxDepth) unit_00AC(c, 204u, depth + 1u); else { c.pc = 0x003B39F0u; return; } if (c.pc != 0x003BEFE0u) [[unlikely]] return; }
L_003BEFE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003BEFEC; } }
L_003BEFE8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 113u)));
    c.budget -= 1;
L_003BEFEC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BEFF8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.budget -= 8;
    { const bool t = c.r[18].d[0] != 0ull; st64((c.r[29].w[0] + 40u), c.r[31].d[0]);  if (t) { goto L_003BF030; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF024u); set32(c.r[4], c.r[4].w[0] + 13448u);  if (depth < kMaxDepth) unit_00AC(c, 204u, depth + 1u); else { c.pc = 0x003B39F0u; return; } if (c.pc != 0x003BF024u) [[unlikely]] return; }
L_003BF024:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003BF110; } }
    c.budget -= 1;
L_003BF030:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 114u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));  if (t) { goto L_003BF10C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF044u);  if (depth < kMaxDepth) unit_00AC(c, 155u, depth + 1u); else { c.pc = 0x003B1E00u; return; } if (c.pc != 0x003BF044u) [[unlikely]] return; }
L_003BF044:
    set32(c.r[2], c.r[17].w[0] - 3u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st8((c.r[18].w[0] + 114u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (t) { goto L_003BF104; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[4], ld32((c.r[18].w[0] + 12u)));  if (t) { goto L_003BF070; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF068u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 77u, depth + 1u); else { c.pc = 0x003B87B8u; return; } if (c.pc != 0x003BF068u) [[unlikely]] return; }
L_003BF068:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x00430000u);  if (t) { goto L_003BF088; } }
L_003BF070:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF078u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00AE(c, 77u, depth + 1u); else { c.pc = 0x003B87B8u; return; } if (c.pc != 0x003BF078u) [[unlikely]] return; }
L_003BF078:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 23748u)));
    st32((c.r[18].w[0] + 160u), c.r[3].w[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.budget -= 4;
L_003BF088:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 8336u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[16].w[0])));
    set32(c.r[6], c.r[29].w[0] + 4u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF0A4u); st32((c.r[16].w[0]), 0u);  if (depth < kMaxDepth) unit_00AF(c, 282u, depth + 1u); else { c.pc = 0x003BE308u; return; } if (c.pc != 0x003BF0A4u) [[unlikely]] return; }
L_003BF0A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.f[0] = ld32((c.r[29].w[0]));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[3] = c.r[1].w[0];
    c.f[2] = ld32((c.r[29].w[0] + 4u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = ld32((c.r[2].w[0] + 8392u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[1]);
    c.budget -= 18;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0]), c.r[17].w[0]);  if (t) { goto L_003BF100; } }
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 5;
L_003BF100:
    st32((c.r[18].w[0] + 156u), c.r[3].w[0]);
    c.budget -= 1;
L_003BF104:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF10Cu);  if (depth < kMaxDepth) unit_00AC(c, 156u, depth + 1u); else { c.pc = 0x003B1E18u; return; } if (c.pc != 0x003BF10Cu) [[unlikely]] return; }
L_003BF10C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003BF110:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003BF128:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003BF148; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF140u); set32(c.r[4], c.r[4].w[0] + 13488u);  if (depth < kMaxDepth) unit_00AC(c, 204u, depth + 1u); else { c.pc = 0x003B39F0u; return; } if (c.pc != 0x003BF140u) [[unlikely]] return; }
L_003BF140:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003BF14C; } }
L_003BF148:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 114u)));
    c.budget -= 1;
L_003BF14C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BF158:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B89A0u | kUnwind; return; } [[clang::musttail]] return unit_00AE(c, 102u, depth); }
L_003BF170:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B89A8u | kUnwind; return; } [[clang::musttail]] return unit_00AE(c, 103u, depth); }
L_003BF188:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003BF190:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003BF198:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 8u)));  c.pc = t; return; }
L_003BF1A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8D00u | kUnwind; return; } [[clang::musttail]] return unit_00AE(c, 131u, depth); }
L_003BF1B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003BF1C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003BF1C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003BF1D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003BF1D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003BF1E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003BF1E8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B39C8u | kUnwind; return; } [[clang::musttail]] return unit_00AC(c, 203u, depth); }
L_003BF200:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 114u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003BF2C8; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF238u); set32(c.r[16], c.r[16].w[0] + 8336u);  if (depth < kMaxDepth) unit_00AE(c, 97u, depth + 1u); else { c.pc = 0x003B8968u; return; } if (c.pc != 0x003BF238u) [[unlikely]] return; }
L_003BF238:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF240u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 345u, depth + 1u); else { c.pc = 0x003BEDB0u; return; } if (c.pc != 0x003BF240u) [[unlikely]] return; }
L_003BF240:
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[16].w[0]), 0u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF258u); set32(c.r[6], c.r[29].w[0] + 4u);  if (depth < kMaxDepth) unit_00AF(c, 282u, depth + 1u); else { c.pc = 0x003BE308u; return; } if (c.pc != 0x003BF258u) [[unlikely]] return; }
L_003BF258:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.f[0] = ld32((c.r[29].w[0]));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[3] = c.r[1].w[0];
    c.f[2] = ld32((c.r[29].w[0] + 4u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = ld32((c.r[2].w[0] + 8392u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[16].w[0]), c.r[17].w[0]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[1]);
    c.budget -= 19;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003BF2B8; } }
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
L_003BF2B8:
    st32((c.r[19].w[0] + 156u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 23748u)));
    st32((c.r[19].w[0] + 160u), c.r[4].w[0]);
    c.budget -= 4;
L_003BF2C8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003BF2E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 136u), c.r[5].w[0]);  c.pc = t; return; }
L_003BF2F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st8((c.r[4].w[0] + 152u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003BF318; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9830u | kUnwind; return; } [[clang::musttail]] return unit_00AE(c, 217u, depth); }
L_003BF318:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BF328:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 152u)));  c.pc = t; return; }
L_003BF330:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9870u | kUnwind; return; } [[clang::musttail]] return unit_00AE(c, 221u, depth); }
L_003BF348:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003BF370; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF360u); set32(c.r[4], c.r[4].w[0] + 13536u);  if (depth < kMaxDepth) unit_00AC(c, 204u, depth + 1u); else { c.pc = 0x003B39F0u; return; } if (c.pc != 0x003BF360u) [[unlikely]] return; }
L_003BF360:
    set32(c.r[2], 0u - 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BF370:
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9818u | kUnwind; return; } [[clang::musttail]] return unit_00AE(c, 214u, depth); }
L_003BF380:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003BF408; } }
    c.r[3].d[0] = ld16((c.r[6].w[0]));
    c.r[7].d[0] = 0ull | 32768ull;
    set32(c.r[6], c.r[3].w[0] << 8);
    set32(c.r[3], c.r[3].w[0] >> 8);
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 8;
    if (c.r[3].d[0] != c.r[7].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003BF40C; }
    set32(c.r[2], c.r[29].w[0] + 24u);
    set32(c.r[3], c.r[29].w[0] + 28u);
    set32(c.r[6], c.r[29].w[0] + 16u);
    set32(c.r[7], c.r[29].w[0] + 18u);
    set32(c.r[8], c.r[29].w[0] + 19u);
    set32(c.r[9], c.r[29].w[0] + 20u);
    set32(c.r[10], c.r[29].w[0] + 21u);
    set32(c.r[11], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF3ECu); st32((c.r[29].w[0] + 8u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00AC(c, 167u, depth + 1u); else { c.pc = 0x003B20B8u; return; } if (c.pc != 0x003BF3ECu) [[unlikely]] return; }
L_003BF3EC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 16u)));  if (t) { goto L_003BF400; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003BF408; } }
    c.budget -= 1;
L_003BF400:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_003BF408:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003BF40C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003BF418:
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.r[3].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003BF450; } }
    c.r[3].d[0] = ld16((c.r[4].w[0]));
    c.r[5].d[0] = 0ull | 32769ull;
    set32(c.r[4], c.r[3].w[0] << 8);
    set32(c.r[3], c.r[3].w[0] >> 8);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_003BF450; } }
    st32((c.r[6].w[0]), c.r[7].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_003BF450:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003BF458:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], c.r[6].w[0] + 31u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[2].d[0] = c.r[6].sd[0] < 0ll ? 1ull : 0ull;
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    if (c.r[2].d[0] != 0) c.r[6].d[0] = c.r[3].d[0];
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    set32(c.r[3], c.r[2].w[0] << 3);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st64((c.r[29].w[0] + 72u), c.r[21].d[0]);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 5));
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[3].w[0] << 1);
    set32(c.r[20], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 21;
    { const bool t = c.r[20].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_003BF5D8; } }
    mmi::mult(c, 0, c.r[6].w[0], c.r[16].w[0]);
    c.r[19].d[0] = c.lo.d[0];
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF4C4u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BF4C4u) [[unlikely]] return; }
L_003BF4C4:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x003BF4C8u);  goto L_003BF4CC; }
L_003BF4CC:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0])));
    mmi::div(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.r[21].d[0] = c.lo.d[0];
    c.r[17].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF4F0u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003BF4F0u) [[unlikely]] return; }
L_003BF4F0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[18], c.r[29].w[0] + 16u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF508u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 230u, depth + 1u); else { c.pc = 0x003D2388u; return; } if (c.pc != 0x003BF508u) [[unlikely]] return; }
L_003BF508:
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF520u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BF520u) [[unlikely]] return; }
L_003BF520:
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF538u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BF538u) [[unlikely]] return; }
L_003BF538:
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[19].w[0] - c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF554u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BF554u) [[unlikely]] return; }
L_003BF554:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x003BF558u);  goto L_003BF55C; }
L_003BF55C:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0])));
    mmi::div(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.r[21].d[0] = c.lo.d[0];
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF580u); set32(c.r[17], c.r[17].w[0] + c.r[21].w[0]);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003BF580u) [[unlikely]] return; }
L_003BF580:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF594u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 230u, depth + 1u); else { c.pc = 0x003D2388u; return; } if (c.pc != 0x003BF594u) [[unlikely]] return; }
L_003BF594:
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF5ACu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BF5ACu) [[unlikely]] return; }
L_003BF5AC:
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF5C4u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BF5C4u) [[unlikely]] return; }
L_003BF5C4:
    mmi::div(c, 0, c.r[17].w[0], c.r[16].w[0]);
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x003BF5CCu);  goto L_003BF5D0; }
L_003BF5D0:
    c.r[17].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[17].w[0] << 5);
    c.budget -= 2;
L_003BF5D8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003BF600:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B28F8u | kUnwind; return; } [[clang::musttail]] return unit_00AC(c, 178u, depth); }
L_003BF618:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003BF638; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 13584u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B39F0u | kUnwind; return; } [[clang::musttail]] return unit_00AC(c, 204u, depth); }
L_003BF638:
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9840u | kUnwind; return; } [[clang::musttail]] return unit_00AE(c, 219u, depth); }
L_003BF648:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9858u | kUnwind; return; } [[clang::musttail]] return unit_00AE(c, 220u, depth); }
L_003BF660:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 12u)));  c.pc = t; return; }
L_003BF668:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 56u), c.r[31].d[0]);  if (t) { goto L_003BF6A0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF698u); set32(c.r[4], c.r[4].w[0] + 13632u);  if (depth < kMaxDepth) unit_00AC(c, 204u, depth + 1u); else { c.pc = 0x003B39F0u; return; } if (c.pc != 0x003BF698u) [[unlikely]] return; }
L_003BF698:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003BF74C; } }
L_003BF6A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF6A8u);  if (depth < kMaxDepth) unit_00AF(c, 259u, depth + 1u); else { c.pc = 0x003BDFE0u; return; } if (c.pc != 0x003BF6A8u) [[unlikely]] return; }
L_003BF6A8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 176u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 16u);
    set32(c.r[8], c.r[29].w[0] + 20u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF6C4u); set32(c.r[9], c.r[29].w[0] + 24u);  if (depth < kMaxDepth) unit_00AD(c, 167u, depth + 1u); else { c.pc = 0x003B5738u; return; } if (c.pc != 0x003BF6C4u) [[unlikely]] return; }
L_003BF6C4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_003BF74C; }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[7], ld32((c.r[29].w[0] + 16u)));  goto L_003BF710; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF6ECu); set32(c.r[7], 0u + 16u);  if (depth < kMaxDepth) unit_00AC(c, 215u, depth + 1u); else { c.pc = 0x003B3BC0u; return; } if (c.pc != 0x003BF6ECu) [[unlikely]] return; }
L_003BF6EC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[4].w[0] + 13680u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF6FCu); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 207u, depth + 1u); else { c.pc = 0x003B3A48u; return; } if (c.pc != 0x003BF6FCu) [[unlikely]] return; }
L_003BF6FC:
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], 0u + 6u);
    st16((c.r[16].w[0] + 96u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003BF748; } }
L_003BF710:
    set32(c.r[2], 0u + 1u);
    set32(c.r[6], ld32((c.r[29].w[0] + 20u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 24u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[8], ld32((c.r[16].w[0] + 176u)));
    st32((c.r[16].w[0] + 184u), c.r[7].w[0]);
    st32((c.r[16].w[0] + 180u), c.r[8].w[0]);
    st32((c.r[16].w[0] + 188u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 192u), c.r[3].w[0]);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF748u); st8((c.r[16].w[0] + 172u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AF(c, 392u, depth + 1u); else { c.pc = 0x003BF2F0u; return; } if (c.pc != 0x003BF748u) [[unlikely]] return; }
L_003BF748:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003BF74C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003BF760:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_003BF784; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_003BF7A0; } }
L_003BF784:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 13720u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B39F0u | kUnwind; return; } [[clang::musttail]] return unit_00AC(c, 204u, depth); }
L_003BF7A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF7A8u);  if (depth < kMaxDepth) unit_00AF(c, 259u, depth + 1u); else { c.pc = 0x003BDFE0u; return; } if (c.pc != 0x003BF7A8u) [[unlikely]] return; }
L_003BF7A8:
    set32(c.r[4], ld32((c.r[16].w[0] + 176u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF7B4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x003BF7B4u) [[unlikely]] return; }
L_003BF7B4:
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    set32(c.r[6], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st32((c.r[16].w[0] + 180u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 192u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 172u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 184u), 0u);
    st32((c.r[16].w[0] + 188u), 0u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 18;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BF2F0u | kUnwind; return; } goto L_003BF2F0; }
L_003BF800:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003BF818; }
L_003BF818:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 24u), c.r[31].d[0]);  if (t) { goto L_003BF84C; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);  goto L_003BF850; }
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] >= 0;  if (t) { goto L_003BF870; } }
L_003BF84C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 1;
L_003BF850:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 13768u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B39F0u | kUnwind; return; } [[clang::musttail]] return unit_00AC(c, 204u, depth); }
L_003BF870:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF878u);  if (depth < kMaxDepth) unit_00AF(c, 259u, depth + 1u); else { c.pc = 0x003BDFE0u; return; } if (c.pc != 0x003BF878u) [[unlikely]] return; }
L_003BF878:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF880u);  if (depth < kMaxDepth) unit_00AC(c, 155u, depth + 1u); else { c.pc = 0x003B1E00u; return; } if (c.pc != 0x003BF880u) [[unlikely]] return; }
L_003BF880:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF88Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 124u, depth + 1u); else { c.pc = 0x003D0F08u; return; } if (c.pc != 0x003BF88Cu) [[unlikely]] return; }
L_003BF88C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003BF8C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF8A0u);  if (depth < kMaxDepth) unit_00AC(c, 156u, depth + 1u); else { c.pc = 0x003B1E18u; return; } if (c.pc != 0x003BF8A0u) [[unlikely]] return; }
L_003BF8A0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 13816u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B39F0u | kUnwind; return; } [[clang::musttail]] return unit_00AC(c, 204u, depth); }
L_003BF8C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF8C8u);  if (depth < kMaxDepth) unit_00AF(c, 232u, depth + 1u); else { c.pc = 0x003BDD00u; return; } if (c.pc != 0x003BF8C8u) [[unlikely]] return; }
L_003BF8C8:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF8DCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 392u, depth + 1u); else { c.pc = 0x003BF2F0u; return; } if (c.pc != 0x003BF8DCu) [[unlikely]] return; }
L_003BF8DC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B1E18u | kUnwind; return; } [[clang::musttail]] return unit_00AC(c, 156u, depth); }
L_003BF8F8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.budget -= 10;
    { const bool t = c.r[18].d[0] == 0ull; st64((c.r[29].w[0] + 32u), c.r[31].d[0]);  if (t) { goto L_003BF930; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);  goto L_003BF934; }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { goto L_003BF958; } }
L_003BF930:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 1;
L_003BF934:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 13864u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B39F0u | kUnwind; return; } [[clang::musttail]] return unit_00AC(c, 204u, depth); }
L_003BF958:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF960u); c.r[19].sd[0] = static_cast<std::int32_t>(0x00FF0000u);  if (depth < kMaxDepth) unit_00AF(c, 259u, depth + 1u); else { c.pc = 0x003BDFE0u; return; } if (c.pc != 0x003BF960u) [[unlikely]] return; }
L_003BF960:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 8));
    set32(c.r[4], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[3].w[0] >> 24);
    set32(c.r[3], c.r[3].w[0] << 24);
    c.r[4].d[0] = c.r[4].d[0] & c.r[19].d[0];
    c.r[5].d[0] = c.r[5].d[0] & 65280ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003BFA50; }
    c.budget -= 2;
    if (c.r[16].sd[0] < 0) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003BFA50; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF9A4u);  if (depth < kMaxDepth) unit_00AC(c, 155u, depth + 1u); else { c.pc = 0x003B1E00u; return; } if (c.pc != 0x003BF9A4u) [[unlikely]] return; }
L_003BF9A4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[2], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 8));
    set32(c.r[2], c.r[3].w[0] << 8);
    c.r[6].d[0] = c.r[6].d[0] & 65280ull;
    set32(c.r[4], c.r[3].w[0] >> 24);
    c.r[2].d[0] = c.r[2].d[0] & c.r[19].d[0];
    set32(c.r[3], c.r[3].w[0] << 24);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF9E0u); set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);  if (depth < kMaxDepth) unit_00B4(c, 124u, depth + 1u); else { c.pc = 0x003D0F08u; return; } if (c.pc != 0x003BF9E0u) [[unlikely]] return; }
L_003BF9E0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003BFA18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF9F4u);  if (depth < kMaxDepth) unit_00AC(c, 156u, depth + 1u); else { c.pc = 0x003B1E18u; return; } if (c.pc != 0x003BF9F4u) [[unlikely]] return; }
L_003BF9F4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 13912u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B39F0u | kUnwind; return; } [[clang::musttail]] return unit_00AC(c, 204u, depth); }
L_003BFA18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFA20u);  if (depth < kMaxDepth) unit_00AF(c, 232u, depth + 1u); else { c.pc = 0x003BDD00u; return; } if (c.pc != 0x003BFA20u) [[unlikely]] return; }
L_003BFA20:
    set32(c.r[2], 0u + 2u);
    st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFA34u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 392u, depth + 1u); else { c.pc = 0x003BF2F0u; return; } if (c.pc != 0x003BFA34u) [[unlikely]] return; }
L_003BFA34:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B1E18u | kUnwind; return; } [[clang::musttail]] return unit_00AC(c, 156u, depth); }
L_003BFA50:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003BFA68:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFA94u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 239u, depth + 1u); else { c.pc = 0x003B99B0u; return; } if (c.pc != 0x003BFA94u) [[unlikely]] return; }
L_003BFA94:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFAA0u); c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 240u, depth + 1u); else { c.pc = 0x003B99C8u; return; } if (c.pc != 0x003BFAA0u) [[unlikely]] return; }
L_003BFAA0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFAACu); c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 241u, depth + 1u); else { c.pc = 0x003B99F8u; return; } if (c.pc != 0x003BFAACu) [[unlikely]] return; }
L_003BFAAC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFAB8u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003B9B80u; return; } if (c.pc != 0x003BFAB8u) [[unlikely]] return; }
L_003BFAB8:
    set32(c.r[16], c.r[16].w[0] - c.r[19].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFAC8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 225u, depth + 1u); else { c.pc = 0x003B98A0u; return; } if (c.pc != 0x003BFAC8u) [[unlikely]] return; }
L_003BFAC8:
    st32((c.r[18].w[0] + 144u), c.r[16].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFAD8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 223u, depth + 1u); else { c.pc = 0x003B9890u; return; } if (c.pc != 0x003BFAD8u) [[unlikely]] return; }
L_003BFAD8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFAE4u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 227u, depth + 1u); else { c.pc = 0x003B98B0u; return; } if (c.pc != 0x003BFAE4u) [[unlikely]] return; }
L_003BFAE4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFAF0u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 215u, depth + 1u); else { c.pc = 0x003B9820u; return; } if (c.pc != 0x003BFAF0u) [[unlikely]] return; }
L_003BFAF0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[5], c.r[5].w[0] - 1248u);
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 12;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9880u | kUnwind; return; } [[clang::musttail]] return unit_00AE(c, 222u, depth); }
L_003BFB20:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[18], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[16], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFB54u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 239u, depth + 1u); else { c.pc = 0x003B99B0u; return; } if (c.pc != 0x003BFB54u) [[unlikely]] return; }
L_003BFB54:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFB60u); c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 240u, depth + 1u); else { c.pc = 0x003B99C8u; return; } if (c.pc != 0x003BFB60u) [[unlikely]] return; }
L_003BFB60:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFB6Cu); c.r[21].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 241u, depth + 1u); else { c.pc = 0x003B99F8u; return; } if (c.pc != 0x003BFB6Cu) [[unlikely]] return; }
L_003BFB6C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[7].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_003BFBA8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 108u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0])));  goto L_003BFBAC; }
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFB9Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00AE(c, 223u, depth + 1u); else { c.pc = 0x003B9890u; return; } if (c.pc != 0x003BFB9Cu) [[unlikely]] return; }
L_003BFB9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003BFC90; } }
    c.budget -= 1;
L_003BFBA8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003BFBAC:
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFBB8u); set32(c.r[6], ld32((c.r[17].w[0] + 80u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BFBB8u) [[unlikely]] return; }
L_003BFBB8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 13968u);  if (t) { goto L_003BFBD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFBD8u);  if (depth < kMaxDepth) unit_00AC(c, 204u, depth + 1u); else { c.pc = 0x003B39F0u; return; } if (c.pc != 0x003BFBD8u) [[unlikely]] return; }
L_003BFBD8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFBF0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BFBF0u) [[unlikely]] return; }
L_003BFBF0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFBFCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 225u, depth + 1u); else { c.pc = 0x003B98A0u; return; } if (c.pc != 0x003BFBFCu) [[unlikely]] return; }
L_003BFBFC:
    set32(c.r[5], c.r[20].w[0] - c.r[19].w[0]);
    st32((c.r[17].w[0] + 144u), c.r[5].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFC0Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 223u, depth + 1u); else { c.pc = 0x003B9890u; return; } if (c.pc != 0x003BFC0Cu) [[unlikely]] return; }
L_003BFC0C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFC18u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 227u, depth + 1u); else { c.pc = 0x003B98B0u; return; } if (c.pc != 0x003BFC18u) [[unlikely]] return; }
L_003BFC18:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFC24u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 215u, depth + 1u); else { c.pc = 0x003B9820u; return; } if (c.pc != 0x003BFC24u) [[unlikely]] return; }
L_003BFC24:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003BFC78; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFC44u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BFC44u) [[unlikely]] return; }
L_003BFC44:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFC60u); c.r[7].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BFC60u) [[unlikely]] return; }
L_003BFC60:
    set32(c.r[6], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFC78u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BFC78u) [[unlikely]] return; }
L_003BFC78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFC80u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 256u, depth + 1u); else { c.pc = 0x003B9B98u; return; } if (c.pc != 0x003BFC80u) [[unlikely]] return; }
L_003BFC80:
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 76u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
L_003BFC90:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003BFCB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[17], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (t) { goto L_003BFD28; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003BFD2C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFCE0u);  if (depth < kMaxDepth) unit_00AE(c, 240u, depth + 1u); else { c.pc = 0x003B99C8u; return; } if (c.pc != 0x003BFCE0u) [[unlikely]] return; }
L_003BFCE0:
    set32(c.r[5], 0u - 1u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[6].w[0] + 2047u);
    c.r[3].d[0] = c.r[6].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[6].d[0] = c.r[2].d[0];
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 108u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003BFD20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFD08u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00AE(c, 223u, depth + 1u); else { c.pc = 0x003B9890u; return; } if (c.pc != 0x003BFD08u) [[unlikely]] return; }
L_003BFD08:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFD18u); c.r[5].d[0] = c.r[5].d[0] | 65535ull;  if (depth < kMaxDepth) unit_00AF(c, 72u, depth + 1u); else { c.pc = 0x003BC8F0u; return; } if (c.pc != 0x003BFD18u) [[unlikely]] return; }
L_003BFD18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003BFD2C; } }
L_003BFD20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFD28u); set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 11));  if (depth < kMaxDepth) unit_00AF(c, 54u, depth + 1u); else { c.pc = 0x003BC708u; return; } if (c.pc != 0x003BFD28u) [[unlikely]] return; }
L_003BFD28:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003BFD2C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003BFD40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFD68u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00AE(c, 231u, depth + 1u); else { c.pc = 0x003B98F0u; return; } if (c.pc != 0x003BFD68u) [[unlikely]] return; }
L_003BFD68:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[18].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 2;
L_003BFD70:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFD80u); set32(c.r[17], c.r[17].w[0] + 1u);  if (depth < kMaxDepth) unit_00AE(c, 247u, depth + 1u); else { c.pc = 0x003B9A98u; return; } if (c.pc != 0x003BFD80u) [[unlikely]] return; }
L_003BFD80:
    c.r[3].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BFD70u | kUnwind; return; } goto L_003BFD70; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 66u)));  if (t) { goto L_003BFE18; } }
    set32(c.r[4], 0u - 128u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[4].d[0]; c.r[3].d[0] = ld16((c.r[16].w[0] + 66u));  if (t) { goto L_003BFDC8; } }
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0]; set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  if (t) { goto L_003BFDE0; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFDC0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 89u, depth + 1u); else { c.pc = 0x003B88C8u; return; } if (c.pc != 0x003BFDC0u) [[unlikely]] return; }
L_003BFDC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003BFEF0; } }
L_003BFDC8:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[4].d[0]) { set32(c.r[6], c.r[3].w[0] << 16);  goto L_003BFDF8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  if (t) { goto L_003BFDE4; } }
    c.budget -= 1;
L_003BFDE0:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003BFDE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFDECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 89u, depth + 1u); else { c.pc = 0x003B88C8u; return; } if (c.pc != 0x003BFDECu) [[unlikely]] return; }
L_003BFDEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003BFEF0; } }
    c.budget -= 1;
L_003BFDF8:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 16));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFE0Cu); set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 89u, depth + 1u); else { c.pc = 0x003B88C8u; return; } if (c.pc != 0x003BFE0Cu) [[unlikely]] return; }
L_003BFE0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003BFEF0; } }
    c.budget -= 1;
L_003BFE18:
    set32(c.r[3], 0u - 128u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; set32(c.r[2], ld32((c.r[29].w[0])));  if (t) { goto L_003BFE40; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[6].d[0]; set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  if (t) { goto L_003BFE50; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFE38u); set32(c.r[6], 0u - 15u);  if (depth < kMaxDepth) unit_00AE(c, 89u, depth + 1u); else { c.pc = 0x003B88C8u; return; } if (c.pc != 0x003BFE38u) [[unlikely]] return; }
L_003BFE38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 68u)));  if (t) { goto L_003BFE78; } }
L_003BFE40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  if (t) { goto L_003BFE68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BFE54; } }
L_003BFE50:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003BFE54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFE5Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 89u, depth + 1u); else { c.pc = 0x003B88C8u; return; } if (c.pc != 0x003BFE5Cu) [[unlikely]] return; }
L_003BFE5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 68u)));  if (t) { goto L_003BFE78; } }
    c.budget -= 1;
L_003BFE68:
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFE74u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 89u, depth + 1u); else { c.pc = 0x003B88C8u; return; } if (c.pc != 0x003BFE74u) [[unlikely]] return; }
L_003BFE74:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 68u)));
    c.budget -= 1;
L_003BFE78:
    set32(c.r[4], 0u - 128u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[4].d[0]; c.r[3].d[0] = ld16((c.r[16].w[0] + 68u));  if (t) { goto L_003BFEA8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0]; set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  if (t) { goto L_003BFEC0; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFE9Cu); set32(c.r[6], 0u + 15u);  if (depth < kMaxDepth) unit_00AE(c, 89u, depth + 1u); else { c.pc = 0x003B88C8u; return; } if (c.pc != 0x003BFE9Cu) [[unlikely]] return; }
L_003BFE9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003BFEF0; } }
    c.budget -= 1;
L_003BFEA8:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[4].d[0]) { set32(c.r[6], c.r[3].w[0] << 16);  goto L_003BFED8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  if (t) { goto L_003BFEC4; } }
    c.budget -= 1;
L_003BFEC0:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003BFEC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFECCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00AE(c, 89u, depth + 1u); else { c.pc = 0x003B88C8u; return; } if (c.pc != 0x003BFECCu) [[unlikely]] return; }
L_003BFECC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003BFEF0; } }
    c.budget -= 1;
L_003BFED8:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 16));
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFEECu); set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 89u, depth + 1u); else { c.pc = 0x003B88C8u; return; } if (c.pc != 0x003BFEECu) [[unlikely]] return; }
L_003BFEEC:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003BFEF0:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003BFF08:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 112u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 104u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 120u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 128u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 136u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 152u)));
    set32(c.r[18], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], ld32((c.r[20].w[0] + 20u)));  if (t) { [[clang::musttail]] return unit_00B0(c, 24u, depth); } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    st16((c.r[29].w[0] + 66u), static_cast<std::uint16_t>(0u));
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFF64u); c.r[6].d[0] = c.r[6].d[0] | 65535ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BFF64u) [[unlikely]] return; }
L_003BFF64:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[21], c.r[29].w[0] + 32u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFF88u); c.r[7].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BFF88u) [[unlikely]] return; }
L_003BFF88:
    set32(c.r[19], c.r[29].w[0] + 64u);
    set32(c.r[4], ld32((c.r[29].w[0])));
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFF9Cu); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 176u, depth + 1u); else { c.pc = 0x003B2840u; return; } if (c.pc != 0x003BFF9Cu) [[unlikely]] return; }
L_003BFF9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_003BFFE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFFACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 392u, depth + 1u); else { c.pc = 0x003BF2F0u; return; } if (c.pc != 0x003BFFACu) [[unlikely]] return; }
L_003BFFAC:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFFC4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BFFC4u) [[unlikely]] return; }
L_003BFFC4:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFFDCu); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BFFDCu) [[unlikely]] return; }
L_003BFFDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { [[clang::musttail]] return unit_00B0(c, 25u, depth); } }
    c.budget -= 1;
L_003BFFE8:
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 64u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0])));
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0004u); set32(c.r[5], c.r[5].w[0] - c.r[16].w[0]);  if (depth < kMaxDepth) unit_00AC(c, 162u, depth + 1u); else { c.pc = 0x003B1F90u; return; } if (c.pc != 0x003C0004u) [[unlikely]] return; }
    [[clang::musttail]] return unit_00B0(c, 2u, depth);
}

}
