#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0080[4096] = {
    1, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,
    0, 0, 7, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 11, 0,
    0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0,
    0, 14, 0, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0,
    0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 29, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0,
    35, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 44,
    0, 0, 0, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0,
    0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 57, 0, 58, 0, 0, 0, 0, 0, 59,
    0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 62, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0,
    0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0,
    0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 79, 0, 0, 80, 0, 0, 0, 81, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 86, 0, 0, 87, 0, 0, 0, 88, 0, 0, 89,
    0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0,
    0, 0, 92, 0, 93, 0, 0, 94, 0, 0, 0, 95, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 100, 0, 0, 101, 0, 0, 0, 102, 0,
    0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 108, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0,
    0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0,
    119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 125, 0, 0, 126, 0, 0,
    0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0,
    132, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0,
    0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0,
    142, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0,
    145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0,
    148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 153, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157,
    0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0,
    165, 0, 0, 0, 0, 0, 0, 0, 166, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0,
    0, 170, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    179, 0, 0, 0, 0, 0, 0, 0, 180, 0, 181, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0,
    185, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 191, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0, 0, 0, 210, 0, 0, 211, 0, 0,
    0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 218,
    0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0,
    0, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0,
    0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 232, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 240, 0, 0, 0, 0, 241, 0, 0, 0,
    0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0,
    0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 249, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 258, 0, 0, 0, 0, 0,
    259, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 262, 0, 0, 263, 0, 0,
    0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 269,
    0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 272, 0, 0, 273, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0,
    0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0,
    0, 0, 0, 0, 281, 0, 282, 0, 0, 0, 0, 283, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0,
    0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 0, 288, 0, 0, 289, 0, 0, 0, 0, 0, 290, 0, 0, 291, 0, 0, 0, 0, 292, 0, 0, 0,
    0, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 0, 295, 0, 0, 0, 0, 296, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0,
    298, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 0, 0, 303, 0, 0, 0, 0,
    0, 0, 0, 0, 304, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 309, 0, 0, 0,
    310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0,
    0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 317, 0, 318, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 320,
    0, 321, 0, 322, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 327,
    0, 0, 328, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 330, 0, 0, 331, 0, 0, 0, 0, 332, 0, 0, 333, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 335,
    0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0,
    0, 338, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0,
    0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 344, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 346, 0, 347, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 349, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 350, 0, 0, 0, 351, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 353, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    355, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0,
    0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 365, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371,
    0, 0, 0, 372, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0,
    0, 0, 0, 0, 0, 0, 380, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 383, 0, 0, 0, 384, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 391, 0, 0,
    0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 394, 0, 0, 0, 0, 0, 395, 0, 0, 0, 396,
    0, 0, 0, 0, 0, 397, 0, 0, 0, 398, 0, 0, 0, 399, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 402, 0, 0, 0, 0, 403, 0, 404, 0, 0, 0, 405, 0, 406,
    0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0,
    411, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0,
    0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 428, 0, 429, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0,
    0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 448, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 452, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 455, 0,
    0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 462, 0, 0, 463, 0, 0,
    0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0080(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00300000;
    case 2u: goto L_00300004;
    case 3u: goto L_0030000C;
    case 4u: goto L_00300038;
    case 5u: goto L_0030004C;
    case 6u: goto L_0030007C;
    case 7u: goto L_00300088;
    case 8u: goto L_00300094;
    case 9u: goto L_003000A4;
    case 10u: goto L_003000D8;
    case 11u: goto L_003000F8;
    case 12u: goto L_0030011C;
    case 13u: goto L_0030016C;
    case 14u: goto L_00300184;
    case 15u: goto L_00300194;
    case 16u: goto L_003001AC;
    case 17u: goto L_003001D0;
    case 18u: goto L_003001F4;
    case 19u: goto L_0030020C;
    case 20u: goto L_00300230;
    case 21u: goto L_00300240;
    case 22u: goto L_00300250;
    case 23u: goto L_00300294;
    case 24u: goto L_003002AC;
    case 25u: goto L_003002C8;
    case 26u: goto L_003002E0;
    case 27u: goto L_00300310;
    case 28u: goto L_00300348;
    case 29u: goto L_00300354;
    case 30u: goto L_00300360;
    case 31u: goto L_0030038C;
    case 32u: goto L_003003AC;
    case 33u: goto L_003003C8;
    case 34u: goto L_003003E4;
    case 35u: goto L_00300400;
    case 36u: goto L_00300424;
    case 37u: goto L_00300440;
    case 38u: goto L_00300458;
    case 39u: goto L_00300470;
    case 40u: goto L_003004AC;
    case 41u: goto L_003004C4;
    case 42u: goto L_003004E0;
    case 43u: goto L_003004F0;
    case 44u: goto L_003004FC;
    case 45u: goto L_00300510;
    case 46u: goto L_00300518;
    case 47u: goto L_0030053C;
    case 48u: goto L_00300554;
    case 49u: goto L_00300598;
    case 50u: goto L_003005A8;
    case 51u: goto L_003005E0;
    case 52u: goto L_00300608;
    case 53u: goto L_00300650;
    case 54u: goto L_0030066C;
    case 55u: goto L_00300690;
    case 56u: goto L_003006D4;
    case 57u: goto L_003006DC;
    case 58u: goto L_003006E4;
    case 59u: goto L_003006FC;
    case 60u: goto L_00300708;
    case 61u: goto L_00300720;
    case 62u: goto L_00300728;
    case 63u: goto L_00300734;
    case 64u: goto L_00300744;
    case 65u: goto L_00300754;
    case 66u: goto L_0030076C;
    case 67u: goto L_0030078C;
    case 68u: goto L_003007A8;
    case 69u: goto L_003007B4;
    case 70u: goto L_003007C4;
    case 71u: goto L_003007D4;
    case 72u: goto L_003007E4;
    case 73u: goto L_00300808;
    case 74u: goto L_0030081C;
    case 75u: goto L_00300828;
    case 76u: goto L_0030083C;
    case 77u: goto L_0030085C;
    case 78u: goto L_003008A8;
    case 79u: goto L_003008B0;
    case 80u: goto L_003008BC;
    case 81u: goto L_003008CC;
    case 82u: goto L_003008D8;
    case 83u: goto L_003008E8;
    case 84u: goto L_00300928;
    case 85u: goto L_0030094C;
    case 86u: goto L_00300954;
    case 87u: goto L_00300960;
    case 88u: goto L_00300970;
    case 89u: goto L_0030097C;
    case 90u: goto L_00300990;
    case 91u: goto L_003009E4;
    case 92u: goto L_00300A08;
    case 93u: goto L_00300A10;
    case 94u: goto L_00300A1C;
    case 95u: goto L_00300A2C;
    case 96u: goto L_00300A38;
    case 97u: goto L_00300A4C;
    case 98u: goto L_00300AA0;
    case 99u: goto L_00300AD4;
    case 100u: goto L_00300ADC;
    case 101u: goto L_00300AE8;
    case 102u: goto L_00300AF8;
    case 103u: goto L_00300B04;
    case 104u: goto L_00300B28;
    case 105u: goto L_00300B7C;
    case 106u: goto L_00300BAC;
    case 107u: goto L_00300BE0;
    case 108u: goto L_00300C0C;
    case 109u: goto L_00300C18;
    case 110u: goto L_00300C50;
    case 111u: goto L_00300C60;
    case 112u: goto L_00300C70;
    case 113u: goto L_00300C90;
    case 114u: goto L_00300CA0;
    case 115u: goto L_00300CB0;
    case 116u: goto L_00300CC0;
    case 117u: goto L_00300CD0;
    case 118u: goto L_00300CE0;
    case 119u: goto L_00300D00;
    case 120u: goto L_00300D64;
    case 121u: goto L_00300D8C;
    case 122u: goto L_00300D9C;
    case 123u: goto L_00300DA8;
    case 124u: goto L_00300DDC;
    case 125u: goto L_00300DE8;
    case 126u: goto L_00300DF4;
    case 127u: goto L_00300E0C;
    case 128u: goto L_00300E30;
    case 129u: goto L_00300E40;
    case 130u: goto L_00300E54;
    case 131u: goto L_00300E68;
    case 132u: goto L_00300E80;
    case 133u: goto L_00300E90;
    case 134u: goto L_00300EA4;
    case 135u: goto L_00300EB8;
    case 136u: goto L_00300ED0;
    case 137u: goto L_00300EE4;
    case 138u: goto L_00300EF8;
    case 139u: goto L_00300F10;
    case 140u: goto L_00300F20;
    case 141u: goto L_00300F6C;
    case 142u: goto L_00300F80;
    case 143u: goto L_00300FA0;
    case 144u: goto L_00300FEC;
    case 145u: goto L_00301000;
    case 146u: goto L_0030104C;
    case 147u: goto L_00301060;
    case 148u: goto L_00301080;
    case 149u: goto L_003010AC;
    case 150u: goto L_003010C4;
    case 151u: goto L_003010D0;
    case 152u: goto L_003010E4;
    case 153u: goto L_003010F0;
    case 154u: goto L_0030111C;
    case 155u: goto L_00301130;
    case 156u: goto L_0030113C;
    case 157u: goto L_0030117C;
    case 158u: goto L_00301190;
    case 159u: goto L_003011B0;
    case 160u: goto L_00301214;
    case 161u: goto L_00301224;
    case 162u: goto L_0030123C;
    case 163u: goto L_00301260;
    case 164u: goto L_00301278;
    case 165u: goto L_00301280;
    case 166u: goto L_003012A0;
    case 167u: goto L_003012A8;
    case 168u: goto L_003012BC;
    case 169u: goto L_003012F0;
    case 170u: goto L_00301304;
    case 171u: goto L_00301320;
    case 172u: goto L_00301334;
    case 173u: goto L_00301354;
    case 174u: goto L_00301368;
    case 175u: goto L_00301390;
    case 176u: goto L_003013A4;
    case 177u: goto L_003013B8;
    case 178u: goto L_003013CC;
    case 179u: goto L_00301400;
    case 180u: goto L_00301420;
    case 181u: goto L_00301428;
    case 182u: goto L_00301438;
    case 183u: goto L_00301448;
    case 184u: goto L_00301460;
    case 185u: goto L_00301480;
    case 186u: goto L_00301490;
    case 187u: goto L_003014A0;
    case 188u: goto L_0030150C;
    case 189u: goto L_00301520;
    case 190u: goto L_00301534;
    case 191u: goto L_00301550;
    case 192u: goto L_0030155C;
    case 193u: goto L_00301600;
    case 194u: goto L_00301668;
    case 195u: goto L_003016D0;
    case 196u: goto L_003016E4;
    case 197u: goto L_00301710;
    case 198u: goto L_0030175C;
    case 199u: goto L_0030178C;
    case 200u: goto L_003017D8;
    case 201u: goto L_00301824;
    case 202u: goto L_00301858;
    case 203u: goto L_00301898;
    case 204u: goto L_003018A8;
    case 205u: goto L_003018D0;
    case 206u: goto L_003018F0;
    case 207u: goto L_00301920;
    case 208u: goto L_00301940;
    case 209u: goto L_00301954;
    case 210u: goto L_00301968;
    case 211u: goto L_00301974;
    case 212u: goto L_00301988;
    case 213u: goto L_003019A0;
    case 214u: goto L_003019C0;
    case 215u: goto L_003019FC;
    case 216u: goto L_00301A28;
    case 217u: goto L_00301A58;
    case 218u: goto L_00301A7C;
    case 219u: goto L_00301A90;
    case 220u: goto L_00301AA8;
    case 221u: goto L_00301AD8;
    case 222u: goto L_00301AF0;
    case 223u: goto L_00301B10;
    case 224u: goto L_00301B20;
    case 225u: goto L_00301B30;
    case 226u: goto L_00301B40;
    case 227u: goto L_00301B50;
    case 228u: goto L_00301B60;
    case 229u: goto L_00301B70;
    case 230u: goto L_00301B94;
    case 231u: goto L_00301BC0;
    case 232u: goto L_00301BC8;
    case 233u: goto L_00301BE4;
    case 234u: goto L_00301BF4;
    case 235u: goto L_00301C20;
    case 236u: goto L_00301C2C;
    case 237u: goto L_00301C44;
    case 238u: goto L_00301C60;
    case 239u: goto L_00301CC8;
    case 240u: goto L_00301CDC;
    case 241u: goto L_00301CF0;
    case 242u: goto L_00301D08;
    case 243u: goto L_00301D18;
    case 244u: goto L_00301D40;
    case 245u: goto L_00301D48;
    case 246u: goto L_00301D78;
    case 247u: goto L_00301D90;
    case 248u: goto L_00301DA0;
    case 249u: goto L_00301DA8;
    case 250u: goto L_00301DB8;
    case 251u: goto L_00301DC8;
    case 252u: goto L_00301DF0;
    case 253u: goto L_00301E54;
    case 254u: goto L_00301E7C;
    case 255u: goto L_00301EA4;
    case 256u: goto L_00301EBC;
    case 257u: goto L_00301EDC;
    case 258u: goto L_00301EE8;
    case 259u: goto L_00301F00;
    case 260u: goto L_00301F20;
    case 261u: goto L_00301F50;
    case 262u: goto L_00301F68;
    case 263u: goto L_00301F74;
    case 264u: goto L_00301F94;
    case 265u: goto L_00302044;
    case 266u: goto L_00302098;
    case 267u: goto L_003020CC;
    case 268u: goto L_003020E0;
    case 269u: goto L_003020FC;
    case 270u: goto L_00302120;
    case 271u: goto L_00302140;
    case 272u: goto L_0030215C;
    case 273u: goto L_00302168;
    case 274u: goto L_00302190;
    case 275u: goto L_003021BC;
    case 276u: goto L_003021E4;
    case 277u: goto L_00302208;
    case 278u: goto L_00302234;
    case 279u: goto L_00302254;
    case 280u: goto L_00302270;
    case 281u: goto L_00302290;
    case 282u: goto L_00302298;
    case 283u: goto L_003022AC;
    case 284u: goto L_003022C0;
    case 285u: goto L_003022EC;
    case 286u: goto L_0030230C;
    case 287u: goto L_00302320;
    case 288u: goto L_0030232C;
    case 289u: goto L_00302338;
    case 290u: goto L_00302350;
    case 291u: goto L_0030235C;
    case 292u: goto L_00302370;
    case 293u: goto L_00302390;
    case 294u: goto L_003023A0;
    case 295u: goto L_003023B4;
    case 296u: goto L_003023C8;
    case 297u: goto L_003023DC;
    case 298u: goto L_00302400;
    case 299u: goto L_00302414;
    case 300u: goto L_00302430;
    case 301u: goto L_00302444;
    case 302u: goto L_00302458;
    case 303u: goto L_0030246C;
    case 304u: goto L_00302490;
    case 305u: goto L_003024A4;
    case 306u: goto L_003024C0;
    case 307u: goto L_003024D0;
    case 308u: goto L_003024E0;
    case 309u: goto L_003024F0;
    case 310u: goto L_00302500;
    case 311u: goto L_0030252C;
    case 312u: goto L_00302594;
    case 313u: goto L_003025F0;
    case 314u: goto L_00302610;
    case 315u: goto L_00302630;
    case 316u: goto L_003026C4;
    case 317u: goto L_003026D8;
    case 318u: goto L_003026E0;
    case 319u: goto L_00302768;
    case 320u: goto L_0030277C;
    case 321u: goto L_00302784;
    case 322u: goto L_0030278C;
    case 323u: goto L_003027A0;
    case 324u: goto L_003027E0;
    case 325u: goto L_00302838;
    case 326u: goto L_00302868;
    case 327u: goto L_0030287C;
    case 328u: goto L_00302888;
    case 329u: goto L_003028A4;
    case 330u: goto L_003028B8;
    case 331u: goto L_003028C4;
    case 332u: goto L_003028D8;
    case 333u: goto L_003028E4;
    case 334u: goto L_00302968;
    case 335u: goto L_0030297C;
    case 336u: goto L_00302990;
    case 337u: goto L_003029F4;
    case 338u: goto L_00302A04;
    case 339u: goto L_00302A20;
    case 340u: goto L_00302A60;
    case 341u: goto L_00302A74;
    case 342u: goto L_00302A84;
    case 343u: goto L_00302AEC;
    case 344u: goto L_00302AF8;
    case 345u: goto L_00302B5C;
    case 346u: goto L_00302B70;
    case 347u: goto L_00302B78;
    case 348u: goto L_00302BDC;
    case 349u: goto L_00302BEC;
    case 350u: goto L_00302C90;
    case 351u: goto L_00302CA0;
    case 352u: goto L_00302CB4;
    case 353u: goto L_00302D04;
    case 354u: goto L_00302D18;
    case 355u: goto L_00302D80;
    case 356u: goto L_00302D94;
    case 357u: goto L_00302DBC;
    case 358u: goto L_00302DD0;
    case 359u: goto L_00302E38;
    case 360u: goto L_00302E4C;
    case 361u: goto L_00302ED4;
    case 362u: goto L_00302EE8;
    case 363u: goto L_00302F04;
    case 364u: goto L_00302F60;
    case 365u: goto L_00302F74;
    case 366u: goto L_00302FB8;
    case 367u: goto L_00302FCC;
    case 368u: goto L_00303000;
    case 369u: goto L_0030303C;
    case 370u: goto L_0030304C;
    case 371u: goto L_0030307C;
    case 372u: goto L_0030308C;
    case 373u: goto L_003030A0;
    case 374u: goto L_003030B8;
    case 375u: goto L_003030E4;
    case 376u: goto L_00303118;
    case 377u: goto L_00303130;
    case 378u: goto L_00303150;
    case 379u: goto L_00303178;
    case 380u: goto L_00303198;
    case 381u: goto L_003031A0;
    case 382u: goto L_003031D0;
    case 383u: goto L_0030320C;
    case 384u: goto L_0030321C;
    case 385u: goto L_00303234;
    case 386u: goto L_00303250;
    case 387u: goto L_00303298;
    case 388u: goto L_003032A8;
    case 389u: goto L_003032C4;
    case 390u: goto L_003032E8;
    case 391u: goto L_003032F4;
    case 392u: goto L_00303308;
    case 393u: goto L_00303348;
    case 394u: goto L_00303354;
    case 395u: goto L_0030336C;
    case 396u: goto L_0030337C;
    case 397u: goto L_00303394;
    case 398u: goto L_003033A4;
    case 399u: goto L_003033B4;
    case 400u: goto L_003033C0;
    case 401u: goto L_0030343C;
    case 402u: goto L_00303448;
    case 403u: goto L_0030345C;
    case 404u: goto L_00303464;
    case 405u: goto L_00303474;
    case 406u: goto L_0030347C;
    case 407u: goto L_00303488;
    case 408u: goto L_00303520;
    case 409u: goto L_0030354C;
    case 410u: goto L_00303570;
    case 411u: goto L_00303580;
    case 412u: goto L_00303594;
    case 413u: goto L_003035B0;
    case 414u: goto L_00303600;
    case 415u: goto L_00303630;
    case 416u: goto L_00303670;
    case 417u: goto L_00303690;
    case 418u: goto L_003036A8;
    case 419u: goto L_003036C0;
    case 420u: goto L_00303728;
    case 421u: goto L_00303778;
    case 422u: goto L_003037C4;
    case 423u: goto L_003037E0;
    case 424u: goto L_00303848;
    case 425u: goto L_003038B0;
    case 426u: goto L_003038C0;
    case 427u: goto L_003038DC;
    case 428u: goto L_003038EC;
    case 429u: goto L_003038F4;
    case 430u: goto L_0030391C;
    case 431u: goto L_00303954;
    case 432u: goto L_00303988;
    case 433u: goto L_003039A8;
    case 434u: goto L_003039C8;
    case 435u: goto L_00303A10;
    case 436u: goto L_00303A50;
    case 437u: goto L_00303AC4;
    case 438u: goto L_00303AD4;
    case 439u: goto L_00303AF8;
    case 440u: goto L_00303B1C;
    case 441u: goto L_00303B90;
    case 442u: goto L_00303BE8;
    case 443u: goto L_00303C38;
    case 444u: goto L_00303C50;
    case 445u: goto L_00303C7C;
    case 446u: goto L_00303CC4;
    case 447u: goto L_00303CD8;
    case 448u: goto L_00303CF4;
    case 449u: goto L_00303D20;
    case 450u: goto L_00303D7C;
    case 451u: goto L_00303DD8;
    case 452u: goto L_00303DF0;
    case 453u: goto L_00303E1C;
    case 454u: goto L_00303E64;
    case 455u: goto L_00303E78;
    case 456u: goto L_00303E88;
    case 457u: goto L_00303EC0;
    case 458u: goto L_00303EE0;
    case 459u: goto L_00303F10;
    case 460u: goto L_00303F3C;
    case 461u: goto L_00303F58;
    case 462u: goto L_00303F68;
    case 463u: goto L_00303F74;
    case 464u: goto L_00303F84;
    case 465u: goto L_00303FB4;
    case 466u: goto L_00303FE0;
    default: bad_entry(c, 0x00300000u); return;
    }
