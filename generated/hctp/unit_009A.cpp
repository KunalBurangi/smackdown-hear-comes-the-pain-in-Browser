#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_009A[4096] = {
    1, 2, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0,
    0, 11, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 20, 0, 0, 21, 0, 0, 22, 0, 0, 23, 0, 0, 24, 0,
    0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32,
    0, 0, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0,
    37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0,
    0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 54, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 58, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0,
    70, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0,
    0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0,
    81, 0, 82, 0, 0, 0, 83, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 86, 87, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0,
    0, 0, 0, 91, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 96, 0, 0,
    0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 0, 0,
    0, 100, 0, 0, 101, 0, 102, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 108, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 110, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    113, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0,
    121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 123, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0,
    130, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0,
    135, 0, 0, 136, 0, 0, 0, 0, 0, 0, 137, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0,
    0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 155, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157,
    0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0,
    0, 0, 0, 161, 0, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0,
    166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 168,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 174, 0, 0, 175, 0, 0, 0, 0, 0,
    176, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0,
    180, 0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 185, 0, 186, 0, 0, 0, 0, 0,
    187, 0, 0, 0, 188, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0,
    193, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0,
    0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 203, 0, 0, 0, 0, 204, 0, 0,
    0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0,
    211, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 215, 0, 0, 0,
    0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 226, 0, 0, 227, 0, 0, 0, 0, 0, 228, 0,
    0, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233,
    0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 236, 0, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 0,
    0, 239, 0, 240, 0, 0, 0, 0, 241, 0, 0, 0, 0, 242, 0, 243, 0, 244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 247,
    0, 248, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0,
    0, 0, 0, 254, 0, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 259, 0, 0, 0,
    0, 260, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0,
    266, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 274, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 276, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 281, 0,
    0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 291, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0,
    0, 296, 0, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0,
    301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 306, 0,
    307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0,
    0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0,
    324, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 328, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 332, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 341, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 343, 0, 0, 0, 344, 0, 0, 345, 0, 0, 346, 0, 0, 0, 0, 0, 347,
    0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0,
    351, 0, 0, 0, 0, 352, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0,
    0, 0, 0, 356, 0, 0, 0, 0, 357, 0, 0, 0, 0, 358, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0,
    0, 361, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 364, 0, 0, 0, 365, 0, 0, 0, 366, 0, 0, 0, 367, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 371, 0, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0, 0, 374, 0, 0, 0, 375, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0,
    0, 0, 378, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0, 381, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 383, 0, 0, 0, 384, 0, 0, 385, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 388, 0, 0, 0, 0, 389, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 392,
    0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 395, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0,
    0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 408, 0, 0, 0, 0, 0,
    409, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0,
    413, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0,
    0, 0, 0, 0, 417, 0, 0, 0, 418, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 421, 0, 0, 0, 422, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 425, 0, 0, 0, 0, 426, 0, 0,
    0, 0, 0, 427, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 430, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0,
    0, 0, 435, 0, 0, 0, 0, 0, 436, 0, 0, 0, 437, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 440, 0, 0, 0,
    0, 441, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 443, 0, 0, 0, 444, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 453, 0, 0, 0,
};

void unit_009A(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00368000;
    case 2u: goto L_00368004;
    case 3u: goto L_00368008;
    case 4u: goto L_00368030;
    case 5u: goto L_00368040;
    case 6u: goto L_00368054;
    case 7u: goto L_0036807C;
    case 8u: goto L_003680EC;
    case 9u: goto L_00368144;
    case 10u: goto L_00368174;
    case 11u: goto L_00368184;
    case 12u: goto L_00368190;
    case 13u: goto L_003681A0;
    case 14u: goto L_003681C0;
    case 15u: goto L_0036822C;
    case 16u: goto L_00368254;
    case 17u: goto L_0036825C;
    case 18u: goto L_00368288;
    case 19u: goto L_003682BC;
    case 20u: goto L_003682C8;
    case 21u: goto L_003682D4;
    case 22u: goto L_003682E0;
    case 23u: goto L_003682EC;
    case 24u: goto L_003682F8;
    case 25u: goto L_00368310;
    case 26u: goto L_00368330;
    case 27u: goto L_0036838C;
    case 28u: goto L_00368424;
    case 29u: goto L_00368448;
    case 30u: goto L_00368454;
    case 31u: goto L_00368464;
    case 32u: goto L_003684FC;
    case 33u: goto L_00368510;
    case 34u: goto L_00368524;
    case 35u: goto L_00368534;
    case 36u: goto L_003685F0;
    case 37u: goto L_00368600;
    case 38u: goto L_00368630;
    case 39u: goto L_00368640;
    case 40u: goto L_00368650;
    case 41u: goto L_00368678;
    case 42u: goto L_00368688;
    case 43u: goto L_003686A0;
    case 44u: goto L_003686B0;
    case 45u: goto L_003686BC;
    case 46u: goto L_003686F8;
    case 47u: goto L_00368730;
    case 48u: goto L_00368750;
    case 49u: goto L_003687C4;
    case 50u: goto L_003687D4;
    case 51u: goto L_0036884C;
    case 52u: goto L_0036885C;
    case 53u: goto L_003688A4;
    case 54u: goto L_003688B4;
    case 55u: goto L_003688BC;
    case 56u: goto L_00368914;
    case 57u: goto L_00368944;
    case 58u: goto L_00368990;
    case 59u: goto L_00368998;
    case 60u: goto L_003689C8;
    case 61u: goto L_00368A30;
    case 62u: goto L_00368A38;
    case 63u: goto L_00368A68;
    case 64u: goto L_00368AB4;
    case 65u: goto L_00368ABC;
    case 66u: goto L_00368AEC;
    case 67u: goto L_00368B20;
    case 68u: goto L_00368B38;
    case 69u: goto L_00368B68;
    case 70u: goto L_00368B80;
    case 71u: goto L_00368B94;
    case 72u: goto L_00368BB0;
    case 73u: goto L_00368BC8;
    case 74u: goto L_00368BDC;
    case 75u: goto L_00368BF8;
    case 76u: goto L_00368C0C;
    case 77u: goto L_00368C1C;
    case 78u: goto L_00368C2C;
    case 79u: goto L_00368C3C;
    case 80u: goto L_00368C64;
    case 81u: goto L_00368C80;
    case 82u: goto L_00368C88;
    case 83u: goto L_00368C98;
    case 84u: goto L_00368CA4;
    case 85u: goto L_00368CC8;
    case 86u: goto L_00368CD0;
    case 87u: goto L_00368CD4;
    case 88u: goto L_00368CDC;
    case 89u: goto L_00368D38;
    case 90u: goto L_00368D74;
    case 91u: goto L_00368D8C;
    case 92u: goto L_00368DA0;
    case 93u: goto L_00368E08;
    case 94u: goto L_00368E54;
    case 95u: goto L_00368E6C;
    case 96u: goto L_00368E74;
    case 97u: goto L_00368E94;
    case 98u: goto L_00368ED8;
    case 99u: goto L_00368EE8;
    case 100u: goto L_00368F04;
    case 101u: goto L_00368F10;
    case 102u: goto L_00368F18;
    case 103u: goto L_00368F20;
    case 104u: goto L_00368F44;
    case 105u: goto L_00368F64;
    case 106u: goto L_00368FC0;
    case 107u: goto L_00368FD8;
    case 108u: goto L_00368FF4;
    case 109u: goto L_00369024;
    case 110u: goto L_0036902C;
    case 111u: goto L_00369030;
    case 112u: goto L_00369058;
    case 113u: goto L_00369080;
    case 114u: goto L_00369090;
    case 115u: goto L_003690B4;
    case 116u: goto L_0036911C;
    case 117u: goto L_00369134;
    case 118u: goto L_0036913C;
    case 119u: goto L_00369154;
    case 120u: goto L_00369170;
    case 121u: goto L_00369180;
    case 122u: goto L_00369198;
    case 123u: goto L_0036920C;
    case 124u: goto L_00369214;
    case 125u: goto L_00369274;
    case 126u: goto L_003692A0;
    case 127u: goto L_003692C0;
    case 128u: goto L_003692D4;
    case 129u: goto L_003692EC;
    case 130u: goto L_00369300;
    case 131u: goto L_00369314;
    case 132u: goto L_0036932C;
    case 133u: goto L_00369340;
    case 134u: goto L_00369370;
    case 135u: goto L_00369380;
    case 136u: goto L_0036938C;
    case 137u: goto L_003693A8;
    case 138u: goto L_003693B0;
    case 139u: goto L_003693D8;
    case 140u: goto L_0036941C;
    case 141u: goto L_003694B0;
    case 142u: goto L_00369510;
    case 143u: goto L_00369560;
    case 144u: goto L_00369574;
    case 145u: goto L_003695D4;
    case 146u: goto L_003695E8;
    case 147u: goto L_00369608;
    case 148u: goto L_00369658;
    case 149u: goto L_00369674;
    case 150u: goto L_003696A0;
    case 151u: goto L_003696BC;
    case 152u: goto L_00369714;
    case 153u: goto L_00369730;
    case 154u: goto L_0036975C;
    case 155u: goto L_00369778;
    case 156u: goto L_003697D0;
    case 157u: goto L_003697FC;
    case 158u: goto L_00369818;
    case 159u: goto L_00369860;
    case 160u: goto L_00369874;
    case 161u: goto L_0036988C;
    case 162u: goto L_003698A0;
    case 163u: goto L_003698B4;
    case 164u: goto L_003698CC;
    case 165u: goto L_003698E0;
    case 166u: goto L_00369900;
    case 167u: goto L_00369958;
    case 168u: goto L_0036997C;
    case 169u: goto L_003699AC;
    case 170u: goto L_003699BC;
    case 171u: goto L_003699D8;
    case 172u: goto L_00369A10;
    case 173u: goto L_00369A50;
    case 174u: goto L_00369A5C;
    case 175u: goto L_00369A68;
    case 176u: goto L_00369A80;
    case 177u: goto L_00369AA0;
    case 178u: goto L_00369AB8;
    case 179u: goto L_00369AE8;
    case 180u: goto L_00369B00;
    case 181u: goto L_00369B14;
    case 182u: goto L_00369B24;
    case 183u: goto L_00369B40;
    case 184u: goto L_00369B50;
    case 185u: goto L_00369B60;
    case 186u: goto L_00369B68;
    case 187u: goto L_00369B80;
    case 188u: goto L_00369B90;
    case 189u: goto L_00369B98;
    case 190u: goto L_00369BB0;
    case 191u: goto L_00369BCC;
    case 192u: goto L_00369BE4;
    case 193u: goto L_00369C00;
    case 194u: goto L_00369C1C;
    case 195u: goto L_00369C30;
    case 196u: goto L_00369C50;
    case 197u: goto L_00369C60;
    case 198u: goto L_00369C74;
    case 199u: goto L_00369C8C;
    case 200u: goto L_00369CA0;
    case 201u: goto L_00369CB4;
    case 202u: goto L_00369CCC;
    case 203u: goto L_00369CE0;
    case 204u: goto L_00369CF4;
    case 205u: goto L_00369D0C;
    case 206u: goto L_00369D20;
    case 207u: goto L_00369D34;
    case 208u: goto L_00369D50;
    case 209u: goto L_00369D60;
    case 210u: goto L_00369D70;
    case 211u: goto L_00369D80;
    case 212u: goto L_00369D90;
    case 213u: goto L_00369DC4;
    case 214u: goto L_00369DE8;
    case 215u: goto L_00369DF0;
    case 216u: goto L_00369E08;
    case 217u: goto L_00369E1C;
    case 218u: goto L_00369E28;
    case 219u: goto L_00369E4C;
    case 220u: goto L_00369E70;
    case 221u: goto L_00369EA0;
    case 222u: goto L_00369EB8;
    case 223u: goto L_00369ED0;
    case 224u: goto L_00369F28;
    case 225u: goto L_00369F48;
    case 226u: goto L_00369F54;
    case 227u: goto L_00369F60;
    case 228u: goto L_00369F78;
    case 229u: goto L_00369F90;
    case 230u: goto L_00369FA4;
    case 231u: goto L_0036A038;
    case 232u: goto L_0036A050;
    case 233u: goto L_0036A07C;
    case 234u: goto L_0036A090;
    case 235u: goto L_0036A0C4;
    case 236u: goto L_0036A0CC;
    case 237u: goto L_0036A0E0;
    case 238u: goto L_0036A0F0;
    case 239u: goto L_0036A104;
    case 240u: goto L_0036A10C;
    case 241u: goto L_0036A120;
    case 242u: goto L_0036A134;
    case 243u: goto L_0036A13C;
    case 244u: goto L_0036A144;
    case 245u: goto L_0036A160;
    case 246u: goto L_0036A174;
    case 247u: goto L_0036A17C;
    case 248u: goto L_0036A184;
    case 249u: goto L_0036A1A0;
    case 250u: goto L_0036A1B4;
    case 251u: goto L_0036A1CC;
    case 252u: goto L_0036A1E0;
    case 253u: goto L_0036A1F4;
    case 254u: goto L_0036A20C;
    case 255u: goto L_0036A220;
    case 256u: goto L_0036A230;
    case 257u: goto L_0036A244;
    case 258u: goto L_0036A25C;
    case 259u: goto L_0036A270;
    case 260u: goto L_0036A284;
    case 261u: goto L_0036A29C;
    case 262u: goto L_0036A2C0;
    case 263u: goto L_0036A2D0;
    case 264u: goto L_0036A2E0;
    case 265u: goto L_0036A2F0;
    case 266u: goto L_0036A300;
    case 267u: goto L_0036A310;
    case 268u: goto L_0036A320;
    case 269u: goto L_0036A330;
    case 270u: goto L_0036A340;
    case 271u: goto L_0036A350;
    case 272u: goto L_0036A360;
    case 273u: goto L_0036A3BC;
    case 274u: goto L_0036A3C8;
    case 275u: goto L_0036A3D4;
    case 276u: goto L_0036A404;
    case 277u: goto L_0036A410;
    case 278u: goto L_0036A49C;
    case 279u: goto L_0036A520;
    case 280u: goto L_0036A56C;
    case 281u: goto L_0036A578;
    case 282u: goto L_0036A584;
    case 283u: goto L_0036A59C;
    case 284u: goto L_0036A5C0;
    case 285u: goto L_0036A5D0;
    case 286u: goto L_0036A61C;
    case 287u: goto L_0036A6C4;
    case 288u: goto L_0036A6FC;
    case 289u: goto L_0036A724;
    case 290u: goto L_0036A75C;
    case 291u: goto L_0036A78C;
    case 292u: goto L_0036A7A0;
    case 293u: goto L_0036A7C0;
    case 294u: goto L_0036A7DC;
    case 295u: goto L_0036A868;
    case 296u: goto L_0036A884;
    case 297u: goto L_0036A898;
    case 298u: goto L_0036A8A8;
    case 299u: goto L_0036A8B8;
    case 300u: goto L_0036A8E0;
    case 301u: goto L_0036A900;
    case 302u: goto L_0036A970;
    case 303u: goto L_0036A9C4;
    case 304u: goto L_0036AA1C;
    case 305u: goto L_0036AA68;
    case 306u: goto L_0036AA78;
    case 307u: goto L_0036AA80;
    case 308u: goto L_0036AAB8;
    case 309u: goto L_0036AAFC;
    case 310u: goto L_0036AB34;
    case 311u: goto L_0036AB44;
    case 312u: goto L_0036AB58;
    case 313u: goto L_0036AB98;
    case 314u: goto L_0036ABDC;
    case 315u: goto L_0036AC14;
    case 316u: goto L_0036AC24;
    case 317u: goto L_0036AC50;
    case 318u: goto L_0036ACC0;
    case 319u: goto L_0036ACE0;
    case 320u: goto L_0036ACF0;
    case 321u: goto L_0036AD04;
    case 322u: goto L_0036AD40;
    case 323u: goto L_0036AD64;
    case 324u: goto L_0036AD80;
    case 325u: goto L_0036AD98;
    case 326u: goto L_0036ADF0;
    case 327u: goto L_0036AE60;
    case 328u: goto L_0036AE6C;
    case 329u: goto L_0036AE9C;
    case 330u: goto L_0036AF18;
    case 331u: goto L_0036AF34;
    case 332u: goto L_0036AF48;
    case 333u: goto L_0036AF54;
    case 334u: goto L_0036AFA4;
    case 335u: goto L_0036AFF0;
    case 336u: goto L_0036B054;
    case 337u: goto L_0036B07C;
    case 338u: goto L_0036B0A4;
    case 339u: goto L_0036B0CC;
    case 340u: goto L_0036B0E4;
    case 341u: goto L_0036B10C;
    case 342u: goto L_0036B124;
    case 343u: goto L_0036B13C;
    case 344u: goto L_0036B14C;
    case 345u: goto L_0036B158;
    case 346u: goto L_0036B164;
    case 347u: goto L_0036B17C;
    case 348u: goto L_0036B1A0;
    case 349u: goto L_0036B1B8;
    case 350u: goto L_0036B1E8;
    case 351u: goto L_0036B200;
    case 352u: goto L_0036B214;
    case 353u: goto L_0036B21C;
    case 354u: goto L_0036B250;
    case 355u: goto L_0036B278;
    case 356u: goto L_0036B28C;
    case 357u: goto L_0036B2A0;
    case 358u: goto L_0036B2B4;
    case 359u: goto L_0036B2C8;
    case 360u: goto L_0036B2E0;
    case 361u: goto L_0036B304;
    case 362u: goto L_0036B318;
    case 363u: goto L_0036B334;
    case 364u: goto L_0036B348;
    case 365u: goto L_0036B358;
    case 366u: goto L_0036B368;
    case 367u: goto L_0036B378;
    case 368u: goto L_0036B3A0;
    case 369u: goto L_0036B3C4;
    case 370u: goto L_0036B3E0;
    case 371u: goto L_0036B408;
    case 372u: goto L_0036B41C;
    case 373u: goto L_0036B42C;
    case 374u: goto L_0036B43C;
    case 375u: goto L_0036B44C;
    case 376u: goto L_0036B460;
    case 377u: goto L_0036B574;
    case 378u: goto L_0036B588;
    case 379u: goto L_0036B598;
    case 380u: goto L_0036B5A8;
    case 381u: goto L_0036B5B8;
    case 382u: goto L_0036B5CC;
    case 383u: goto L_0036B68C;
    case 384u: goto L_0036B69C;
    case 385u: goto L_0036B6A8;
    case 386u: goto L_0036B6B4;
    case 387u: goto L_0036B6D8;
    case 388u: goto L_0036B710;
    case 389u: goto L_0036B724;
    case 390u: goto L_0036B738;
    case 391u: goto L_0036B760;
    case 392u: goto L_0036B77C;
    case 393u: goto L_0036B7A0;
    case 394u: goto L_0036B7C0;
    case 395u: goto L_0036B7D4;
    case 396u: goto L_0036B7E8;
    case 397u: goto L_0036B810;
    case 398u: goto L_0036B82C;
    case 399u: goto L_0036B850;
    case 400u: goto L_0036B870;
    case 401u: goto L_0036B898;
    case 402u: goto L_0036B8E8;
    case 403u: goto L_0036B93C;
    case 404u: goto L_0036B970;
    case 405u: goto L_0036B990;
    case 406u: goto L_0036B9B8;
    case 407u: goto L_0036B9D8;
    case 408u: goto L_0036B9E8;
    case 409u: goto L_0036BA00;
    case 410u: goto L_0036BA1C;
    case 411u: goto L_0036BA30;
    case 412u: goto L_0036BA70;
    case 413u: goto L_0036BA80;
    case 414u: goto L_0036BA90;
    case 415u: goto L_0036BAAC;
    case 416u: goto L_0036BAF4;
    case 417u: goto L_0036BB10;
    case 418u: goto L_0036BB20;
    case 419u: goto L_0036BB34;
    case 420u: goto L_0036BB60;
    case 421u: goto L_0036BB90;
    case 422u: goto L_0036BBA0;
    case 423u: goto L_0036BBB4;
    case 424u: goto L_0036BBCC;
    case 425u: goto L_0036BBE0;
    case 426u: goto L_0036BBF4;
    case 427u: goto L_0036BC0C;
    case 428u: goto L_0036BC20;
    case 429u: goto L_0036BC50;
    case 430u: goto L_0036BC84;
    case 431u: goto L_0036BC98;
    case 432u: goto L_0036BCBC;
    case 433u: goto L_0036BCD4;
    case 434u: goto L_0036BCEC;
    case 435u: goto L_0036BD08;
    case 436u: goto L_0036BD20;
    case 437u: goto L_0036BD30;
    case 438u: goto L_0036BD44;
    case 439u: goto L_0036BD5C;
    case 440u: goto L_0036BD70;
    case 441u: goto L_0036BD84;
    case 442u: goto L_0036BDA0;
    case 443u: goto L_0036BDB0;
    case 444u: goto L_0036BDC0;
    case 445u: goto L_0036BDD0;
    case 446u: goto L_0036BE78;
    case 447u: goto L_0036BEAC;
    case 448u: goto L_0036BEDC;
    case 449u: goto L_0036BF50;
    case 450u: goto L_0036BF64;
    case 451u: goto L_0036BFB8;
    case 452u: goto L_0036BFD8;
    case 453u: goto L_0036BFF0;
    default: bad_entry(c, 0x00368000u); return;
    }