L_00300000:
    set32(c.r[4], c.r[19].w[0] + 8384u);
    c.budget -= 1;
L_00300004:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030000Cu);  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x0030000Cu) [[unlikely]] return; }
L_0030000C:
    set32(c.r[4], ld32((c.r[19].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0030020C; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0030020C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00300038u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00300038u) [[unlikely]] return; }
L_00300038:
    set32(c.r[4], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030004Cu); c.r[18].d[0] = c.r[2].d[0] & 255ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030004Cu) [[unlikely]] return; }
L_0030004C:
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003000AC; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003000F8; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_003000F8; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 8528u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0030007C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030007Cu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0030007Cu) [[unlikely]] return; }
L_0030007C:
    set32(c.r[4], 0u + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300088u); st32((c.r[19].w[0] + 8528u), 0u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x00300088u) [[unlikely]] return; }
L_00300088:
    st32((c.r[19].w[0] + 8528u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300094u); set32(c.r[4], ld32((c.r[19].w[0] + 28u)));  if (depth < kMaxDepth) unit_0080(c, 222u, depth + 1u); else { c.pc = 0x00301AF0u; return; } if (c.pc != 0x00300094u) [[unlikely]] return; }
L_00300094:
    set32(c.r[4], ld32((c.r[19].w[0] + 8528u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003000A4u); set32(c.r[6], 0u + 240u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x003000A4u) [[unlikely]] return; }
L_003000A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[19].w[0] + 28u)));  if (t) { goto L_003000FC; } }
L_003000AC:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_003000E0; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 712u)));
    st32((c.r[19].w[0] + 8372u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 8372u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] <= 0; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_003000F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003000D8u);  if (depth < kMaxDepth) unit_0080(c, 39u, depth + 1u); else { c.pc = 0x00300470u; return; } if (c.pc != 0x003000D8u) [[unlikely]] return; }
L_003000D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003000F8; } }
L_003000E0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003000F8; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_003000F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003000F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0080(c, 39u, depth + 1u); else { c.pc = 0x00300470u; return; } if (c.pc != 0x003000F8u) [[unlikely]] return; }
L_003000F8:
    set32(c.r[4], ld32((c.r[19].w[0] + 28u)));
    c.budget -= 1;
L_003000FC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0030011C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0030011C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030011Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030011Cu) [[unlikely]] return; }
L_0030011C:
    st32((c.r[19].w[0] + 28u), 0u);
    set32(c.r[3], 0u + 3u);
    set32(c.r[5], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003001C4; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0030018C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00300174; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00300154; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003001D4; } }
L_00300154:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[4].d[0]; c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00300160; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00300160:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030016Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 22u, depth + 1u); else { c.pc = 0x00300250u; return; } if (c.pc != 0x0030016Cu) [[unlikely]] return; }
L_0030016C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_003001D4; } }
L_00300174:
    set32(c.r[6], ld32((c.r[19].w[0] + 8372u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300184u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 27u, depth + 1u); else { c.pc = 0x00300310u; return; } if (c.pc != 0x00300184u) [[unlikely]] return; }
L_00300184:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_003001D4; } }
L_0030018C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300194u); set32(c.r[4], 0u + 720u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00300194u) [[unlikely]] return; }
L_00300194:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_003001B0; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003001ACu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0080(c, 229u, depth + 1u); else { c.pc = 0x00301B70u; return; } if (c.pc != 0x003001ACu) [[unlikely]] return; }
L_003001AC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003001B0:
    st32((c.r[19].w[0] + 28u), c.r[4].w[0]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[19].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003001D4; } }
L_003001C4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003001D0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 35u, depth + 1u); else { c.pc = 0x00300400u; return; } if (c.pc != 0x003001D0u) [[unlikely]] return; }
L_003001D0:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_003001D4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0030020C; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003001FC; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003001F4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003001F4u) [[unlikely]] return; }
L_003001F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00300210; } }
L_003001FC:
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030020Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030020Cu) [[unlikely]] return; }
L_0030020C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00300210:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00300230:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00300000u < 16384u) { entry = entries_0080[(t - 0x00300000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00300240:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00300000u < 16384u) { entry = entries_0080[(t - 0x00300000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00300250:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003002FC; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_003002F4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 720u);  if (t) { goto L_003002C0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[4], 0u + 896u);  if (t) { goto L_0030028C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00300300; } }
L_0030028C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300294u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00300294u) [[unlikely]] return; }
L_00300294:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003002AC; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 8528u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003002ACu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 60u, depth + 1u); else { c.pc = 0x003A4790u; return; } if (c.pc != 0x003002ACu) [[unlikely]] return; }
L_003002AC:
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[2], 0u + 3u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00300300; } }
L_003002C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003002C8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003002C8u) [[unlikely]] return; }
L_003002C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003002E0; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003002E0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0080(c, 229u, depth + 1u); else { c.pc = 0x00301B70u; return; } if (c.pc != 0x003002E0u) [[unlikely]] return; }
L_003002E0:
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00300300; } }
L_003002F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00300304; } }
L_003002FC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00300300:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00300304:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00300310:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003003A0; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0; set32(c.r[4], 0u + 448u);  if (t) { goto L_003003A4; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 8536u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00300348; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300348u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00300348u) [[unlikely]] return; }
L_00300348:
    set32(c.r[4], c.r[16].w[0] << 1);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300354u); st32((c.r[17].w[0] + 8536u), 0u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x00300354u) [[unlikely]] return; }
L_00300354:
    st32((c.r[17].w[0] + 8536u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300360u); set32(c.r[4], 0u + 612u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00300360u) [[unlikely]] return; }
L_00300360:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[9], 0u + 1u);  if (t) { goto L_0030038C; } }
    c.r[10].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[9].d[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[17].w[0] + 8532u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[8], ld32((c.r[17].w[0] + 8536u)));
    set32(c.r[6], 0u + 2u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030038Cu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0085(c, 316u, depth + 1u); else { c.pc = 0x00316BA0u; return; } if (c.pc != 0x0030038Cu) [[unlikely]] return; }
L_0030038C:
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[2], 0u + 2u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003003E8; } }
L_003003A0:
    set32(c.r[4], 0u + 448u);
    c.budget -= 1;
L_003003A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003003ACu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003003ACu) [[unlikely]] return; }
L_003003AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { goto L_003003C8; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 9728u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003003C8u); set32(c.r[7], 0u + 3u);  if (depth < kMaxDepth) unit_0080(c, 147u, depth + 1u); else { c.pc = 0x00301060u; return; } if (c.pc != 0x003003C8u) [[unlikely]] return; }
L_003003C8:
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 20u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003003E4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003003E4u) [[unlikely]] return; }
L_003003E4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003003E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00300400:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0030041C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00300460; } }
L_0030041C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300424u); set32(c.r[4], 0u + 448u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00300424u) [[unlikely]] return; }
L_00300424:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { goto L_00300440; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 9728u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300440u); set32(c.r[7], 0u + 3u);  if (depth < kMaxDepth) unit_0080(c, 147u, depth + 1u); else { c.pc = 0x00301060u; return; } if (c.pc != 0x00300440u) [[unlikely]] return; }
L_00300440:
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00300458u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00300458u) [[unlikely]] return; }
L_00300458:
    st32((c.r[16].w[0] + 20u), 0u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00300460:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00300470:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003005D8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 8532u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[17], ld32((c.r[16].w[0] + 28u)));  if (t) { goto L_003004AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003004ACu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x003004ACu) [[unlikely]] return; }
L_003004AC:
    st32((c.r[16].w[0] + 8532u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 8528u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003004C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003004C4u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x003004C4u) [[unlikely]] return; }
L_003004C4:
    st32((c.r[16].w[0] + 8528u), 0u);
    set32(c.r[2], 0u + 30u);
    set32(c.r[3], ld32((c.r[16].w[0] + 8372u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003004E0u); set32(c.r[4], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x003004E0u) [[unlikely]] return; }
L_003004E0:
    st32((c.r[16].w[0] + 8532u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8372u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003004F0u); set32(c.r[4], c.r[2].w[0] << 3);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x003004F0u) [[unlikely]] return; }
L_003004F0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003004FCu); st32((c.r[16].w[0] + 8528u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0080(c, 377u, depth + 1u); else { c.pc = 0x00303130u; return; } if (c.pc != 0x003004FCu) [[unlikely]] return; }
L_003004FC:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[20].d[0] = 0ull + 0ull;
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00300534; } }
L_00300510:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300518u); set32(c.r[17], c.r[18].w[0] << 1);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x00300518u) [[unlikely]] return; }
L_00300518:
    set32(c.r[3], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 8532u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 580u));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 7;
L_00300534:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030053Cu);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x0030053Cu) [[unlikely]] return; }
L_0030053C:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 519u));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00300510u | kUnwind; return; } goto L_00300510; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003005A0; } }
L_00300554:
    set32(c.r[2], c.r[17].w[0] << 3);
    set32(c.r[5], c.r[21].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00300584; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8532u)));
    set32(c.r[3], c.r[20].w[0] << 1);
    c.r[4].d[0] = ld16((c.r[5].w[0] + 2u));
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_0030059C; } }
L_00300584:
    set32(c.r[2], ld32((c.r[16].w[0] + 8528u)));
    set32(c.r[3], c.r[19].w[0] << 3);
    set32(c.r[6], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300598u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x00300598u) [[unlikely]] return; }
L_00300598:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0030059C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_003005A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003005A8u);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x003005A8u) [[unlikely]] return; }
L_003005A8:
    c.r[4].d[0] = ld8((c.r[2].w[0] + 519u));
    set32(c.r[3], 0u + 30u);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00300554u | kUnwind; return; } goto L_00300554; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 8532u)));
    set32(c.r[4], c.r[20].w[0] << 1);
    set32(c.r[5], 0u + 118u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { goto L_00300624; } }
L_003005D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00300614; } }
L_003005E0:
    set32(c.r[2], ld32((c.r[16].w[0] + 8528u)));
    set32(c.r[3], c.r[17].w[0] << 3);
    set32(c.r[4], ld32((c.r[16].w[0] + 8536u)));
    set32(c.r[5], c.r[17].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[19].d[0] = ld16((c.r[4].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300608u); set32(c.r[18], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x00300608u) [[unlikely]] return; }
L_00300608:
    set32(c.r[3], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    st16((c.r[3].w[0] + 520u), static_cast<std::uint16_t>(c.r[19].w[0]));
    c.budget -= 3;
L_00300614:
    set32(c.r[3], ld32((c.r[16].w[0] + 8372u)));
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003005E0u | kUnwind; return; } goto L_003005E0; } }
L_00300624:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00300650:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], c.r[4].w[0] + 8448u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030066Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x0030066Cu) [[unlikely]] return; }
L_0030066C:
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[16].w[0] << 5);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00300690:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[18].w[0] + 8360u);
    set32(c.r[6], c.r[18].w[0] + 40u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003006D4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006F(c, 141u, depth + 1u); else { c.pc = 0x002BD880u; return; } if (c.pc != 0x003006D4u) [[unlikely]] return; }