L_00368000:
    c.budget -= 1;
L_00368004:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00368008:
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[3].w[0] + 228u), 0u);
    c.r[2].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;
    st32((c.r[3].w[0] + 244u), 0u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 264u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00368008u | kUnwind; return; } goto L_00368008; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368030u);  if (depth < kMaxDepth) unit_0050(c, 211u, depth + 1u); else { c.pc = 0x00243030u; return; } if (c.pc != 0x00368030u) [[unlikely]] return; }
L_00368030:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 100u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368040u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x00368040u) [[unlikely]] return; }
L_00368040:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0036805C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368054u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 152u, depth + 1u); else { c.pc = 0x0015DC50u; return; } if (c.pc != 0x00368054u) [[unlikely]] return; }
L_00368054:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 412u), c.r[2].w[0]);  if (t) { goto L_00368064; } }
L_0036805C:
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 412u), c.r[2].w[0]);
    c.budget -= 2;
L_00368064:
    set32(c.r[2], ld32((c.r[17].w[0] + 412u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull; st32((c.r[17].w[0] + 400u), c.r[2].w[0]);  if (t) { goto L_003680B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036807Cu);  if (depth < kMaxDepth) unit_0087(c, 101u, depth + 1u); else { c.pc = 0x0031CBF0u; return; } if (c.pc != 0x0036807Cu) [[unlikely]] return; }
L_0036807C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 346u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[1].w[0] - 720u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 349u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[1].w[0] - 716u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 357u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[1].w[0] - 680u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 1100u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[1].w[0] - 644u), c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1104u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[1].w[0] - 640u), c.r[2].w[0]);
    c.budget -= 15;
L_003680B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 640u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 2144u);
    set32(c.r[4], c.r[4].w[0] - 710u);
    set32(c.r[3], 0u + 29u);
    set32(c.r[5], c.r[5].w[0] << 5);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[6], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    set32(c.r[5], c.r[6].w[0] + 2u);
    st16((c.r[1].w[0] - 712u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 13;
L_003680EC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003680ECu | kUnwind; return; } goto L_003680EC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 644u)));
    set32(c.r[4], c.r[4].w[0] - 674u);
    c.r[5].d[0] = ld8((c.r[6].w[0] + 31u));
    set32(c.r[3], 0u + 29u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st8((c.r[1].w[0] - 681u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], c.r[2].w[0] << 5);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 400u)));
    set32(c.r[6], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    set32(c.r[5], c.r[6].w[0] + 2u);
    st16((c.r[1].w[0] - 676u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 15;
L_00368144:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00368144u | kUnwind; return; } goto L_00368144; } }
    c.r[2].d[0] = ld8((c.r[6].w[0] + 31u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], 0u + 256u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368174u); st8((c.r[1].w[0] - 645u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00368174u) [[unlikely]] return; }
L_00368174:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00368184; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368184u);  if (depth < kMaxDepth) unit_0017(c, 177u, depth + 1u); else { c.pc = 0x0015E070u; return; } if (c.pc != 0x00368184u) [[unlikely]] return; }
L_00368184:
    st32((c.r[17].w[0] + 356u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368190u); set32(c.r[4], 0u + 136u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00368190u) [[unlikely]] return; }
L_00368190:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003681A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003681A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0051(c, 59u, depth + 1u); else { c.pc = 0x00244660u; return; } if (c.pc != 0x003681A0u) [[unlikely]] return; }
L_003681A0:
    st32((c.r[17].w[0] + 360u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003681C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00368310; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 29808u);
    set32(c.r[3], c.r[3].w[0] + 29896u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 29956u);
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036822C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036822C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036822Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036822Cu) [[unlikely]] return; }
L_0036822C:
    st32((c.r[17].w[0] + 88u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 372u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00368254; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00368254; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00368254u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00368254u) [[unlikely]] return; }
L_00368254:
    st32((c.r[17].w[0] + 372u), 0u);
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0036825C:
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 216u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[18], c.r[2].w[0] + 216u);  if (t) { goto L_00368288; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00368288; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00368288u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00368288u) [[unlikely]] return; }
L_00368288:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[18].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036825Cu | kUnwind; return; } goto L_0036825C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 356u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003682BC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003682BC; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003682BCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003682BCu) [[unlikely]] return; }
L_003682BC:
    st32((c.r[17].w[0] + 356u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003682C8u); set32(c.r[4], ld32((c.r[17].w[0] + 412u)));  if (depth < kMaxDepth) unit_0010(c, 83u, depth + 1u); else { c.pc = 0x00141160u; return; } if (c.pc != 0x003682C8u) [[unlikely]] return; }
L_003682C8:
    set32(c.r[4], c.r[17].w[0] + 92u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003682D4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000D(c, 54u, depth + 1u); else { c.pc = 0x00134720u; return; } if (c.pc != 0x003682D4u) [[unlikely]] return; }
L_003682D4:
    set32(c.r[4], c.r[17].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003682E0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0049(c, 274u, depth + 1u); else { c.pc = 0x002275F0u; return; } if (c.pc != 0x003682E0u) [[unlikely]] return; }
L_003682E0:
    set32(c.r[4], c.r[17].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003682ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x003682ECu) [[unlikely]] return; }
L_003682EC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003682F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 15u, depth + 1u); else { c.pc = 0x00130130u; return; } if (c.pc != 0x003682F8u) [[unlikely]] return; }
L_003682F8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00368314; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368310u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00368310u) [[unlikely]] return; }
L_00368310:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00368314:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00368330:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    set32(c.r[2], c.r[2].w[0] + 2560u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    set32(c.r[3], c.r[29].w[0] + 176u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[4].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], ld32((c.r[1].w[0] + 26392u)));
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[18], ld32((c.r[5].w[0] + 440u)));
    set32(c.r[17], ld32((c.r[5].w[0] + 444u)));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036838Cu); st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0036838Cu) [[unlikely]] return; }
L_0036838C:
    ld128((c.r[2].w[0]) & ~15u, c.r[4]);
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st128((c.r[5].w[0]) & ~15u, c.r[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[2] = ld32((c.r[29].w[0] + 160u));
    c.f[1] = ld32((c.r[29].w[0] + 168u));
    c.f[0] = ld32((c.r[29].w[0] + 164u));
    c.f[3] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    c.f[2] = fp::cvt_w_s(c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    set32(c.r[4], c.f[2]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    st32((c.r[29].w[0] + 160u), c.r[4].w[0]);
    set32(c.r[4], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    st32((c.r[29].w[0] + 168u), c.r[4].w[0]);
    set32(c.r[4], c.f[0]);
    st32((c.r[29].w[0] + 164u), c.r[4].w[0]);
    st32((c.r[18].w[0] + 304u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 308u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 312u), 0u);
    st32((c.r[18].w[0] + 316u), c.r[2].w[0]);
    ld128((c.r[20].w[0] + 320u) & ~15u, c.r[2]);
    st128((c.r[17].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[20].w[0] + 352u)));
    c.budget -= 35;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[22], c.r[20].w[0] + 320u);  if (t) { goto L_00368440; } }
    set32(c.r[16], ld32((c.r[22].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368424u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_009A(c, 126u, depth + 1u); else { c.pc = 0x003692A0u; return; } if (c.pc != 0x00368424u) [[unlikely]] return; }
L_00368424:
    set32(c.r[3], 0u + 255u);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] - c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0036843C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0036843C:
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 1;
L_00368440:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368448u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_009A(c, 126u, depth + 1u); else { c.pc = 0x003692A0u; return; } if (c.pc != 0x00368448u) [[unlikely]] return; }
L_00368448:
    st32((c.r[18].w[0] + 300u), c.r[2].w[0]);
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[21], c.r[19].w[0] << 2);
    c.budget -= 3;
L_00368454:
    set32(c.r[2], c.r[21].w[0] + c.r[29].w[0]);
    set32(c.r[16], c.r[2].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368464u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00368464u) [[unlikely]] return; }
L_00368464:
    st32((c.r[18].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 356u), 0u);
    set32(c.r[2], 0u + 458u);
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_00368494; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[1].w[0] - 5288u));
    st32((c.r[18].w[0] + 16u), c.f[0]);
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_003684A4; } }
L_00368494:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 4;
L_003684A4:
    c.f[2] = c.r[19].w[0];
    set32(c.r[21], c.r[20].w[0] + c.r[21].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42380000u);
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[23], c.r[21].w[0] + 228u);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[3] = c.r[2].w[0];
    c.f[0] = ld32((c.r[21].w[0] + 228u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42BC0000u);
    c.f[1] = c.r[2].w[0];
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x433A0000u);
    c.f[20] = fp::add(c.f[1], c.f[2]);
    c.f[12] = c.r[2].w[0];
    c.f[13] = fp::add(c.f[0], c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    c.budget -= 22;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003684FCu); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003684FCu) [[unlikely]] return; }
L_003684FC:
    set32(c.r[2], 0u + 91u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_0036851C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368510u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00368510u) [[unlikely]] return; }
L_00368510:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st128((c.r[18].w[0] + 48u) & ~15u, c.r[2]);  if (t) { goto L_0036852C; } }
L_0036851C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368524u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00368524u) [[unlikely]] return; }
L_00368524:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[18].w[0] + 48u) & ~15u, c.r[2]);
    c.budget -= 2;
L_0036852C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368534u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_009A(c, 126u, depth + 1u); else { c.pc = 0x003692A0u; return; } if (c.pc != 0x00368534u) [[unlikely]] return; }
L_00368534:
    st32((c.r[18].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 36u)));
    c.budget -= 4;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_00368658; } }
    set32(c.r[2], 0u + 91u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_00368608; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 352u)));
    set32(c.r[2], 0u + 458u);
    st32((c.r[17].w[0] + 352u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; st32((c.r[17].w[0] + 356u), 0u);  if (t) { goto L_0036859C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = ld32((c.r[1].w[0] - 5288u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 5288u));
    st32((c.r[17].w[0] + 272u), c.f[0]);
    st32((c.r[17].w[0] + 276u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 280u), 0u);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 284u), c.r[2].w[0]);  if (t) { goto L_003685C0; } }
L_0036859C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 272u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 280u), 0u);
    st32((c.r[17].w[0] + 284u), c.r[3].w[0]);
    c.budget -= 9;
L_003685C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x433A0000u);
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = ld32((c.r[23].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00260000u);
    c.r[2].d[0] = c.r[2].d[0] | 22647ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003685F0u); c.f[13] = fp::add(c.f[1], c.f[20]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003685F0u) [[unlikely]] return; }