L_003006D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00300700; } }
L_003006DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003006E4u);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x003006E4u) [[unlikely]] return; }
L_003006E4:
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[4], c.r[18].w[0] + 8360u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = ld16((c.r[2].w[0] + 580u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003006FCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006F(c, 201u, depth + 1u); else { c.pc = 0x002BE260u; return; } if (c.pc != 0x003006FCu) [[unlikely]] return; }
L_003006FC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00300700:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300708u);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x00300708u) [[unlikely]] return; }
L_00300708:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 519u));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003006DCu | kUnwind; return; } goto L_003006DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00300790; } }
L_00300720:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300728u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 203u, depth + 1u); else { c.pc = 0x002BE2A0u; return; } if (c.pc != 0x00300728u) [[unlikely]] return; }
L_00300728:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300734u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 110u, depth + 1u); else { c.pc = 0x0012D160u; return; } if (c.pc != 0x00300734u) [[unlikely]] return; }
L_00300734:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00300780; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300744u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 112u, depth + 1u); else { c.pc = 0x0012D200u; return; } if (c.pc != 0x00300744u) [[unlikely]] return; }
L_00300744:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0030077C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300754u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00300754u) [[unlikely]] return; }
L_00300754:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 355u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0030077C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030076Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0030076Cu) [[unlikely]] return; }
L_0030076C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 346u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0030078C; } }
L_0030077C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00300780:
    set32(c.r[4], c.r[18].w[0] + 8360u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030078Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006F(c, 201u, depth + 1u); else { c.pc = 0x002BE260u; return; } if (c.pc != 0x0030078Cu) [[unlikely]] return; }
L_0030078C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00300790:
    set32(c.r[2], ld32((c.r[18].w[0] + 8364u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[18].w[0] + 8360u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00300720u | kUnwind; return; } goto L_00300720; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003007A8u); set32(c.r[4], c.r[18].w[0] + 8360u);  if (depth < kMaxDepth) unit_006F(c, 207u, depth + 1u); else { c.pc = 0x002BE330u; return; } if (c.pc != 0x003007A8u) [[unlikely]] return; }
L_003007A8:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003007B4u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x003007B4u) [[unlikely]] return; }
L_003007B4:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003007F4; } }
L_003007C4:
    set32(c.r[4], c.r[18].w[0] + 8360u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003007D4u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_006F(c, 199u, depth + 1u); else { c.pc = 0x002BE1E0u; return; } if (c.pc != 0x003007D4u) [[unlikely]] return; }
L_003007D4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 8360u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003007E4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 203u, depth + 1u); else { c.pc = 0x002BE2A0u; return; } if (c.pc != 0x003007E4u) [[unlikely]] return; }
L_003007E4:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_003007F4:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003007C4u | kUnwind; return; } goto L_003007C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00300894; } }
L_00300808:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030081Cu); set32(c.r[20], 0u - 1u);  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0030081Cu) [[unlikely]] return; }
L_0030081C:
    c.r[19].d[0] = ld8((c.r[2].w[0] + 356u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[18].w[0] + 1u);  if (t) { goto L_00300864; } }
L_00300828:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[23], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[23].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030083Cu); c.r[30].d[0] = c.r[19].d[0] & 255ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0030083Cu) [[unlikely]] return; }
L_0030083C:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 356u));
    c.r[1].d[0] = c.r[30].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00300860; } }
    set32(c.r[4], ld32((c.r[23].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030085Cu); c.r[20].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0030085Cu) [[unlikely]] return; }
L_0030085C:
    c.r[19].d[0] = ld8((c.r[2].w[0] + 356u));
    c.budget -= 1;
L_00300860:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00300864:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00300828u | kUnwind; return; } goto L_00300828; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[20].w[0] << 2);  if (t) { goto L_00300890; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 5;
L_00300890:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00300894:
    set32(c.r[2], c.r[22].w[0] - 1u);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[18].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00300808u | kUnwind; return; } goto L_00300808; } }
    set32(c.r[19], 0u + 25u);
    c.budget -= 1;
L_003008A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003008B0u); set32(c.r[18], c.r[19].w[0] << 1);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x003008B0u) [[unlikely]] return; }
L_003008B0:
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003008BCu); c.r[4].d[0] = ld16((c.r[2].w[0] + 520u));  if (depth < kMaxDepth) unit_007F(c, 461u, depth + 1u); else { c.pc = 0x002FF7D0u; return; } if (c.pc != 0x003008BCu) [[unlikely]] return; }
L_003008BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00300938; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003008CCu);  if (depth < kMaxDepth) unit_0010(c, 15u, depth + 1u); else { c.pc = 0x00140210u; return; } if (c.pc != 0x003008CCu) [[unlikely]] return; }
L_003008CC:
    set32(c.r[5], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003008D8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 228u, depth + 1u); else { c.pc = 0x0011B928u; return; } if (c.pc != 0x003008D8u) [[unlikely]] return; }
L_003008D8:
    set32(c.r[4], 0u - 4u);
    set32(c.r[3], 0u + 118u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; mmi::pcpyld(c.r[5], c.r[0], c.r[4]);  if (t) { goto L_00300904; } }
L_003008E8:
    c.r[4].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(1ll);
    c.r[4].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00300900; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] + c.r[5].d[0];  if (t) { goto L_00300904; } }
L_00300900:
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00300904:
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[17], c.r[21].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] & 65535ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003008E8u | kUnwind; return; } goto L_003008E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300928u);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x00300928u) [[unlikely]] return; }
L_00300928:
    set32(c.r[3], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], 0u + 118u);
    st16((c.r[3].w[0] + 520u), static_cast<std::uint16_t>(c.r[16].w[0]));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_00300938:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003008A8u | kUnwind; return; } goto L_003008A8; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0030094C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300954u); set32(c.r[18], c.r[19].w[0] << 1);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x00300954u) [[unlikely]] return; }
L_00300954:
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300960u); c.r[4].d[0] = ld16((c.r[2].w[0] + 520u));  if (depth < kMaxDepth) unit_007F(c, 461u, depth + 1u); else { c.pc = 0x002FF7D0u; return; } if (c.pc != 0x00300960u) [[unlikely]] return; }
L_00300960:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003009F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300970u);  if (depth < kMaxDepth) unit_0010(c, 15u, depth + 1u); else { c.pc = 0x00140210u; return; } if (c.pc != 0x00300970u) [[unlikely]] return; }
L_00300970:
    set32(c.r[5], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030097Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 228u, depth + 1u); else { c.pc = 0x0011B928u; return; } if (c.pc != 0x0030097Cu) [[unlikely]] return; }
L_0030097C:
    c.r[5].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(5ll);
    set32(c.r[2], 0u - 4u);
    mmi::pcpyld(c.r[4], c.r[0], c.r[2]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 118u);  if (t) { goto L_003009C0; } }
L_00300990:
    c.r[3].d[0] = c.r[5].d[0] + static_cast<std::uint64_t>(1ll);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003009A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[5].d[0] + static_cast<std::uint64_t>(6ll);  if (t) { goto L_003009C0; } }
L_003009A8:
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003009BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[5].d[0] + c.r[4].d[0];  if (t) { goto L_003009C0; } }
L_003009BC:
    c.r[5].d[0] = c.r[5].d[0] + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003009C0:
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[17], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[3].d[0] & 65535ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00300990u | kUnwind; return; } goto L_00300990; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003009E4u);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x003009E4u) [[unlikely]] return; }
L_003009E4:
    set32(c.r[3], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], 0u + 118u);
    st16((c.r[3].w[0] + 520u), static_cast<std::uint16_t>(c.r[16].w[0]));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_003009F4:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030094Cu | kUnwind; return; } goto L_0030094C; } }
    set32(c.r[19], 0u + 20u);
    c.budget -= 1;
L_00300A08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300A10u); set32(c.r[18], c.r[19].w[0] << 1);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x00300A10u) [[unlikely]] return; }
L_00300A10:
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300A1Cu); c.r[4].d[0] = ld16((c.r[2].w[0] + 520u));  if (depth < kMaxDepth) unit_007F(c, 461u, depth + 1u); else { c.pc = 0x002FF7D0u; return; } if (c.pc != 0x00300A1Cu) [[unlikely]] return; }
L_00300A1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00300AB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300A2Cu);  if (depth < kMaxDepth) unit_0010(c, 15u, depth + 1u); else { c.pc = 0x00140210u; return; } if (c.pc != 0x00300A2Cu) [[unlikely]] return; }
L_00300A2C:
    set32(c.r[5], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300A38u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 228u, depth + 1u); else { c.pc = 0x0011B928u; return; } if (c.pc != 0x00300A38u) [[unlikely]] return; }
L_00300A38:
    c.r[5].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(10ll);
    set32(c.r[2], 0u - 4u);
    mmi::pcpyld(c.r[4], c.r[0], c.r[2]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 118u);  if (t) { goto L_00300A7C; } }
L_00300A4C:
    c.r[3].d[0] = c.r[5].d[0] + static_cast<std::uint64_t>(1ll);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00300A64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[5].d[0] + static_cast<std::uint64_t>(6ll);  if (t) { goto L_00300A7C; } }
L_00300A64:
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(15ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00300A78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[5].d[0] + c.r[4].d[0];  if (t) { goto L_00300A7C; } }
L_00300A78:
    c.r[5].d[0] = c.r[5].d[0] + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00300A7C:
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[17], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[3].d[0] & 65535ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00300A4Cu | kUnwind; return; } goto L_00300A4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300AA0u);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x00300AA0u) [[unlikely]] return; }
L_00300AA0:
    set32(c.r[3], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], 0u + 118u);
    st16((c.r[3].w[0] + 520u), static_cast<std::uint16_t>(c.r[16].w[0]));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_00300AB0:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 25ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[22].d[0] << 32;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00300A08u | kUnwind; return; } goto L_00300A08; } }
    set32(c.r[2], c.r[22].w[0] - 1u);
    c.r[22].d[0] = c.r[2].d[0] << 32;
    set32(c.r[17], 0u + 5u);
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);
    c.r[22].d[0] = static_cast<std::uint64_t>(c.r[22].sd[0] >> 32);
    c.budget -= 5;
L_00300AD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300ADCu); set32(c.r[20], c.r[17].w[0] << 1);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x00300ADCu) [[unlikely]] return; }
L_00300ADC:
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300AE8u); c.r[4].d[0] = ld16((c.r[2].w[0] + 520u));  if (depth < kMaxDepth) unit_007F(c, 461u, depth + 1u); else { c.pc = 0x002FF7D0u; return; } if (c.pc != 0x00300AE8u) [[unlikely]] return; }
L_00300AE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00300B8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300AF8u);  if (depth < kMaxDepth) unit_0010(c, 15u, depth + 1u); else { c.pc = 0x00140210u; return; } if (c.pc != 0x00300AF8u) [[unlikely]] return; }
L_00300AF8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300B04u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 228u, depth + 1u); else { c.pc = 0x0011B928u; return; } if (c.pc != 0x00300B04u) [[unlikely]] return; }
L_00300B04:
    c.r[5].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(15ll);
    c.r[1].d[0] = c.r[22].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00300B18; } }
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 1;
L_00300B18:
    set32(c.r[3], 0u - 14u);
    set32(c.r[2], 0u + 118u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; mmi::pcpyld(c.r[4], c.r[0], c.r[3]);  if (t) { goto L_00300B58; } }
L_00300B28:
    c.r[3].d[0] = c.r[5].d[0] + static_cast<std::uint64_t>(1ll);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(15ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00300B40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[5].d[0] + static_cast<std::uint64_t>(16ll);  if (t) { goto L_00300B58; } }
L_00300B40:
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(30ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00300B54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[5].d[0] + c.r[4].d[0];  if (t) { goto L_00300B58; } }
L_00300B54:
    c.r[5].d[0] = c.r[5].d[0] + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00300B58:
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[19], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[18].d[0] = c.r[3].d[0] & 65535ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00300B28u | kUnwind; return; } goto L_00300B28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300B7Cu);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x00300B7Cu) [[unlikely]] return; }
L_00300B7C:
    set32(c.r[4], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[3], 0u + 118u);
    st16((c.r[4].w[0] + 520u), static_cast<std::uint16_t>(c.r[18].w[0]));
    st32((c.r[19].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_00300B8C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00300AD4u | kUnwind; return; } goto L_00300AD4; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_00300BAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300BACu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00300BACu) [[unlikely]] return; }
L_00300BAC:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00300BE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300C0Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 12u, depth + 1u); else { c.pc = 0x001300B0u; return; } if (c.pc != 0x00300C0Cu) [[unlikely]] return; }
L_00300C0C:
    set32(c.r[4], c.r[17].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300C18u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x00300C18u) [[unlikely]] return; }
L_00300C18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 17552u);
    set32(c.r[3], c.r[3].w[0] + 17640u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[17].w[0] + 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 17700u);
    set32(c.r[5], 0u + 3u);
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[6], 0u + 4u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300C50u); st32((c.r[17].w[0] + 52u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_002A(c, 287u, depth + 1u); else { c.pc = 0x001AB200u; return; } if (c.pc != 0x00300C50u) [[unlikely]] return; }
L_00300C50:
    set32(c.r[4], c.r[17].w[0] + 224u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300C60u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_0025(c, 304u, depth + 1u); else { c.pc = 0x00196C90u; return; } if (c.pc != 0x00300C60u) [[unlikely]] return; }
L_00300C60:
    set32(c.r[4], c.r[17].w[0] + 384u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300C70u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0049(c, 283u, depth + 1u); else { c.pc = 0x002277A0u; return; } if (c.pc != 0x00300C70u) [[unlikely]] return; }
L_00300C70:
    st32((c.r[17].w[0] + 56u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[17].w[0] + 60u), 0u);
    set32(c.r[5], 0u + 10000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[18], c.r[2].w[0] + 624u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300C90u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x00300C90u) [[unlikely]] return; }
L_00300C90:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300CA0u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x00300CA0u) [[unlikely]] return; }
L_00300CA0:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300CB0u); set32(c.r[4], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x00300CB0u) [[unlikely]] return; }
L_00300CB0:
    set32(c.r[16], c.r[16].w[0] + 8448u);
    set32(c.r[5], 0u + 10000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300CC0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x00300CC0u) [[unlikely]] return; }
L_00300CC0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300CD0u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x00300CD0u) [[unlikely]] return; }
L_00300CD0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300CE0u); set32(c.r[4], c.r[17].w[0] + 224u);  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x00300CE0u) [[unlikely]] return; }
L_00300CE0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00300D00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00300E0C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 17552u);
    set32(c.r[3], c.r[3].w[0] + 17640u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 17700u);
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00300D64; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00300D64; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00300D64u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00300D64u) [[unlikely]] return; }
L_00300D64:
    st32((c.r[17].w[0] + 56u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00300D8C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00300D8C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00300D8Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00300D8Cu) [[unlikely]] return; }
L_00300D8C:
    set32(c.r[4], c.r[17].w[0] + 384u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300D9Cu); st32((c.r[17].w[0] + 60u), 0u);  if (depth < kMaxDepth) unit_0049(c, 294u, depth + 1u); else { c.pc = 0x00227920u; return; } if (c.pc != 0x00300D9Cu) [[unlikely]] return; }
L_00300D9C:
    set32(c.r[4], c.r[17].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300DA8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0025(c, 310u, depth + 1u); else { c.pc = 0x00196D20u; return; } if (c.pc != 0x00300DA8u) [[unlikely]] return; }
L_00300DA8:
    set32(c.r[4], c.r[17].w[0] + 64u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);  if (t) { goto L_00300DDC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 10720u);
    set32(c.r[3], c.r[3].w[0] - 10704u);
    st32((c.r[17].w[0] + 64u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 10688u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300DDCu); st32((c.r[17].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 310u, depth + 1u); else { c.pc = 0x00196D20u; return; } if (c.pc != 0x00300DDCu) [[unlikely]] return; }
L_00300DDC:
    set32(c.r[4], c.r[17].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300DE8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x00300DE8u) [[unlikely]] return; }
L_00300DE8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300DF4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 15u, depth + 1u); else { c.pc = 0x00130130u; return; } if (c.pc != 0x00300DF4u) [[unlikely]] return; }
L_00300DF4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00300E10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300E0Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00300E0Cu) [[unlikely]] return; }
L_00300E0C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00300E10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00300E30:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E5D0u | kUnwind; return; } [[clang::musttail]] return unit_000B(c, 317u, depth); }
L_00300E40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300E54u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 25u, depth + 1u); else { c.pc = 0x00130270u; return; } if (c.pc != 0x00300E54u) [[unlikely]] return; }
L_00300E54:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 164u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00300E68u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00300E68u) [[unlikely]] return; }
L_00300E68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00300E80:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00130260u | kUnwind; return; } [[clang::musttail]] return unit_000C(c, 24u, depth); }
L_00300E90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300EA4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 26u, depth + 1u); else { c.pc = 0x00130280u; return; } if (c.pc != 0x00300EA4u) [[unlikely]] return; }
L_00300EA4:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 164u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00300EB8u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00300EB8u) [[unlikely]] return; }
L_00300EB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00300ED0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300EE4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 27u, depth + 1u); else { c.pc = 0x00130290u; return; } if (c.pc != 0x00300EE4u) [[unlikely]] return; }
L_00300EE4:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 164u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00300EF8u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00300EF8u) [[unlikely]] return; }
L_00300EF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00300F10:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x001302A0u | kUnwind; return; } [[clang::musttail]] return unit_000C(c, 28u, depth); }
L_00300F20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 384u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    st32((c.r[3].w[0] + 48u), c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 201u));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00300F6C; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 361u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00300F6C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00300F6Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00300F6Cu) [[unlikely]] return; }
L_00300F6C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00300F80:
    set32(c.r[5], ld32((c.r[4].w[0] + 384u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 48u), c.r[4].w[0]);  c.pc = t; return; }
L_00300FA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 384u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    st32((c.r[3].w[0] + 48u), c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 201u));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00300FEC; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 361u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00300FEC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00300FECu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00300FECu) [[unlikely]] return; }
L_00300FEC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00301000:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 388u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    st32((c.r[3].w[0] + 48u), c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 201u));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030104C; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 361u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030104C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030104Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030104Cu) [[unlikely]] return; }
L_0030104C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00301060:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301080u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 107u, depth + 1u); else { c.pc = 0x00300BE0u; return; } if (c.pc != 0x00301080u) [[unlikely]] return; }
L_00301080:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 17376u);
    set32(c.r[3], c.r[3].w[0] + 17464u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], 0u + 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 17524u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003010ACu); st32((c.r[17].w[0] + 40u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003010ACu) [[unlikely]] return; }
L_003010AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003010C4; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 11u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003010C4u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_0080(c, 378u, depth + 1u); else { c.pc = 0x00303150u; return; } if (c.pc != 0x003010C4u) [[unlikely]] return; }
L_003010C4:
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003010D0u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003010D0u) [[unlikely]] return; }
L_003010D0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003010F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003010E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0080(c, 53u, depth + 1u); else { c.pc = 0x00300650u; return; } if (c.pc != 0x003010E4u) [[unlikely]] return; }
L_003010E4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003010F0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x003010F0u) [[unlikely]] return; }
L_003010F0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003010F4:
    st32((c.r[17].w[0] + 60u), c.r[18].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 60u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], 0u + 304u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 21880u));
    st32((c.r[3].w[0] + 20u), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030111Cu); st32((c.r[3].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0030111Cu) [[unlikely]] return; }
L_0030111C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00301140; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301130u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0080(c, 53u, depth + 1u); else { c.pc = 0x00300650u; return; } if (c.pc != 0x00301130u) [[unlikely]] return; }
L_00301130:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030113Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 207u, depth + 1u); else { c.pc = 0x0015FE10u; return; } if (c.pc != 0x0030113Cu) [[unlikely]] return; }
L_0030113C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00301140:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    st32((c.r[17].w[0] + 432u), c.r[18].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 432u)));
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 24u), c.f[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 432u)));
    c.f[12] = ld32((c.r[1].w[0] - 21888u));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030117Cu); set32(c.r[5], 0u + 31u);  if (depth < kMaxDepth) unit_0017(c, 209u, depth + 1u); else { c.pc = 0x0015FE60u; return; } if (c.pc != 0x0030117Cu) [[unlikely]] return; }
L_0030117C:
    st8((c.r[17].w[0] + 436u), static_cast<std::uint8_t>(0u));
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00301190u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00301190u) [[unlikely]] return; }
L_00301190:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003011B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0030123C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 17376u);
    set32(c.r[3], c.r[3].w[0] + 17464u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 17524u);
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 432u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00301214; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00301214; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00301214u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00301214u) [[unlikely]] return; }
L_00301214:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301224u); st32((c.r[17].w[0] + 432u), 0u);  if (depth < kMaxDepth) unit_0080(c, 119u, depth + 1u); else { c.pc = 0x00300D00u; return; } if (c.pc != 0x00301224u) [[unlikely]] return; }
L_00301224:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00301240; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030123Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0030123Cu) [[unlikely]] return; }
L_0030123C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00301240:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00301260:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301278u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x00301278u) [[unlikely]] return; }
L_00301278:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301280u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 129u, depth + 1u); else { c.pc = 0x00300E40u; return; } if (c.pc != 0x00301280u) [[unlikely]] return; }
L_00301280:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 436u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003012A8; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[4], c.r[16].w[0] + 64u);
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003012A0u); set32(c.r[5], 0u + 64u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003012A0u) [[unlikely]] return; }
L_003012A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003012A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 207u, depth + 1u); else { c.pc = 0x00301920u; return; } if (c.pc != 0x003012A8u) [[unlikely]] return; }
L_003012A8:
    set32(c.r[25], ld32((c.r[16].w[0] + 224u)));
    set32(c.r[4], c.r[16].w[0] + 224u);
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003012BCu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003012BCu) [[unlikely]] return; }
L_003012BC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 328u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003012F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301304u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 24u, depth + 1u); else { c.pc = 0x00130260u; return; } if (c.pc != 0x00301304u) [[unlikely]] return; }
L_00301304:
    st8((c.r[16].w[0] + 436u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00301320:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301334u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 133u, depth + 1u); else { c.pc = 0x00300E90u; return; } if (c.pc != 0x00301334u) [[unlikely]] return; }
L_00301334:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 436u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00301354; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[4], c.r[16].w[0] + 64u);
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00301354u); set32(c.r[5], 0u + 65u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00301354u) [[unlikely]] return; }
L_00301354:
    set32(c.r[25], ld32((c.r[16].w[0] + 224u)));
    set32(c.r[4], c.r[16].w[0] + 224u);
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00301368u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00301368u) [[unlikely]] return; }
L_00301368:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 328u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00301390:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003013A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 136u, depth + 1u); else { c.pc = 0x00300ED0u; return; } if (c.pc != 0x003013A4u) [[unlikely]] return; }
L_003013A4:
    set32(c.r[25], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[4], c.r[16].w[0] + 64u);
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003013B8u); set32(c.r[5], 0u + 65u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003013B8u) [[unlikely]] return; }
L_003013B8:
    set32(c.r[25], ld32((c.r[16].w[0] + 224u)));
    set32(c.r[4], c.r[16].w[0] + 224u);
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003013CCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003013CCu) [[unlikely]] return; }
L_003013CC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 328u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00301400:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 436u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00301440; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301420u); set32(c.r[4], ld32((c.r[16].w[0] + 52u)));  if (depth < kMaxDepth) unit_0080(c, 55u, depth + 1u); else { c.pc = 0x00300690u; return; } if (c.pc != 0x00301420u) [[unlikely]] return; }
L_00301420:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301428u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 207u, depth + 1u); else { c.pc = 0x00301920u; return; } if (c.pc != 0x00301428u) [[unlikely]] return; }
L_00301428:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00301438u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00301438u) [[unlikely]] return; }
L_00301438:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0030144C; } }
L_00301440:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301448u);  if (depth < kMaxDepth) unit_000C(c, 28u, depth + 1u); else { c.pc = 0x001302A0u; return; } if (c.pc != 0x00301448u) [[unlikely]] return; }
L_00301448:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0030144C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00301460:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[4].w[0] + 436u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301480u); set32(c.r[4], 0u + 400u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x00301480u) [[unlikely]] return; }
L_00301480:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00301490u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00301490u) [[unlikely]] return; }
L_00301490:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003014A0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43120000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.f[12] = c.r[2].w[0];
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42980000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[0] = c.r[2].w[0];
    set32(c.r[6], ld32((c.r[4].w[0] + 388u)));
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 60u)));
    c.f[1] = ld32((c.r[6].w[0] + 12u));
    c.f[13] = c.r[3].w[0];
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[0]);
    st32((c.r[5].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 60u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 27;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030150Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030150Cu) [[unlikely]] return; }
L_0030150C:
    set32(c.r[4], ld32((c.r[19].w[0] + 60u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00301520u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00301520u) [[unlikely]] return; }
L_00301520:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x6D6E0000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301534u); c.r[5].d[0] = c.r[2].d[0] | 21335ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x00301534u) [[unlikely]] return; }
L_00301534:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00301540; } }
    set32(c.r[17], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_00301540:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003016F4; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_00301550:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030155Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 93u, depth + 1u); else { c.pc = 0x0024C9A0u; return; } if (c.pc != 0x0030155Cu) [[unlikely]] return; }
L_0030155C:
    st64((c.r[29].w[0] + 104u), c.r[2].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[8], ld32((c.r[19].w[0] + 432u)));
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.f[0] = c.r[3].w[0];
    set32(c.r[7], c.r[29].w[0] + 104u);
    set32(c.r[6], c.r[29].w[0] + 96u);
    set32(c.r[4], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st64((c.r[8].w[0] + 256u), c.r[2].d[0]);
    c.r[2].d[0] = ld64((c.r[7].w[0]));
    st64((c.r[6].w[0]), c.r[2].d[0]);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 99u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[4].w[0] << (c.r[2].w[0] & 31u));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[8].w[0] + 160u), c.f[1]);
    c.r[2].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[2].d[0] = c.r[2].d[0] << 30;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[4].w[0] << (c.r[2].w[0] & 31u));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[8].w[0] + 164u), c.f[1]);
    c.f[1] = ld32((c.r[1].w[0] - 21896u));
    set32(c.r[2], ld32((c.r[19].w[0] + 432u)));
    st32((c.r[2].w[0] + 16u), c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = ld32((c.r[1].w[0] - 21896u));
    st32((c.r[2].w[0] + 20u), c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[2].w[0] + 24u), c.f[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 432u)));
    c.f[12] = ld32((c.r[1].w[0] - 21888u));
    c.budget -= 41;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301600u); set32(c.r[5], 0u + 31u);  if (depth < kMaxDepth) unit_0017(c, 209u, depth + 1u); else { c.pc = 0x0015FE60u; return; } if (c.pc != 0x00301600u) [[unlikely]] return; }
L_00301600:
    c.r[1].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] - 3u);  if (t) { goto L_00301670; } }
    set32(c.r[2], 0u + 86u);
    set32(c.r[6], ld32((c.r[19].w[0] + 384u)));
    mmi::mult(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42580000u);
    set32(c.r[5], ld32((c.r[19].w[0] + 432u)));
    c.f[13] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00260000u);
    c.r[2].d[0] = c.r[2].d[0] | 22647ull;
    c.f[0] = c.r[2].w[0];
    c.f[2] = ld32((c.r[6].w[0] + 12u));
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[4].w[0] + 365u);
    c.f[0] = fp::cvt_w_s(c.f[2]);
    c.f[1] = c.r[2].w[0];
    set32(c.r[2], c.f[0]);
    st32((c.r[5].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 432u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 23;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00301668u); c.f[12] = fp::cvt_s_w(c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00301668u) [[unlikely]] return; }
L_00301668:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[19].w[0] + 432u)));  if (t) { goto L_003016D4; } }
L_00301670:
    set32(c.r[2], 0u + 86u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], ld32((c.r[19].w[0] + 384u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 432u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42E40000u);
    c.f[13] = c.r[2].w[0];
    c.f[2] = ld32((c.r[5].w[0] + 12u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00260000u);
    c.r[2].d[0] = c.r[2].d[0] | 22647ull;
    c.f[0] = c.r[2].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[3].w[0] + 410u);
    c.f[0] = fp::cvt_w_s(c.f[2]);
    c.f[1] = c.r[2].w[0];
    set32(c.r[2], c.f[0]);
    st32((c.r[4].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 432u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 24;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003016D0u); c.f[12] = fp::cvt_s_w(c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003016D0u) [[unlikely]] return; }
L_003016D0:
    set32(c.r[4], ld32((c.r[19].w[0] + 432u)));
    c.budget -= 1;
L_003016D4:
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003016E4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003016E4u) [[unlikely]] return; }
L_003016E4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00301550u | kUnwind; return; } goto L_00301550; } }
L_003016F4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[18], ld32((c.r[3].w[0] + 440u)));
    c.budget -= 5;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[17], ld32((c.r[3].w[0] + 444u)));  if (t) { goto L_00301904; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301710u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00301710u) [[unlikely]] return; }
L_00301710:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[18].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[18].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 388u)));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[18].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 388u)));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 300u), c.r[3].w[0]);  if (t) { goto L_003018F4; } }
L_0030175C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[1].w[0] - 21904u));
    set32(c.r[3], c.r[16].w[0] << 3);
    st32((c.r[18].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 21904u));
    st32((c.r[18].w[0] + 20u), c.f[0]);
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030178Cu); set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x0030178Cu) [[unlikely]] return; }
L_0030178C:
    st32((c.r[18].w[0] + 352u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    set32(c.r[2], c.r[16].w[0] << 3);
    st32((c.r[18].w[0] + 356u), 0u);
    set32(c.r[4], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] + 254u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.f[0] = c.r[4].w[0];
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[12] = c.r[3].w[0];
    c.f[13] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[0] = c.r[2].w[0];
    c.budget -= 19;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003017D8u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003017D8u) [[unlikely]] return; }
L_003017D8:
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_003018B0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[1].w[0] - 21904u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 21912u));
    st32((c.r[17].w[0] + 20u), c.f[0]);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 352u)));
    st32((c.r[17].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 356u), 0u);
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00301824u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00301824u) [[unlikely]] return; }
L_00301824:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 4u);  if (t) { goto L_00301850; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 52u)));
    set32(c.r[3], c.r[29].w[0] + 80u);
    ld128((c.r[2].w[0] + 8416u) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[2]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st128((c.r[17].w[0] + 48u) & ~15u, c.r[2]);  if (t) { goto L_00301888; } }
L_00301850:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301858u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00301858u) [[unlikely]] return; }
L_00301858:
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[17].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[17].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 388u)));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 12;
L_00301888:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00301898u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00301898u) [[unlikely]] return; }
L_00301898:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003018A8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003018A8u) [[unlikely]] return; }
L_003018A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_003018F4; } }
L_003018B0:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003018D0u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003018D0u) [[unlikely]] return; }
L_003018D0:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003018F0u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003018F0u) [[unlikely]] return; }
L_003018F0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_003018F4:
    set32(c.r[3], ld32((c.r[19].w[0] + 32u)));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030175Cu | kUnwind; return; } goto L_0030175C; } }