L_003685F0:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00368600u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00368600u) [[unlikely]] return; }
L_00368600:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[18].w[0] + 176u)));  if (t) { goto L_00368644; } }
L_00368608:
    set32(c.r[4], ld32((c.r[21].w[0] + 216u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], c.r[29].w[0] + 160u);  if (t) { goto L_00368638; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 24u)));
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00368638; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368630u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 79u, depth + 1u); else { c.pc = 0x002BCF70u; return; } if (c.pc != 0x00368630u) [[unlikely]] return; }
L_00368630:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00368640; } }
L_00368638:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368640u);  if (depth < kMaxDepth) unit_006F(c, 79u, depth + 1u); else { c.pc = 0x002BCF70u; return; } if (c.pc != 0x00368640u) [[unlikely]] return; }
L_00368640:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.budget -= 1;
L_00368644:
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00368650u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00368650u) [[unlikely]] return; }
L_00368650:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { goto L_0036868C; } }
L_00368658:
    set32(c.r[2], 0u + 91u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_00368678; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 216u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], c.r[29].w[0] + 160u);  if (t) { goto L_00368678; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368678u);  if (depth < kMaxDepth) unit_006F(c, 79u, depth + 1u); else { c.pc = 0x002BCF70u; return; } if (c.pc != 0x00368678u) [[unlikely]] return; }
L_00368678:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00368688u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00368688u) [[unlikely]] return; }
L_00368688:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0036868C:
    c.r[2].d[0] = c.r[19].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[21], c.r[19].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00368454u | kUnwind; return; } goto L_00368454; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003686A0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x003686A0u) [[unlikely]] return; }
L_003686A0:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003686B0u); st128((c.r[18].w[0] + 48u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_009A(c, 126u, depth + 1u); else { c.pc = 0x003692A0u; return; } if (c.pc != 0x003686B0u) [[unlikely]] return; }
L_003686B0:
    st32((c.r[18].w[0] + 60u), c.r[2].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
L_003686BC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_003687D4; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);  if (t) { goto L_00368714; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);  if (t) { goto L_003686DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00368748; } }
L_003686DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 720u)));
    set32(c.r[2], c.r[2].w[0] - 5424u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003686F8u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x003686F8u) [[unlikely]] return; }
L_003686F8:
    st32((c.r[18].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 356u), 0u);
    set32(c.r[2], ld32((c.r[20].w[0] + 364u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00368744; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_003687D8; } }
L_00368714:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 716u)));
    set32(c.r[2], c.r[2].w[0] - 5408u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368730u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00368730u) [[unlikely]] return; }
L_00368730:
    st32((c.r[18].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 356u), 0u);
    set32(c.r[2], ld32((c.r[20].w[0] + 368u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003687D4; } }
L_00368744:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_00368748:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368750u);  if (depth < kMaxDepth) unit_009A(c, 126u, depth + 1u); else { c.pc = 0x003692A0u; return; } if (c.pc != 0x00368750u) [[unlikely]] return; }
L_00368750:
    st32((c.r[18].w[0] + 60u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[16].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], c.r[20].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42380000u);
    c.f[3] = c.r[2].w[0];
    c.f[0] = ld32((c.r[1].w[0] - 5288u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42EA0000u);
    c.f[1] = c.r[2].w[0];
    c.f[2] = c.r[16].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x433A0000u);
    c.f[12] = c.r[2].w[0];
    st32((c.r[18].w[0] + 16u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    st32((c.r[18].w[0] + 20u), c.r[5].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st32((c.r[18].w[0] + 24u), c.r[5].w[0]);
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.f[4] = ld32((c.r[3].w[0] + 228u));
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[0] = fp::cvt_s_w(c.f[2]);
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 29;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003687C4u); c.f[13] = fp::add(c.f[4], c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003687C4u) [[unlikely]] return; }
L_003687C4:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003687D4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003687D4u) [[unlikely]] return; }
L_003687D4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_003687D8:
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003686BCu | kUnwind; return; } goto L_003686BC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42EC0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[12] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[2] = ld32((c.r[1].w[0] - 5296u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43470000u);
    set32(c.r[3], c.r[3].w[0] - 5328u);
    c.f[1] = c.r[2].w[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[18].w[0] + 16u), c.f[2]);
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.f[0] = ld32((c.r[1].w[0] - 5296u));
    st32((c.r[18].w[0] + 20u), c.f[0]);
    st32((c.r[18].w[0] + 24u), c.r[5].w[0]);
    st32((c.r[18].w[0] + 352u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 356u), 0u);
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.f[0] = ld32((c.r[20].w[0] + 236u));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 26;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036884Cu); c.f[13] = fp::add(c.f[1], c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036884Cu) [[unlikely]] return; }
L_0036884C:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036885Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036885Cu) [[unlikely]] return; }
L_0036885C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437C0000u);
    set32(c.r[3], c.r[3].w[0] - 5432u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    st32((c.r[18].w[0] + 352u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 356u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43470000u);
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.f[1] = c.r[2].w[0];
    c.f[2] = ld32((c.r[20].w[0] + 236u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003688A4u); c.f[13] = fp::add(c.f[1], c.f[2]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003688A4u) [[unlikely]] return; }
L_003688A4:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003688B4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003688B4u) [[unlikely]] return; }
L_003688B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003688BCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_009A(c, 126u, depth + 1u); else { c.pc = 0x003692A0u; return; } if (c.pc != 0x003688BCu) [[unlikely]] return; }
L_003688BC:
    set32(c.r[6], ld32((c.r[20].w[0] + 356u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42EE0000u);
    c.f[12] = c.r[3].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x43040000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41600000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x434A0000u);
    c.f[1] = c.r[3].w[0];
    st32((c.r[6].w[0] + 60u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00260000u);
    set32(c.r[2], ld32((c.r[20].w[0] + 356u)));
    c.r[3].d[0] = c.r[3].d[0] | 22647ull;
    c.f[0] = c.r[3].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    st32((c.r[2].w[0] + 160u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 164u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 356u)));
    c.f[0] = ld32((c.r[20].w[0] + 236u));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 22;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00368914u); c.f[13] = fp::add(c.f[1], c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00368914u) [[unlikely]] return; }
L_00368914:
    set32(c.r[3], ld32((c.r[20].w[0] + 356u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    st32((c.r[3].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 164u)));
    st32((c.r[3].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 168u)));
    st32((c.r[3].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 356u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00368944u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00368944u) [[unlikely]] return; }
L_00368944:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42F20000u);
    set32(c.r[5], ld32((c.r[20].w[0] + 356u)));
    c.f[12] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x434C0000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00260000u);
    st32((c.r[5].w[0] + 160u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 22647ull;
    st32((c.r[5].w[0] + 164u), c.r[3].w[0]);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], ld32((c.r[20].w[0] + 356u)));
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[0] = ld32((c.r[20].w[0] + 236u));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 19;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00368990u); c.f[13] = fp::add(c.f[1], c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00368990u) [[unlikely]] return; }
L_00368990:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368998u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00368998u) [[unlikely]] return; }
L_00368998:
    set32(c.r[4], ld32((c.r[20].w[0] + 356u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[4].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[4].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[4].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 356u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003689C8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003689C8u) [[unlikely]] return; }
L_003689C8:
    set32(c.r[5], ld32((c.r[20].w[0] + 356u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42F20000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[2] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x434C0000u);
    c.f[1] = c.r[2].w[0];
    st32((c.r[5].w[0] + 160u), c.r[4].w[0]);
    st32((c.r[5].w[0] + 164u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00260000u);
    c.f[4] = ld32((c.r[1].w[0] - 680u));
    c.r[2].d[0] = c.r[2].d[0] | 22647ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], ld32((c.r[20].w[0] + 356u)));
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[3] = ld32((c.r[1].w[0] - 5304u));
    c.f[4] = fp::cvt_s_w(c.f[4]);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.f[0] = ld32((c.r[20].w[0] + 236u));
    c.f[3] = fp::mul(c.f[3], c.f[4]);
    c.f[12] = fp::add(c.f[2], c.f[3]);
    c.budget -= 26;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00368A30u); c.f[13] = fp::add(c.f[1], c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00368A30u) [[unlikely]] return; }
L_00368A30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368A38u); set32(c.r[4], 0u + 6u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00368A38u) [[unlikely]] return; }
L_00368A38:
    set32(c.r[4], ld32((c.r[20].w[0] + 356u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[4].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[4].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[4].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 356u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00368A68u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00368A68u) [[unlikely]] return; }
L_00368A68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43380000u);
    set32(c.r[5], ld32((c.r[20].w[0] + 356u)));
    c.f[12] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x434C0000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00260000u);
    st32((c.r[5].w[0] + 160u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 22647ull;
    st32((c.r[5].w[0] + 164u), c.r[3].w[0]);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], ld32((c.r[20].w[0] + 356u)));
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[0] = ld32((c.r[20].w[0] + 236u));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 19;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00368AB4u); c.f[13] = fp::add(c.f[1], c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00368AB4u) [[unlikely]] return; }
L_00368AB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368ABCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00368ABCu) [[unlikely]] return; }
L_00368ABC:
    set32(c.r[4], ld32((c.r[20].w[0] + 356u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[4].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[4].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[4].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 356u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00368AECu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00368AECu) [[unlikely]] return; }
L_00368AEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_00368B20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368B38u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00368B38u) [[unlikely]] return; }
L_00368B38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00368B68; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00368B4C; } }
    set32(c.r[7], c.r[7].w[0] + 20u);
    c.budget -= 1;
L_00368B4C:
    set32(c.r[8], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[9], ld32((c.r[16].w[0] + 32u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368B68u); c.r[10].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 371u, depth + 1u); else { c.pc = 0x0012EBA0u; return; } if (c.pc != 0x00368B68u) [[unlikely]] return; }
L_00368B68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00368B80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368B94u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 24u, depth + 1u); else { c.pc = 0x00130260u; return; } if (c.pc != 0x00368B94u) [[unlikely]] return; }
L_00368B94:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[4], 0u + 1u);
    st32((c.r[3].w[0] + 36u), c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00368BB0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368BC8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000C(c, 25u, depth + 1u); else { c.pc = 0x00130270u; return; } if (c.pc != 0x00368BC8u) [[unlikely]] return; }
L_00368BC8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368BDCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002A(c, 139u, depth + 1u); else { c.pc = 0x001A95F0u; return; } if (c.pc != 0x00368BDCu) [[unlikely]] return; }
L_00368BDC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[3].w[0] + 624u);  if (t) { goto L_00368C3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368BF8u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00368BF8u) [[unlikely]] return; }
L_00368BF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00368C0C; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368C0Cu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_002A(c, 287u, depth + 1u); else { c.pc = 0x001AB200u; return; } if (c.pc != 0x00368C0Cu) [[unlikely]] return; }
L_00368C0C:
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368C1Cu); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x00368C1Cu) [[unlikely]] return; }
L_00368C1C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368C2Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x00368C2Cu) [[unlikely]] return; }
L_00368C2C:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368C3Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x00368C3Cu) [[unlikely]] return; }
L_00368C3C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], 0u + 152u);
    set32(c.r[3], ld32((c.r[1].w[0] - 13152u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00368C6C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00368C64u); set32(c.r[5], 0u + 151u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00368C64u) [[unlikely]] return; }
L_00368C64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00368C80; } }
L_00368C6C:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00368C80u); set32(c.r[5], 0u + 147u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00368C80u) [[unlikely]] return; }
L_00368C80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368C88u);  if (depth < kMaxDepth) unit_009F(c, 200u, depth + 1u); else { c.pc = 0x0037DCF0u; return; } if (c.pc != 0x00368C88u) [[unlikely]] return; }
L_00368C88:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368C98u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 211u, depth + 1u); else { c.pc = 0x0037DE40u; return; } if (c.pc != 0x00368C98u) [[unlikely]] return; }
L_00368C98:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368CA4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009F(c, 186u, depth + 1u); else { c.pc = 0x0037DB10u; return; } if (c.pc != 0x00368CA4u) [[unlikely]] return; }
L_00368CA4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] + 2576u);
    set32(c.r[4], c.r[17].w[0] + 52u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368CC8u); st64((c.r[5].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x00368CC8u) [[unlikely]] return; }
L_00368CC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368CD0u); set32(c.r[4], c.r[17].w[0] + 92u);  if (depth < kMaxDepth) unit_000D(c, 68u, depth + 1u); else { c.pc = 0x001348C0u; return; } if (c.pc != 0x00368CD0u) [[unlikely]] return; }
L_00368CD0:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00368CD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368CDCu); set32(c.r[4], 0u + 192u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00368CDCu) [[unlikely]] return; }
L_00368CDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] << 2);  if (t) { goto L_00368D3C; } }
    c.f[1] = c.r[16].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x42380000u);
    c.f[2] = c.r[4].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42AC0000u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x42D00000u);
    set32(c.r[6], 0u + 10u);
    c.r[7].d[0] = 0ull + 0ull;
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = c.r[3].w[0];
    c.f[12] = c.r[4].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43220000u);
    c.f[14] = c.r[3].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[15] = c.r[4].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[13] = fp::add(c.f[0], c.f[1]);
    c.f[16] = c.r[3].w[0];
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368D38u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 46u, depth + 1u); else { c.pc = 0x002BC900u; return; } if (c.pc != 0x00368D38u) [[unlikely]] return; }
L_00368D38:
    set32(c.r[3], c.r[16].w[0] << 2);
    c.budget -= 1;
L_00368D3C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[3].w[0] + 216u), c.r[2].w[0]);
    c.f[12] = 0u;
    c.f[0] = ld32((c.r[1].w[0] + 2600u));
    set32(c.r[2], ld32((c.r[3].w[0] + 216u)));
    set32(c.r[6], 0u + 1u);
    st32((c.r[2].w[0] + 40u), c.f[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 216u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00368D74u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00368D74u) [[unlikely]] return; }
L_00368D74:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 33u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00368CD4u | kUnwind; return; } goto L_00368CD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368D8Cu);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x00368D8Cu) [[unlikely]] return; }
L_00368D8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00368DA0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] + 2608u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[7], c.r[29].w[0] + 48u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], 0u + 3u);
    ld128((c.r[5].w[0]) & ~15u, c.r[6]);
    c.r[5].d[0] = ld64((c.r[5].w[0] + 16u));
    st128((c.r[7].w[0]) & ~15u, c.r[6]);
    st64((c.r[7].w[0] + 16u), c.r[5].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 15;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00368EE0; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00368E00; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00368E00; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00368E00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00368FA4; } }
L_00368E00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368E08u);  if (depth < kMaxDepth) unit_0087(c, 101u, depth + 1u); else { c.pc = 0x0031CBF0u; return; } if (c.pc != 0x00368E08u) [[unlikely]] return; }
L_00368E08:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 355u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00368E30; } }
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & 19ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00368E30; } }
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_00368E30:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 6u);  if (t) { goto L_00368E7C; } }
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 416u), c.r[5].w[0]);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 14u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368E54u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 267u, depth + 1u); else { c.pc = 0x0016A910u; return; } if (c.pc != 0x00368E54u) [[unlikely]] return; }
L_00368E54:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00368E64; } }
    st32((c.r[2].w[0] + 36u), 0u);
    c.budget -= 1;
L_00368E64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368E6Cu);  if (depth < kMaxDepth) unit_009F(c, 127u, depth + 1u); else { c.pc = 0x0037D270u; return; } if (c.pc != 0x00368E6Cu) [[unlikely]] return; }
L_00368E6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368E74u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 156u, depth + 1u); else { c.pc = 0x0037D530u; return; } if (c.pc != 0x00368E74u) [[unlikely]] return; }
L_00368E74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00368FA0; } }
L_00368E7C:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[4].w[0] - 5344u);
    set32(c.r[3], 0u + 2u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[2].w[0] + 1u);  if (t) { goto L_00368EBC; } }
L_00368E94:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[16].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[5].w[0] + 244u), c.f[0]);
    st32((c.r[16].w[0] + 260u), 0u);
    st32((c.r[5].w[0] + 264u), c.r[3].w[0]);
    c.budget -= 10;
L_00368EBC:
    c.r[2].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00368E94u | kUnwind; return; } goto L_00368E94; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[4], 0u + 15u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368ED8u); st32((c.r[2].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x00368ED8u) [[unlikely]] return; }