L_00301904:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00301920:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301940u); set32(c.r[4], ld32((c.r[4].w[0] + 56u)));  if (depth < kMaxDepth) unit_0080(c, 386u, depth + 1u); else { c.pc = 0x00303250u; return; } if (c.pc != 0x00301940u) [[unlikely]] return; }
L_00301940:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x6D6E0000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301954u); c.r[5].d[0] = c.r[2].d[0] | 21335ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x00301954u) [[unlikely]] return; }
L_00301954:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00301960; } }
    set32(c.r[17], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_00301960:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003019A0; } }
L_00301968:
    set32(c.r[4], ld32((c.r[18].w[0] + 56u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301974u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 415u, depth + 1u); else { c.pc = 0x00303630u; return; } if (c.pc != 0x00301974u) [[unlikely]] return; }
L_00301974:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301988u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 87u, depth + 1u); else { c.pc = 0x0024C8E0u; return; } if (c.pc != 0x00301988u) [[unlikely]] return; }
L_00301988:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00301968u | kUnwind; return; } goto L_00301968; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003019A0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0053(c, 90u, depth + 1u); else { c.pc = 0x0024C940u; return; } if (c.pc != 0x003019A0u) [[unlikely]] return; }
L_003019A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003019C0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00301A30; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    set32(c.r[2], c.r[2].w[0] - 9696u);
    set32(c.r[4], c.r[16].w[0] + 384u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[6].w[0]) & ~15u, c.r[3]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003019FCu); st64((c.r[6].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0049(c, 298u, depth + 1u); else { c.pc = 0x002279C0u; return; } if (c.pc != 0x003019FCu) [[unlikely]] return; }
L_003019FC:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 436u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00301A7C; } }
    set32(c.r[2], 0u + 8u);
    set32(c.r[4], c.r[16].w[0] + 384u);
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], 0u + 25u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301A28u); st32((c.r[29].w[0] + 80u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 298u, depth + 1u); else { c.pc = 0x002279C0u; return; } if (c.pc != 0x00301A28u) [[unlikely]] return; }
L_00301A28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00301A80; } }
L_00301A30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[6], c.r[29].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] - 9664u);
    set32(c.r[4], c.r[16].w[0] + 384u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[6].w[0]) & ~15u, c.r[3]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301A58u); st64((c.r[6].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0049(c, 298u, depth + 1u); else { c.pc = 0x002279C0u; return; } if (c.pc != 0x00301A58u) [[unlikely]] return; }
L_00301A58:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 436u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00301A7C; } }
    set32(c.r[2], 0u + 5u);
    set32(c.r[4], c.r[16].w[0] + 384u);
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301A7Cu); set32(c.r[6], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0049(c, 298u, depth + 1u); else { c.pc = 0x002279C0u; return; } if (c.pc != 0x00301A7Cu) [[unlikely]] return; }
L_00301A7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00301A80:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00301A90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301AA8u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00301AA8u) [[unlikely]] return; }
L_00301AA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00301AD8; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00301ABC; } }
    set32(c.r[7], c.r[7].w[0] + 20u);
    c.budget -= 1;
L_00301ABC:
    set32(c.r[8], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[9], ld32((c.r[16].w[0] + 32u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301AD8u); c.r[10].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 371u, depth + 1u); else { c.pc = 0x0012EBA0u; return; } if (c.pc != 0x00301AD8u) [[unlikely]] return; }
L_00301AD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00301AF0:
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00301B04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20u)));  if (t) { goto L_00301B08; } }
L_00301B04:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00301B08:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00301B10:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00300D00u | kUnwind; return; } goto L_00300D00; }
L_00301B20:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00300D00u | kUnwind; return; } goto L_00300D00; }
L_00301B30:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00301460u | kUnwind; return; } goto L_00301460; }
L_00301B40:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003011B0u | kUnwind; return; } goto L_003011B0; }
L_00301B50:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003014A0u | kUnwind; return; } goto L_003014A0; }
L_00301B60:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003011B0u | kUnwind; return; } goto L_003011B0; }
L_00301B70:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301B94u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 107u, depth + 1u); else { c.pc = 0x00300BE0u; return; } if (c.pc != 0x00301B94u) [[unlikely]] return; }
L_00301B94:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 17856u);
    set32(c.r[3], c.r[3].w[0] + 17944u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[17].w[0] + 448u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 18004u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301BC0u); st32((c.r[17].w[0] + 40u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0017(c, 177u, depth + 1u); else { c.pc = 0x0015E070u; return; } if (c.pc != 0x00301BC0u) [[unlikely]] return; }
L_00301BC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301BC8u);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x00301BC8u) [[unlikely]] return; }
L_00301BC8:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 519u));
    set32(c.r[2], 0u + 30u);
    set32(c.r[19], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[19].w[0] + 2u);
    set32(c.r[18], c.r[2].w[0] << 3);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301BE4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x00301BE4u) [[unlikely]] return; }
L_00301BE4:
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301BF4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x00301BF4u) [[unlikely]] return; }
L_00301BF4:
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[2], c.r[19].w[0] + 2u);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[4], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], 0u + 12u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0] - 7u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301C20u); set32(c.r[4], c.r[2].w[0] + 624u);  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x00301C20u) [[unlikely]] return; }
L_00301C20:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301C2Cu); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00301C2Cu) [[unlikely]] return; }
L_00301C2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00301C44; } }
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[5].d[0] = ld64((c.r[3].w[0] + 144u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301C44u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x00301C44u) [[unlikely]] return; }
L_00301C44:
    st32((c.r[17].w[0] + 432u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 432u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 64u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301C60u); set32(c.r[8], 0u + 18u);  if (depth < kMaxDepth) unit_0017(c, 190u, depth + 1u); else { c.pc = 0x0015EE00u; return; } if (c.pc != 0x00301C60u) [[unlikely]] return; }
L_00301C60:
    set32(c.r[5], ld32((c.r[17].w[0] + 432u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 9632u);
    set32(c.r[3], c.r[29].w[0] + 80u);
    st32((c.r[5].w[0] + 16u), c.r[4].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 21800u));
    st32((c.r[5].w[0] + 20u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[5].w[0] + 24u), c.r[4].w[0]);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1420u)));
    c.budget -= 19;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_00301CB4; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_00301CB4:
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], 0u + 144u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301CC8u); st32((c.r[29].w[0] + 80u), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00301CC8u) [[unlikely]] return; }
L_00301CC8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00301CF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301CDCu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0080(c, 53u, depth + 1u); else { c.pc = 0x00300650u; return; } if (c.pc != 0x00301CDCu) [[unlikely]] return; }
L_00301CDC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301CF0u); set32(c.r[7], 0u + 6u);  if (depth < kMaxDepth) unit_0080(c, 459u, depth + 1u); else { c.pc = 0x00303F10u; return; } if (c.pc != 0x00301CF0u) [[unlikely]] return; }
L_00301CF0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00301CF4:
    st32((c.r[17].w[0] + 436u), c.r[18].w[0]);
    set32(c.r[4], 0u + 368u);
    set32(c.r[2], ld32((c.r[17].w[0] + 436u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301D08u); st8((c.r[2].w[0] + 8u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00301D08u) [[unlikely]] return; }
L_00301D08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00301D18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301D18u);  if (depth < kMaxDepth) unit_0018(c, 2u, depth + 1u); else { c.pc = 0x001607D0u; return; } if (c.pc != 0x00301D18u) [[unlikely]] return; }
L_00301D18:
    st32((c.r[17].w[0] + 704u), c.r[2].w[0]);
    set32(c.r[5], 0u + 16u);
    set32(c.r[4], ld32((c.r[17].w[0] + 704u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42F00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    st32((c.r[4].w[0] + 160u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 704u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301D40u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 17u, depth + 1u); else { c.pc = 0x00160A20u; return; } if (c.pc != 0x00301D40u) [[unlikely]] return; }
L_00301D40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301D48u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00301D48u) [[unlikely]] return; }
L_00301D48:
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[3], 0u + 25500u);
    set32(c.r[4], 0u + 64u);
    st32((c.r[17].w[0] + 496u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[17].w[0] + 500u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[17].w[0] + 504u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 708u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 712u), 0u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301D78u); st32((c.r[17].w[0] + 716u), 0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00301D78u) [[unlikely]] return; }
L_00301D78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00301D90; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 11u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301D90u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0080(c, 378u, depth + 1u); else { c.pc = 0x00303150u; return; } if (c.pc != 0x00301D90u) [[unlikely]] return; }
L_00301D90:
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301DA0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0080(c, 408u, depth + 1u); else { c.pc = 0x00303520u; return; } if (c.pc != 0x00301DA0u) [[unlikely]] return; }
L_00301DA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301DA8u); set32(c.r[4], ld32((c.r[17].w[0] + 56u)));  if (depth < kMaxDepth) unit_0080(c, 386u, depth + 1u); else { c.pc = 0x00303250u; return; } if (c.pc != 0x00301DA8u) [[unlikely]] return; }
L_00301DA8:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00301DB8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00301DB8u) [[unlikely]] return; }
L_00301DB8:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00301DC8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00301DC8u) [[unlikely]] return; }
L_00301DC8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00301DF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00301F00; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 17856u);
    set32(c.r[3], c.r[3].w[0] + 17944u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 18004u);
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 432u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00301E54; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00301E54; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00301E54u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00301E54u) [[unlikely]] return; }
L_00301E54:
    st32((c.r[17].w[0] + 432u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 436u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00301E7C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00301E7C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00301E7Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00301E7Cu) [[unlikely]] return; }
L_00301E7C:
    st32((c.r[17].w[0] + 436u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 704u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00301EA4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00301EA4; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00301EA4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00301EA4u) [[unlikely]] return; }
L_00301EA4:
    st32((c.r[17].w[0] + 704u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00301EBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301EBCu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00301EBCu) [[unlikely]] return; }
L_00301EBC:
    set32(c.r[4], c.r[17].w[0] + 448u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0] + 28u), 0u);  if (t) { goto L_00301EDC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 17408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301EDCu); st32((c.r[17].w[0] + 624u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 264u, depth + 1u); else { c.pc = 0x0014ADA0u; return; } if (c.pc != 0x00301EDCu) [[unlikely]] return; }
L_00301EDC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301EE8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0080(c, 119u, depth + 1u); else { c.pc = 0x00300D00u; return; } if (c.pc != 0x00301EE8u) [[unlikely]] return; }
L_00301EE8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00301F04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301F00u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00301F00u) [[unlikely]] return; }
L_00301F00:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00301F04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00301F20:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[5].w[0] + 24u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301F50u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0080(c, 415u, depth + 1u); else { c.pc = 0x00303630u; return; } if (c.pc != 0x00301F50u) [[unlikely]] return; }
L_00301F50:
    set32(c.r[3], 0u + 25500u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00301F6C; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 56u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301F68u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0080(c, 415u, depth + 1u); else { c.pc = 0x00303630u; return; } if (c.pc != 0x00301F68u) [[unlikely]] return; }
L_00301F68:
    st32((c.r[19].w[0] + 708u), c.r[2].w[0]);
    c.budget -= 1;
L_00301F6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301F74u);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x00301F74u) [[unlikely]] return; }
L_00301F74:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 519u));
    set32(c.r[2], 0u + 30u);
    set32(c.r[16], c.r[2].w[0] - c.r[3].w[0]);
    c.r[1].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00301FA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301F94u);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x00301F94u) [[unlikely]] return; }
L_00301F94:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 519u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00301FA4; } }
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00301FA4:
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[18].w[0] + 28u)));  if (t) { goto L_0030204C; } }
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] + 3u);  if (t) { goto L_003020CC; } }
    c.r[1].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003020CC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_00301FF0; } }
    set32(c.r[2], c.r[17].w[0] - 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_00301FEC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[19].w[0] + 716u)));  if (t) { goto L_00302030; } }
L_00301FEC:
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_00301FF0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[17].w[0] - 2u);  if (t) { goto L_00302008; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[16].w[0] + 1u);  if (t) { goto L_00302028; } }
    set32(c.r[2], c.r[17].w[0] - 2u);
    c.budget -= 1;
L_00302008:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[16].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_00302024; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0030201C; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_0030201C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - c.r[2].w[0]);  if (t) { goto L_00302030; } }
L_00302024:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00302028:
    set32(c.r[2], c.r[2].w[0] - c.r[17].w[0]);
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_00302030:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00302044u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00302044u) [[unlikely]] return; }
L_00302044:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[19].w[0] + 56u)));  if (t) { goto L_003020D0; } }
L_0030204C:
    set32(c.r[2], c.r[16].w[0] - 1u);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] + 2u);  if (t) { goto L_003020CC; } }
    c.r[1].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003020CC; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_003020A0; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[16].w[0] + 1u);
    set32(c.r[3], c.r[17].w[0] + 2u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] - c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00302098u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00302098u) [[unlikely]] return; }
L_00302098:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003020CC; } }
L_003020A0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003020CC; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[16].w[0] + 1u);
    set32(c.r[3], c.r[17].w[0] + 3u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] - c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003020CCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003020CCu) [[unlikely]] return; }
L_003020CC:
    set32(c.r[2], ld32((c.r[19].w[0] + 56u)));
    c.budget -= 1;
L_003020D0:
    st32((c.r[2].w[0] + 56u), c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 56u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003020E0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 413u, depth + 1u); else { c.pc = 0x003035B0u; return; } if (c.pc != 0x003020E0u) [[unlikely]] return; }
L_003020E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00302104; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 436u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003020FCu); set32(c.r[4], ld32((c.r[19].w[0] + 436u)));  if (depth < kMaxDepth) unit_0081(c, 20u, depth + 1u); else { c.pc = 0x00304200u; return; } if (c.pc != 0x003020FCu) [[unlikely]] return; }
L_003020FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030210C; } }
L_00302104:
    set32(c.r[2], ld32((c.r[19].w[0] + 436u)));
    st8((c.r[2].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0030210C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x6D6E0000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302120u); c.r[5].d[0] = c.r[2].d[0] | 21335ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x00302120u) [[unlikely]] return; }
L_00302120:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0030212C; } }
    set32(c.r[16], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_0030212C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00302168; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 56u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302140u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0080(c, 415u, depth + 1u); else { c.pc = 0x00303630u; return; } if (c.pc != 0x00302140u) [[unlikely]] return; }
L_00302140:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], 0u + 25500u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00302168; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030215Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0053(c, 87u, depth + 1u); else { c.pc = 0x0024C8E0u; return; } if (c.pc != 0x0030215Cu) [[unlikely]] return; }
L_0030215C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302168u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0053(c, 90u, depth + 1u); else { c.pc = 0x0024C940u; return; } if (c.pc != 0x00302168u) [[unlikely]] return; }
L_00302168:
    set32(c.r[3], ld32((c.r[18].w[0] + 56u)));
    st32((c.r[19].w[0] + 716u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00302190:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003021BCu); set32(c.r[18], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x003021BCu) [[unlikely]] return; }
L_003021BC:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 519u));
    set32(c.r[2], 0u + 30u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003021EC; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003021E4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003021E4u) [[unlikely]] return; }
L_003021E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00302258; } }
L_003021EC:
    set32(c.r[5], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302208u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0080(c, 414u, depth + 1u); else { c.pc = 0x00303600u; return; } if (c.pc != 0x00302208u) [[unlikely]] return; }
L_00302208:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030223C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 712u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 712u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 436u)));
    st8((c.r[2].w[0] + 8u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302234u); set32(c.r[4], ld32((c.r[17].w[0] + 436u)));  if (depth < kMaxDepth) unit_0081(c, 7u, depth + 1u); else { c.pc = 0x00304090u; return; } if (c.pc != 0x00302234u) [[unlikely]] return; }