L_00368ED8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00368FA0; } }
L_00368EE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368EE8u);  if (depth < kMaxDepth) unit_000C(c, 26u, depth + 1u); else { c.pc = 0x00130280u; return; } if (c.pc != 0x00368EE8u) [[unlikely]] return; }
L_00368EE8:
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00368F04; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00368F04u); set32(c.r[5], 0u + 148u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00368F04u) [[unlikely]] return; }
L_00368F04:
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368F10u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x00368F10u) [[unlikely]] return; }
L_00368F10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368F18u); set32(c.r[4], c.r[16].w[0] + 92u);  if (depth < kMaxDepth) unit_000D(c, 69u, depth + 1u); else { c.pc = 0x001348D0u; return; } if (c.pc != 0x00368F18u) [[unlikely]] return; }
L_00368F18:
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[17].w[0] << 2);
    c.budget -= 2;
L_00368F20:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[6], 0u + 10u);
    set32(c.r[4], ld32((c.r[2].w[0] + 216u)));
    c.f[12] = 0u;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00368F44u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00368F44u) [[unlikely]] return; }
L_00368F44:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00368F20u | kUnwind; return; } goto L_00368F20; } }
    set32(c.r[2], 0u + 148u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368F64u); st32((c.r[1].w[0] - 13152u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0087(c, 101u, depth + 1u); else { c.pc = 0x0031CBF0u; return; } if (c.pc != 0x00368F64u) [[unlikely]] return; }
L_00368F64:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 720u)));
    st8((c.r[2].w[0] + 346u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 716u)));
    st8((c.r[2].w[0] + 349u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 680u)));
    st8((c.r[2].w[0] + 357u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 644u)));
    st16((c.r[2].w[0] + 1100u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 640u)));
    st8((c.r[2].w[0] + 1104u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 15;
L_00368FA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00368FA4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00368FC0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368FD8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 27u, depth + 1u); else { c.pc = 0x00130290u; return; } if (c.pc != 0x00368FD8u) [[unlikely]] return; }
L_00368FD8:
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00368FF4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00368FF4u); set32(c.r[5], 0u + 148u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00368FF4u) [[unlikely]] return; }
L_00368FF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], 0u + 148u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] + 2640u);
    st32((c.r[1].w[0] - 13152u), c.r[3].w[0]);
    set32(c.r[5], c.r[29].w[0] + 48u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369024u); st64((c.r[5].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x00369024u) [[unlikely]] return; }
L_00369024:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036902Cu); set32(c.r[4], c.r[16].w[0] + 92u);  if (depth < kMaxDepth) unit_000D(c, 69u, depth + 1u); else { c.pc = 0x001348D0u; return; } if (c.pc != 0x0036902Cu) [[unlikely]] return; }
L_0036902C:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00369030:
    set32(c.r[2], c.r[17].w[0] << 2);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[6], 0u + 10u);
    set32(c.r[4], ld32((c.r[2].w[0] + 216u)));
    c.f[12] = 0u;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00369058u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00369058u) [[unlikely]] return; }
L_00369058:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00369030u | kUnwind; return; } goto L_00369030; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00369080:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00130300u | kUnwind; return; } [[clang::musttail]] return unit_000C(c, 32u, depth); }
L_00369090:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00369154; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003690B4u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 101u, depth + 1u); else { c.pc = 0x0031CBF0u; return; } if (c.pc != 0x003690B4u) [[unlikely]] return; }
L_003690B4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 346u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 720u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);  if (t) { goto L_003690CC; } }
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003690CC:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 349u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 716u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003690E0; } }
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003690E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 357u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 680u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003690F8; } }
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003690F8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[5], 0u + 5u);  if (t) { goto L_00369144; } }
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 416u), c.r[5].w[0]);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 14u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036911Cu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 267u, depth + 1u); else { c.pc = 0x0016A910u; return; } if (c.pc != 0x0036911Cu) [[unlikely]] return; }
L_0036911C:
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036912C; } }
    st32((c.r[2].w[0] + 36u), 0u);
    c.budget -= 1;
L_0036912C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369134u);  if (depth < kMaxDepth) unit_009F(c, 127u, depth + 1u); else { c.pc = 0x0037D270u; return; } if (c.pc != 0x00369134u) [[unlikely]] return; }
L_00369134:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036913Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 156u, depth + 1u); else { c.pc = 0x0037D530u; return; } if (c.pc != 0x0036913Cu) [[unlikely]] return; }
L_0036913C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00369158; } }
L_00369144:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00369154u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00369154u) [[unlikely]] return; }
L_00369154:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00369158:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00369170:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x001302B0u | kUnwind; return; } [[clang::musttail]] return unit_000C(c, 29u, depth); }
L_00369180:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369198u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000B(c, 304u, depth + 1u); else { c.pc = 0x0012E500u; return; } if (c.pc != 0x00369198u) [[unlikely]] return; }
L_00369198:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 344u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003691D0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 348u)));
    set32(c.r[3], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0] + 348u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 336u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 288u);  if (t) { goto L_00369204; } }
    st32((c.r[17].w[0] + 348u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 344u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00369200; } }
L_003691D0:
    set32(c.r[2], ld32((c.r[17].w[0] + 348u)));
    set32(c.r[4], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 348u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 340u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 336u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00369200; } }
    st32((c.r[17].w[0] + 348u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 344u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00369200:
    set32(c.r[4], c.r[17].w[0] + 288u);
    c.budget -= 1;
L_00369204:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036920Cu);  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x0036920Cu) [[unlikely]] return; }
L_0036920C:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[16].w[0] << 2);
    c.budget -= 2;
L_00369214:
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 216u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00369274; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42380000u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[3] = c.r[2].w[0];
    c.f[2] = c.r[16].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42AC0000u);
    c.f[1] = c.r[2].w[0];
    c.f[4] = ld32((c.r[3].w[0] + 228u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42D00000u);
    set32(c.r[25], ld32((c.r[25].w[0] + 72u)));
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::cvt_s_w(c.f[2]);
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 20;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00369274u); c.f[13] = fp::add(c.f[4], c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00369274u) [[unlikely]] return; }
L_00369274:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00369214u | kUnwind; return; } goto L_00369214; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003692A0:
    c.f[0] = ld32((c.r[4].w[0] + 64u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003692C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003692D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 135u, depth + 1u); else { c.pc = 0x001A9560u; return; } if (c.pc != 0x003692D4u) [[unlikely]] return; }
L_003692D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003692EC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003692ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003692ECu) [[unlikely]] return; }
L_003692EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00369300:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369314u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009A(c, 165u, depth + 1u); else { c.pc = 0x003698E0u; return; } if (c.pc != 0x00369314u) [[unlikely]] return; }
L_00369314:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036932C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036932Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036932Cu) [[unlikely]] return; }
L_0036932C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00369340:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[1].w[0] + 25376u)));
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003693E0; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00369370u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00369370u) [[unlikely]] return; }
L_00369370:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036984C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369380u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 231u, depth + 1u); else { c.pc = 0x0016A360u; return; } if (c.pc != 0x00369380u) [[unlikely]] return; }
L_00369380:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036938Cu); c.r[17].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_001A(c, 271u, depth + 1u); else { c.pc = 0x0016A9E0u; return; } if (c.pc != 0x0036938Cu) [[unlikely]] return; }
L_0036938C:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003693A0; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 2;
L_003693A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003693A8u);  if (depth < kMaxDepth) unit_009F(c, 127u, depth + 1u); else { c.pc = 0x0037D270u; return; } if (c.pc != 0x003693A8u) [[unlikely]] return; }
L_003693A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003693B0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 157u, depth + 1u); else { c.pc = 0x0037D560u; return; } if (c.pc != 0x003693B0u) [[unlikely]] return; }
L_003693B0:
    set32(c.r[4], ld32((c.r[16].w[0] + 416u)));
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0036984C; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0036984C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003693D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003693D8u) [[unlikely]] return; }
L_003693D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00369850; } }
L_003693E0:
    set32(c.r[3], ld32((c.r[16].w[0] + 276u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036984C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 260u)));
    c.r[1].d[0] = c.r[3].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00369610; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 36u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[2] = c.r[3].w[0];
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[6].w[0] + 1u);  if (t) { goto L_00369468; } }
    set32(c.r[3], c.r[7].w[0] << 2);
    c.budget -= 1;
L_0036941C:
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 264u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_00369448; } }
    c.f[1] = ld32((c.r[3].w[0] + 244u));
    c.f[0] = ld32((c.r[3].w[0] + 228u));
    fpu_div(c, 1u, c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 228u), c.f[0]);  if (t) { goto L_00369464; } }
L_00369448:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[4].d[0];  if (t) { goto L_00369464; } }
    c.f[1] = ld32((c.r[3].w[0] + 244u));
    c.f[0] = ld32((c.r[3].w[0] + 228u));
    fpu_div(c, 1u, c.f[1], c.f[2]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 228u), c.f[0]);
    c.budget -= 5;
L_00369464:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_00369468:
    c.r[3].d[0] = c.r[7].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[7].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036941Cu | kUnwind; return; } goto L_0036941C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 260u)));
    set32(c.r[3], 0u + 15u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[16].w[0] + 260u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 260u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0036984C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 276u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_003694E0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[3].w[0] + 1u);  if (t) { goto L_003694C4; } }
    set32(c.r[3], c.r[4].w[0] << 2);
    c.budget -= 1;
L_003694B0:
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[3].w[0] + 244u), 0u);
    st32((c.r[16].w[0] + 260u), 0u);
    st32((c.r[3].w[0] + 264u), 0u);
    c.budget -= 5;
L_003694C4:
    c.r[3].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003694B0u | kUnwind; return; } goto L_003694B0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 36u), c.r[4].w[0]);  if (t) { goto L_0036984C; } }
L_003694E0:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003695E0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_0036956C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00369508; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 36u)));  if (t) { goto L_00369614; } }
L_00369508:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369510u); set32(c.r[4], 0u + 448u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00369510u) [[unlikely]] return; }
L_00369510:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00369564; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = ld32((c.r[1].w[0] - 5392u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.f[13] = c.r[2].w[0];
    set32(c.r[5], c.r[5].w[0] + 2080u);
    set32(c.r[6], 0u + 3u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x433A0000u);
    c.f[15] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42BC0000u);
    c.f[12] = ld32((c.r[1].w[0] - 5288u));
    c.f[0] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[7], ld32((c.r[1].w[0] - 720u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369560u); c.f[16] = fp::add(c.f[0], c.f[14]);  if (depth < kMaxDepth) unit_009A(c, 166u, depth + 1u); else { c.pc = 0x00369900u; return; } if (c.pc != 0x00369560u) [[unlikely]] return; }
L_00369560:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00369564:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 364u), c.r[4].w[0]);  if (t) { goto L_00369610; } }
L_0036956C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369574u); set32(c.r[4], 0u + 448u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00369574u) [[unlikely]] return; }
L_00369574:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003695D8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = ld32((c.r[1].w[0] - 5392u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.f[13] = c.r[2].w[0];
    set32(c.r[5], c.r[5].w[0] + 2112u);
    set32(c.r[6], 0u + 4u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x433A0000u);
    c.f[15] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42BC0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = c.r[2].w[0];
    c.f[12] = ld32((c.r[1].w[0] - 5288u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[14]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[7], ld32((c.r[1].w[0] - 716u)));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003695D4u); c.f[16] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_009A(c, 166u, depth + 1u); else { c.pc = 0x00369900u; return; } if (c.pc != 0x003695D4u) [[unlikely]] return; }
L_003695D4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003695D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 368u), c.r[4].w[0]);  if (t) { goto L_00369610; } }
L_003695E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003695E8u); set32(c.r[4], 0u + 144u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003695E8u) [[unlikely]] return; }
L_003695E8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036960C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[5], c.r[5].w[0] - 5376u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369608u); set32(c.r[6], c.r[6].w[0] - 720u);  if (depth < kMaxDepth) unit_009A(c, 212u, depth + 1u); else { c.pc = 0x00369D90u; return; } if (c.pc != 0x00369608u) [[unlikely]] return; }
L_00369608:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0036960C:
    st32((c.r[16].w[0] + 372u), c.r[4].w[0]);
    c.budget -= 1;
L_00369610:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 1;
L_00369614:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003697B4; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003696F8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036963C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036984C; } }
L_0036963C:
    set32(c.r[4], ld32((c.r[16].w[0] + 364u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036984C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00369658u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00369658u) [[unlikely]] return; }
L_00369658:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036984C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 364u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00369674u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00369674u) [[unlikely]] return; }
L_00369674:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[1].w[0] - 720u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 364u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003696A0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003696A0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003696A0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003696A0u) [[unlikely]] return; }
L_003696A0:
    st32((c.r[16].w[0] + 364u), 0u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[5], c.r[5].w[0] - 5344u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[3].w[0] + 1u);  if (t) { goto L_003696E4; } }
L_003696BC:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[16].w[0] + c.r[6].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[6].w[0] + 244u), c.f[0]);
    st32((c.r[16].w[0] + 260u), 0u);
    st32((c.r[6].w[0] + 264u), c.r[4].w[0]);
    c.budget -= 10;
L_003696E4:
    c.r[3].d[0] = c.r[7].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003696BCu | kUnwind; return; } goto L_003696BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036984C; } }
L_003696F8:
    set32(c.r[4], ld32((c.r[16].w[0] + 368u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036984C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00369714u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00369714u) [[unlikely]] return; }
L_00369714:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036984C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 368u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00369730u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00369730u) [[unlikely]] return; }
L_00369730:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[1].w[0] - 716u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 368u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036975C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036975C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036975Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036975Cu) [[unlikely]] return; }
L_0036975C:
    st32((c.r[16].w[0] + 368u), 0u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[5], c.r[5].w[0] - 5344u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[3].w[0] + 1u);  if (t) { goto L_003697A0; } }
L_00369778:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[16].w[0] + c.r[6].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[6].w[0] + 244u), c.f[0]);
    st32((c.r[16].w[0] + 260u), 0u);
    st32((c.r[6].w[0] + 264u), c.r[4].w[0]);
    c.budget -= 10;
L_003697A0:
    c.r[3].d[0] = c.r[7].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00369778u | kUnwind; return; } goto L_00369778; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036984C; } }
L_003697B4:
    set32(c.r[4], ld32((c.r[16].w[0] + 372u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036984C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003697D0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003697D0u) [[unlikely]] return; }
L_003697D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036984C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 372u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003697FC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003697FC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003697FCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003697FCu) [[unlikely]] return; }
L_003697FC:
    st32((c.r[16].w[0] + 372u), 0u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[5], c.r[5].w[0] - 5344u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[3].w[0] + 1u);  if (t) { goto L_00369840; } }
L_00369818:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[16].w[0] + c.r[6].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[6].w[0] + 244u), c.f[0]);
    st32((c.r[16].w[0] + 260u), 0u);
    st32((c.r[6].w[0] + 264u), c.r[4].w[0]);
    c.budget -= 10;
L_00369840:
    c.r[3].d[0] = c.r[7].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00369818u | kUnwind; return; } goto L_00369818; } }
L_0036984C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00369850:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00369860:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369874u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009A(c, 165u, depth + 1u); else { c.pc = 0x003698E0u; return; } if (c.pc != 0x00369874u) [[unlikely]] return; }
L_00369874:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036988C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036988Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036988Cu) [[unlikely]] return; }
L_0036988C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003698A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003698B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009A(c, 165u, depth + 1u); else { c.pc = 0x003698E0u; return; } if (c.pc != 0x003698B4u) [[unlikely]] return; }
L_003698B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003698CC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003698CCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003698CCu) [[unlikely]] return; }
L_003698CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003698E0:
    set32(c.r[3], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003698F0; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 137u));
    c.budget -= 1;