L_00302234:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00302254; } }
L_0030223C:
    set32(c.r[2], ld32((c.r[17].w[0] + 712u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0] + 712u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 436u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302254u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0081(c, 7u, depth + 1u); else { c.pc = 0x00304090u; return; } if (c.pc != 0x00302254u) [[unlikely]] return; }
L_00302254:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00302258:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00302270:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], 0u + 2u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302290u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x00302290u) [[unlikely]] return; }
L_00302290:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302298u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 129u, depth + 1u); else { c.pc = 0x00300E40u; return; } if (c.pc != 0x00302298u) [[unlikely]] return; }
L_00302298:
    set32(c.r[25], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[4], c.r[18].w[0] + 64u);
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003022ACu); set32(c.r[5], 0u + 66u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003022ACu) [[unlikely]] return; }
L_003022AC:
    set32(c.r[25], ld32((c.r[18].w[0] + 224u)));
    set32(c.r[4], c.r[18].w[0] + 224u);
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003022C0u); set32(c.r[5], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003022C0u) [[unlikely]] return; }
L_003022C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x6D6E0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[18].w[0] + 328u), c.f[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003022ECu); c.r[5].d[0] = c.r[2].d[0] | 21335ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x003022ECu) [[unlikely]] return; }
L_003022EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003022F8; } }
    set32(c.r[17], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_003022F8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[4], 0u + 272u);  if (t) { goto L_00302330; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 56u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030230Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0080(c, 415u, depth + 1u); else { c.pc = 0x00303630u; return; } if (c.pc != 0x0030230Cu) [[unlikely]] return; }
L_0030230C:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302320u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0053(c, 87u, depth + 1u); else { c.pc = 0x0024C8E0u; return; } if (c.pc != 0x00302320u) [[unlikely]] return; }
L_00302320:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030232Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0053(c, 90u, depth + 1u); else { c.pc = 0x0024C940u; return; } if (c.pc != 0x0030232Cu) [[unlikely]] return; }
L_0030232C:
    set32(c.r[4], 0u + 272u);
    c.budget -= 1;
L_00302330:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302338u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00302338u) [[unlikely]] return; }
L_00302338:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00302360; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302350u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0053(c, 93u, depth + 1u); else { c.pc = 0x0024C9A0u; return; } if (c.pc != 0x00302350u) [[unlikely]] return; }
L_00302350:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030235Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x0030235Cu) [[unlikely]] return; }
L_0030235C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00302360:
    st32((c.r[18].w[0] + 60u), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 56u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302370u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0080(c, 415u, depth + 1u); else { c.pc = 0x00303630u; return; } if (c.pc != 0x00302370u) [[unlikely]] return; }
L_00302370:
    st32((c.r[18].w[0] + 708u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00302390:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00130260u | kUnwind; return; } [[clang::musttail]] return unit_000C(c, 24u, depth); }
L_003023A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003023B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 133u, depth + 1u); else { c.pc = 0x00300E90u; return; } if (c.pc != 0x003023B4u) [[unlikely]] return; }
L_003023B4:
    set32(c.r[25], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[4], c.r[16].w[0] + 64u);
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003023C8u); set32(c.r[5], 0u + 67u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003023C8u) [[unlikely]] return; }
L_003023C8:
    set32(c.r[25], ld32((c.r[16].w[0] + 224u)));
    set32(c.r[4], c.r[16].w[0] + 224u);
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003023DCu); set32(c.r[5], 0u + 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003023DCu) [[unlikely]] return; }
L_003023DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 328u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302400u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0080(c, 413u, depth + 1u); else { c.pc = 0x003035B0u; return; } if (c.pc != 0x00302400u) [[unlikely]] return; }
L_00302400:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00302414; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302414u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0081(c, 7u, depth + 1u); else { c.pc = 0x00304090u; return; } if (c.pc != 0x00302414u) [[unlikely]] return; }
L_00302414:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00302430:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302444u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 136u, depth + 1u); else { c.pc = 0x00300ED0u; return; } if (c.pc != 0x00302444u) [[unlikely]] return; }
L_00302444:
    set32(c.r[25], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[4], c.r[16].w[0] + 64u);
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00302458u); set32(c.r[5], 0u + 67u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00302458u) [[unlikely]] return; }
L_00302458:
    set32(c.r[25], ld32((c.r[16].w[0] + 224u)));
    set32(c.r[4], c.r[16].w[0] + 224u);
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030246Cu); set32(c.r[5], 0u + 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030246Cu) [[unlikely]] return; }
L_0030246C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 328u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302490u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0080(c, 413u, depth + 1u); else { c.pc = 0x003035B0u; return; } if (c.pc != 0x00302490u) [[unlikely]] return; }
L_00302490:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003024A4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003024A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0081(c, 7u, depth + 1u); else { c.pc = 0x00304090u; return; } if (c.pc != 0x003024A4u) [[unlikely]] return; }
L_003024A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003024C0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00300F20u | kUnwind; return; } goto L_00300F20; }
L_003024D0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00300F80u | kUnwind; return; } goto L_00300F80; }
L_003024E0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00300FA0u | kUnwind; return; } goto L_00300FA0; }
L_003024F0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00301000u | kUnwind; return; } goto L_00301000; }
L_00302500:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 224u)));
    c.budget -= 9;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00302630; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030252Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0030252Cu) [[unlikely]] return; }
L_0030252C:
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], 0u + 398u);
    st32((c.r[16].w[0] + 48u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[16].w[0] + 52u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 384u)));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 384u)));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[16].w[0] + 300u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 21808u));
    st32((c.r[16].w[0] + 16u), c.f[0]);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302594u); st32((c.r[16].w[0] + 24u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00302594u) [[unlikely]] return; }
L_00302594:
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[16].w[0] + 356u), 0u);
    set32(c.r[2], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1420u)));
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_003025C0; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_003025C0:
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003025F0u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003025F0u) [[unlikely]] return; }
L_003025F0:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00302610u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00302610u) [[unlikely]] return; }
L_00302610:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00302630u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00302630u) [[unlikely]] return; }
L_00302630:
    set32(c.r[4], ld32((c.r[17].w[0] + 388u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 60u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    st32((c.r[3].w[0] + 60u), c.r[4].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 21816u));
    set32(c.r[3], ld32((c.r[17].w[0] + 60u)));
    st32((c.r[3].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 21816u));
    st32((c.r[3].w[0] + 20u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1420u)));
    c.budget -= 23;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_00302694; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_00302694:
    set32(c.r[4], ld32((c.r[17].w[0] + 60u)));
    c.f[0] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[13] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003026C4u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003026C4u) [[unlikely]] return; }
L_003026C4:
    set32(c.r[4], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003026D8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003026D8u) [[unlikely]] return; }
L_003026D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003026E0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x003026E0u) [[unlikely]] return; }
L_003026E0:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[17].w[0] + 496u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[17].w[0] + 500u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[17].w[0] + 504u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 388u)));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[17].w[0] + 508u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1420u)));
    c.budget -= 19;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_00302734; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_00302734:
    set32(c.r[2], c.r[2].w[0] - 55u);
    set32(c.r[25], ld32((c.r[17].w[0] + 624u)));
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42920000u);
    c.f[13] = c.r[3].w[0];
    set32(c.r[4], c.r[17].w[0] + 448u);
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[0] = c.r[2].w[0];
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00302768u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00302768u) [[unlikely]] return; }
L_00302768:
    set32(c.r[5], 0u + 110u);
    set32(c.r[4], c.r[17].w[0] + 448u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030277Cu); set32(c.r[7], 0u + 3u);  if (depth < kMaxDepth) unit_0062(c, 298u, depth + 1u); else { c.pc = 0x0028B8C0u; return; } if (c.pc != 0x0030277Cu) [[unlikely]] return; }
L_0030277C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302784u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 336u, depth + 1u); else { c.pc = 0x00302990u; return; } if (c.pc != 0x00302784u) [[unlikely]] return; }
L_00302784:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030278Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 323u, depth + 1u); else { c.pc = 0x003027A0u; return; } if (c.pc != 0x0030278Cu) [[unlikely]] return; }
L_0030278C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003027A0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1420u)));
    c.budget -= 12;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_003027D8; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_003027D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003027E0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x003027E0u) [[unlikely]] return; }
L_003027E0:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[6], c.r[29].w[0] + 112u);
    set32(c.r[3], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[7], c.r[29].w[0] + 80u);
    st128((c.r[6].w[0]) & ~15u, c.r[2]);
    mmi::paddub(c.r[2], c.r[2], c.r[0]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    mmi::paddub(c.r[2], c.r[2], c.r[0]);
    st128((c.r[5].w[0]) & ~15u, c.r[2]);
    ld128((c.r[3].w[0]) & ~15u, c.r[2]);
    st128((c.r[7].w[0]) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[17].w[0] + 388u)));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    st32((c.r[29].w[0] + 108u), 0u);
    st32((c.r[29].w[0] + 92u), 0u);
    set32(c.r[2], c.f[0]);
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302838u); set32(c.r[4], ld32((c.r[17].w[0] + 704u)));  if (depth < kMaxDepth) unit_0018(c, 14u, depth + 1u); else { c.pc = 0x001609B0u; return; } if (c.pc != 0x00302838u) [[unlikely]] return; }
L_00302838:
    set32(c.r[4], ld32((c.r[17].w[0] + 704u)));
    c.f[0] = c.r[16].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x433E0000u);
    c.f[13] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00302868u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00302868u) [[unlikely]] return; }
L_00302868:
    set32(c.r[4], ld32((c.r[17].w[0] + 704u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030287Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030287Cu) [[unlikely]] return; }
L_0030287C:
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302888u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0080(c, 415u, depth + 1u); else { c.pc = 0x00303630u; return; } if (c.pc != 0x00302888u) [[unlikely]] return; }
L_00302888:
    set32(c.r[3], 0u + 25500u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0030289C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 708u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_0030289C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003028A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x003028A4u) [[unlikely]] return; }
L_003028A4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 364u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 4u);  if (t) { goto L_003028D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003028B8u); set32(c.r[4], 0u + 227u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x003028B8u) [[unlikely]] return; }
L_003028B8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003028C4u); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x003028C4u) [[unlikely]] return; }
L_003028C4:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 64u) & ~15u, c.r[2]);  if (t) { goto L_003028EC; } }
L_003028D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003028D8u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x003028D8u) [[unlikely]] return; }
L_003028D8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003028E4u); set32(c.r[4], 0u + 15u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x003028E4u) [[unlikely]] return; }
L_003028E4:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[2]);
    c.budget -= 2;
L_003028EC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[6], ld32((c.r[1].w[0] + 26392u)));
    c.f[0] = c.r[16].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x433E0000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 64u)));
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[16], ld32((c.r[6].w[0] + 548u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = c.r[2].w[0];
    c.f[13] = c.r[3].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 48u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 68u)));
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 72u)));
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 352u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 356u), 0u);
    c.f[0] = ld32((c.r[1].w[0] - 21808u));
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 21808u));
    st32((c.r[16].w[0] + 20u), c.f[0]);
    st32((c.r[16].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 31;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00302968u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00302968u) [[unlikely]] return; }
L_00302968:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030297Cu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030297Cu) [[unlikely]] return; }
L_0030297C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00302990:
    set32(c.r[29], c.r[29].w[0] - 304u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    set32(c.r[6], c.r[6].w[0] - 9616u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    set32(c.r[3], c.r[29].w[0] + 272u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    ld128((c.r[6].w[0]) & ~15u, c.r[2]);
    c.f[0] = ld32((c.r[6].w[0] + 16u));
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    st32((c.r[3].w[0] + 16u), c.f[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[20], ld32((c.r[2].w[0] + 548u)));
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003029F4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0080(c, 415u, depth + 1u); else { c.pc = 0x00303630u; return; } if (c.pc != 0x003029F4u) [[unlikely]] return; }
L_003029F4:
    set32(c.r[4], ld32((c.r[21].w[0] + 56u)));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302A04u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0080(c, 415u, depth + 1u); else { c.pc = 0x00303630u; return; } if (c.pc != 0x00302A04u) [[unlikely]] return; }
L_00302A04:
    set32(c.r[3], 0u + 25500u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00302A18; } }
    set32(c.r[19], ld32((c.r[21].w[0] + 708u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 2;
L_00302A18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302A20u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00302A20u) [[unlikely]] return; }
L_00302A20:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 364u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00302A34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[23].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00302A38; } }
L_00302A34:
    set32(c.r[23], c.r[18].w[0] + 8u);
    c.budget -= 1;
L_00302A38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[29].w[0] + 296u);
    set32(c.r[2], c.r[2].w[0] - 9592u);
    c.f[0] = ld32((c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 4u));
    st32((c.r[3].w[0]), c.f[0]);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00302A6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302A60u); set32(c.r[4], 0u + 6u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00302A60u) [[unlikely]] return; }
L_00302A60:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);  if (t) { goto L_00302A7C; } }
L_00302A6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302A74u); set32(c.r[4], 0u + 15u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00302A74u) [[unlikely]] return; }
L_00302A74:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);
    c.budget -= 2;
L_00302A7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302A84u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00302A84u) [[unlikely]] return; }
L_00302A84:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[20].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[20].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 384u)));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[20].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 384u)));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[21].w[0] + 508u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 228u)));
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 232u)));
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[2], c.r[17].w[0] << 2);
    c.budget -= 26;
L_00302AEC:
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302AF8u); set32(c.r[4], ld32((c.r[2].w[0] + 272u)));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00302AF8u) [[unlikely]] return; }
L_00302AF8:
    st32((c.r[20].w[0] + 352u), c.r[2].w[0]);
    set32(c.r[16], c.r[17].w[0] << 4);
    st32((c.r[20].w[0] + 356u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = ld32((c.r[1].w[0] - 21808u));
    set32(c.r[30], c.r[16].w[0] + 197u);
    c.f[0] = c.r[30].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A70000u);
    c.f[12] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = fp::cvt_s_w(c.f[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[20].w[0] + 16u), c.f[1]);
    c.f[1] = ld32((c.r[1].w[0] - 21808u));
    c.f[0] = c.r[2].w[0];
    st32((c.r[20].w[0] + 20u), c.f[1]);
    st32((c.r[20].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 25;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00302B5Cu); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00302B5Cu) [[unlikely]] return; }
L_00302B5C:
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00302B70u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00302B70u) [[unlikely]] return; }
L_00302B70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302B78u); set32(c.r[4], 0u + 7u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00302B78u) [[unlikely]] return; }
L_00302B78:
    set32(c.r[7], ld32((c.r[2].w[0])));
    set32(c.r[3], 0u + 337u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[16], c.r[16].w[0] + 199u);
    c.f[1] = c.r[16].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x41300000u);
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[4], c.r[21].w[0] + 448u);
    st32((c.r[21].w[0] + 496u), c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[2].w[0] + 4u)));
    c.f[0] = c.r[3].w[0];
    c.f[13] = fp::cvt_s_w(c.f[1]);
    st32((c.r[21].w[0] + 500u), c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[21].w[0] + 504u), c.r[2].w[0]);
    st32((c.r[21].w[0] + 608u), c.r[6].w[0]);
    st32((c.r[21].w[0] + 612u), c.r[5].w[0]);
    set32(c.r[25], ld32((c.r[21].w[0] + 624u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 25;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00302BDCu); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00302BDCu) [[unlikely]] return; }
L_00302BDC:
    set32(c.r[25], ld32((c.r[21].w[0] + 624u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00302BECu); set32(c.r[4], c.r[21].w[0] + 448u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00302BECu) [[unlikely]] return; }
L_00302BEC:
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[3], c.r[17].w[0] + c.r[29].w[0]);
    st32((c.r[21].w[0] + 496u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    st32((c.r[21].w[0] + 500u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    st32((c.r[21].w[0] + 504u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 296u));
    set32(c.r[22], c.r[23].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[22].w[0]));
    c.budget -= 12;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_00302C28; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00302C40; } }
L_00302C28:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 6;
L_00302C40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41300000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], c.r[21].w[0] + 448u);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    set32(c.r[2], 0u + 337u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[21].w[0] + 608u), c.f[1]);
    st32((c.r[21].w[0] + 612u), c.r[3].w[0]);
    c.f[12] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[21].w[0] + 624u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = c.r[16].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.budget -= 20;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00302C90u); c.f[13] = fp::cvt_s_w(c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00302C90u) [[unlikely]] return; }
L_00302C90:
    set32(c.r[25], ld32((c.r[21].w[0] + 624u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00302CA0u); set32(c.r[4], c.r[21].w[0] + 448u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00302CA0u) [[unlikely]] return; }
L_00302CA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302CB4u); st32((c.r[21].w[0] + 580u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00302CB4u) [[unlikely]] return; }
L_00302CB4:
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.f[0] = c.r[16].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[5], 0u + 337u);
    c.f[1] = c.r[5].w[0];
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.f[13] = fp::cvt_s_w(c.f[0]);
    set32(c.r[4], c.r[21].w[0] + 448u);
    st32((c.r[21].w[0] + 496u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 4u)));
    c.f[0] = c.r[3].w[0];
    c.f[12] = fp::cvt_s_w(c.f[1]);
    st32((c.r[21].w[0] + 500u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[21].w[0] + 504u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[21].w[0] + 624u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 20;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00302D04u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00302D04u) [[unlikely]] return; }
L_00302D04:
    set32(c.r[4], c.r[21].w[0] + 448u);
    set32(c.r[5], 0u + 40u);
    set32(c.r[6], 0u + 13u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302D18u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_0062(c, 298u, depth + 1u); else { c.pc = 0x0028B8C0u; return; } if (c.pc != 0x00302D18u) [[unlikely]] return; }
L_00302D18:
    c.r[2].d[0] = ld8((c.r[22].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_00302D30; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00302D48; } }
L_00302D30:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_00302D48:
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00302D9C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302D80u);  if (depth < kMaxDepth) unit_0007(c, 36u, depth + 1u); else { c.pc = 0x0011C438u; return; } if (c.pc != 0x00302D80u) [[unlikely]] return; }
L_00302D80:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302D94u); set32(c.r[5], c.r[5].w[0] - 21872u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x00302D94u) [[unlikely]] return; }
L_00302D94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[16].w[0] + 380u);  if (t) { goto L_00302DD8; } }
L_00302D9C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302DBCu);  if (depth < kMaxDepth) unit_0007(c, 36u, depth + 1u); else { c.pc = 0x0011C438u; return; } if (c.pc != 0x00302DBCu) [[unlikely]] return; }
L_00302DBC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302DD0u); set32(c.r[5], c.r[5].w[0] - 21864u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x00302DD0u) [[unlikely]] return; }
L_00302DD0:
    set32(c.r[16], 0u + 2u);
    set32(c.r[2], c.r[16].w[0] + 380u);
    c.budget -= 2;
L_00302DD8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = c.r[2].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[1].w[0] - 21824u));
    set32(c.r[3], c.r[29].w[0] + 240u);
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[20].w[0] + 16u), c.f[2]);
    c.f[1] = ld32((c.r[1].w[0] - 21824u));
    c.f[0] = c.r[30].w[0];
    c.f[13] = fp::cvt_s_w(c.f[0]);
    st32((c.r[20].w[0] + 20u), c.f[1]);
    st32((c.r[20].w[0] + 24u), c.r[5].w[0]);
    c.f[0] = c.r[2].w[0];
    st32((c.r[20].w[0] + 352u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 356u), 0u);
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 24;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00302E38u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00302E38u) [[unlikely]] return; }
L_00302E38:
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00302E4Cu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00302E4Cu) [[unlikely]] return; }
L_00302E4C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00302AECu | kUnwind; return; } goto L_00302AEC; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 384u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[21].w[0] + 432u)));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1420u)));
    c.budget -= 14;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_00302E9C; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_00302E9C:
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], ld32((c.r[21].w[0] + 432u)));
    set32(c.r[2], 0u + 287u);
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[13] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[0] = c.r[2].w[0];
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00302ED4u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00302ED4u) [[unlikely]] return; }
L_00302ED4:
    set32(c.r[4], ld32((c.r[21].w[0] + 432u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00302EE8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00302EE8u) [[unlikely]] return; }
L_00302EE8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 440u)));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00302FCC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302F04u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00302F04u) [[unlikely]] return; }
L_00302F04:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 48u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[16].w[0] + 52u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 384u)));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 21808u));
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 21824u));
    st32((c.r[16].w[0] + 20u), c.f[0]);
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 364u)));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302F60u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 295u, depth + 1u); else { c.pc = 0x0028B840u; return; } if (c.pc != 0x00302F60u) [[unlikely]] return; }
L_00302F60:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302F74u); set32(c.r[5], c.r[5].w[0] - 21856u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x00302F74u) [[unlikely]] return; }
L_00302F74:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A80000u);
    set32(c.r[3], c.r[29].w[0] + 208u);
    c.f[12] = c.r[2].w[0];
    st32((c.r[16].w[0] + 352u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 356u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], 0u + 287u);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.f[0] = c.r[2].w[0];
    c.f[13] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[0] = c.r[2].w[0];
    c.budget -= 17;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00302FB8u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00302FB8u) [[unlikely]] return; }
L_00302FB8:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00302FCCu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00302FCCu) [[unlikely]] return; }
L_00302FCC:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 304u);  c.pc = t; return; }
L_00303000:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00303054; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    set32(c.r[2], c.r[2].w[0] - 9584u);
    set32(c.r[4], c.r[16].w[0] + 384u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[6].w[0]) & ~15u, c.r[3]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030303Cu); st64((c.r[6].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0049(c, 298u, depth + 1u); else { c.pc = 0x002279C0u; return; } if (c.pc != 0x0030303Cu) [[unlikely]] return; }
L_0030303C:
    set32(c.r[4], c.r[16].w[0] + 384u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030304Cu); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0049(c, 298u, depth + 1u); else { c.pc = 0x002279C0u; return; } if (c.pc != 0x0030304Cu) [[unlikely]] return; }
L_0030304C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00303090; } }
L_00303054:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[6], c.r[29].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] - 9552u);
    set32(c.r[4], c.r[16].w[0] + 384u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[6].w[0]) & ~15u, c.r[3]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030307Cu); st64((c.r[6].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0049(c, 298u, depth + 1u); else { c.pc = 0x002279C0u; return; } if (c.pc != 0x0030307Cu) [[unlikely]] return; }
L_0030307C:
    set32(c.r[4], c.r[16].w[0] + 384u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030308Cu); set32(c.r[6], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0049(c, 298u, depth + 1u); else { c.pc = 0x002279C0u; return; } if (c.pc != 0x0030308Cu) [[unlikely]] return; }
L_0030308C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00303090:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003030A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003030B8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x003030B8u) [[unlikely]] return; }
L_003030B8:
    c.r[6].d[0] = ld8((c.r[2].w[0] + 519u));
    set32(c.r[5], 0u + 2u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], 0u + 60u);
    set32(c.r[2], 0u + 30u);
    set32(c.r[2], c.r[2].w[0] - c.r[6].w[0]);
    c.r[6].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    if (c.r[6].d[0] == 0) c.r[5].d[0] = c.r[3].d[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003030E4u); set32(c.r[17], c.r[2].w[0] + c.r[5].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003030E4u) [[unlikely]] return; }
L_003030E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00303118; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_003030F8; } }
    set32(c.r[7], c.r[7].w[0] + 20u);
    c.budget -= 1;
L_003030F8:
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[5].d[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[16].w[0] + 28u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 2u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303118u); c.r[11].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 419u, depth + 1u); else { c.pc = 0x0012F590u; return; } if (c.pc != 0x00303118u) [[unlikely]] return; }
L_00303118:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00303130:
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00303144; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20u)));  if (t) { goto L_00303148; } }
L_00303144:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00303148:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00303150:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303178u); c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x00303178u) [[unlikely]] return; }
L_00303178:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 17840u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0]), c.r[2].w[0]);
    st32((c.r[18].w[0] + 12u), c.r[17].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303198u); st32((c.r[18].w[0] + 20u), 0u);  if (depth < kMaxDepth) unit_0080(c, 408u, depth + 1u); else { c.pc = 0x00303520u; return; } if (c.pc != 0x00303198u) [[unlikely]] return; }
L_00303198:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003031A0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x003031A0u) [[unlikely]] return; }
L_003031A0:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[18].w[0] + 32u) & ~15u, c.r[2]);
    st32((c.r[18].w[0] + 48u), 0u);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 56u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003031D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00303234; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 17840u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0030320C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030320Cu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0030320Cu) [[unlikely]] return; }
L_0030320C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030321Cu); st32((c.r[17].w[0] + 20u), 0u);  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x0030321Cu) [[unlikely]] return; }
L_0030321C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00303238; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303234u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00303234u) [[unlikely]] return; }
L_00303234:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00303238:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00303250:
    set32(c.r[29], c.r[29].w[0] - 160u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_0030329C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303298u);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x00303298u) [[unlikely]] return; }
L_00303298:
    c.r[21].d[0] = ld8((c.r[2].w[0] + 519u));
    c.budget -= 1;
L_0030329C:
    set32(c.r[20], ld32((c.r[22].w[0] + 20u)));
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_003032A8:
    set32(c.r[3], ld32((c.r[22].w[0] + 16u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[19], c.r[16].w[0] << 1);  if (t) { goto L_003032E0; } }
    set32(c.r[2], c.r[16].w[0] << 3);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003032C4u); set32(c.r[18], c.r[20].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x003032C4u) [[unlikely]] return; }
L_003032C4:
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 520u));
    st16((c.r[18].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.r[16].w[0]);  if (t) { goto L_0030331C; } }
    set32(c.r[19], c.r[16].w[0] << 1);
    c.budget -= 1;
L_003032E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003032E8u);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x003032E8u) [[unlikely]] return; }
L_003032E8:
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003032F4u); c.r[4].d[0] = ld16((c.r[2].w[0] + 520u));  if (depth < kMaxDepth) unit_007F(c, 461u, depth + 1u); else { c.pc = 0x002FF7D0u; return; } if (c.pc != 0x003032F4u) [[unlikely]] return; }
L_003032F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030331C; } }
    set32(c.r[2], c.r[17].w[0] << 3);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303308u); set32(c.r[18], c.r[20].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x00303308u) [[unlikely]] return; }
L_00303308:
    set32(c.r[3], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 520u));
    st16((c.r[18].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[18].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 5;
L_0030331C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003032A8u | kUnwind; return; } goto L_003032A8; } }
    set32(c.r[4], ld32((c.r[22].w[0] + 16u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003034D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00303420; } }
    set32(c.r[3], c.r[19].w[0] << 3);
    c.budget -= 1;
L_00303348:
    set32(c.r[18], c.r[19].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[20].w[0] + c.r[3].w[0]);  if (t) { goto L_0030340C; } }
L_00303354:
    set32(c.r[2], c.r[18].w[0] << 3);
    c.r[23].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[20].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = ld16((c.r[16].w[0] + 2u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030336Cu); set32(c.r[30], c.r[16].w[0] + 2u);  if (depth < kMaxDepth) unit_007F(c, 461u, depth + 1u); else { c.pc = 0x002FF7D0u; return; } if (c.pc != 0x0030336Cu) [[unlikely]] return; }
L_0030336C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030338C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030337Cu); c.r[4].d[0] = ld16((c.r[17].w[0] + 2u));  if (depth < kMaxDepth) unit_007F(c, 461u, depth + 1u); else { c.pc = 0x002FF7D0u; return; } if (c.pc != 0x0030337Cu) [[unlikely]] return; }
L_0030337C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030338C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[23].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003033D0; } }
L_0030338C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303394u); c.r[4].d[0] = ld16((c.r[30].w[0]));  if (depth < kMaxDepth) unit_007F(c, 461u, depth + 1u); else { c.pc = 0x002FF7D0u; return; } if (c.pc != 0x00303394u) [[unlikely]] return; }
L_00303394:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003033D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003033A4u); c.r[4].d[0] = ld16((c.r[17].w[0] + 2u));  if (depth < kMaxDepth) unit_007F(c, 461u, depth + 1u); else { c.pc = 0x002FF7D0u; return; } if (c.pc != 0x003033A4u) [[unlikely]] return; }
L_003033A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003033D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003033B4u); c.r[4].d[0] = ld16((c.r[30].w[0]));  if (depth < kMaxDepth) unit_007F(c, 465u, depth + 1u); else { c.pc = 0x002FF850u; return; } if (c.pc != 0x003033B4u) [[unlikely]] return; }
L_003033B4:
    c.r[4].d[0] = ld16((c.r[17].w[0] + 2u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003033C0u); c.r[30].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007F(c, 465u, depth + 1u); else { c.pc = 0x002FF850u; return; } if (c.pc != 0x003033C0u) [[unlikely]] return; }
L_003033C0:
    c.r[1].d[0] = c.r[30].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003033D0; } }
    c.r[23].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003033D0:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_00303408; } }
    c.r[5].d[0] = ld8((c.r[17].w[0]));
    c.r[4].d[0] = ld16((c.r[17].w[0] + 2u));
    set32(c.r[6], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 2u));
    st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 4u), c.r[6].w[0]);
    c.budget -= 12;
L_00303408:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0030340C:
    set32(c.r[3], ld32((c.r[22].w[0] + 52u)));
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00303354u | kUnwind; return; } goto L_00303354; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_00303420:
    set32(c.r[3], ld32((c.r[22].w[0] + 52u)));
    c.r[3].d[0] = c.r[19].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[19].w[0] << 3);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00303348u | kUnwind; return; } goto L_00303348; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[22].w[0] + 52u)));  if (t) { goto L_003034DC; } }
    set32(c.r[3], c.r[21].w[0] << 3);
    c.budget -= 1;
L_0030343C:
    set32(c.r[18], c.r[21].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[20].w[0] + c.r[3].w[0]);  if (t) { goto L_003034C4; } }
L_00303448:
    set32(c.r[2], c.r[18].w[0] << 3);
    set32(c.r[16], c.r[20].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = ld16((c.r[16].w[0] + 2u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030345Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x0030345Cu) [[unlikely]] return; }
L_0030345C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303464u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 158u, depth + 1u); else { c.pc = 0x00370B80u; return; } if (c.pc != 0x00303464u) [[unlikely]] return; }
L_00303464:
    c.r[4].d[0] = ld16((c.r[17].w[0] + 2u));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303474u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x00303474u) [[unlikely]] return; }
L_00303474:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030347Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 158u, depth + 1u); else { c.pc = 0x00370B80u; return; } if (c.pc != 0x0030347Cu) [[unlikely]] return; }
L_0030347C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303488u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00127AA0u; return; } if (c.pc != 0x00303488u) [[unlikely]] return; }
L_00303488:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_003034C0; } }
    c.r[5].d[0] = ld8((c.r[17].w[0]));
    c.r[4].d[0] = ld16((c.r[17].w[0] + 2u));
    set32(c.r[6], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 2u));
    st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 4u), c.r[6].w[0]);
    c.budget -= 12;
L_003034C0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_003034C4:
    set32(c.r[3], ld32((c.r[22].w[0] + 52u)));
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00303448u | kUnwind; return; } goto L_00303448; } }
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_003034D8:
    set32(c.r[3], ld32((c.r[22].w[0] + 52u)));
    c.budget -= 1;