L_003698F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00369900:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.f[24]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0] + 12u), c.f[23]);
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[24] = c.f[12];
    c.f[23] = c.f[13];
    c.f[22] = c.f[14];
    c.f[21] = c.f[15];
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369958u); c.f[20] = c.f[16];  if (depth < kMaxDepth) unit_000C(c, 12u, depth + 1u); else { c.pc = 0x001300B0u; return; } if (c.pc != 0x00369958u) [[unlikely]] return; }
L_00369958:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 29648u);
    set32(c.r[2], c.r[2].w[0] + 29736u);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[19].w[0] + 40u);
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036997Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 271u, depth + 1u); else { c.pc = 0x002275A0u; return; } if (c.pc != 0x0036997Cu) [[unlikely]] return; }
L_0036997C:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.f[24];
    set32(c.r[4], c.r[19].w[0] + 80u);
    c.f[13] = c.f[23];
    c.r[7].d[0] = 0ull + 0ull;
    c.f[14] = c.f[22];
    c.r[8].d[0] = 0ull + 0ull;
    c.f[15] = c.f[21];
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003699ACu); c.f[16] = c.f[20];  if (depth < kMaxDepth) unit_000C(c, 301u, depth + 1u); else { c.pc = 0x00132AA0u; return; } if (c.pc != 0x003699ACu) [[unlikely]] return; }
L_003699AC:
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003699BCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003699BCu) [[unlikely]] return; }
L_003699BC:
    set32(c.r[2], 0u + 200u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[19].w[0] + 384u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 140u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003699D8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003699D8u) [[unlikely]] return; }
L_003699D8:
    st32((c.r[19].w[0] + 432u), c.r[16].w[0]);
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00369A10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00369A80; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 29648u);
    set32(c.r[2], c.r[2].w[0] + 29736u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 80u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369A50u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 311u, depth + 1u); else { c.pc = 0x00132C60u; return; } if (c.pc != 0x00369A50u) [[unlikely]] return; }
L_00369A50:
    set32(c.r[4], c.r[17].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369A5Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0049(c, 274u, depth + 1u); else { c.pc = 0x002275F0u; return; } if (c.pc != 0x00369A5Cu) [[unlikely]] return; }
L_00369A5C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369A68u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 15u, depth + 1u); else { c.pc = 0x00130130u; return; } if (c.pc != 0x00369A68u) [[unlikely]] return; }
L_00369A68:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00369A84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369A80u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00369A80u) [[unlikely]] return; }
L_00369A80:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00369A84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00369AA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369AB8u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00369AB8u) [[unlikely]] return; }
L_00369AB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00369AE8; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00369ACC; } }
    set32(c.r[7], c.r[7].w[0] + 20u);
    c.budget -= 1;
L_00369ACC:
    set32(c.r[8], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[9], ld32((c.r[16].w[0] + 32u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369AE8u); c.r[10].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 371u, depth + 1u); else { c.pc = 0x0012EBA0u; return; } if (c.pc != 0x00369AE8u) [[unlikely]] return; }
L_00369AE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00369B00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369B14u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 24u, depth + 1u); else { c.pc = 0x00130260u; return; } if (c.pc != 0x00369B14u) [[unlikely]] return; }
L_00369B14:
    st32((c.r[16].w[0] + 364u), 0u);
    set32(c.r[4], c.r[16].w[0] + 304u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369B24u); st8((c.r[16].w[0] + 360u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x00369B24u) [[unlikely]] return; }
L_00369B24:
    st32((c.r[16].w[0] + 396u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00369B40:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00130270u | kUnwind; return; } [[clang::musttail]] return unit_000C(c, 25u, depth); }
L_00369B50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369B60u);  if (depth < kMaxDepth) unit_000C(c, 26u, depth + 1u); else { c.pc = 0x00130280u; return; } if (c.pc != 0x00369B60u) [[unlikely]] return; }
L_00369B60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369B68u); set32(c.r[4], 0u + 33u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x00369B68u) [[unlikely]] return; }
L_00369B68:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00369B80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369B90u);  if (depth < kMaxDepth) unit_000C(c, 27u, depth + 1u); else { c.pc = 0x00130290u; return; } if (c.pc != 0x00369B90u) [[unlikely]] return; }
L_00369B90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369B98u); set32(c.r[4], 0u + 33u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x00369B98u) [[unlikely]] return; }
L_00369B98:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00369BB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369BCCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 32u, depth + 1u); else { c.pc = 0x00130300u; return; } if (c.pc != 0x00369BCCu) [[unlikely]] return; }
L_00369BCC:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[4], c.r[17].w[0] + 304u);
    st32((c.r[17].w[0] + 380u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 364u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369BE4u); st8((c.r[17].w[0] + 360u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x00369BE4u) [[unlikely]] return; }
L_00369BE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00369C00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369C1Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 29u, depth + 1u); else { c.pc = 0x001302B0u; return; } if (c.pc != 0x00369C1Cu) [[unlikely]] return; }
L_00369C1C:
    st32((c.r[17].w[0] + 380u), c.r[16].w[0]);
    set32(c.r[4], c.r[17].w[0] + 304u);
    st32((c.r[17].w[0] + 364u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369C30u); st8((c.r[17].w[0] + 360u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x00369C30u) [[unlikely]] return; }
L_00369C30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00369C50:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E500u | kUnwind; return; } [[clang::musttail]] return unit_000B(c, 304u, depth); }
L_00369C60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369C74u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 135u, depth + 1u); else { c.pc = 0x001A9560u; return; } if (c.pc != 0x00369C74u) [[unlikely]] return; }
L_00369C74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00369C8C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00369C8Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00369C8Cu) [[unlikely]] return; }
L_00369C8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00369CA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369CB4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009A(c, 210u, depth + 1u); else { c.pc = 0x00369D70u; return; } if (c.pc != 0x00369CB4u) [[unlikely]] return; }
L_00369CB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00369CCC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00369CCCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00369CCCu) [[unlikely]] return; }
L_00369CCC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00369CE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369CF4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009A(c, 210u, depth + 1u); else { c.pc = 0x00369D70u; return; } if (c.pc != 0x00369CF4u) [[unlikely]] return; }
L_00369CF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00369D0C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00369D0Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00369D0Cu) [[unlikely]] return; }
L_00369D0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00369D20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369D34u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009A(c, 210u, depth + 1u); else { c.pc = 0x00369D70u; return; } if (c.pc != 0x00369D34u) [[unlikely]] return; }
L_00369D34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00369D60; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[16].w[0] + 432u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 140u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00369D50u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00369D50u) [[unlikely]] return; }
L_00369D50:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00369D60u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00369D60u) [[unlikely]] return; }
L_00369D60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00369D70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00369D80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00369D90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[8].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369DC4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 465u, depth + 1u); else { c.pc = 0x0012FE40u; return; } if (c.pc != 0x00369DC4u) [[unlikely]] return; }
L_00369DC4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 29504u);
    set32(c.r[2], c.r[2].w[0] + 29592u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 72u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369DE8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 271u, depth + 1u); else { c.pc = 0x002275A0u; return; } if (c.pc != 0x00369DE8u) [[unlikely]] return; }
L_00369DE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369DF0u); set32(c.r[4], c.r[16].w[0] + 108u);  if (depth < kMaxDepth) unit_00A1(c, 15u, depth + 1u); else { c.pc = 0x00384260u; return; } if (c.pc != 0x00369DF0u) [[unlikely]] return; }
L_00369DF0:
    st32((c.r[16].w[0] + 124u), 0u);
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 136u), c.r[17].w[0]);
    set32(c.r[4], 0u + 148u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369E08u); st32((c.r[16].w[0] + 68u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00369E08u) [[unlikely]] return; }
L_00369E08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00369E1C; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369E1Cu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0098(c, 111u, depth + 1u); else { c.pc = 0x00361630u; return; } if (c.pc != 0x00369E1Cu) [[unlikely]] return; }
L_00369E1C:
    st32((c.r[16].w[0] + 124u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369E28u); set32(c.r[4], ld32((c.r[16].w[0] + 124u)));  if (depth < kMaxDepth) unit_0098(c, 259u, depth + 1u); else { c.pc = 0x00362CF0u; return; } if (c.pc != 0x00369E28u) [[unlikely]] return; }
L_00369E28:
    set32(c.r[2], ld32((c.r[16].w[0] + 136u)));
    set32(c.r[4], c.r[16].w[0] + 108u);
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369E4Cu); st32((c.r[16].w[0] + 140u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A1(c, 20u, depth + 1u); else { c.pc = 0x00384400u; return; } if (c.pc != 0x00369E4Cu) [[unlikely]] return; }
L_00369E4C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00369E70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00369EB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 30800u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369EA0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E490u; return; } if (c.pc != 0x00369EA0u) [[unlikely]] return; }
L_00369EA0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00369EBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369EB8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00369EB8u) [[unlikely]] return; }
L_00369EB8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00369EBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00369ED0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00369F78; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 29504u);
    set32(c.r[2], c.r[2].w[0] + 29592u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00369F28; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00369F28; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00369F28u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00369F28u) [[unlikely]] return; }
L_00369F28:
    set32(c.r[4], c.r[17].w[0] + 108u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0] + 124u), 0u);  if (t) { goto L_00369F48; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 30800u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369F48u); st32((c.r[17].w[0] + 108u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E490u; return; } if (c.pc != 0x00369F48u) [[unlikely]] return; }
L_00369F48:
    set32(c.r[4], c.r[17].w[0] + 72u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369F54u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0049(c, 274u, depth + 1u); else { c.pc = 0x002275F0u; return; } if (c.pc != 0x00369F54u) [[unlikely]] return; }
L_00369F54:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369F60u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 469u, depth + 1u); else { c.pc = 0x0012FEF0u; return; } if (c.pc != 0x00369F60u) [[unlikely]] return; }
L_00369F60:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00369F7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369F78u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00369F78u) [[unlikely]] return; }
L_00369F78:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00369F7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00369F90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369FA4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 304u, depth + 1u); else { c.pc = 0x0012E500u; return; } if (c.pc != 0x00369FA4u) [[unlikely]] return; }
L_00369FA4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 1536u)));
    c.f[12] = 0u;
    c.r[3].d[0] = ld8((c.r[3].w[0] + 10u));
    c.r[1].d[0] = c.r[3].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[3].sd[0] < 129ll ? 1ull : 0ull;  if (t) { goto L_00369FE8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 136u)));
    set32(c.r[4], c.r[3].w[0] + 40u);
    set32(c.r[3], ld32((c.r[3].w[0] + 40u)));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0036A018; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[12] = ld32((c.r[1].w[0] - 5312u));  if (t) { goto L_0036A018; } }
L_00369FE8:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0036A018; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 136u)));
    set32(c.r[4], c.r[3].w[0] + 40u);
    set32(c.r[3], ld32((c.r[3].w[0] + 40u)));
    c.r[1].d[0] = c.r[3].sd[0] < 100ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0036A018; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.f[12] = ld32((c.r[1].w[0] - 5320u));
    c.budget -= 4;
L_0036A018:
    c.f[13] = 0u;
    fpu_compare(c, fp::key(c.f[13]) == fp::key(c.f[12]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[16].w[0] + 108u);  if (t) { goto L_0036A038; } }
    c.f[14] = c.f[13];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A038u); c.f[15] = c.f[13];  if (depth < kMaxDepth) unit_00A1(c, 18u, depth + 1u); else { c.pc = 0x003842D0u; return; } if (c.pc != 0x0036A038u) [[unlikely]] return; }
L_0036A038:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036A050:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 2672u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[5], c.r[29].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 72u);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A07Cu); st64((c.r[5].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x0036A07Cu) [[unlikely]] return; }
L_0036A07C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0036A090:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 2704u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], c.r[29].w[0] + 32u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 72u);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A0C4u); st64((c.r[5].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x0036A0C4u) [[unlikely]] return; }
L_0036A0C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A0CCu); set32(c.r[4], ld32((c.r[16].w[0] + 124u)));  if (depth < kMaxDepth) unit_0098(c, 262u, depth + 1u); else { c.pc = 0x00362D60u; return; } if (c.pc != 0x0036A0CCu) [[unlikely]] return; }
L_0036A0CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0036A0E0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012FF90u | kUnwind; return; } [[clang::musttail]] return unit_000B(c, 474u, depth); }
L_0036A0F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A104u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 475u, depth + 1u); else { c.pc = 0x0012FFA0u; return; } if (c.pc != 0x0036A104u) [[unlikely]] return; }
L_0036A104:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A10Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009A(c, 232u, depth + 1u); else { c.pc = 0x0036A050u; return; } if (c.pc != 0x0036A10Cu) [[unlikely]] return; }
L_0036A10C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036A120:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A134u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 476u, depth + 1u); else { c.pc = 0x0012FFB0u; return; } if (c.pc != 0x0036A134u) [[unlikely]] return; }
L_0036A134:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A13Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009A(c, 234u, depth + 1u); else { c.pc = 0x0036A090u; return; } if (c.pc != 0x0036A13Cu) [[unlikely]] return; }
L_0036A13C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A144u); set32(c.r[4], 0u + 33u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x0036A144u) [[unlikely]] return; }
L_0036A144:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036A160:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A174u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 477u, depth + 1u); else { c.pc = 0x0012FFC0u; return; } if (c.pc != 0x0036A174u) [[unlikely]] return; }
L_0036A174:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A17Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009A(c, 234u, depth + 1u); else { c.pc = 0x0036A090u; return; } if (c.pc != 0x0036A17Cu) [[unlikely]] return; }
L_0036A17C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A184u); set32(c.r[4], 0u + 33u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x0036A184u) [[unlikely]] return; }
L_0036A184:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036A1A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A1B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 135u, depth + 1u); else { c.pc = 0x001A9560u; return; } if (c.pc != 0x0036A1B4u) [[unlikely]] return; }
L_0036A1B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036A1CC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A1CCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036A1CCu) [[unlikely]] return; }
L_0036A1CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036A1E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A1F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009A(c, 262u, depth + 1u); else { c.pc = 0x0036A2C0u; return; } if (c.pc != 0x0036A1F4u) [[unlikely]] return; }
L_0036A1F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036A20C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A20Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036A20Cu) [[unlikely]] return; }
L_0036A20C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036A220:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036A230:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A244u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009A(c, 262u, depth + 1u); else { c.pc = 0x0036A2C0u; return; } if (c.pc != 0x0036A244u) [[unlikely]] return; }
L_0036A244:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036A25C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A25Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036A25Cu) [[unlikely]] return; }
L_0036A25C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036A270:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A284u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009A(c, 262u, depth + 1u); else { c.pc = 0x0036A2C0u; return; } if (c.pc != 0x0036A284u) [[unlikely]] return; }
L_0036A284:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036A2A8; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A29Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036A29Cu) [[unlikely]] return; }
L_0036A29C:
    set32(c.r[4], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 136u)));
    st32((c.r[3].w[0] + 40u), c.r[4].w[0]);
    c.budget -= 3;
L_0036A2A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036A2C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld8((c.r[4].w[0] + 104u));  c.pc = t; return; }
L_0036A2D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036A2E0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00369090u | kUnwind; return; } goto L_00369090; }
L_0036A2F0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00369080u | kUnwind; return; } goto L_00369080; }
L_0036A300:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003681C0u | kUnwind; return; } goto L_003681C0; }
L_0036A310:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00368330u | kUnwind; return; } goto L_00368330; }
L_0036A320:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003681C0u | kUnwind; return; } goto L_003681C0; }
L_0036A330:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00369BB0u | kUnwind; return; } goto L_00369BB0; }
L_0036A340:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00369A10u | kUnwind; return; } goto L_00369A10; }
L_0036A350:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00369ED0u | kUnwind; return; } goto L_00369ED0; }
L_0036A360:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.f[24]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[24] = c.f[12];
    c.f[23] = c.f[13];
    c.f[22] = c.f[14];
    c.f[21] = c.f[15];
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A3BCu); c.f[20] = c.f[16];  if (depth < kMaxDepth) unit_0012(c, 254u, depth + 1u); else { c.pc = 0x0014AA40u; return; } if (c.pc != 0x0036A3BCu) [[unlikely]] return; }
L_0036A3BC:
    set32(c.r[4], c.r[20].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A3C8u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x0036A3C8u) [[unlikely]] return; }
L_0036A3C8:
    set32(c.r[4], c.r[20].w[0] + 204u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A3D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 256u, depth + 1u); else { c.pc = 0x0013E440u; return; } if (c.pc != 0x0036A3D4u) [[unlikely]] return; }
L_0036A3D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 31840u);
    set32(c.r[3], c.r[3].w[0] + 31868u);
    st32((c.r[20].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[4], 0u + 9u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[20].w[0] + 192u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 31884u);
    st32((c.r[20].w[0] + 204u), c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A404u); st32((c.r[20].w[0] + 212u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0036A404u) [[unlikely]] return; }
L_0036A404:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A410u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0036A410u) [[unlikely]] return; }
L_0036A410:
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    set32(c.r[5], 0u + 30u);
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    st128((c.r[20].w[0] + 224u) & ~15u, c.r[6]);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    ld128((c.r[16].w[0]) & ~15u, c.r[2]);
    st128((c.r[20].w[0] + 240u) & ~15u, c.r[2]);
    st32((c.r[20].w[0] + 276u), c.r[5].w[0]);
    st32((c.r[20].w[0] + 272u), 0u);
    st32((c.r[20].w[0] + 284u), 0u);
    st8((c.r[20].w[0] + 280u), static_cast<std::uint8_t>(0u));
    ld128((c.r[20].w[0] + 224u) & ~15u, c.r[2]);
    st128((c.r[20].w[0] + 256u) & ~15u, c.r[2]);
    st32((c.r[20].w[0] + 288u), c.r[19].w[0]);
    st32((c.r[20].w[0] + 292u), 0u);
    st32((c.r[20].w[0] + 296u), 0u);
    st32((c.r[20].w[0] + 300u), 0u);
    st32((c.r[20].w[0] + 304u), c.f[24]);
    st32((c.r[20].w[0] + 308u), c.f[23]);
    st32((c.r[20].w[0] + 312u), c.f[22]);
    st32((c.r[20].w[0] + 316u), c.f[21]);
    st32((c.r[20].w[0] + 320u), c.f[20]);
    st32((c.r[20].w[0] + 324u), c.r[18].w[0]);
    st32((c.r[20].w[0] + 328u), c.r[17].w[0]);
    st32((c.r[20].w[0] + 340u), c.r[19].w[0]);
    st8((c.r[20].w[0] + 344u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    c.f[12] = ld32((c.r[20].w[0] + 316u));
    c.f[13] = ld32((c.r[20].w[0] + 320u));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 35;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A49Cu); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036A49Cu) [[unlikely]] return; }
L_0036A49C:
    c.r[1].d[0] = c.r[19].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0036A4B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 336u), c.r[2].w[0]);  if (t) { goto L_0036A4E8; } }
L_0036A4B0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; mmi::div(c, 0, c.r[19].w[0], c.r[17].w[0]);  if (t) { goto L_0036A4BC; } }
    breakpoint(c, 0x0036A4B8u);
    c.budget -= 1;
L_0036A4BC:
    c.r[2].d[0] = c.lo.d[0];
    mmi::div(c, 0, c.r[19].w[0], c.r[17].w[0]);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != 0ull; st32((c.r[20].w[0] + 336u), c.r[2].w[0]);  if (t) { goto L_0036A4D0; } }
    breakpoint(c, 0x0036A4CCu);
    c.budget -= 1;
L_0036A4D0:
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0036A4EC; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 336u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[20].w[0] + 336u), c.r[2].w[0]);
    c.budget -= 3;
L_0036A4E8:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0036A4EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0036A520:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0036A59C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 31840u);
    set32(c.r[3], c.r[3].w[0] + 31868u);
    st32((c.r[17].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[4], c.r[17].w[0] + 204u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 192u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 31884u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A56Cu); st32((c.r[17].w[0] + 204u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E490u; return; } if (c.pc != 0x0036A56Cu) [[unlikely]] return; }
L_0036A56C:
    set32(c.r[4], c.r[17].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A578u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x0036A578u) [[unlikely]] return; }
L_0036A578:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A584u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 255u, depth + 1u); else { c.pc = 0x0014AB70u; return; } if (c.pc != 0x0036A584u) [[unlikely]] return; }
L_0036A584:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0036A5A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A59Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0036A59Cu) [[unlikely]] return; }
L_0036A59C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0036A5A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0036A5C0:
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00368000u < 16384u) { entry = entries_009A[(t - 0x00368000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0036A5D0:
    set32(c.r[29], c.r[29].w[0] - 400u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[3], c.r[29].w[0] + 384u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], ld32((c.r[1].w[0] + 26392u)));
    ld128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[19], ld32((c.r[5].w[0] + 440u)));
    set32(c.r[18], ld32((c.r[5].w[0] + 444u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A61Cu); st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0036A61Cu) [[unlikely]] return; }
L_0036A61C:
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[19].w[0] + 48u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[19].w[0] + 52u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[19].w[0] + 56u), c.r[5].w[0]);
    st32((c.r[19].w[0] + 304u), c.r[4].w[0]);
    st32((c.r[19].w[0] + 308u), c.r[4].w[0]);
    st32((c.r[19].w[0] + 312u), 0u);
    st32((c.r[19].w[0] + 316u), c.r[3].w[0]);
    ld128((c.r[20].w[0] + 256u) & ~15u, c.r[3]);
    st128((c.r[18].w[0] + 48u) & ~15u, c.r[3]);
    set32(c.r[3], ld32((c.r[20].w[0] + 300u)));
    c.budget -= 17;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[6], c.r[20].w[0] + 256u);  if (t) { goto L_0036A684; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 296u)));
    set32(c.r[3], 0u + 255u);
    set32(c.r[5], ld32((c.r[6].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_0036A680; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0036A680:
    st32((c.r[18].w[0] + 60u), c.r[3].w[0]);
    c.budget -= 1;
L_0036A684:
    set32(c.r[3], ld32((c.r[20].w[0] + 296u)));
    st32((c.r[19].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 296u)));
    st32((c.r[19].w[0] + 300u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 332u)));
    set32(c.r[5], ld32((c.r[20].w[0] + 328u)));
    set32(c.r[4], ld32((c.r[20].w[0] + 340u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[17].w[0] + c.r[5].w[0]);
    c.r[1].d[0] = c.r[4].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;  if (t) { goto L_0036A918; } }
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036A914; } }
L_0036A6C4:
    c.f[1] = ld32((c.r[20].w[0] + 308u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[20].w[0] + 304u));
    set32(c.r[3], c.r[17].w[0] << 3);
    st32((c.r[19].w[0] + 16u), c.f[0]);
    st32((c.r[19].w[0] + 20u), c.f[1]);
    st32((c.r[19].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 212u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0036A71C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A6FCu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0036A6FCu) [[unlikely]] return; }
L_0036A6FC:
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[19].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[19].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 56u), c.r[2].w[0]);  if (t) { goto L_0036A774; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0036A71C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A724u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0036A724u) [[unlikely]] return; }
L_0036A724:
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[19].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[19].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[19].w[0] + 56u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[20].w[0] + 344u));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036A774; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 292u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0036A774; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A75Cu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0036A75Cu) [[unlikely]] return; }
L_0036A75C:
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[19].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[19].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[19].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 6;
L_0036A774:
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A78Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036A78Cu) [[unlikely]] return; }
L_0036A78C:
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 72u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A7A0u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036A7A0u) [[unlikely]] return; }
L_0036A7A0:
    set32(c.r[2], ld32((c.r[20].w[0] + 324u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036A7C8; } }
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A7C0u); set32(c.r[5], c.r[29].w[0] + 384u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036A7C0u) [[unlikely]] return; }
L_0036A7C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[20].w[0] + 292u)));  if (t) { goto L_0036A7E0; } }
L_0036A7C8:
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A7DCu); set32(c.r[5], c.r[29].w[0] + 384u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036A7DCu) [[unlikely]] return; }
L_0036A7DC:
    set32(c.r[2], ld32((c.r[20].w[0] + 292u)));
    c.budget -= 1;
L_0036A7E0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_0036A8C0; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 344u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0036A8A8; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 352u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[18].w[0] + 352u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 356u), 0u);
    c.f[1] = ld32((c.r[20].w[0] + 308u));
    c.f[0] = ld32((c.r[20].w[0] + 304u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    st32((c.r[18].w[0] + 16u), c.f[0]);
    st32((c.r[18].w[0] + 20u), c.f[1]);
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[20].w[0] + 304u));
    c.f[1] = ld32((c.r[20].w[0] + 308u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    st32((c.r[18].w[0] + 272u), c.f[0]);
    st32((c.r[18].w[0] + 276u), c.f[1]);
    st32((c.r[18].w[0] + 280u), 0u);
    st32((c.r[18].w[0] + 284u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 324u)));
    c.budget -= 23;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036A870; } }
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A868u); set32(c.r[5], c.r[29].w[0] + 384u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036A868u) [[unlikely]] return; }
L_0036A868:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[20].w[0] + 176u)));  if (t) { goto L_0036A888; } }
L_0036A870:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A884u); set32(c.r[5], c.r[29].w[0] + 384u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036A884u) [[unlikely]] return; }
L_0036A884:
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    c.budget -= 1;
L_0036A888:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 72u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A898u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036A898u) [[unlikely]] return; }
L_0036A898:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A8A8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036A8A8u) [[unlikely]] return; }
L_0036A8A8:
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A8B8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036A8B8u) [[unlikely]] return; }
L_0036A8B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[20].w[0] + 312u));  if (t) { goto L_0036A904; } }
L_0036A8C0:
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A8E0u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036A8E0u) [[unlikely]] return; }
L_0036A8E0:
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A900u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036A900u) [[unlikely]] return; }
L_0036A900:
    c.f[1] = ld32((c.r[20].w[0] + 312u));
    c.budget -= 1;
L_0036A904:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.f[0] = ld32((c.r[29].w[0] + 388u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 388u), c.f[0]);
    c.budget -= 4;
L_0036A914:
    c.r[3].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0036A918:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036A6C4u | kUnwind; return; } goto L_0036A6C4; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 336u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0036AC24; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 5080u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], c.r[29].w[0] + 112u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    st32((c.r[19].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 5080u));
    st32((c.r[19].w[0] + 20u), c.f[0]);
    st32((c.r[19].w[0] + 24u), c.r[2].w[0]);
    ld128((c.r[20].w[0]) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    set32(c.r[6], ld32((c.r[20].w[0] + 332u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A970u); set32(c.r[5], c.r[5].w[0] - 5208u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x0036A970u) [[unlikely]] return; }
L_0036A970:
    set32(c.r[2], c.r[29].w[0] + 128u);
    st32((c.r[19].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 356u), 0u);
    set32(c.r[3], ld32((c.r[20].w[0] + 324u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0036A9D0; } }
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[20] = ld32((c.r[29].w[0] + 116u));
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[29].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[21] = fp::cvt_s_w(c.f[2]);
    c.f[12] = fp::sub(c.f[1], c.f[0]);
    c.f[13] = fp::sub(c.f[20], c.f[0]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A9C4u); c.f[14] = c.f[21];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036A9C4u) [[unlikely]] return; }
L_0036A9C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[19].w[0] + 176u)));  if (t) { goto L_0036AA6C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0036A9D0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);  if (t) { goto L_0036AA28; } }
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x428C0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[1] = c.r[2].w[0];
    c.f[2] = c.r[3].w[0];
    c.f[20] = ld32((c.r[29].w[0] + 116u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41500000u);
    c.f[12] = fp::add(c.f[1], c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[21] = fp::cvt_s_w(c.f[2]);
    c.f[0] = c.r[2].w[0];
    c.f[14] = c.f[21];
    c.budget -= 17;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AA1Cu); c.f[13] = fp::sub(c.f[20], c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036AA1Cu) [[unlikely]] return; }
L_0036AA1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036AA68; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.budget -= 1;
L_0036AA28:
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[29].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42F20000u);
    c.f[0] = c.r[2].w[0];
    c.f[21] = fp::cvt_s_w(c.f[2]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41500000u);
    c.f[12] = fp::sub(c.f[1], c.f[0]);
    c.f[20] = ld32((c.r[29].w[0] + 116u));
    c.f[0] = c.r[2].w[0];
    c.f[14] = c.f[21];
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AA68u); c.f[13] = fp::sub(c.f[20], c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036AA68u) [[unlikely]] return; }
L_0036AA68:
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.budget -= 1;
L_0036AA6C:
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AA78u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036AA78u) [[unlikely]] return; }
L_0036AA78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AA80u); set32(c.r[4], 0u + 715u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x0036AA80u) [[unlikely]] return; }
L_0036AA80:
    st32((c.r[19].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 356u), 0u);
    set32(c.r[3], ld32((c.r[20].w[0] + 324u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0036AAC0; } }
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.f[0] = c.r[2].w[0];
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[12] = ld32((c.r[29].w[0] + 112u));
    c.f[13] = fp::sub(c.f[20], c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AAB8u); c.f[14] = c.f[21];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036AAB8u) [[unlikely]] return; }
L_0036AAB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[19].w[0] + 176u)));  if (t) { goto L_0036AB38; } }
L_0036AAC0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0036AB04; } }
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42BE0000u);
    c.f[2] = c.r[2].w[0];
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[1] = ld32((c.r[29].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41500000u);
    c.f[0] = c.r[2].w[0];
    c.f[14] = c.f[21];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[13] = fp::sub(c.f[20], c.f[0]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AAFCu); c.f[12] = fp::add(c.f[2], c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036AAFCu) [[unlikely]] return; }
L_0036AAFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036AB34; } }
L_0036AB04:
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42BE0000u);
    c.f[1] = c.r[2].w[0];
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[2] = ld32((c.r[29].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41500000u);
    c.f[0] = c.r[2].w[0];
    c.f[14] = c.f[21];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[13] = fp::sub(c.f[20], c.f[0]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AB34u); c.f[12] = fp::sub(c.f[2], c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036AB34u) [[unlikely]] return; }
L_0036AB34:
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.budget -= 1;
L_0036AB38:
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AB44u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036AB44u) [[unlikely]] return; }
L_0036AB44:
    set32(c.r[6], ld32((c.r[20].w[0] + 336u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AB58u); set32(c.r[5], c.r[5].w[0] - 5208u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x0036AB58u) [[unlikely]] return; }
L_0036AB58:
    set32(c.r[2], c.r[29].w[0] + 128u);
    st32((c.r[19].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 356u), 0u);
    set32(c.r[3], ld32((c.r[20].w[0] + 324u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0036ABA4; } }
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.f[1] = c.r[2].w[0];
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    c.f[13] = fp::sub(c.f[20], c.f[1]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[14] = c.f[21];
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AB98u); c.f[12] = fp::add(c.f[1], c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036AB98u) [[unlikely]] return; }
L_0036AB98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[19].w[0] + 176u)));  if (t) { goto L_0036AC18; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0036ABA4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0036ABE4; } }
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42F20000u);
    c.f[2] = c.r[2].w[0];
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[1] = ld32((c.r[29].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41500000u);
    c.f[0] = c.r[2].w[0];
    c.f[14] = c.f[21];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[13] = fp::sub(c.f[20], c.f[0]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036ABDCu); c.f[12] = fp::add(c.f[2], c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036ABDCu) [[unlikely]] return; }
L_0036ABDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036AC14; } }
L_0036ABE4:
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x428C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41500000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[2] = ld32((c.r[29].w[0] + 112u));
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[14] = c.f[21];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[13] = fp::sub(c.f[20], c.f[0]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AC14u); c.f[12] = fp::sub(c.f[2], c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036AC14u) [[unlikely]] return; }
L_0036AC14:
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.budget -= 1;
L_0036AC18:
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AC24u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036AC24u) [[unlikely]] return; }
L_0036AC24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 400u);  c.pc = t; return; }
L_0036AC50:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 280u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036AC88; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 284u)));
    set32(c.r[3], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0] + 284u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 272u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0036ACB8; } }
    st32((c.r[4].w[0] + 284u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 280u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0036ACB8; } }
L_0036AC88:
    set32(c.r[2], ld32((c.r[4].w[0] + 284u)));
    set32(c.r[5], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0] + 284u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 276u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 272u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0036ACB8; } }
    st32((c.r[4].w[0] + 284u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 280u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0036ACB8:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] + 224u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001AB050u | kUnwind; return; } [[clang::musttail]] return unit_002A(c, 280u, depth); }