L_003034DC:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[3].d[0] = c.r[21].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[21].w[0] << 3);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030343Cu | kUnwind; return; } goto L_0030343C; } }
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00303520:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 30u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], 0u + 2u);
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0030355C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030354Cu);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x0030354Cu) [[unlikely]] return; }
L_0030354C:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 519u));
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 4;
L_0030355C:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00303570; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303570u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00303570u) [[unlikely]] return; }
L_00303570:
    st32((c.r[16].w[0] + 20u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303580u); set32(c.r[4], c.r[2].w[0] << 3);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x00303580u) [[unlikely]] return; }
L_00303580:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303594u); set32(c.r[5], c.r[2].w[0] << 3);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x00303594u) [[unlikely]] return; }
L_00303594:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003035B0:
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003035F4; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_003035E0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[2].w[0]));  if (t) { goto L_003035F4; } }
L_003035E0:
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 5;
L_003035F4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00303600:
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld8((c.r[2].w[0]));  c.pc = t; return; }
L_00303630:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_00303640; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 1;
L_00303640:
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 25500u);  if (t) { goto L_00303660; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 2u));
    c.budget -= 4;
L_00303660:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00303670:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00303698; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303690u);  if (depth < kMaxDepth) unit_0080(c, 419u, depth + 1u); else { c.pc = 0x003036C0u; return; } if (c.pc != 0x00303690u) [[unlikely]] return; }
L_00303690:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003036AC; } }
L_00303698:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_003036A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003036A8u);  if (depth < kMaxDepth) unit_0080(c, 435u, depth + 1u); else { c.pc = 0x00303A10u; return; } if (c.pc != 0x003036A8u) [[unlikely]] return; }
L_003036A8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003036AC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003036C0:
    set32(c.r[29], c.r[29].w[0] - 240u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    set32(c.r[3], c.r[3].w[0] - 9520u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    set32(c.r[6], c.r[29].w[0] + 208u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    set32(c.r[2], c.r[2].w[0] - 9496u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    ld128((c.r[3].w[0]) & ~15u, c.r[5]);
    c.r[4].d[0] = ld64((c.r[3].w[0] + 16u));
    st128((c.r[6].w[0]) & ~15u, c.r[5]);
    set32(c.r[3], c.r[29].w[0] + 232u);
    st64((c.r[6].w[0] + 16u), c.r[4].d[0]);
    c.r[2].d[0] = ld64((c.r[2].w[0]));
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303728u); st64((c.r[3].w[0]), c.r[2].d[0]);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x00303728u) [[unlikely]] return; }
L_00303728:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[23], c.r[2].w[0] + 512u);
    set32(c.r[5], ld32((c.r[1].w[0] + 26392u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[30], ld32((c.r[21].w[0] + 20u)));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[21].w[0] + 48u)));
    set32(c.r[19], ld32((c.r[5].w[0] + 332u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[18], ld32((c.r[5].w[0] + 440u)));
    st32((c.r[19].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 48u)));
    st32((c.r[19].w[0] + 300u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 21800u));
    st32((c.r[19].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 21800u));
    st32((c.r[19].w[0] + 20u), c.f[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303778u); st32((c.r[19].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00303778u) [[unlikely]] return; }
L_00303778:
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 48u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[18].w[0] + 52u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[18].w[0] + 56u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[21].w[0] + 48u)));
    st32((c.r[18].w[0] + 60u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[21].w[0] + 48u)));
    st32((c.r[18].w[0] + 300u), c.r[5].w[0]);
    st32((c.r[18].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[18].w[0] + 20u), c.r[4].w[0]);
    st32((c.r[18].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 236u)));
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 192u), c.r[3].w[0]);  if (t) { goto L_003039CC; } }
L_003037C4:
    set32(c.r[2], c.r[17].w[0] << 3);
    set32(c.r[3], c.r[30].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] + 2u);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    c.r[4].d[0] = ld16((c.r[3].w[0] + 2u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003037E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x003037E0u) [[unlikely]] return; }
L_003037E0:
    st32((c.r[18].w[0] + 352u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[18].w[0] + 356u), 0u);  if (t) { goto L_00303850; } }
    c.r[22].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[20], 0u + 236u);
    c.budget -= 4;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 1));  if (t) { goto L_00303808; } }
    set32(c.r[2], c.r[17].w[0] + 1u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_00303808:
    c.f[0] = ld32((c.r[29].w[0] + 232u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[3], c.r[4].w[0] << 4);
    c.f[1] = c.r[2].w[0];
    set32(c.r[16], c.r[3].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[20] = fp::cvt_s_w(c.f[1]);
    set32(c.r[2], c.r[16].w[0] + 164u);
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.f[14] = c.f[20];
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00303848u); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00303848u) [[unlikely]] return; }
L_00303848:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[18].w[0] + 176u)));  if (t) { goto L_003038B4; } }
L_00303850:
    c.r[22].d[0] = 0ull + 0ull;
    set32(c.r[20], 0u + 408u);
    c.budget -= 4;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 1));  if (t) { goto L_00303868; } }
    set32(c.r[2], c.r[17].w[0] + 1u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_00303868:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[3], c.r[4].w[0] << 4);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[16], c.r[3].w[0] - c.r[4].w[0]);
    c.f[1] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] + 164u);
    c.f[0] = c.r[2].w[0];
    c.f[20] = fp::cvt_s_w(c.f[1]);
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.f[13] = fp::cvt_s_w(c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.f[14] = c.f[20];
    c.budget -= 18;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003038B0u); c.f[12] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003038B0u) [[unlikely]] return; }
L_003038B0:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.budget -= 1;
L_003038B4:
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003038C0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003038C0u) [[unlikely]] return; }
L_003038C0:
    c.r[3].d[0] = ld8((c.r[23].w[0] + 7u));
    c.r[1].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003039C8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003038DCu); c.r[4].d[0] = ld16((c.r[2].w[0]));  if (depth < kMaxDepth) unit_007F(c, 461u, depth + 1u); else { c.pc = 0x002FF7D0u; return; } if (c.pc != 0x003038DCu) [[unlikely]] return; }
L_003038DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003039C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003038ECu);  if (depth < kMaxDepth) unit_000E(c, 190u, depth + 1u); else { c.pc = 0x001394D0u; return; } if (c.pc != 0x003038ECu) [[unlikely]] return; }
L_003038EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003038F4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x003038F4u) [[unlikely]] return; }
L_003038F4:
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    st32((c.r[19].w[0] + 48u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[19].w[0] + 52u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[19].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030391Cu); set32(c.r[4], ld32((c.r[3].w[0] + 208u)));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x0030391Cu) [[unlikely]] return; }
L_0030391C:
    st32((c.r[19].w[0] + 352u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[22].d[0] == 0ull; st32((c.r[19].w[0] + 356u), 0u);  if (t) { goto L_0030395C; } }
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    set32(c.r[2], c.r[16].w[0] + 166u);
    c.f[1] = c.r[20].w[0];
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[1]);
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.f[13] = fp::cvt_s_w(c.f[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00303954u); c.f[14] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00303954u) [[unlikely]] return; }
L_00303954:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[19].w[0] + 176u)));  if (t) { goto L_0030398C; } }
L_0030395C:
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    set32(c.r[2], c.r[16].w[0] + 166u);
    c.f[1] = c.r[20].w[0];
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[1]);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.f[13] = fp::cvt_s_w(c.f[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00303988u); c.f[14] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00303988u) [[unlikely]] return; }
L_00303988:
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.budget -= 1;
L_0030398C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003039A8u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003039A8u) [[unlikely]] return; }
L_003039A8:
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003039C8u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003039C8u) [[unlikely]] return; }
L_003039C8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_003039CC:
    set32(c.r[3], ld32((c.r[21].w[0] + 52u)));
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003037C4u | kUnwind; return; } goto L_003037C4; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_00303A10:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 9488u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    set32(c.r[3], c.r[29].w[0] + 168u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld64((c.r[2].w[0]));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303A50u); st64((c.r[3].w[0]), c.r[2].d[0]);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x00303A50u) [[unlikely]] return; }
L_00303A50:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[20], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[1].w[0] + 26392u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], ld32((c.r[21].w[0] + 48u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    set32(c.r[6], ld32((c.r[5].w[0] + 332u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[19], ld32((c.r[5].w[0] + 440u)));
    set32(c.r[18], ld32((c.r[5].w[0] + 444u)));
    st32((c.r[6].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 48u)));
    st32((c.r[6].w[0] + 300u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 21800u));
    st32((c.r[6].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 21800u));
    st32((c.r[6].w[0] + 20u), c.f[0]);
    st32((c.r[6].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 48u)));
    st32((c.r[19].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 48u)));
    st32((c.r[19].w[0] + 300u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[22], ld32((c.r[29].w[0] + 172u)));
    c.budget -= 29;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00303CF8; } }
L_00303AC4:
    set32(c.r[2], c.r[20].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = ld16((c.r[2].w[0] + 2u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303AD4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x00303AD4u) [[unlikely]] return; }
L_00303AD4:
    st32((c.r[19].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 356u), 0u);
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00303B14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303AF8u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00303AF8u) [[unlikely]] return; }
L_00303AF8:
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[19].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[19].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 56u), c.r[2].w[0]);  if (t) { goto L_00303B34; } }
L_00303B14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303B1Cu);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00303B1Cu) [[unlikely]] return; }
L_00303B1C:
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[19].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[19].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[19].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 6;
L_00303B34:
    c.r[2].d[0] = c.r[17].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00303B98; } }
    c.f[0] = ld32((c.r[29].w[0] + 168u));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 1));
    c.budget -= 4;
    { const bool t = c.r[17].sd[0] >= 0; c.f[12] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00303B58; } }
    set32(c.r[2], c.r[17].w[0] + 1u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_00303B58:
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[3], c.r[3].w[0] + 84u);
    c.f[1] = c.r[3].w[0];
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[0] = c.r[2].w[0];
    c.f[13] = fp::cvt_s_w(c.f[1]);
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00303B90u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00303B90u) [[unlikely]] return; }
L_00303B90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[21].w[0] + 56u)));  if (t) { goto L_00303BEC; } }
L_00303B98:
    c.f[0] = c.r[22].w[0];
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 1));
    c.budget -= 4;
    { const bool t = c.r[17].sd[0] >= 0; c.f[12] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00303BB0; } }
    set32(c.r[2], c.r[17].w[0] + 1u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_00303BB0:
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[3], c.r[3].w[0] + 84u);
    c.f[1] = c.r[3].w[0];
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[0] = c.r[2].w[0];
    c.f[13] = fp::cvt_s_w(c.f[1]);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00303BE8u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00303BE8u) [[unlikely]] return; }
L_00303BE8:
    set32(c.r[2], ld32((c.r[21].w[0] + 56u)));
    c.budget -= 1;
L_00303BEC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_00303CE0; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 352u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = c.r[2].w[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[18].w[0] + 352u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 356u), 0u);
    c.f[1] = ld32((c.r[19].w[0] + 20u));
    c.f[0] = ld32((c.r[19].w[0] + 16u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    st32((c.r[18].w[0] + 16u), c.f[0]);
    st32((c.r[18].w[0] + 20u), c.f[1]);
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 17;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00303C38u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00303C38u) [[unlikely]] return; }
L_00303C38:
    set32(c.r[2], ld32((c.r[21].w[0] + 48u)));
    c.r[1].d[0] = c.r[2].sd[0] < 255ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00303C74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303C50u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00303C50u) [[unlikely]] return; }
L_00303C50:
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[18].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[18].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[18].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 48u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_00303CB0; } }
L_00303C74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303C7Cu);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00303C7Cu) [[unlikely]] return; }
L_00303C7C:
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[29].w[0] + 144u);
    st32((c.r[18].w[0] + 48u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[18].w[0] + 52u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[18].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 52u)));
    ld128((c.r[2].w[0] + 8416u) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[2]);
    st128((c.r[18].w[0] + 48u) & ~15u, c.r[2]);
    c.budget -= 13;
L_00303CB0:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00303CC4u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00303CC4u) [[unlikely]] return; }
L_00303CC4:
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00303CD8u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00303CD8u) [[unlikely]] return; }
L_00303CD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_00303CF8; } }
L_00303CE0:
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00303CF4u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00303CF4u) [[unlikely]] return; }
L_00303CF4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00303CF8:
    set32(c.r[2], ld32((c.r[21].w[0] + 52u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[17].w[0] << 3);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00303AC4u | kUnwind; return; } goto L_00303AC4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], 0u + 91u);
    st32((c.r[19].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303D20u); st32((c.r[19].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00303D20u) [[unlikely]] return; }
L_00303D20:
    st32((c.r[19].w[0] + 352u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[19].w[0] + 356u), 0u);
    set32(c.r[2], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1420u)));
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_00303D4C; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_00303D4C:
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43AC0000u);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00303D7Cu); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00303D7Cu) [[unlikely]] return; }
L_00303D7C:
    set32(c.r[3], ld32((c.r[21].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00303E80; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 352u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = c.r[2].w[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[18].w[0] + 352u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 356u), 0u);
    c.f[1] = ld32((c.r[19].w[0] + 20u));
    c.f[0] = ld32((c.r[19].w[0] + 16u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    st32((c.r[18].w[0] + 16u), c.f[0]);
    st32((c.r[18].w[0] + 20u), c.f[1]);
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 17;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00303DD8u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00303DD8u) [[unlikely]] return; }
L_00303DD8:
    set32(c.r[2], ld32((c.r[21].w[0] + 48u)));
    c.r[1].d[0] = c.r[2].sd[0] < 255ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00303E14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303DF0u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00303DF0u) [[unlikely]] return; }
L_00303DF0:
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[19].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[19].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[19].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 48u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_00303E50; } }
L_00303E14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303E1Cu);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00303E1Cu) [[unlikely]] return; }
L_00303E1C:
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[29].w[0] + 128u);
    st32((c.r[19].w[0] + 48u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[19].w[0] + 52u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[19].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 52u)));
    ld128((c.r[2].w[0] + 8416u) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[2]);
    st128((c.r[18].w[0] + 48u) & ~15u, c.r[2]);
    c.budget -= 13;
L_00303E50:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00303E64u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00303E64u) [[unlikely]] return; }
L_00303E64:
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00303E78u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00303E78u) [[unlikely]] return; }
L_00303E78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_00303EE4; } }
L_00303E80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303E88u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00303E88u) [[unlikely]] return; }
L_00303E88:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    st32((c.r[19].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[19].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[19].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00303EC0u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00303EC0u) [[unlikely]] return; }
L_00303EC0:
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00303EE0u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00303EE0u) [[unlikely]] return; }
L_00303EE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_00303EE4:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00303F10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], c.r[29].w[0] + 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303F3Cu); c.r[5].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x00303F3Cu) [[unlikely]] return; }
L_00303F3C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[16].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] + 17824u);
    set32(c.r[5], 0u + 2u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303F58u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0049(c, 283u, depth + 1u); else { c.pc = 0x002277A0u; return; } if (c.pc != 0x00303F58u) [[unlikely]] return; }
L_00303F58:
    set32(c.r[4], c.r[16].w[0] + 60u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303F68u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0049(c, 283u, depth + 1u); else { c.pc = 0x002277A0u; return; } if (c.pc != 0x00303F68u) [[unlikely]] return; }
L_00303F68:
    set32(c.r[4], 0u + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303F74u); st8((c.r[16].w[0] + 128u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00303F74u) [[unlikely]] return; }
L_00303F74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00303F84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303F84u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x00303F84u) [[unlikely]] return; }
L_00303F84:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00303FB4u); set32(c.r[5], c.r[29].w[0] + 48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00303FB4u) [[unlikely]] return; }
L_00303FB4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[3]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st128((c.r[16].w[0] + 112u) & ~15u, c.r[3]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00303FE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_0081(c, 6u, depth); } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.budget -= 1;
    [[clang::musttail]] return unit_0081(c, 1u, depth);
}

}