L_0036ACC0:
    set32(c.r[4], ld32((c.r[4].w[0] + 212u)));
    set32(c.r[3], c.r[6].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[5].w[0] + 352u), c.r[3].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 356u), 0u);  c.pc = t; return; }
L_0036ACE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036ACF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AD04u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009A(c, 272u, depth + 1u); else { c.pc = 0x0036A360u; return; } if (c.pc != 0x0036AD04u) [[unlikely]] return; }
L_0036AD04:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 31760u);
    set32(c.r[2], c.r[2].w[0] + 31788u);
    st32((c.r[16].w[0] + 176u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[16].w[0] + 192u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 31804u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 204u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036AD40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], c.r[6].w[0] << 3);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 212u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AD64u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x0036AD64u) [[unlikely]] return; }
L_0036AD64:
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 356u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036AD80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AD98u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 67u, depth + 1u); else { c.pc = 0x00162250u; return; } if (c.pc != 0x0036AD98u) [[unlikely]] return; }
L_0036AD98:
    c.r[1].d[0] = c.r[2].sd[0] < 251ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0036ADD8; } }
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437A0000u);
    c.f[1] = c.r[3].w[0];
    ld128((c.r[16].w[0] + 16u) & ~15u, c.r[4]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st128((c.r[5].w[0]) & ~15u, c.r[4]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 36u));
    st32((c.r[16].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 40u));
    st32((c.r[16].w[0] + 24u), c.f[0]);
    c.budget -= 13;
L_0036ADD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0036ADF0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[11].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[9].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.f[24]);
    c.r[16].d[0] = c.r[10].d[0] + 0ull;
    st32((c.r[29].w[0] + 12u), c.f[23]);
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[24] = c.f[12];
    c.f[23] = c.f[13];
    c.f[22] = c.f[14];
    c.f[21] = c.f[15];
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AE60u); c.f[20] = c.f[16];  if (depth < kMaxDepth) unit_000C(c, 12u, depth + 1u); else { c.pc = 0x001300B0u; return; } if (c.pc != 0x0036AE60u) [[unlikely]] return; }
L_0036AE60:
    set32(c.r[4], c.r[21].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AE6Cu); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x0036AE6Cu) [[unlikely]] return; }
L_0036AE6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 31584u);
    set32(c.r[3], c.r[3].w[0] + 31672u);
    st32((c.r[21].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[21].w[0] + 52u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[21].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 31732u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AE9Cu); st32((c.r[21].w[0] + 40u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 271u, depth + 1u); else { c.pc = 0x002275A0u; return; } if (c.pc != 0x0036AE9Cu) [[unlikely]] return; }
L_0036AE9C:
    st32((c.r[21].w[0] + 88u), 0u);
    st32((c.r[21].w[0] + 92u), 0u);
    st32((c.r[21].w[0] + 96u), 0u);
    st32((c.r[21].w[0] + 100u), 0u);
    set32(c.r[2], ld32((c.r[29].w[0] + 200u)));
    st32((c.r[21].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    st32((c.r[21].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 216u)));
    st32((c.r[21].w[0] + 112u), c.r[2].w[0]);
    st32((c.r[21].w[0] + 124u), c.r[20].w[0]);
    st32((c.r[21].w[0] + 128u), c.f[24]);
    st32((c.r[21].w[0] + 132u), c.f[23]);
    st32((c.r[21].w[0] + 136u), c.f[22]);
    st32((c.r[21].w[0] + 140u), c.f[21]);
    st32((c.r[21].w[0] + 144u), c.f[20]);
    st32((c.r[21].w[0] + 148u), c.r[22].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    st32((c.r[21].w[0] + 152u), c.r[2].w[0]);
    st32((c.r[21].w[0] + 156u), c.r[18].w[0]);
    st32((c.r[21].w[0] + 160u), 0u);
    st32((c.r[21].w[0] + 164u), 0u);
    st32((c.r[21].w[0] + 168u), 0u);
    st32((c.r[21].w[0] + 172u), 0u);
    st32((c.r[21].w[0] + 176u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 156u)));
    c.budget -= 28;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036AF38; } }
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AF18u); set32(c.r[4], 0u + 36u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0036AF18u) [[unlikely]] return; }
L_0036AF18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 355u);  if (t) { goto L_0036AF34; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[0] = c.r[3].w[0];
    c.f[12] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AF34u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_009B(c, 308u, depth + 1u); else { c.pc = 0x0036E860u; return; } if (c.pc != 0x0036AF34u) [[unlikely]] return; }
L_0036AF34:
    st32((c.r[21].w[0] + 160u), c.r[2].w[0]);
    c.budget -= 1;
L_0036AF38:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[4], c.r[20].w[0] << 2);  if (t) { goto L_0036AF78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AF48u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0036AF48u) [[unlikely]] return; }
L_0036AF48:
    st32((c.r[21].w[0] + 164u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0036AF6C; } }
L_0036AF54:
    set32(c.r[2], ld32((c.r[21].w[0] + 164u)));
    set32(c.r[3], c.r[17].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_0036AF6C:
    c.r[2].d[0] = c.r[5].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[5].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036AF54u | kUnwind; return; } goto L_0036AF54; } }
L_0036AF78:
    st32((c.r[21].w[0] + 36u), c.r[19].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] + 2736u);
    st32((c.r[21].w[0] + 120u), c.r[19].w[0]);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[5], c.r[29].w[0] + 160u);
    set32(c.r[4], c.r[21].w[0] + 52u);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AFA4u); st64((c.r[5].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x0036AFA4u) [[unlikely]] return; }
L_0036AFA4:
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_0036AFF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0036B17C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 31584u);
    set32(c.r[3], c.r[3].w[0] + 31672u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 31732u);
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036B054; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036B054; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B054u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036B054u) [[unlikely]] return; }
L_0036B054:
    st32((c.r[17].w[0] + 88u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 92u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036B07C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036B07C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B07Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036B07Cu) [[unlikely]] return; }
L_0036B07C:
    st32((c.r[17].w[0] + 92u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036B0A4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036B0A4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B0A4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036B0A4u) [[unlikely]] return; }
L_0036B0A4:
    st32((c.r[17].w[0] + 96u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036B0CC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036B0CC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B0CCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036B0CCu) [[unlikely]] return; }
L_0036B0CC:
    st32((c.r[17].w[0] + 100u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 160u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_0036B0E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B0E4u);  if (depth < kMaxDepth) unit_009B(c, 336u, depth + 1u); else { c.pc = 0x0036EC50u; return; } if (c.pc != 0x0036B0E4u) [[unlikely]] return; }
L_0036B0E4:
    st32((c.r[17].w[0] + 160u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 168u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036B10C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036B10C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B10Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036B10Cu) [[unlikely]] return; }
L_0036B10C:
    st32((c.r[17].w[0] + 168u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 164u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036B124; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B124u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0036B124u) [[unlikely]] return; }
L_0036B124:
    st32((c.r[17].w[0] + 164u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 172u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036B13C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B13Cu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0036B13Cu) [[unlikely]] return; }
L_0036B13C:
    set32(c.r[4], c.r[17].w[0] + 52u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B14Cu); st32((c.r[17].w[0] + 172u), 0u);  if (depth < kMaxDepth) unit_0049(c, 274u, depth + 1u); else { c.pc = 0x002275F0u; return; } if (c.pc != 0x0036B14Cu) [[unlikely]] return; }
L_0036B14C:
    set32(c.r[4], c.r[17].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B158u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x0036B158u) [[unlikely]] return; }
L_0036B158:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B164u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 15u, depth + 1u); else { c.pc = 0x00130130u; return; } if (c.pc != 0x0036B164u) [[unlikely]] return; }
L_0036B164:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0036B180; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B17Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0036B17Cu) [[unlikely]] return; }
L_0036B17C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0036B180:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0036B1A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B1B8u); set32(c.r[4], 0u + 52u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0036B1B8u) [[unlikely]] return; }
L_0036B1B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0036B1E8; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0036B1CC; } }
    set32(c.r[7], c.r[7].w[0] + 20u);
    c.budget -= 1;
L_0036B1CC:
    set32(c.r[8], ld32((c.r[16].w[0] + 28u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[9], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[10], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B1E8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 395u, depth + 1u); else { c.pc = 0x0012F020u; return; } if (c.pc != 0x0036B1E8u) [[unlikely]] return; }
L_0036B1E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036B200:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B214u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 21u, depth + 1u); else { c.pc = 0x001301E0u; return; } if (c.pc != 0x0036B214u) [[unlikely]] return; }
L_0036B214:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B21Cu); set32(c.r[4], 0u + 352u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0036B21Cu) [[unlikely]] return; }
L_0036B21C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036B250; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    set32(c.r[6], ld32((c.r[16].w[0] + 32u)));
    c.f[13] = ld32((c.r[16].w[0] + 132u));
    c.f[14] = ld32((c.r[16].w[0] + 136u));
    set32(c.r[7], ld32((c.r[16].w[0] + 152u)));
    c.f[15] = ld32((c.r[16].w[0] + 140u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[16] = ld32((c.r[16].w[0] + 144u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B250u); set32(c.r[8], 0u + 12u);  if (depth < kMaxDepth) unit_009A(c, 272u, depth + 1u); else { c.pc = 0x0036A360u; return; } if (c.pc != 0x0036B250u) [[unlikely]] return; }
L_0036B250:
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    st32((c.r[2].w[0] + 300u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    st32((c.r[16].w[0] + 124u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B278u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036B278u) [[unlikely]] return; }
L_0036B278:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 140u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B28Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036B28Cu) [[unlikely]] return; }
L_0036B28C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036B2A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B2B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 24u, depth + 1u); else { c.pc = 0x00130260u; return; } if (c.pc != 0x0036B2B4u) [[unlikely]] return; }
L_0036B2B4:
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    st32((c.r[2].w[0] + 284u), 0u);
    set32(c.r[4], c.r[2].w[0] + 224u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B2C8u); st8((c.r[2].w[0] + 280u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x0036B2C8u) [[unlikely]] return; }
L_0036B2C8:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    st32((c.r[3].w[0] + 300u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036B2E0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B304u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_000C(c, 25u, depth + 1u); else { c.pc = 0x00130270u; return; } if (c.pc != 0x0036B304u) [[unlikely]] return; }
L_0036B304:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B318u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002A(c, 139u, depth + 1u); else { c.pc = 0x001A95F0u; return; } if (c.pc != 0x0036B318u) [[unlikely]] return; }
L_0036B318:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[3].w[0] + 624u);  if (t) { goto L_0036B378; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B334u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0036B334u) [[unlikely]] return; }
L_0036B334:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0036B348; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B348u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_002A(c, 287u, depth + 1u); else { c.pc = 0x001AB200u; return; } if (c.pc != 0x0036B348u) [[unlikely]] return; }
L_0036B348:
    st32((c.r[17].w[0] + 92u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B358u); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x0036B358u) [[unlikely]] return; }
L_0036B358:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B368u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x0036B368u) [[unlikely]] return; }
L_0036B368:
    set32(c.r[4], ld32((c.r[17].w[0] + 92u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B378u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x0036B378u) [[unlikely]] return; }
L_0036B378:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], 0u + 152u);
    set32(c.r[3], ld32((c.r[1].w[0] - 13152u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 148u);  if (t) { goto L_0036B3A8; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 92u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B3A0u); set32(c.r[5], 0u + 151u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036B3A0u) [[unlikely]] return; }
L_0036B3A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 124u)));  if (t) { goto L_0036B3E4; } }
L_0036B3A8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0036B3CC; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 92u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B3C4u); set32(c.r[5], 0u + 147u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036B3C4u) [[unlikely]] return; }
L_0036B3C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036B3E0; } }
L_0036B3CC:
    set32(c.r[4], ld32((c.r[17].w[0] + 92u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B3E0u); c.r[5].d[0] = ld16((c.r[17].w[0] + 104u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036B3E0u) [[unlikely]] return; }
L_0036B3E0:
    set32(c.r[3], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 1;
L_0036B3E4:
    set32(c.r[2], ld32((c.r[17].w[0] + 148u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0036B684; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 160u);  if (t) { goto L_0036B44C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B408u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0036B408u) [[unlikely]] return; }
L_0036B408:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0036B41C; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B41Cu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0025(c, 304u, depth + 1u); else { c.pc = 0x00196C90u; return; } if (c.pc != 0x0036B41Cu) [[unlikely]] return; }
L_0036B41C:
    st32((c.r[17].w[0] + 96u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B42Cu); set32(c.r[5], 0u + 10011u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x0036B42Cu) [[unlikely]] return; }
L_0036B42C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B43Cu); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x0036B43Cu) [[unlikely]] return; }
L_0036B43C:
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B44Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x0036B44Cu) [[unlikely]] return; }
L_0036B44C:
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B460u); set32(c.r[5], 0u + 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036B460u) [[unlikely]] return; }
L_0036B460:
    set32(c.r[3], ld32((c.r[17].w[0] + 152u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0036B4BC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.f[3] = c.r[2].w[0];
    c.f[4] = ld32((c.r[17].w[0] + 144u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42400000u);
    c.f[1] = c.r[2].w[0];
    c.f[2] = ld32((c.r[17].w[0] + 140u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = fp::sub(c.f[4], c.f[3]);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    st32((c.r[4].w[0] + 96u), c.f[1]);
    c.f[21] = fp::cvt_s_w(c.f[0]);
    st32((c.r[4].w[0] + 100u), c.f[3]);
    st32((c.r[4].w[0] + 104u), c.f[21]);
    c.f[20] = c.r[2].w[0];
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 108u), c.r[2].w[0]);  if (t) { goto L_0036B560; } }
L_0036B4BC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0036B514; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41600000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.f[3] = c.r[2].w[0];
    c.f[4] = ld32((c.r[17].w[0] + 144u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42500000u);
    c.f[1] = c.r[2].w[0];
    c.f[2] = ld32((c.r[17].w[0] + 140u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = fp::sub(c.f[4], c.f[3]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[4].w[0] + 96u), c.f[1]);
    c.f[21] = fp::cvt_s_w(c.f[0]);
    st32((c.r[4].w[0] + 100u), c.f[3]);
    st32((c.r[4].w[0] + 104u), c.f[21]);
    c.f[20] = c.r[2].w[0];
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 108u), c.r[2].w[0]);  if (t) { goto L_0036B560; } }
L_0036B514:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41600000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.f[3] = c.r[2].w[0];
    c.f[4] = ld32((c.r[17].w[0] + 144u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43100000u);
    c.f[1] = c.r[2].w[0];
    c.f[2] = ld32((c.r[17].w[0] + 140u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = fp::sub(c.f[4], c.f[3]);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    st32((c.r[4].w[0] + 96u), c.f[1]);
    c.f[21] = fp::cvt_s_w(c.f[0]);
    st32((c.r[4].w[0] + 100u), c.f[3]);
    st32((c.r[4].w[0] + 104u), c.f[21]);
    c.f[20] = c.r[2].w[0];
    st32((c.r[4].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 19;
L_0036B560:
    set32(c.r[2], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 160u);  if (t) { goto L_0036B5B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B574u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0036B574u) [[unlikely]] return; }
L_0036B574:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0036B588; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B588u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0025(c, 304u, depth + 1u); else { c.pc = 0x00196C90u; return; } if (c.pc != 0x0036B588u) [[unlikely]] return; }
L_0036B588:
    st32((c.r[17].w[0] + 100u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B598u); set32(c.r[5], 0u + 10011u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x0036B598u) [[unlikely]] return; }
L_0036B598:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B5A8u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x0036B5A8u) [[unlikely]] return; }
L_0036B5A8:
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B5B8u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x0036B5B8u) [[unlikely]] return; }
L_0036B5B8:
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B5CCu); set32(c.r[5], 0u + 5u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036B5CCu) [[unlikely]] return; }
L_0036B5CC:
    set32(c.r[3], ld32((c.r[17].w[0] + 152u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0036B610; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 100u)));
    c.f[2] = c.r[2].w[0];
    c.f[3] = ld32((c.r[17].w[0] + 144u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42400000u);
    c.f[1] = ld32((c.r[17].w[0] + 140u));
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 96u), c.f[0]);
    st32((c.r[3].w[0] + 100u), c.f[2]);
    st32((c.r[3].w[0] + 104u), c.f[21]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 108u), c.f[20]);  if (t) { goto L_0036B684; } }
L_0036B610:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0036B650; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41600000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 100u)));
    c.f[2] = c.r[2].w[0];
    c.f[3] = ld32((c.r[17].w[0] + 144u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43100000u);
    c.f[1] = ld32((c.r[17].w[0] + 140u));
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 96u), c.f[0]);
    st32((c.r[3].w[0] + 100u), c.f[2]);
    st32((c.r[3].w[0] + 104u), c.f[21]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 108u), c.f[20]);  if (t) { goto L_0036B684; } }
L_0036B650:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41600000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 100u)));
    c.f[2] = c.r[2].w[0];
    c.f[3] = ld32((c.r[17].w[0] + 144u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42500000u);
    c.f[1] = ld32((c.r[17].w[0] + 140u));
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 96u), c.f[0]);
    st32((c.r[3].w[0] + 100u), c.f[2]);
    st32((c.r[3].w[0] + 104u), c.f[21]);
    st32((c.r[3].w[0] + 108u), c.f[20]);
    c.budget -= 13;
L_0036B684:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B68Cu);  if (depth < kMaxDepth) unit_009F(c, 200u, depth + 1u); else { c.pc = 0x0037DCF0u; return; } if (c.pc != 0x0036B68Cu) [[unlikely]] return; }
L_0036B68C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B69Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 211u, depth + 1u); else { c.pc = 0x0037DE40u; return; } if (c.pc != 0x0036B69Cu) [[unlikely]] return; }
L_0036B69C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B6A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009F(c, 186u, depth + 1u); else { c.pc = 0x0037DB10u; return; } if (c.pc != 0x0036B6A8u) [[unlikely]] return; }
L_0036B6A8:
    set32(c.r[5], ld32((c.r[17].w[0] + 176u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B6B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 179u, depth + 1u); else { c.pc = 0x0037D9B0u; return; } if (c.pc != 0x0036B6B4u) [[unlikely]] return; }
L_0036B6B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[2], c.r[2].w[0] + 2768u);
    set32(c.r[4], c.r[17].w[0] + 52u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B6D8u); st64((c.r[5].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x0036B6D8u) [[unlikely]] return; }
L_0036B6D8:
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[4], 0u + 1u);
    st32((c.r[3].w[0] + 300u), c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0036B710:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B724u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 26u, depth + 1u); else { c.pc = 0x00130280u; return; } if (c.pc != 0x0036B724u) [[unlikely]] return; }
L_0036B724:
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B738u); c.r[5].d[0] = ld16((c.r[16].w[0] + 108u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036B738u) [[unlikely]] return; }
L_0036B738:
    set32(c.r[2], ld32((c.r[16].w[0] + 108u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[1].w[0] - 13152u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036B760; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B760u); set32(c.r[5], 0u + 8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036B760u) [[unlikely]] return; }
L_0036B760:
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036B77C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B77Cu); set32(c.r[5], 0u + 9u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036B77Cu) [[unlikely]] return; }
L_0036B77C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] + 2800u);
    set32(c.r[4], c.r[16].w[0] + 52u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B7A0u); st64((c.r[5].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x0036B7A0u) [[unlikely]] return; }
L_0036B7A0:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[4], 0u + 2u);
    st32((c.r[3].w[0] + 300u), c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0036B7C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B7D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 27u, depth + 1u); else { c.pc = 0x00130290u; return; } if (c.pc != 0x0036B7D4u) [[unlikely]] return; }
L_0036B7D4:
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B7E8u); c.r[5].d[0] = ld16((c.r[16].w[0] + 112u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036B7E8u) [[unlikely]] return; }
L_0036B7E8:
    set32(c.r[2], ld32((c.r[16].w[0] + 112u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[1].w[0] - 13152u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036B810; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B810u); set32(c.r[5], 0u + 8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036B810u) [[unlikely]] return; }
L_0036B810:
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036B82C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B82Cu); set32(c.r[5], 0u + 9u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036B82Cu) [[unlikely]] return; }
L_0036B82C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] + 2832u);
    set32(c.r[4], c.r[16].w[0] + 52u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B850u); st64((c.r[5].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x0036B850u) [[unlikely]] return; }
L_0036B850:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[4], 0u + 2u);
    st32((c.r[3].w[0] + 300u), c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0036B870:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 168u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0036B970; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B898u);  if (depth < kMaxDepth) unit_000C(c, 32u, depth + 1u); else { c.pc = 0x00130300u; return; } if (c.pc != 0x0036B898u) [[unlikely]] return; }
L_0036B898:
    set32(c.r[16], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 88u)));
    st32((c.r[5].w[0] + 292u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 292u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 328u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_0036B8B8; } }
    breakpoint(c, 0x0036B8B4u);
    c.budget -= 1;
L_0036B8B8:
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[5].w[0] + 332u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 292u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036B8D8; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[5].w[0] + 332u), c.r[2].w[0]);
    c.budget -= 2;
L_0036B8D8:
    st32((c.r[5].w[0] + 284u), 0u);
    set32(c.r[4], c.r[5].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B8E8u); st8((c.r[5].w[0] + 280u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x0036B8E8u) [[unlikely]] return; }
L_0036B8E8:
    st32((c.r[17].w[0] + 116u), c.r[16].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], ld32((c.r[1].w[0] - 1536u)));  if (t) { goto L_0036B970; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0036B910; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0036B974; } }
L_0036B910:
    c.r[6].d[0] = ld16((c.r[3].w[0]));
    c.r[3].d[0] = c.r[6].d[0] & 32768ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036B944; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 137u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[6].d[0] & 8192ull;  if (t) { goto L_0036B948; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B93Cu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036B93Cu) [[unlikely]] return; }
L_0036B93C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036B970; } }
L_0036B944:
    c.r[3].d[0] = c.r[6].d[0] & 8192ull;
    c.budget -= 1;
L_0036B948:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036B970; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 137u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036B970; } }
    set32(c.r[25], ld32((c.r[5].w[0])));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B970u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036B970u) [[unlikely]] return; }
L_0036B970:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0036B974:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0036B990:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 168u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0036B9E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B9B8u);  if (depth < kMaxDepth) unit_009A(c, 445u, depth + 1u); else { c.pc = 0x0036BDD0u; return; } if (c.pc != 0x0036B9B8u) [[unlikely]] return; }
L_0036B9B8:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0036B9E0; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B9D8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036B9D8u) [[unlikely]] return; }
L_0036B9D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), 0u);  if (t) { goto L_0036B9E8; } }
L_0036B9E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B9E8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 33u, depth + 1u); else { c.pc = 0x00130310u; return; } if (c.pc != 0x0036B9E8u) [[unlikely]] return; }
L_0036B9E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0036BA00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 168u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0036BA1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BA1Cu);  if (depth < kMaxDepth) unit_000C(c, 35u, depth + 1u); else { c.pc = 0x00130350u; return; } if (c.pc != 0x0036BA1Cu) [[unlikely]] return; }
L_0036BA1C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0036BA30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 168u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0036BA80; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 156u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0036BA80; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0036BA80; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], 0u + 400u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BA70u); st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x0036BA70u) [[unlikely]] return; }
L_0036BA70:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BA80u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036BA80u) [[unlikely]] return; }
L_0036BA80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036BA90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BAACu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 29u, depth + 1u); else { c.pc = 0x001302B0u; return; } if (c.pc != 0x0036BAACu) [[unlikely]] return; }
L_0036BAAC:
    set32(c.r[5], ld32((c.r[17].w[0] + 88u)));
    st32((c.r[5].w[0] + 292u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 292u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 328u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_0036BAC8; } }
    breakpoint(c, 0x0036BAC4u);
    c.budget -= 1;
L_0036BAC8:
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[5].w[0] + 332u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 292u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0036BAE4; } }
    st32((c.r[5].w[0] + 332u), c.r[2].w[0]);
    c.budget -= 1;
L_0036BAE4:
    st32((c.r[5].w[0] + 284u), 0u);
    set32(c.r[4], c.r[5].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BAF4u); st8((c.r[5].w[0] + 280u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x0036BAF4u) [[unlikely]] return; }
L_0036BAF4:
    st32((c.r[17].w[0] + 116u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0036BB10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036BB20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BB34u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 304u, depth + 1u); else { c.pc = 0x0012E500u; return; } if (c.pc != 0x0036BB34u) [[unlikely]] return; }
L_0036BB34:
    c.f[0] = ld32((c.r[16].w[0] + 64u));
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    st32((c.r[3].w[0] + 296u), c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036BB60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 160u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036BB90; } }
    c.f[0] = ld32((c.r[4].w[0] + 64u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[3].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BB90u); set32(c.r[4], ld32((c.r[4].w[0] + 160u)));  if (depth < kMaxDepth) unit_009B(c, 344u, depth + 1u); else { c.pc = 0x0036ED90u; return; } if (c.pc != 0x0036BB90u) [[unlikely]] return; }
L_0036BB90:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0036BBA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BBB4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 135u, depth + 1u); else { c.pc = 0x001A9560u; return; } if (c.pc != 0x0036BBB4u) [[unlikely]] return; }
L_0036BBB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036BBCC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BBCCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036BBCCu) [[unlikely]] return; }
L_0036BBCC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036BBE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BBF4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009A(c, 444u, depth + 1u); else { c.pc = 0x0036BDC0u; return; } if (c.pc != 0x0036BBF4u) [[unlikely]] return; }
L_0036BBF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036BC0C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BC0Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036BC0Cu) [[unlikely]] return; }
L_0036BC0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036BC20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 168u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], ld32((c.r[1].w[0] - 1536u)));  if (t) { goto L_0036BD00; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BC50u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036BC50u) [[unlikely]] return; }
L_0036BC50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036BD20; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 168u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 242u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0036BC98; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BC84u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036BC84u) [[unlikely]] return; }
L_0036BC84:
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BC98u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036BC98u) [[unlikely]] return; }
L_0036BC98:
    set32(c.r[4], ld32((c.r[16].w[0] + 168u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036BCBC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036BCBC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BCBCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036BCBCu) [[unlikely]] return; }
L_0036BCBC:
    st32((c.r[16].w[0] + 168u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 172u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036BCD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BCD4u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0036BCD4u) [[unlikely]] return; }
L_0036BCD4:
    st32((c.r[16].w[0] + 172u), 0u);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 140u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BCECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036BCECu) [[unlikely]] return; }
L_0036BCEC:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 344u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0036BD24; } }
L_0036BD00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BD08u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 319u, depth + 1u); else { c.pc = 0x0013F110u; return; } if (c.pc != 0x0036BD08u) [[unlikely]] return; }
L_0036BD08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036BD20; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 172u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BD20u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036BD20u) [[unlikely]] return; }
L_0036BD20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0036BD24:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036BD30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BD44u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009A(c, 444u, depth + 1u); else { c.pc = 0x0036BDC0u; return; } if (c.pc != 0x0036BD44u) [[unlikely]] return; }
L_0036BD44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036BD5C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BD5Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036BD5Cu) [[unlikely]] return; }
L_0036BD5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036BD70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BD84u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009A(c, 444u, depth + 1u); else { c.pc = 0x0036BDC0u; return; } if (c.pc != 0x0036BD84u) [[unlikely]] return; }
L_0036BD84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036BDB0; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 140u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BDA0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036BDA0u) [[unlikely]] return; }
L_0036BDA0:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BDB0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036BDB0u) [[unlikely]] return; }
L_0036BDB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036BDC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld8((c.r[4].w[0] + 84u));  c.pc = t; return; }
L_0036BDD0:
    set32(c.r[29], c.r[29].w[0] - 304u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0036BDF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036BFFC; } }
L_0036BDF8:
    set32(c.r[2], ld32((c.r[18].w[0] + 116u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0036BE1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036BFFC; } }
L_0036BE1C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[3].w[0] + 2864u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    ld128((c.r[3].w[0]) & ~15u, c.r[11]);
    set32(c.r[12], c.r[29].w[0] + 272u);
    c.r[9].d[0] = ld64((c.r[3].w[0] + 16u));
    set32(c.r[8], c.r[8].w[0] + 2896u);
    set32(c.r[10], c.r[29].w[0] + 240u);
    set32(c.r[6], c.r[29].w[0] + 224u);
    set32(c.r[5], c.r[5].w[0] + 2944u);
    set32(c.r[7], c.r[29].w[0] + 176u);
    set32(c.r[4], 0u + 2u);
    st128((c.r[12].w[0]) & ~15u, c.r[11]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[12].w[0] + 16u), c.r[9].d[0]);
    set32(c.r[3], c.r[3].w[0] + 2928u);
    ld128((c.r[8].w[0]) & ~15u, c.r[9]);
    c.r[8].d[0] = ld64((c.r[8].w[0] + 16u));
    st128((c.r[10].w[0]) & ~15u, c.r[9]);
    st64((c.r[10].w[0] + 16u), c.r[8].d[0]);
    ld128((c.r[3].w[0]) & ~15u, c.r[3]);
    st128((c.r[6].w[0]) & ~15u, c.r[3]);
    c.budget -= 23;
L_0036BE78:
    ld128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st128((c.r[7].w[0]) & ~15u, c.r[3]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[7], c.r[7].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036BE78u | kUnwind; return; } goto L_0036BE78; } }
    c.r[3].d[0] = ld64((c.r[5].w[0]));
    set32(c.r[6], c.r[29].w[0] + 128u);
    set32(c.r[4], 0u + 2u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[7].w[0]), c.r[3].d[0]);
    set32(c.r[5], c.r[5].w[0] + 2992u);
    c.budget -= 6;
L_0036BEAC:
    ld128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st128((c.r[6].w[0]) & ~15u, c.r[3]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[6], c.r[6].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036BEACu | kUnwind; return; } goto L_0036BEAC; } }
    c.r[5].d[0] = ld64((c.r[5].w[0]));
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[3], 0u + 20u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[6].w[0]), c.r[5].d[0]);  if (t) { goto L_0036BEF8; } }
L_0036BEDC:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036BEDCu | kUnwind; return; } goto L_0036BEDC; } }
L_0036BEF8:
    set32(c.r[16], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[2], c.r[29].w[0] + 272u);
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 240u);
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 224u);
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 176u);
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 128u);
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] + 3040u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], c.r[16].w[0] + c.r[29].w[0]);
    st32((c.r[4].w[0] + 16u), c.f[0]);
    set32(c.r[17], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BF50u); set32(c.r[4], c.r[17].w[0] << 3);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0036BF50u) [[unlikely]] return; }
L_0036BF50:
    st32((c.r[18].w[0] + 172u), c.r[2].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] + c.r[29].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[2].w[0] + 96u);  if (t) { goto L_0036BFA4; } }
L_0036BF64:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[6].w[0] << 3);
    set32(c.r[2], ld32((c.r[18].w[0] + 172u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 1u));
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2u));
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 3u));
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 16;
L_0036BFA4:
    c.r[2].d[0] = c.r[6].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 256u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036BF64u | kUnwind; return; } goto L_0036BF64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BFB8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0036BFB8u) [[unlikely]] return; }
L_0036BFB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036BFD8; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 172u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BFD8u); set32(c.r[8], 0u + 12u);  if (depth < kMaxDepth) unit_009B(c, 237u, depth + 1u); else { c.pc = 0x0036DD90u; return; } if (c.pc != 0x0036BFD8u) [[unlikely]] return; }
L_0036BFD8:
    st32((c.r[18].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 168u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BFF0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036BFF0u) [[unlikely]] return; }
L_0036BFF0:
    set32(c.r[3], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[2], 0u + 1u);
    st8((c.r[3].w[0] + 344u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_0036BFFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
    [[clang::musttail]] return unit_009B(c, 1u, depth);
}

}
