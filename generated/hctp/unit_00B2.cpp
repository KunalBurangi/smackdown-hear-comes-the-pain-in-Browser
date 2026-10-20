#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00B2[4096] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,
    0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0,
    0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 20,
    0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0,
    0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 30,
    0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0,
    34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0,
    41, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44,
    0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 59, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 62, 0, 63, 0, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 71, 0, 72, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 75, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 86, 0,
    87, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0,
    0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 97, 0, 98, 0, 99, 0, 0, 100, 0, 101, 0, 0, 0, 0, 102, 0, 103, 0, 0, 104, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    107, 0, 108, 0, 109, 0, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 112, 0, 113, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0,
    116, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 120, 0, 121, 0, 0, 122, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 126, 0, 0, 0, 0, 0, 127, 0, 128, 0,
    0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 134, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0,
    0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 143, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 145, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 0,
    0, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0,
    159, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 164, 0, 0, 165, 0, 0, 0,
    0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 168, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 0, 172,
    0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0,
    0, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0,
    0, 0, 0, 0, 0, 0, 182, 0, 183, 0, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 0, 0,
    0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 197,
    0, 198, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 206, 0, 207, 0, 0, 0, 0, 0, 0,
    208, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 211, 0, 212, 0, 0, 0, 0, 0, 0, 0, 213, 0,
    0, 0, 0, 0, 0, 214, 0, 0, 215, 0, 0, 0, 0, 0, 0, 216, 0, 217, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 219, 0, 220,
    0, 0, 0, 0, 0, 0, 221, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 0,
    0, 0, 226, 0, 227, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 233, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0,
    240, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 243, 244, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 255, 0, 0,
    0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0,
    259, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0,
    0, 0, 266, 0, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 271, 0,
    0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0,
    0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 278, 0, 279, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 282, 0, 283, 0, 0, 284, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0,
    0, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0,
    0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0,
    0, 0, 0, 302, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 305, 0, 306, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 309, 0, 0, 0, 310, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 312, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0,
    0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 318, 0, 0, 319, 0, 0, 0, 320, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 324, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0,
    0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 330, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 333, 0, 334, 0, 0, 0,
    0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 339,
    0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 342, 0, 0, 343, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 345, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 349, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 352, 353, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0,
    0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 356, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0,
    0, 0, 359, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    362, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 364, 0, 365, 0, 366, 0, 367, 0, 0, 368, 0, 0, 0, 0, 0,
    0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 371, 0, 372, 0, 373, 0, 374, 0, 0, 375,
    0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 379, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    382, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 386, 0, 387,
    0, 388, 0, 389, 0, 0, 390, 0, 0, 0, 0, 0, 391, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0,
    404, 0, 0, 0, 0, 0, 0, 0, 405, 0, 406, 0, 407, 0, 408, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 411, 0, 0, 0, 0, 412, 0, 413, 0, 414, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 417, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 419, 0, 420, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 423, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 426, 0, 0, 0, 0, 0,
    0, 427, 0, 0, 0, 0, 0, 0, 0, 428, 0, 429, 0, 430, 0, 431, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0,
    0, 0, 0, 0, 434, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 436, 0, 437, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 440, 0, 0, 0, 441, 0,
    0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0,
    0, 0, 446, 0, 447, 0, 0, 0, 448, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0,
    0, 455, 0, 0, 456, 0, 457, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 463, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 466, 0, 0,
    0, 0, 0, 0, 0, 467, 0, 0, 0, 468, 0, 469, 470, 0, 471, 0, 0, 0, 472, 0, 473, 0, 0, 474, 0, 0, 0, 0, 0, 0, 475, 0,
    0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 477, 0, 0, 0, 0, 478, 0, 0, 0, 0, 479, 0, 480, 0, 481, 0, 482, 0, 0, 0, 483, 0,
    0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 486, 0, 487, 488, 0, 489, 0, 0, 0, 490, 0, 491, 0, 0, 492, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 0,
    0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0,
    0, 0, 510, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 511, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0,
    513, 0, 0, 514, 0, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 517,
    0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00B2(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003C8000;
    case 2u: goto L_003C8014;
    case 3u: goto L_003C8028;
    case 4u: goto L_003C8040;
    case 5u: goto L_003C8054;
    case 6u: goto L_003C807C;
    case 7u: goto L_003C808C;
    case 8u: goto L_003C80A8;
    case 9u: goto L_003C80F0;
    case 10u: goto L_003C8114;
    case 11u: goto L_003C8128;
    case 12u: goto L_003C8150;
    case 13u: goto L_003C8168;
    case 14u: goto L_003C81B8;
    case 15u: goto L_003C81DC;
    case 16u: goto L_003C81F0;
    case 17u: goto L_003C821C;
    case 18u: goto L_003C8238;
    case 19u: goto L_003C825C;
    case 20u: goto L_003C827C;
    case 21u: goto L_003C8290;
    case 22u: goto L_003C82B0;
    case 23u: goto L_003C82C0;
    case 24u: goto L_003C82E4;
    case 25u: goto L_003C82F8;
    case 26u: goto L_003C8308;
    case 27u: goto L_003C8330;
    case 28u: goto L_003C8348;
    case 29u: goto L_003C8370;
    case 30u: goto L_003C837C;
    case 31u: goto L_003C839C;
    case 32u: goto L_003C83E0;
    case 33u: goto L_003C83F0;
    case 34u: goto L_003C8400;
    case 35u: goto L_003C8428;
    case 36u: goto L_003C8450;
    case 37u: goto L_003C8470;
    case 38u: goto L_003C8498;
    case 39u: goto L_003C84CC;
    case 40u: goto L_003C84DC;
    case 41u: goto L_003C8500;
    case 42u: goto L_003C8520;
    case 43u: goto L_003C8550;
    case 44u: goto L_003C857C;
    case 45u: goto L_003C85A0;
    case 46u: goto L_003C85C4;
    case 47u: goto L_003C85E4;
    case 48u: goto L_003C8610;
    case 49u: goto L_003C862C;
    case 50u: goto L_003C8658;
    case 51u: goto L_003C8670;
    case 52u: goto L_003C86A0;
    case 53u: goto L_003C86B8;
    case 54u: goto L_003C86D4;
    case 55u: goto L_003C870C;
    case 56u: goto L_003C8728;
    case 57u: goto L_003C8744;
    case 58u: goto L_003C8764;
    case 59u: goto L_003C8794;
    case 60u: goto L_003C879C;
    case 61u: goto L_003C87C8;
    case 62u: goto L_003C880C;
    case 63u: goto L_003C8814;
    case 64u: goto L_003C8820;
    case 65u: goto L_003C8834;
    case 66u: goto L_003C8888;
    case 67u: goto L_003C88B8;
    case 68u: goto L_003C88F4;
    case 69u: goto L_003C8940;
    case 70u: goto L_003C8968;
    case 71u: goto L_003C8970;
    case 72u: goto L_003C8978;
    case 73u: goto L_003C89A0;
    case 74u: goto L_003C89B0;
    case 75u: goto L_003C89B8;
    case 76u: goto L_003C89C8;
    case 77u: goto L_003C8A10;
    case 78u: goto L_003C8A20;
    case 79u: goto L_003C8A30;
    case 80u: goto L_003C8A3C;
    case 81u: goto L_003C8A58;
    case 82u: goto L_003C8A6C;
    case 83u: goto L_003C8A98;
    case 84u: goto L_003C8AC0;
    case 85u: goto L_003C8ADC;
    case 86u: goto L_003C8AF8;
    case 87u: goto L_003C8B00;
    case 88u: goto L_003C8B10;
    case 89u: goto L_003C8B40;
    case 90u: goto L_003C8B5C;
    case 91u: goto L_003C8BA8;
    case 92u: goto L_003C8BC8;
    case 93u: goto L_003C8BDC;
    case 94u: goto L_003C8BF4;
    case 95u: goto L_003C8C18;
    case 96u: goto L_003C8C30;
    case 97u: goto L_003C8C98;
    case 98u: goto L_003C8CA0;
    case 99u: goto L_003C8CA8;
    case 100u: goto L_003C8CB4;
    case 101u: goto L_003C8CBC;
    case 102u: goto L_003C8CD0;
    case 103u: goto L_003C8CD8;
    case 104u: goto L_003C8CE4;
    case 105u: goto L_003C8D10;
    case 106u: goto L_003C8D30;
    case 107u: goto L_003C8D80;
    case 108u: goto L_003C8D88;
    case 109u: goto L_003C8D90;
    case 110u: goto L_003C8D9C;
    case 111u: goto L_003C8DB8;
    case 112u: goto L_003C8DC0;
    case 113u: goto L_003C8DC8;
    case 114u: goto L_003C8DD0;
    case 115u: goto L_003C8DF8;
    case 116u: goto L_003C8E00;
    case 117u: goto L_003C8E20;
    case 118u: goto L_003C8E34;
    case 119u: goto L_003C8E40;
    case 120u: goto L_003C8E9C;
    case 121u: goto L_003C8EA4;
    case 122u: goto L_003C8EB0;
    case 123u: goto L_003C8EB8;
    case 124u: goto L_003C8F00;
    case 125u: goto L_003C8F50;
    case 126u: goto L_003C8F58;
    case 127u: goto L_003C8F70;
    case 128u: goto L_003C8F78;
    case 129u: goto L_003C8F98;
    case 130u: goto L_003C8FAC;
    case 131u: goto L_003C8FB8;
    case 132u: goto L_003C8FD8;
    case 133u: goto L_003C8FE8;
    case 134u: goto L_003C8FF4;
    case 135u: goto L_003C9054;
    case 136u: goto L_003C9064;
    case 137u: goto L_003C9074;
    case 138u: goto L_003C9090;
    case 139u: goto L_003C90D0;
    case 140u: goto L_003C90E0;
    case 141u: goto L_003C910C;
    case 142u: goto L_003C913C;
    case 143u: goto L_003C9144;
    case 144u: goto L_003C9158;
    case 145u: goto L_003C9190;
    case 146u: goto L_003C9198;
    case 147u: goto L_003C91AC;
    case 148u: goto L_003C91D0;
    case 149u: goto L_003C91E0;
    case 150u: goto L_003C91F0;
    case 151u: goto L_003C9220;
    case 152u: goto L_003C924C;
    case 153u: goto L_003C9258;
    case 154u: goto L_003C926C;
    case 155u: goto L_003C9290;
    case 156u: goto L_003C92A4;
    case 157u: goto L_003C92C8;
    case 158u: goto L_003C92DC;
    case 159u: goto L_003C9300;
    case 160u: goto L_003C9314;
    case 161u: goto L_003C9338;
    case 162u: goto L_003C9348;
    case 163u: goto L_003C935C;
    case 164u: goto L_003C9364;
    case 165u: goto L_003C9370;
    case 166u: goto L_003C9388;
    case 167u: goto L_003C93B0;
    case 168u: goto L_003C93B8;
    case 169u: goto L_003C93C8;
    case 170u: goto L_003C93D8;
    case 171u: goto L_003C93E8;
    case 172u: goto L_003C93FC;
    case 173u: goto L_003C9410;
    case 174u: goto L_003C9428;
    case 175u: goto L_003C9448;
    case 176u: goto L_003C9478;
    case 177u: goto L_003C9490;
    case 178u: goto L_003C94A4;
    case 179u: goto L_003C94BC;
    case 180u: goto L_003C94D4;
    case 181u: goto L_003C94F4;
    case 182u: goto L_003C9518;
    case 183u: goto L_003C9520;
    case 184u: goto L_003C9530;
    case 185u: goto L_003C9548;
    case 186u: goto L_003C9558;
    case 187u: goto L_003C9568;
    case 188u: goto L_003C9588;
    case 189u: goto L_003C9598;
    case 190u: goto L_003C95D8;
    case 191u: goto L_003C95E8;
    case 192u: goto L_003C9640;
    case 193u: goto L_003C9650;
    case 194u: goto L_003C9688;
    case 195u: goto L_003C96C0;
    case 196u: goto L_003C96E8;
    case 197u: goto L_003C96FC;
    case 198u: goto L_003C9704;
    case 199u: goto L_003C9710;
    case 200u: goto L_003C9720;
    case 201u: goto L_003C9748;
    case 202u: goto L_003C976C;
    case 203u: goto L_003C9794;
    case 204u: goto L_003C97B0;
    case 205u: goto L_003C97C0;
    case 206u: goto L_003C97DC;
    case 207u: goto L_003C97E4;
    case 208u: goto L_003C9800;
    case 209u: goto L_003C9824;
    case 210u: goto L_003C9834;
    case 211u: goto L_003C9850;
    case 212u: goto L_003C9858;
    case 213u: goto L_003C9878;
    case 214u: goto L_003C9894;
    case 215u: goto L_003C98A0;
    case 216u: goto L_003C98BC;
    case 217u: goto L_003C98C4;
    case 218u: goto L_003C98E0;
    case 219u: goto L_003C98F4;
    case 220u: goto L_003C98FC;
    case 221u: goto L_003C9918;
    case 222u: goto L_003C9920;
    case 223u: goto L_003C9938;
    case 224u: goto L_003C995C;
    case 225u: goto L_003C996C;
    case 226u: goto L_003C9988;
    case 227u: goto L_003C9990;
    case 228u: goto L_003C99B0;
    case 229u: goto L_003C99F0;
    case 230u: goto L_003C9A18;
    case 231u: goto L_003C9A38;
    case 232u: goto L_003C9A64;
    case 233u: goto L_003C9A68;
    case 234u: goto L_003C9AB4;
    case 235u: goto L_003C9AD8;
    case 236u: goto L_003C9B18;
    case 237u: goto L_003C9B30;
    case 238u: goto L_003C9B48;
    case 239u: goto L_003C9B60;
    case 240u: goto L_003C9B80;
    case 241u: goto L_003C9B98;
    case 242u: goto L_003C9BD4;
    case 243u: goto L_003C9BEC;
    case 244u: goto L_003C9BF0;
    case 245u: goto L_003C9C28;
    case 246u: goto L_003C9C40;
    case 247u: goto L_003C9C68;
    case 248u: goto L_003C9C9C;
    case 249u: goto L_003C9CB0;
    case 250u: goto L_003C9CC8;
    case 251u: goto L_003C9CE0;
    case 252u: goto L_003C9D30;
    case 253u: goto L_003C9D38;
    case 254u: goto L_003C9D60;
    case 255u: goto L_003C9D74;
    case 256u: goto L_003C9D98;
    case 257u: goto L_003C9DBC;
    case 258u: goto L_003C9DDC;
    case 259u: goto L_003C9E00;
    case 260u: goto L_003C9E18;
    case 261u: goto L_003C9E3C;
    case 262u: goto L_003C9E58;
    case 263u: goto L_003C9E9C;
    case 264u: goto L_003C9EB8;
    case 265u: goto L_003C9EE4;
    case 266u: goto L_003C9F08;
    case 267u: goto L_003C9F1C;
    case 268u: goto L_003C9F30;
    case 269u: goto L_003C9F40;
    case 270u: goto L_003C9F70;
    case 271u: goto L_003C9F78;
    case 272u: goto L_003C9F9C;
    case 273u: goto L_003C9FBC;
    case 274u: goto L_003C9FF0;
    case 275u: goto L_003CA014;
    case 276u: goto L_003CA04C;
    case 277u: goto L_003CA060;
    case 278u: goto L_003CA09C;
    case 279u: goto L_003CA0A4;
    case 280u: goto L_003CA0C0;
    case 281u: goto L_003CA0D0;
    case 282u: goto L_003CA0DC;
    case 283u: goto L_003CA0E4;
    case 284u: goto L_003CA0F0;
    case 285u: goto L_003CA120;
    case 286u: goto L_003CA138;
    case 287u: goto L_003CA148;
    case 288u: goto L_003CA1A0;
    case 289u: goto L_003CA1B8;
    case 290u: goto L_003CA1F8;
    case 291u: goto L_003CA208;
    case 292u: goto L_003CA220;
    case 293u: goto L_003CA240;
    case 294u: goto L_003CA274;
    case 295u: goto L_003CA290;
    case 296u: goto L_003CA2C0;
    case 297u: goto L_003CA2D8;
    case 298u: goto L_003CA364;
    case 299u: goto L_003CA398;
    case 300u: goto L_003CA3B0;
    case 301u: goto L_003CA3F4;
    case 302u: goto L_003CA40C;
    case 303u: goto L_003CA424;
    case 304u: goto L_003CA470;
    case 305u: goto L_003CA498;
    case 306u: goto L_003CA4A0;
    case 307u: goto L_003CA4B4;
    case 308u: goto L_003CA4D8;
    case 309u: goto L_003CA4E8;
    case 310u: goto L_003CA4F8;
    case 311u: goto L_003CA55C;
    case 312u: goto L_003CA570;
    case 313u: goto L_003CA5C4;
    case 314u: goto L_003CA5F0;
    case 315u: goto L_003CA608;
    case 316u: goto L_003CA63C;
    case 317u: goto L_003CA658;
    case 318u: goto L_003CA698;
    case 319u: goto L_003CA6A4;
    case 320u: goto L_003CA6B4;
    case 321u: goto L_003CA6B8;
    case 322u: goto L_003CA6F0;
    case 323u: goto L_003CA748;
    case 324u: goto L_003CA788;
    case 325u: goto L_003CA79C;
    case 326u: goto L_003CA7C0;
    case 327u: goto L_003CA7F8;
    case 328u: goto L_003CA808;
    case 329u: goto L_003CA868;
    case 330u: goto L_003CA878;
    case 331u: goto L_003CA8A0;
    case 332u: goto L_003CA8C8;
    case 333u: goto L_003CA8E8;
    case 334u: goto L_003CA8F0;
    case 335u: goto L_003CA904;
    case 336u: goto L_003CA928;
    case 337u: goto L_003CA944;
    case 338u: goto L_003CA958;
    case 339u: goto L_003CA97C;
    case 340u: goto L_003CA988;
    case 341u: goto L_003CA9A8;
    case 342u: goto L_003CA9BC;
    case 343u: goto L_003CA9C8;
    case 344u: goto L_003CA9E0;
    case 345u: goto L_003CA9F8;
    case 346u: goto L_003CAA30;
    case 347u: goto L_003CAA54;
    case 348u: goto L_003CAA5C;
    case 349u: goto L_003CAA88;
    case 350u: goto L_003CAA98;
    case 351u: goto L_003CAAC0;
    case 352u: goto L_003CAAD0;
    case 353u: goto L_003CAAD4;
    case 354u: goto L_003CAAF8;
    case 355u: goto L_003CAB1C;
    case 356u: goto L_003CAB30;
    case 357u: goto L_003CAB44;
    case 358u: goto L_003CAB70;
    case 359u: goto L_003CAB88;
    case 360u: goto L_003CAB9C;
    case 361u: goto L_003CABB8;
    case 362u: goto L_003CAC00;
    case 363u: goto L_003CAC24;
    case 364u: goto L_003CAC44;
    case 365u: goto L_003CAC4C;
    case 366u: goto L_003CAC54;
    case 367u: goto L_003CAC5C;
    case 368u: goto L_003CAC68;
    case 369u: goto L_003CAC88;
    case 370u: goto L_003CACB8;
    case 371u: goto L_003CACD8;
    case 372u: goto L_003CACE0;
    case 373u: goto L_003CACE8;
    case 374u: goto L_003CACF0;
    case 375u: goto L_003CACFC;
    case 376u: goto L_003CAD20;
    case 377u: goto L_003CAD34;
    case 378u: goto L_003CAD58;
    case 379u: goto L_003CAD68;
    case 380u: goto L_003CAD90;
    case 381u: goto L_003CADB0;
    case 382u: goto L_003CAE00;
    case 383u: goto L_003CAE20;
    case 384u: goto L_003CAE34;
    case 385u: goto L_003CAE54;
    case 386u: goto L_003CAE74;
    case 387u: goto L_003CAE7C;
    case 388u: goto L_003CAE84;
    case 389u: goto L_003CAE8C;
    case 390u: goto L_003CAE98;
    case 391u: goto L_003CAEB0;
    case 392u: goto L_003CAEB8;
    case 393u: goto L_003CAF38;
    case 394u: goto L_003CAF64;
    case 395u: goto L_003CAF90;
    case 396u: goto L_003CAFAC;
    case 397u: goto L_003CB028;
    case 398u: goto L_003CB044;
    case 399u: goto L_003CB060;
    case 400u: goto L_003CB0C0;
    case 401u: goto L_003CB0F0;
    case 402u: goto L_003CB150;
    case 403u: goto L_003CB170;
    case 404u: goto L_003CB180;
    case 405u: goto L_003CB1A0;
    case 406u: goto L_003CB1A8;
    case 407u: goto L_003CB1B0;
    case 408u: goto L_003CB1B8;
    case 409u: goto L_003CB1C0;
    case 410u: goto L_003CB208;
    case 411u: goto L_003CB284;
    case 412u: goto L_003CB298;
    case 413u: goto L_003CB2A0;
    case 414u: goto L_003CB2A8;
    case 415u: goto L_003CB2B0;
    case 416u: goto L_003CB2DC;
    case 417u: goto L_003CB308;
    case 418u: goto L_003CB324;
    case 419u: goto L_003CB340;
    case 420u: goto L_003CB348;
    case 421u: goto L_003CB364;
    case 422u: goto L_003CB398;
    case 423u: goto L_003CB3A8;
    case 424u: goto L_003CB3B8;
    case 425u: goto L_003CB3D8;
    case 426u: goto L_003CB3E8;
    case 427u: goto L_003CB404;
    case 428u: goto L_003CB424;
    case 429u: goto L_003CB42C;
    case 430u: goto L_003CB434;
    case 431u: goto L_003CB43C;
    case 432u: goto L_003CB448;
    case 433u: goto L_003CB46C;
    case 434u: goto L_003CB490;
    case 435u: goto L_003CB4A0;
    case 436u: goto L_003CB4C0;
    case 437u: goto L_003CB4C8;
    case 438u: goto L_003CB4E0;
    case 439u: goto L_003CB558;
    case 440u: goto L_003CB568;
    case 441u: goto L_003CB578;
    case 442u: goto L_003CB588;
    case 443u: goto L_003CB5A8;
    case 444u: goto L_003CB5D0;
    case 445u: goto L_003CB5F4;
    case 446u: goto L_003CB608;
    case 447u: goto L_003CB610;
    case 448u: goto L_003CB620;
    case 449u: goto L_003CB634;
    case 450u: goto L_003CB650;
    case 451u: goto L_003CB688;
    case 452u: goto L_003CB6AC;
    case 453u: goto L_003CB6B8;
    case 454u: goto L_003CB6E0;
    case 455u: goto L_003CB704;
    case 456u: goto L_003CB710;
    case 457u: goto L_003CB718;
    case 458u: goto L_003CB730;
    case 459u: goto L_003CB744;
    case 460u: goto L_003CB778;
    case 461u: goto L_003CB7E8;
    case 462u: goto L_003CB85C;
    case 463u: goto L_003CB864;
    case 464u: goto L_003CB910;
    case 465u: goto L_003CB960;
    case 466u: goto L_003CB974;
    case 467u: goto L_003CB994;
    case 468u: goto L_003CB9A4;
    case 469u: goto L_003CB9AC;
    case 470u: goto L_003CB9B0;
    case 471u: goto L_003CB9B8;
    case 472u: goto L_003CB9C8;
    case 473u: goto L_003CB9D0;
    case 474u: goto L_003CB9DC;
    case 475u: goto L_003CB9F8;
    case 476u: goto L_003CBA14;
    case 477u: goto L_003CBA28;
    case 478u: goto L_003CBA3C;
    case 479u: goto L_003CBA50;
    case 480u: goto L_003CBA58;
    case 481u: goto L_003CBA60;
    case 482u: goto L_003CBA68;
    case 483u: goto L_003CBA78;
    case 484u: goto L_003CBA98;
    case 485u: goto L_003CBAE8;
    case 486u: goto L_003CBB1C;
    case 487u: goto L_003CBB24;
    case 488u: goto L_003CBB28;
    case 489u: goto L_003CBB30;
    case 490u: goto L_003CBB40;
    case 491u: goto L_003CBB48;
    case 492u: goto L_003CBB54;
    case 493u: goto L_003CBB6C;
    case 494u: goto L_003CBB9C;
    case 495u: goto L_003CBBB0;
    case 496u: goto L_003CBBD0;
    case 497u: goto L_003CBC10;
    case 498u: goto L_003CBC38;
    case 499u: goto L_003CBC70;
    case 500u: goto L_003CBCB8;
    case 501u: goto L_003CBCE0;
    case 502u: goto L_003CBD38;
    case 503u: goto L_003CBD60;
    case 504u: goto L_003CBD88;
    case 505u: goto L_003CBDC4;
    case 506u: goto L_003CBDF4;
    case 507u: goto L_003CBE10;
    case 508u: goto L_003CBE50;
    case 509u: goto L_003CBE68;
    case 510u: goto L_003CBE88;
    case 511u: goto L_003CBEB4;
    case 512u: goto L_003CBEE8;
    case 513u: goto L_003CBF00;
    case 514u: goto L_003CBF0C;
    case 515u: goto L_003CBF34;
    case 516u: goto L_003CBF44;
    case 517u: goto L_003CBF7C;
    case 518u: goto L_003CBF88;
    case 519u: goto L_003CBFC0;
    default: bad_entry(c, 0x003C8000u); return;
    }
L_003C8000:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_003C8020; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8014u); set32(c.r[4], c.r[4].w[0] + 16968u);  if (depth < kMaxDepth) unit_00B1(c, 147u, depth + 1u); else { c.pc = 0x003C6560u; return; } if (c.pc != 0x003C8014u) [[unlikely]] return; }
L_003C8014:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003C808C; } }
    c.budget -= 1;
L_003C8020:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8028u);  if (depth < kMaxDepth) unit_00B1(c, 167u, depth + 1u); else { c.pc = 0x003C68C0u; return; } if (c.pc != 0x003C8028u) [[unlikely]] return; }
L_003C8028:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { c.r[4].d[0] = c.r[29].d[0] + 0ull;  goto L_003C8048; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8040u); set32(c.r[4], c.r[4].w[0] + 17008u);  if (depth < kMaxDepth) unit_00B1(c, 147u, depth + 1u); else { c.pc = 0x003C6560u; return; } if (c.pc != 0x003C8040u) [[unlikely]] return; }
L_003C8040:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003C808C; } }
L_003C8048:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8054u); set32(c.r[6], 0u + 20u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003C8054u) [[unlikely]] return; }
L_003C8054:
    st32((c.r[29].w[0]), c.r[17].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[18].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_003C8088; } }
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C807Cu); c.r[7].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C807Cu) [[unlikely]] return; }
L_003C807C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003C8090; } }
    c.budget -= 1;
L_003C8088:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_003C808C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003C8090:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003C80A8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0] + 48u), c.r[31].d[0]);  if (t) { goto L_003C80D0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 17048u);  if (t) { goto L_003C810C; } }
    c.budget -= 1;
L_003C80D0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_003C80E8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 17088u);  if (t) { goto L_003C810C; } }
    c.budget -= 1;
L_003C80E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C80F0u);  if (depth < kMaxDepth) unit_00B1(c, 167u, depth + 1u); else { c.pc = 0x003C68C0u; return; } if (c.pc != 0x003C80F0u) [[unlikely]] return; }
L_003C80F0:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[6], 0u + 20u);  if (t) { goto L_003C8120; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[4].w[0] + 17128u);
    c.budget -= 2;
L_003C810C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8114u);  if (depth < kMaxDepth) unit_00B1(c, 147u, depth + 1u); else { c.pc = 0x003C6560u; return; } if (c.pc != 0x003C8114u) [[unlikely]] return; }
L_003C8114:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003C8150; } }
    c.budget -= 1;
L_003C8120:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8128u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003C8128u) [[unlikely]] return; }
L_003C8128:
    set32(c.r[2], 0u - 1u);
    st32((c.r[29].w[0] + 4u), c.r[16].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003C8150; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8150u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C8150u) [[unlikely]] return; }
L_003C8150:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003C8168:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0] + 56u), c.r[31].d[0]);  if (t) { goto L_003C8198; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 17168u);  if (t) { goto L_003C81D4; } }
    c.budget -= 1;
L_003C8198:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_003C81B0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 17216u);  if (t) { goto L_003C81D4; } }
    c.budget -= 1;
L_003C81B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C81B8u);  if (depth < kMaxDepth) unit_00B1(c, 167u, depth + 1u); else { c.pc = 0x003C68C0u; return; } if (c.pc != 0x003C81B8u) [[unlikely]] return; }
L_003C81B8:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[6], 0u + 20u);  if (t) { goto L_003C81E8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[4].w[0] + 17264u);
    c.budget -= 2;
L_003C81D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C81DCu);  if (depth < kMaxDepth) unit_00B1(c, 147u, depth + 1u); else { c.pc = 0x003C6560u; return; } if (c.pc != 0x003C81DCu) [[unlikely]] return; }
L_003C81DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003C821C; } }
    c.budget -= 1;
L_003C81E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C81F0u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003C81F0u) [[unlikely]] return; }
L_003C81F0:
    set32(c.r[2], 0u - 1u);
    st32((c.r[29].w[0] + 4u), c.r[16].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.r[18].w[0]);
    set32(c.r[5], 0u + 5u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003C821C; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C821Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C821Cu) [[unlikely]] return; }
L_003C821C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003C8238:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0] + 48u), c.r[31].d[0]);  if (t) { goto L_003C8268; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C825Cu); set32(c.r[4], c.r[4].w[0] + 17304u);  if (depth < kMaxDepth) unit_00B1(c, 147u, depth + 1u); else { c.pc = 0x003C6560u; return; } if (c.pc != 0x003C825Cu) [[unlikely]] return; }
L_003C825C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003C82E8; } }
    c.budget -= 1;
L_003C8268:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_003C8288; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C827Cu); set32(c.r[4], c.r[4].w[0] + 17344u);  if (depth < kMaxDepth) unit_00B1(c, 147u, depth + 1u); else { c.pc = 0x003C6560u; return; } if (c.pc != 0x003C827Cu) [[unlikely]] return; }
L_003C827C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003C82E8; } }
    c.budget -= 1;
L_003C8288:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8290u);  if (depth < kMaxDepth) unit_00B1(c, 167u, depth + 1u); else { c.pc = 0x003C68C0u; return; } if (c.pc != 0x003C8290u) [[unlikely]] return; }
L_003C8290:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[6], 0u + 20u);  if (t) { goto L_003C82B8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C82B0u); set32(c.r[4], c.r[4].w[0] + 17384u);  if (depth < kMaxDepth) unit_00B1(c, 147u, depth + 1u); else { c.pc = 0x003C6560u; return; } if (c.pc != 0x003C82B0u) [[unlikely]] return; }
L_003C82B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003C82E8; } }
L_003C82B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C82C0u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003C82C0u) [[unlikely]] return; }
L_003C82C0:
    set32(c.r[5], 0u + 6u);
    st32((c.r[29].w[0] + 4u), c.r[16].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003C82E4; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C82E4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C82E4u) [[unlikely]] return; }
L_003C82E4:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003C82E8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003C82F8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8308u);  if (depth < kMaxDepth) unit_00B1(c, 167u, depth + 1u); else { c.pc = 0x003C68C0u; return; } if (c.pc != 0x003C8308u) [[unlikely]] return; }
L_003C8308:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003C8340; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003C8338; } }
    set32(c.r[5], 0u + 100u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8330u); c.r[7].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C8330u) [[unlikely]] return; }
L_003C8330:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003C8340; } }
L_003C8338:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_003C8340:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C8348:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.budget -= 8;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 24u), c.r[31].d[0]);  if (t) { goto L_003C8374; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8370u);  if (depth < kMaxDepth) unit_00B1(c, 186u, depth + 1u); else { c.pc = 0x003C6BD8u; return; } if (c.pc != 0x003C8370u) [[unlikely]] return; }
L_003C8370:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003C8374:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C837Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 25u, depth + 1u); else { c.pc = 0x003C82F8u; return; } if (c.pc != 0x003C837Cu) [[unlikely]] return; }
L_003C837C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[18], c.r[3].w[0] - 11576u);
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003C83C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C839Cu);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x003C839Cu) [[unlikely]] return; }
L_003C839C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    set32(c.r[5], c.r[5].w[0] + 17424u);
    c.budget -= 11;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00127458u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 204u, depth); }
L_003C83C8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C83E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C83F0u);  if (depth < kMaxDepth) unit_00B1(c, 167u, depth + 1u); else { c.pc = 0x003C68C0u; return; } if (c.pc != 0x003C83F0u) [[unlikely]] return; }
L_003C83F0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C8400:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] != 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_003C8430; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8428u); set32(c.r[4], c.r[4].w[0] + 17432u);  if (depth < kMaxDepth) unit_00B1(c, 147u, depth + 1u); else { c.pc = 0x003C6560u; return; } if (c.pc != 0x003C8428u) [[unlikely]] return; }
L_003C8428:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C8484; } }
L_003C8430:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 200u);  if (t) { goto L_003C8480; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8450u); c.r[7].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C8450u) [[unlikely]] return; }
L_003C8450:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 96u)));
    set32(c.r[5], 0u + 201u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8470u); c.r[7].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C8470u) [[unlikely]] return; }
L_003C8470:
    c.r[16].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[16].d[0] = c.r[16].d[0] + c.r[2].d[0];
    c.budget -= 4;
L_003C8480:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003C8484:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C8498:
    set32(c.r[29], c.r[29].w[0] - 656u);
    st64((c.r[29].w[0] + 616u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 632u), c.r[19].d[0]);
    set32(c.r[19], c.r[29].w[0] + 304u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    st64((c.r[29].w[0] + 608u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 624u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 640u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C84CCu); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 206u, depth + 1u); else { c.pc = 0x003C6E30u; return; } if (c.pc != 0x003C84CCu) [[unlikely]] return; }
L_003C84CC:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C84DCu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 187u, depth + 1u); else { c.pc = 0x003C6BE8u; return; } if (c.pc != 0x003C84DCu) [[unlikely]] return; }
L_003C84DC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 202u);
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003C852C; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8500u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C8500u) [[unlikely]] return; }
L_003C8500:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 203u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8520u); c.r[16].d[0] = c.r[16].d[0] << 32;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C8520u) [[unlikely]] return; }
L_003C8520:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[16].d[0] = c.r[16].d[0] + c.r[2].d[0];
    c.budget -= 3;
L_003C852C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0] + 608u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 616u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 624u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 632u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 640u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 656u);  c.pc = t; return; }
L_003C8550:
    set32(c.r[29], c.r[29].w[0] - 656u);
    st64((c.r[29].w[0] + 624u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 616u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 632u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 640u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 608u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 648u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C857Cu); c.r[20].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 167u, depth + 1u); else { c.pc = 0x003C68C0u; return; } if (c.pc != 0x003C857Cu) [[unlikely]] return; }
L_003C857C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[19], c.r[29].w[0] + 304u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003C85F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C85A0u);  if (depth < kMaxDepth) unit_00B1(c, 206u, depth + 1u); else { c.pc = 0x003C6E30u; return; } if (c.pc != 0x003C85A0u) [[unlikely]] return; }
L_003C85A0:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 204u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_003C85F0; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C85C4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C85C4u) [[unlikely]] return; }
L_003C85C4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 205u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C85E4u); c.r[16].d[0] = c.r[16].d[0] << 32;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C85E4u) [[unlikely]] return; }
L_003C85E4:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[2].d[0] = c.r[16].d[0] + c.r[2].d[0];
    c.budget -= 3;
L_003C85F0:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 608u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 616u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 624u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 632u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 640u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 648u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 656u);  c.pc = t; return; }
L_003C8610:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003C8638; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C862Cu); set32(c.r[4], c.r[4].w[0] + 17464u);  if (depth < kMaxDepth) unit_00B1(c, 147u, depth + 1u); else { c.pc = 0x003C6560u; return; } if (c.pc != 0x003C862Cu) [[unlikely]] return; }
L_003C862C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C8660; } }
    c.budget -= 1;
L_003C8638:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 299u);  if (t) { goto L_003C865C; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8658u); c.r[7].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C8658u) [[unlikely]] return; }
L_003C8658:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003C865C:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_003C8660:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C8670:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 32536u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[4].w[0] + 32480u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[6], 0u + 56u);
    c.budget -= 12;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00124ED8u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 49u, depth); }
L_003C86A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C86B8u); c.r[17].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 318u, depth + 1u); else { c.pc = 0x003D32A8u; return; } if (c.pc != 0x003C86B8u) [[unlikely]] return; }
L_003C86B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[16], c.r[2].w[0] + 32480u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003C8704; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C86D4u);  if (depth < kMaxDepth) unit_00B2(c, 51u, depth + 1u); else { c.pc = 0x003C8670u; return; } if (c.pc != 0x003C86D4u) [[unlikely]] return; }
L_003C86D4:
    set32(c.r[4], 0u + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] + 32576u);
    set32(c.r[5], 0u - 1u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 12;
L_003C8704:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C870Cu);  if (depth < kMaxDepth) unit_00B4(c, 323u, depth + 1u); else { c.pc = 0x003D3320u; return; } if (c.pc != 0x003C870Cu) [[unlikely]] return; }
L_003C870C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C8728:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8744u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 318u, depth + 1u); else { c.pc = 0x003D32A8u; return; } if (c.pc != 0x003C8744u) [[unlikely]] return; }
L_003C8744:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[17].w[0] + 32480u);
    set32(c.r[4], c.r[4].w[0] + 17560u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003C8770; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8764u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003C8764u) [[unlikely]] return; }
L_003C8764:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003C87B8; } }
    c.budget -= 1;
L_003C8770:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_003C8794; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 9u);  if (t) { goto L_003C8794; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_003C8794; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8794u); set32(c.r[4], c.r[4].w[0] + 17624u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003C8794u) [[unlikely]] return; }
L_003C8794:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C879Cu);  if (depth < kMaxDepth) unit_00B2(c, 51u, depth + 1u); else { c.pc = 0x003C8670u; return; } if (c.pc != 0x003C879Cu) [[unlikely]] return; }
L_003C879C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st8((c.r[17].w[0] + 32480u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] + 32580u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
L_003C87B8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00B4(c, 323u, depth); }
L_003C87C8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u + 4608u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C880Cu); c.r[22].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003C880Cu) [[unlikely]] return; }
L_003C880C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8814u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0007(c, 181u, depth + 1u); else { c.pc = 0x0011DD50u; return; } if (c.pc != 0x003C8814u) [[unlikely]] return; }
L_003C8814:
    set32(c.r[4], 0u + 4609u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8820u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003C8820u) [[unlikely]] return; }
L_003C8820:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C888C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8834u);  if (depth < kMaxDepth) unit_00B4(c, 318u, depth + 1u); else { c.pc = 0x003D32A8u; return; } if (c.pc != 0x003C8834u) [[unlikely]] return; }
L_003C8834:
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_003C8854; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 9u);  if (t) { goto L_003C8854; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003C8880; } }
L_003C8854:
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[20], 0u + 1u);
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[17].w[0] + 8u), c.r[19].w[0]);
    lwl(c.r[2], (c.r[18].w[0] + 3u));
    lwr(c.r[2], (c.r[18].w[0]));
    swl(c.r[2], (c.r[17].w[0] + 23u));
    swr(c.r[2], (c.r[17].w[0] + 20u));
    st32((c.r[17].w[0] + 12u), c.r[21].w[0]);
    st32((c.r[17].w[0] + 16u), c.r[22].w[0]);
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 11;
L_003C8880:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8888u);  if (depth < kMaxDepth) unit_00B4(c, 323u, depth + 1u); else { c.pc = 0x003D3320u; return; } if (c.pc != 0x003C8888u) [[unlikely]] return; }
L_003C8888:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_003C888C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003C88B8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C88F4u); c.r[21].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 318u, depth + 1u); else { c.pc = 0x003D32A8u; return; } if (c.pc != 0x003C88F4u) [[unlikely]] return; }
L_003C88F4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_003C8910; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 9u);  if (t) { goto L_003C8910; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003C8938; } }
L_003C8910:
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 48u), c.r[18].w[0]);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[20], 0u + 1u);
    st32((c.r[16].w[0] + 24u), c.r[17].w[0]);
    st64((c.r[16].w[0] + 32u), c.r[19].d[0]);
    st64((c.r[16].w[0] + 40u), c.r[21].d[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 10;
L_003C8938:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8940u);  if (depth < kMaxDepth) unit_00B4(c, 323u, depth + 1u); else { c.pc = 0x003D3320u; return; } if (c.pc != 0x003C8940u) [[unlikely]] return; }
L_003C8940:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003C8968:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));  c.pc = t; return; }
L_003C8970:
    set32(c.r[2], 0u + 16383u);
    set32(c.r[2], c.r[2].w[0] - 32u);
    c.budget -= 2;
L_003C8978:
    c.budget -= 7;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], c.r[2].w[0] - 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C8978u | kUnwind; return; } goto L_003C8978; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C89A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C89B0u); set32(c.r[4], 0u + 4864u);  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003C89B0u) [[unlikely]] return; }
L_003C89B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C89B8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 181u, depth + 1u); else { c.pc = 0x0011DD50u; return; } if (c.pc != 0x003C89B8u) [[unlikely]] return; }
L_003C89B8:
    set32(c.r[4], 0u + 4865u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003C9568; }
L_003C89C8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[31].d[0]);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = 0ull | 36864ull;
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    set32(c.r[20], 0u + 1u);
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st64((c.r[29].w[0] + 64u), c.r[22].d[0]);
    set32(c.r[22], 0u + 9u);
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 18;
L_003C8A10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[20].d[0]; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003C8A70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8A20u); set32(c.r[4], 0u + 4352u);  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003C8A20u) [[unlikely]] return; }
L_003C8A20:
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8A30u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 208u, depth + 1u); else { c.pc = 0x003C9800u; return; } if (c.pc != 0x003C8A30u) [[unlikely]] return; }
L_003C8A30:
    set32(c.r[4], 0u + 4353u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8A3Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003C8A3Cu) [[unlikely]] return; }
L_003C8A3C:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { goto L_003C8A50; } }
    st32((c.r[17].w[0] + 52u), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[22].w[0]));  if (t) { goto L_003C8A6C; } }
L_003C8A50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8A58u); set32(c.r[18], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_00B2(c, 71u, depth + 1u); else { c.pc = 0x003C8970u; return; } if (c.pc != 0x003C8A58u) [[unlikely]] return; }
L_003C8A58:
    c.r[2].d[0] = c.r[19].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C8A10u | kUnwind; return; } goto L_003C8A10; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8A6Cu); set32(c.r[4], c.r[21].w[0] + 17656u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003C8A6Cu) [[unlikely]] return; }
L_003C8A6C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003C8A70:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003C8A98:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[19].sd[0] = static_cast<std::int32_t>(0x00430000u);  if (t) { goto L_003C8AC8; } }
L_003C8AC0:
    set32(c.r[2], c.r[2].w[0] << 16);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.budget -= 2;
L_003C8AC8:
    c.r[2].d[0] = c.r[16].sd[0] < 1000ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[18].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));  goto L_003C8B14; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8ADCu);  if (depth < kMaxDepth) unit_00B4(c, 316u, depth + 1u); else { c.pc = 0x003D3278u; return; } if (c.pc != 0x003C8ADCu) [[unlikely]] return; }
L_003C8ADC:
    set32(c.r[4], c.r[19].w[0] + 32540u);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_003C8B08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8AF8u);  if (depth < kMaxDepth) unit_00B4(c, 317u, depth + 1u); else { c.pc = 0x003D3290u; return; } if (c.pc != 0x003C8AF8u) [[unlikely]] return; }
L_003C8AF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8B00u);  if (depth < kMaxDepth) unit_00B2(c, 71u, depth + 1u); else { c.pc = 0x003C8970u; return; } if (c.pc != 0x003C8B00u) [[unlikely]] return; }
L_003C8B00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[16].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C8AC0u | kUnwind; return; } goto L_003C8AC0; } }
L_003C8B08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8B10u); st32((c.r[4].w[0]), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00B4(c, 317u, depth + 1u); else { c.pc = 0x003D3290u; return; } if (c.pc != 0x003C8B10u) [[unlikely]] return; }
L_003C8B10:
    c.r[18].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.budget -= 1;
L_003C8B14:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[18].d[0] != c.r[2].d[0]) { st32((c.r[19].w[0] + 32540u), 0u);  goto L_003C8B88; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[16], c.r[2].w[0] + 32480u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; c.r[2].d[0] = ld8((c.r[16].w[0] + 1u));  if (t) { goto L_003C8B44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8B40u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 73u, depth + 1u); else { c.pc = 0x003C89A0u; return; } if (c.pc != 0x003C8B40u) [[unlikely]] return; }
L_003C8B40:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1u));
    c.budget -= 1;
L_003C8B44:
    set32(c.r[2], c.r[2].w[0] << 24);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[18].d[0]) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));  goto L_003C8B60; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8B5Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 76u, depth + 1u); else { c.pc = 0x003C89C8u; return; } if (c.pc != 0x003C8B5Cu) [[unlikely]] return; }
L_003C8B5C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.budget -= 1;
L_003C8B60:
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_003C8B84; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] + 32572u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 6;
L_003C8B84:
    st32((c.r[19].w[0] + 32540u), 0u);
    c.budget -= 1;
L_003C8B88:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C8BA8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 32480u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C8A98u | kUnwind; return; } goto L_003C8A98; }
L_003C8BC8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8BDCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 318u, depth + 1u); else { c.pc = 0x003D32A8u; return; } if (c.pc != 0x003C8BDCu) [[unlikely]] return; }
L_003C8BDC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 17688u);  if (t) { goto L_003C8C00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8BF4u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003C8BF4u) [[unlikely]] return; }
L_003C8BF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003C8C24; } }
    c.budget -= 1;
L_003C8C00:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  goto L_003C8C20; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8C18u); set32(c.r[4], c.r[4].w[0] + 17720u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003C8C18u) [[unlikely]] return; }
L_003C8C18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003C8C24; } }
L_003C8C20:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003C8C24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B4(c, 323u, depth); }
L_003C8C30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], c.r[3].w[0] + 32556u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_003C8D14; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003C8D18; }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[18].w[0] + 32564u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + 32552u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_003C8CC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8C98u);  if (depth < kMaxDepth) unit_00B4(c, 320u, depth + 1u); else { c.pc = 0x003D32D8u; return; } if (c.pc != 0x003C8C98u) [[unlikely]] return; }
L_003C8C98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8CA0u); set32(c.r[4], 0u + 5120u);  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003C8CA0u) [[unlikely]] return; }
L_003C8CA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8CA8u);  if (depth < kMaxDepth) unit_0007(c, 280u, depth + 1u); else { c.pc = 0x0011EAA8u; return; } if (c.pc != 0x003C8CA8u) [[unlikely]] return; }
L_003C8CA8:
    set32(c.r[4], 0u + 5121u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8CB4u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003C8CB4u) [[unlikely]] return; }
L_003C8CB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8CBCu);  if (depth < kMaxDepth) unit_00B4(c, 325u, depth + 1u); else { c.pc = 0x003D3350u; return; } if (c.pc != 0x003C8CBCu) [[unlikely]] return; }
L_003C8CBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[16].w[0] + 1u);  if (t) { goto L_003C8CE8; } }
    c.budget -= 1;
L_003C8CC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8CD0u); set32(c.r[4], 0u + 5376u);  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003C8CD0u) [[unlikely]] return; }
L_003C8CD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8CD8u);  if (depth < kMaxDepth) unit_0007(c, 280u, depth + 1u); else { c.pc = 0x0011EAA8u; return; } if (c.pc != 0x003C8CD8u) [[unlikely]] return; }
L_003C8CD8:
    set32(c.r[4], 0u + 5377u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8CE4u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003C8CE4u) [[unlikely]] return; }
L_003C8CE4:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_003C8CE8:
    set32(c.r[3], c.r[18].w[0] + 32564u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    st32((c.r[3].w[0]), 0u);
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003C8D14; }
    st32((c.r[17].w[0] + 52u), c.r[16].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8D10u); set32(c.r[4], c.r[4].w[0] + 17744u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003C8D10u) [[unlikely]] return; }
L_003C8D10:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003C8D14:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003C8D18:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C8D30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[5].d[0] = ld8((c.r[17].w[0] + 2u));  if (t) { goto L_003C8E04; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 4u), 0u);  goto L_003C8E04; }
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 17824u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x003C8000u < 16384u) { entry = entries_00B2[(t - 0x003C8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003C8D80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8D88u); set32(c.r[4], 0u + 5632u);  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003C8D88u) [[unlikely]] return; }
L_003C8D88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8D90u);  if (depth < kMaxDepth) unit_0007(c, 285u, depth + 1u); else { c.pc = 0x0011EB40u; return; } if (c.pc != 0x003C8D90u) [[unlikely]] return; }
L_003C8D90:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8D9Cu); set32(c.r[4], 0u + 5633u);  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003C8D9Cu) [[unlikely]] return; }
L_003C8D9C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);  if (t) { goto L_003C8DB8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] + 32564u);
    set32(c.r[4], c.r[4].w[0] + 17792u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8DB8u); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003C8DB8u) [[unlikely]] return; }
L_003C8DB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8DC0u); set32(c.r[4], 0u + 5888u);  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003C8DC0u) [[unlikely]] return; }
L_003C8DC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8DC8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 181u, depth + 1u); else { c.pc = 0x0011DD50u; return; } if (c.pc != 0x003C8DC8u) [[unlikely]] return; }
L_003C8DC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8DD0u); set32(c.r[4], 0u + 5889u);  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003C8DD0u) [[unlikely]] return; }
L_003C8DD0:
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 32572u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), 0u);  if (t) { goto L_003C8E04; } }
    c.budget -= 1;
L_003C8DF8:
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003C8E00:
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 1;
L_003C8E04:
    set32(c.r[2], c.r[5].w[0] << 24);
    set32(c.r[3], 0u + 1u);
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.budget -= 5;
    if (c.r[18].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 2u);  goto L_003C8E88; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8E20u); set32(c.r[4], 0u + 6144u);  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003C8E20u) [[unlikely]] return; }
L_003C8E20:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[7], c.r[17].w[0] + 20u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8E34u); set32(c.r[6], ld32((c.r[17].w[0] + 16u)));  if (depth < kMaxDepth) unit_0007(c, 258u, depth + 1u); else { c.pc = 0x0011E760u; return; } if (c.pc != 0x003C8E34u) [[unlikely]] return; }
L_003C8E34:
    set32(c.r[4], 0u + 6145u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8E40u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003C8E40u) [[unlikely]] return; }
L_003C8E40:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[18].d[0]; set32(c.r[2], 0u + 9u);  if (t) { goto L_003C8E70; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[2], c.r[2].w[0] + 32568u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_003C8E80; } }
    c.budget -= 1;
L_003C8E70:
    set32(c.r[3], 0u - 1u);
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 9u);
    st32((c.r[17].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 4;
L_003C8E80:
    set32(c.r[2], c.r[5].w[0] << 24);
    set32(c.r[3], 0u + 2u);
    c.budget -= 2;
L_003C8E88:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003C8EEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8E9Cu); set32(c.r[4], 0u + 6400u);  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003C8E9Cu) [[unlikely]] return; }
L_003C8E9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8EA4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0007(c, 181u, depth + 1u); else { c.pc = 0x0011DD50u; return; } if (c.pc != 0x003C8EA4u) [[unlikely]] return; }
L_003C8EA4:
    set32(c.r[4], 0u + 6401u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8EB0u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003C8EB0u) [[unlikely]] return; }
L_003C8EB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8EB8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 96u, depth + 1u); else { c.pc = 0x003C8C30u; return; } if (c.pc != 0x003C8EB8u) [[unlikely]] return; }
L_003C8EB8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[3].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003C8EE8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 3u);  goto L_003C8ED0; }
    set32(c.r[2], 0u + 9u);
    c.budget -= 1;
L_003C8ED0:
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] + 32572u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 6;
L_003C8EE8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003C8EEC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C8F00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = ld8((c.r[17].w[0] + 2u));  if (t) { goto L_003C8F7C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 4u), 0u);  goto L_003C8F7C; }
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 17872u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x003C8000u < 16384u) { entry = entries_00B2[(t - 0x003C8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003C8F50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8F58u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 76u, depth + 1u); else { c.pc = 0x003C89C8u; return; } if (c.pc != 0x003C8F58u) [[unlikely]] return; }
L_003C8F58:
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] + 32572u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 6;
L_003C8F70:
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003C8F78:
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 1;
L_003C8F7C:
    set32(c.r[2], c.r[4].w[0] << 24);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.budget -= 5;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], c.r[4].w[0] << 24);  goto L_003C903C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8F98u); set32(c.r[4], 0u + 8192u);  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003C8F98u) [[unlikely]] return; }
L_003C8F98:
    c.r[5].d[0] = ld64((c.r[17].w[0] + 40u));
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8FACu); c.r[5].d[0] = c.r[5].d[0] << 11;  if (depth < kMaxDepth) unit_00B2(c, 201u, depth + 1u); else { c.pc = 0x003C9748u; return; } if (c.pc != 0x003C8FACu) [[unlikely]] return; }
L_003C8FAC:
    set32(c.r[4], 0u + 8193u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8FB8u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003C8FB8u) [[unlikely]] return; }
L_003C8FB8:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; set32(c.r[2], 0u + 9u);  if (t) { goto L_003C8FD0; } }
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[17].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 4;
L_003C8FD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8FD8u); set32(c.r[4], 0u + 8448u);  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003C8FD8u) [[unlikely]] return; }
L_003C8FD8:
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8FE8u); set32(c.r[6], ld32((c.r[17].w[0] + 32u)));  if (depth < kMaxDepth) unit_00B2(c, 223u, depth + 1u); else { c.pc = 0x003C9938u; return; } if (c.pc != 0x003C8FE8u) [[unlikely]] return; }
L_003C8FE8:
    set32(c.r[4], 0u + 8449u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8FF4u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003C8FF4u) [[unlikely]] return; }
L_003C8FF4:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0; set32(c.r[2], 0u + 2u);  if (t) { goto L_003C9020; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] + 32568u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[4].w[0] << 24);  if (t) { goto L_003C903C; } }
L_003C9020:
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[2], 0u + 9u);
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 9u);
    st32((c.r[17].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], c.r[4].w[0] << 24);
    c.budget -= 7;
L_003C903C:
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003C90BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9054u); set32(c.r[4], 0u + 8704u);  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003C9054u) [[unlikely]] return; }
L_003C9054:
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9064u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 208u, depth + 1u); else { c.pc = 0x003C9800u; return; } if (c.pc != 0x003C9064u) [[unlikely]] return; }
L_003C9064:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_003C9088; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9074u); set32(c.r[4], 0u + 8705u);  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003C9074u) [[unlikely]] return; }
L_003C9074:
    set32(c.r[2], 0u + 9u);
    set32(c.r[3], 0u - 1u);
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_003C90B8; } }
L_003C9088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9090u); set32(c.r[4], 0u + 8706u);  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003C9090u) [[unlikely]] return; }
L_003C9090:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003C90BC; } }
    set32(c.r[2], 0u + 3u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] + 32572u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 7;
L_003C90B8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003C90BC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C90D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[3].w[0] + 32540u)));  c.pc = t; return; }
L_003C90E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[4], c.r[19].w[0] + 32540u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C910Cu); set32(c.r[17], c.r[2].w[0] + 32480u);  if (depth < kMaxDepth) unit_00B4(c, 398u, depth + 1u); else { c.pc = 0x003D3D38u; return; } if (c.pc != 0x003C910Cu) [[unlikely]] return; }
L_003C910C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003C91B0; } }
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[3].d[0] = ld8((c.r[17].w[0] + 1u));  if (t) { goto L_003C915C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[18], c.r[2].w[0] + 32544u);
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[16].d[0];  if (t) { goto L_003C913C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C913Cu);  if (depth < kMaxDepth) unit_00B4(c, 320u, depth + 1u); else { c.pc = 0x003D32D8u; return; } if (c.pc != 0x003C913Cu) [[unlikely]] return; }
L_003C913C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9144u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 106u, depth + 1u); else { c.pc = 0x003C8D30u; return; } if (c.pc != 0x003C9144u) [[unlikely]] return; }
L_003C9144:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[16].d[0]) { c.r[3].d[0] = ld8((c.r[17].w[0] + 1u));  goto L_003C915C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9158u);  if (depth < kMaxDepth) unit_00B4(c, 325u, depth + 1u); else { c.pc = 0x003D3350u; return; } if (c.pc != 0x003C9158u) [[unlikely]] return; }
L_003C9158:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1u));
    c.budget -= 1;
L_003C915C:
    set32(c.r[2], c.r[3].w[0] << 24);
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.budget -= 5;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[19].w[0] + 32540u), 0u);  goto L_003C91B0; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[18], 0u + 1u);
    set32(c.r[16], c.r[3].w[0] + 32548u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { goto L_003C9190; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9190u);  if (depth < kMaxDepth) unit_00B4(c, 320u, depth + 1u); else { c.pc = 0x003D32D8u; return; } if (c.pc != 0x003C9190u) [[unlikely]] return; }
L_003C9190:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9198u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 124u, depth + 1u); else { c.pc = 0x003C8F00u; return; } if (c.pc != 0x003C9198u) [[unlikely]] return; }
L_003C9198:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[18].d[0]) { st32((c.r[19].w[0] + 32540u), 0u);  goto L_003C91B0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C91ACu);  if (depth < kMaxDepth) unit_00B4(c, 325u, depth + 1u); else { c.pc = 0x003D3350u; return; } if (c.pc != 0x003C91ACu) [[unlikely]] return; }
L_003C91AC:
    st32((c.r[19].w[0] + 32540u), 0u);
    c.budget -= 1;
L_003C91B0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C91D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 32481u)));  c.pc = t; return; }
L_003C91E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[3].w[0] + 32532u)));  c.pc = t; return; }
L_003C91F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], c.r[2].w[0] + 32560u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[2].w[0]), 0u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[7], 0u + 1u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x19640000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], ld32((c.r[8].w[0] + 32540u)));
    c.budget -= 12;
L_003C9220:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[7].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003C9250; } }
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[3].d[0] = c.r[6].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[8].w[0] + 32540u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C9220u | kUnwind; return; } goto L_003C9220; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C924Cu); set32(c.r[4], c.r[4].w[0] + 17912u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003C924Cu) [[unlikely]] return; }
L_003C924C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003C9250:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C9258:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C926Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 150u, depth + 1u); else { c.pc = 0x003C91F0u; return; } if (c.pc != 0x003C926Cu) [[unlikely]] return; }
L_003C926C:
    set32(c.r[16], c.r[16].w[0] << 24);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] + 32544u);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 24));
    st32((c.r[2].w[0]), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C9290:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C92A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 150u, depth + 1u); else { c.pc = 0x003C91F0u; return; } if (c.pc != 0x003C92A4u) [[unlikely]] return; }
L_003C92A4:
    set32(c.r[16], c.r[16].w[0] << 24);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] + 32548u);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 24));
    st32((c.r[2].w[0]), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C92C8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C92DCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 150u, depth + 1u); else { c.pc = 0x003C91F0u; return; } if (c.pc != 0x003C92DCu) [[unlikely]] return; }
L_003C92DC:
    set32(c.r[16], c.r[16].w[0] << 24);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] + 32552u);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 24));
    st32((c.r[2].w[0]), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C9300:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9314u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 150u, depth + 1u); else { c.pc = 0x003C91F0u; return; } if (c.pc != 0x003C9314u) [[unlikely]] return; }
L_003C9314:
    set32(c.r[16], c.r[16].w[0] << 24);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] + 32556u);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 24));
    st32((c.r[2].w[0]), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C9338:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], 0u + 9u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 32482u), static_cast<std::uint8_t>(c.r[2].w[0]));  c.pc = t; return; }
L_003C9348:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C935Cu); set32(c.r[4], 0u + 8960u);  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003C935Cu) [[unlikely]] return; }
L_003C935C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9364u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0007(c, 181u, depth + 1u); else { c.pc = 0x0011DD50u; return; } if (c.pc != 0x003C9364u) [[unlikely]] return; }
L_003C9364:
    set32(c.r[4], 0u + 8961u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9370u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003C9370u) [[unlikely]] return; }
L_003C9370:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C9388:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[16], c.r[2].w[0] + 32480u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; st64((c.r[29].w[0] + 24u), c.r[31].d[0]);  if (t) { goto L_003C9410; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C93B0u);  if (depth < kMaxDepth) unit_00B4(c, 316u, depth + 1u); else { c.pc = 0x003D3278u; return; } if (c.pc != 0x003C93B0u) [[unlikely]] return; }
L_003C93B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C93B8u); set32(c.r[4], 0u + 9216u);  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003C93B8u) [[unlikely]] return; }
L_003C93B8:
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C93C8u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 208u, depth + 1u); else { c.pc = 0x003C9800u; return; } if (c.pc != 0x003C93C8u) [[unlikely]] return; }
L_003C93C8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[4], 0u + 9218u);  if (t) { goto L_003C93E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C93D8u); set32(c.r[4], 0u + 9217u);  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003C93D8u) [[unlikely]] return; }
L_003C93D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C9408; } }
L_003C93E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C93E8u);  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003C93E8u) [[unlikely]] return; }
L_003C93E8:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C9408; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C93FCu);  if (depth < kMaxDepth) unit_00B4(c, 317u, depth + 1u); else { c.pc = 0x003D3290u; return; } if (c.pc != 0x003C93FCu) [[unlikely]] return; }
L_003C93FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003C9414; } }
    c.budget -= 1;
L_003C9408:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9410u);  if (depth < kMaxDepth) unit_00B4(c, 317u, depth + 1u); else { c.pc = 0x003D3290u; return; } if (c.pc != 0x003C9410u) [[unlikely]] return; }
L_003C9410:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C9414:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C9428:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 32481u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003C9450; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9448u);  if (depth < kMaxDepth) unit_00B2(c, 162u, depth + 1u); else { c.pc = 0x003C9348u; return; } if (c.pc != 0x003C9448u) [[unlikely]] return; }
L_003C9448:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] << 1);  if (t) { goto L_003C9468; } }
L_003C9450:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C9468; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C9388u | kUnwind; return; } goto L_003C9388; }
L_003C9468:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C9478:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9490u); set32(c.r[4], c.r[4].w[0] + 17960u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003C9490u) [[unlikely]] return; }
L_003C9490:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 32540u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C94A4u); set32(c.r[4], c.r[4].w[0] + 17976u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003C94A4u) [[unlikely]] return; }
L_003C94A4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[4], c.r[4].w[0] + 18008u);
    set32(c.r[2], c.r[2].w[0] + 32564u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C94BCu); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003C94BCu) [[unlikely]] return; }
L_003C94BC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[4], c.r[4].w[0] + 18040u);
    set32(c.r[16], c.r[2].w[0] + 32480u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C94D4u); c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003C94D4u) [[unlikely]] return; }
L_003C94D4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 18072u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[5].d[0] = ld8((c.r[16].w[0] + 1u));  if (t) { goto L_003C94F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C94F4u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003C94F4u) [[unlikely]] return; }
L_003C94F4:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 1u));
    c.budget -= 1;
L_003C94F8:
    set32(c.r[2], c.r[5].w[0] << 24);
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_003C9518; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9518u); set32(c.r[4], c.r[4].w[0] + 18104u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003C9518u) [[unlikely]] return; }
L_003C9518:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9520u);  if (depth < kMaxDepth) unit_00B2(c, 174u, depth + 1u); else { c.pc = 0x003C9428u; return; } if (c.pc != 0x003C9520u) [[unlikely]] return; }
L_003C9520:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9530u); set32(c.r[4], c.r[4].w[0] + 18136u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003C9530u) [[unlikely]] return; }
L_003C9530:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C9548:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] + 32572u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[3].w[0])));  c.pc = t; return; }
L_003C9558:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] + 32568u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[3].w[0])));  c.pc = t; return; }
L_003C9568:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] + 32588u);
    set32(c.r[2], c.r[2].w[0] + 32584u);
    set32(c.r[5], ld32((c.r[3].w[0])));
    st32((c.r[2].w[0]), c.r[5].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0]), c.r[4].w[0]);  c.pc = t; return; }
L_003C9588:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] + 32588u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[3].w[0])));  c.pc = t; return; }
L_003C9598:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; st32((c.r[2].w[0] + 32592u), c.r[4].w[0]);  if (t) { goto L_003C95C8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 18168u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010DCC0u | kUnwind; return; } [[clang::musttail]] return unit_0003(c, 243u, depth); }
L_003C95C8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C95D8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[3].w[0] + 32592u)));  c.pc = t; return; }
L_003C95E8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[4].w[0] << 24);
    set32(c.r[3], c.r[3].w[0] + 32548u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] != c.r[5].d[0]; st32((c.r[6].w[0] + 32596u), c.r[2].w[0]);  if (t) { goto L_003C9630; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 18200u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010DCC0u | kUnwind; return; } [[clang::musttail]] return unit_0003(c, 243u, depth); }
L_003C9630:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C9640:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[3].w[0] + 32596u)));  c.pc = t; return; }
L_003C9650:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], ld32((c.r[2].w[0] + 32596u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003C9678; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B4(c, 320u, depth); }
L_003C9678:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C9688:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], ld32((c.r[2].w[0] + 32596u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003C96B0; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B4(c, 325u, depth); }
L_003C96B0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C96C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], c.r[2].w[0] + 32540u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C96E8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 398u, depth + 1u); else { c.pc = 0x003D3D38u; return; } if (c.pc != 0x003C96E8u) [[unlikely]] return; }
L_003C96E8:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull | 38400ull;  if (t) { goto L_003C972C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C96FCu);  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003C96FCu) [[unlikely]] return; }
L_003C96FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9704u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 269u, depth + 1u); else { c.pc = 0x0011E940u; return; } if (c.pc != 0x003C9704u) [[unlikely]] return; }
L_003C9704:
    c.r[4].d[0] = 0ull | 38401ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9710u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003C9710u) [[unlikely]] return; }
L_003C9710:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { st32((c.r[18].w[0]), 0u);  goto L_003C9728; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9720u);  if (depth < kMaxDepth) unit_0007(c, 280u, depth + 1u); else { c.pc = 0x0011EAA8u; return; } if (c.pc != 0x003C9720u) [[unlikely]] return; }
L_003C9720:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[18].w[0]), 0u);
    c.budget -= 2;
L_003C9728:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003C972C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C9748:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C976Cu); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 193u, depth + 1u); else { c.pc = 0x003C9650u; return; } if (c.pc != 0x003C976Cu) [[unlikely]] return; }
L_003C976C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[7], ld32((c.r[2].w[0] + 32592u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 8;
    { const bool t = c.r[7].d[0] != c.r[3].d[0]; c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003C97B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9794u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 302u, depth + 1u); else { c.pc = 0x00112360u; return; } if (c.pc != 0x003C9794u) [[unlikely]] return; }
L_003C9794:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 18224u);
    c.budget -= 5;
    { const bool t = c.r[16].sd[0] >= 0; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003C97DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C97B0u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003C97B0u) [[unlikely]] return; }
L_003C97B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C97DC; } }
L_003C97B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C97C0u);  if (depth < kMaxDepth) unit_0004(c, 17u, depth + 1u); else { c.pc = 0x001101C8u; return; } if (c.pc != 0x003C97C0u) [[unlikely]] return; }
L_003C97C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 18256u);
    c.budget -= 5;
    { const bool t = c.r[16].sd[0] >= 0; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003C97DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C97DCu);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003C97DCu) [[unlikely]] return; }
L_003C97DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C97E4u);  if (depth < kMaxDepth) unit_00B2(c, 194u, depth + 1u); else { c.pc = 0x003C9688u; return; } if (c.pc != 0x003C97E4u) [[unlikely]] return; }
L_003C97E4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C9800:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9824u); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 193u, depth + 1u); else { c.pc = 0x003C9650u; return; } if (c.pc != 0x003C9824u) [[unlikely]] return; }
L_003C9824:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9834u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 74u, depth + 1u); else { c.pc = 0x00110920u; return; } if (c.pc != 0x003C9834u) [[unlikely]] return; }
L_003C9834:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 18288u);
    c.budget -= 5;
    { const bool t = c.r[16].sd[0] >= 0; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003C9850; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9850u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003C9850u) [[unlikely]] return; }
L_003C9850:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9858u);  if (depth < kMaxDepth) unit_00B2(c, 194u, depth + 1u); else { c.pc = 0x003C9688u; return; } if (c.pc != 0x003C9858u) [[unlikely]] return; }
L_003C9858:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C9878:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9894u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 193u, depth + 1u); else { c.pc = 0x003C9650u; return; } if (c.pc != 0x003C9894u) [[unlikely]] return; }
L_003C9894:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C98A0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 464u, depth + 1u); else { c.pc = 0x0010FDC0u; return; } if (c.pc != 0x003C98A0u) [[unlikely]] return; }
L_003C98A0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 18320u);
    c.budget -= 5;
    { const bool t = c.r[16].sd[0] >= 0; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003C98BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C98BCu);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003C98BCu) [[unlikely]] return; }
L_003C98BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C98C4u);  if (depth < kMaxDepth) unit_00B2(c, 194u, depth + 1u); else { c.pc = 0x003C9688u; return; } if (c.pc != 0x003C98C4u) [[unlikely]] return; }
L_003C98C4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C98E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C98F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 193u, depth + 1u); else { c.pc = 0x003C9650u; return; } if (c.pc != 0x003C98F4u) [[unlikely]] return; }
L_003C98F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C98FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 4u, depth + 1u); else { c.pc = 0x00110048u; return; } if (c.pc != 0x003C98FCu) [[unlikely]] return; }
L_003C98FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 18352u);
    c.budget -= 5;
    { const bool t = c.r[16].sd[0] >= 0; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003C9918; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9918u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003C9918u) [[unlikely]] return; }
L_003C9918:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9920u);  if (depth < kMaxDepth) unit_00B2(c, 194u, depth + 1u); else { c.pc = 0x003C9688u; return; } if (c.pc != 0x003C9920u) [[unlikely]] return; }
L_003C9920:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C9938:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C995Cu); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 193u, depth + 1u); else { c.pc = 0x003C9650u; return; } if (c.pc != 0x003C995Cu) [[unlikely]] return; }
L_003C995C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C996Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 34u, depth + 1u); else { c.pc = 0x00110400u; return; } if (c.pc != 0x003C996Cu) [[unlikely]] return; }
L_003C996C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 18384u);
    c.budget -= 5;
    { const bool t = c.r[16].sd[0] >= 0; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003C9988; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9988u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003C9988u) [[unlikely]] return; }
L_003C9988:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9990u);  if (depth < kMaxDepth) unit_00B2(c, 194u, depth + 1u); else { c.pc = 0x003C9688u; return; } if (c.pc != 0x003C9990u) [[unlikely]] return; }
L_003C9990:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C99B0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 80u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    c.budget -= 11;
    if (c.r[4].d[0] != c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_003C9D14; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; c.r[3].d[0] = ld8((c.r[18].w[0] + 2u));  if (t) { goto L_003C9A8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C99F0u); set32(c.r[4], ld32((c.r[18].w[0] + 44u)));  if (depth < kMaxDepth) unit_0002(c, 616u, depth + 1u); else { c.pc = 0x0010BFC0u; return; } if (c.pc != 0x003C99F0u) [[unlikely]] return; }
L_003C99F0:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[3].d[0] = ld8((c.r[18].w[0] + 2u));  goto L_003C9A8C; }
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[16], c.r[18].w[0] + 12u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9A18u); set32(c.r[17], c.r[18].w[0] + 20u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C9A18u) [[unlikely]] return; }
L_003C9A18:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[5], 0u + 1u);
    st32((c.r[18].w[0] + 16u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9A38u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C9A38u) [[unlikely]] return; }
L_003C9A38:
    st32((c.r[17].w[0]), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    st32((c.r[18].w[0] + 24u), 0u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[18].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_003C9A88; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9A64u); set32(c.r[4], c.r[4].w[0] + 18464u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003C9A64u) [[unlikely]] return; }
L_003C9A64:
    c.budget -= 1;
L_003C9A68:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C9A68u | kUnwind; return; } goto L_003C9A68; } }
    c.budget -= 1;
L_003C9A88:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C9A8C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_003C9D14; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9AB4u); c.r[6].d[0] = c.r[6].d[0] | 65535ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C9AB4u) [[unlikely]] return; }
L_003C9AB4:
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[19], c.r[29].w[0] + 32u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9AD8u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C9AD8u) [[unlikely]] return; }
L_003C9AD8:
    set32(c.r[5], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[17], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[16], c.r[29].w[0] + 16u);
    set32(c.r[8], ld32((c.r[29].w[0] + 4u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[8].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    if (c.r[5].d[0] == 0ull) { breakpoint(c, 0x003C9AFCu);  goto L_003C9B00; }
L_003C9B00:
    if (c.r[3].d[0] != 0) c.r[17].d[0] = c.r[8].d[0];
    mmi::div(c, 0, c.r[17].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9B18u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 230u, depth + 1u); else { c.pc = 0x003D2388u; return; } if (c.pc != 0x003C9B18u) [[unlikely]] return; }
L_003C9B18:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9B30u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C9B30u) [[unlikely]] return; }
L_003C9B30:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[16], c.r[29].w[0] + 48u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9B48u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 230u, depth + 1u); else { c.pc = 0x003D2388u; return; } if (c.pc != 0x003C9B48u) [[unlikely]] return; }
L_003C9B48:
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9B60u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C9B60u) [[unlikely]] return; }
L_003C9B60:
    c.budget -= 2;
    if (c.r[17].sd[0] <= 0) { c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_003C9D14; }
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & 63ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_003C9BB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9B80u); set32(c.r[4], c.r[4].w[0] + 18496u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003C9B80u) [[unlikely]] return; }
L_003C9B80:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[4], c.r[4].w[0] + 18536u);
    set32(c.r[6], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9B98u); set32(c.r[7], ld32((c.r[29].w[0] + 4u)));  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003C9B98u) [[unlikely]] return; }
L_003C9B98:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C9B98u | kUnwind; return; } goto L_003C9B98; } }
    c.budget -= 1;
L_003C9BB8:
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.r[2].d[0] = c.r[4].d[0] & 63ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 32u)));  goto L_003C9C10; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9BD4u); set32(c.r[4], c.r[4].w[0] + 18584u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003C9BD4u) [[unlikely]] return; }
L_003C9BD4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[4], c.r[4].w[0] + 18536u);
    set32(c.r[6], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9BECu); set32(c.r[7], ld32((c.r[29].w[0] + 4u)));  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003C9BECu) [[unlikely]] return; }
L_003C9BEC:
    c.budget -= 1;
L_003C9BF0:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C9BF0u | kUnwind; return; } goto L_003C9BF0; } }
    c.budget -= 1;
L_003C9C10:
    c.r[2].d[0] = c.r[2].d[0] & 63ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[4].w[0] + c.r[3].w[0]);  if (t) { goto L_003C9C60; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9C28u); set32(c.r[4], c.r[4].w[0] + 18624u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003C9C28u) [[unlikely]] return; }
L_003C9C28:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[4], c.r[4].w[0] + 18536u);
    set32(c.r[6], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9C40u); set32(c.r[7], ld32((c.r[29].w[0] + 4u)));  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003C9C40u) [[unlikely]] return; }
L_003C9C40:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C9C40u | kUnwind; return; } goto L_003C9C40; } }
    c.budget -= 1;
L_003C9C60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9C68u); set32(c.r[5], c.r[5].w[0] - 1u);  if (depth < kMaxDepth) unit_0003(c, 60u, depth + 1u); else { c.pc = 0x0010C518u; return; } if (c.pc != 0x003C9C68u) [[unlikely]] return; }
L_003C9C68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[4], c.r[18].w[0] + 28u);
    set32(c.r[7], ld32((c.r[29].w[0] + 32u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[18].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[18].w[0] + 32u), c.r[7].w[0]);
    st32((c.r[18].w[0] + 36u), c.r[6].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9C9Cu); st32((c.r[18].w[0] + 40u), 0u);  if (depth < kMaxDepth) unit_0002(c, 620u, depth + 1u); else { c.pc = 0x0010BFE0u; return; } if (c.pc != 0x003C9C9Cu) [[unlikely]] return; }
L_003C9C9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[18].w[0] + 44u), c.r[2].w[0]);  if (t) { goto L_003C9CE8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9CB0u); set32(c.r[4], c.r[4].w[0] + 18664u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003C9CB0u) [[unlikely]] return; }
L_003C9CB0:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9CC8u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C9CC8u) [[unlikely]] return; }
L_003C9CC8:
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9CE0u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C9CE0u) [[unlikely]] return; }
L_003C9CE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_003C9D14; } }
L_003C9CE8:
    ldl(c.r[4], (c.r[29].w[0] + 7u));
    ldr(c.r[4], (c.r[29].w[0]));
    sdl(c.r[4], (c.r[18].w[0] + 19u));
    sdr(c.r[4], (c.r[18].w[0] + 12u));
    set32(c.r[2], 0u + 1u);
    ldl(c.r[4], (c.r[19].w[0] + 7u));
    ldr(c.r[4], (c.r[19].w[0]));
    sdl(c.r[4], (c.r[18].w[0] + 27u));
    sdr(c.r[4], (c.r[18].w[0] + 20u));
    st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 11;
L_003C9D14:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 88u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003C9D30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));  c.pc = t; return; }
L_003C9D38:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[2].w[0] + 32608u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], 0u + 31u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], 0u + 1u);
    c.budget -= 10;
L_003C9D60:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_003C9D78; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9D74u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 228u, depth + 1u); else { c.pc = 0x003C99B0u; return; } if (c.pc != 0x003C9D74u) [[unlikely]] return; }
L_003C9D74:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_003C9D78:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C9D60u | kUnwind; return; } goto L_003C9D60; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003CA8C8; }
L_003C9D98:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[2].w[0] + 32604u);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[4].w[0] + 18704u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9DBCu); set32(c.r[5], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003C9DBCu) [[unlikely]] return; }
L_003C9DBC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[4].w[0] + 32608u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], 0u + 2048u);  if (t) { goto L_003C9DE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9DDCu);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003C9DDCu) [[unlikely]] return; }
L_003C9DDC:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003C9DE0:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 18728u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010DCC0u | kUnwind; return; } [[clang::musttail]] return unit_0003(c, 243u, depth); }
L_003C9E00:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] + 32604u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0]), c.r[2].w[0]);  c.pc = t; return; }
L_003C9E18:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9E3Cu); c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 117u, depth + 1u); else { c.pc = 0x003D0E00u; return; } if (c.pc != 0x003C9E3Cu) [[unlikely]] return; }
L_003C9E3C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[17], c.r[2].w[0] + 32608u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003C9E7C; } }
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_003C9E58:
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 64u);
    c.r[2].d[0] = c.r[5].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] << 6);  if (t) { goto L_003C9E7C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[3].w[0] + c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C9E58u | kUnwind; return; } goto L_003C9E58; } }
L_003C9E7C:
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003C9EA8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[5], 0u + 32u);
    set32(c.r[4], c.r[4].w[0] + 18744u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9E9Cu); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003C9E9Cu) [[unlikely]] return; }
L_003C9E9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003C9EDC; } }
    c.budget -= 1;
L_003C9EA8:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9EB8u); set32(c.r[16], 0u + 64u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003C9EB8u) [[unlikely]] return; }
L_003C9EB8:
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 56u), c.r[16].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[18].w[0]);
    st32((c.r[17].w[0] + 8u), c.r[19].w[0]);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 48u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 52u), 0u);
    c.budget -= 9;
L_003C9EDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9EE4u);  if (depth < kMaxDepth) unit_00B4(c, 118u, depth + 1u); else { c.pc = 0x003D0E18u; return; } if (c.pc != 0x003C9EE4u) [[unlikely]] return; }
L_003C9EE4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C9F08:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9F1Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 117u, depth + 1u); else { c.pc = 0x003D0E00u; return; } if (c.pc != 0x003C9F1Cu) [[unlikely]] return; }
L_003C9F1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B4(c, 118u, depth); }
L_003C9F30:
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 60u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));  c.pc = t; return; }
L_003C9F40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003C9FDC; } }
    c.budget -= 1;
L_003C9F70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9F78u); set32(c.r[4], ld32((c.r[18].w[0] + 44u)));  if (depth < kMaxDepth) unit_0002(c, 616u, depth + 1u); else { c.pc = 0x0010BFC0u; return; } if (c.pc != 0x003C9F78u) [[unlikely]] return; }
L_003C9F78:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[16], c.r[18].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C9F70u | kUnwind; return; } goto L_003C9F70; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9F9Cu); set32(c.r[17], c.r[18].w[0] + 20u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C9F9Cu) [[unlikely]] return; }
L_003C9F9C:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[5], 0u + 1u);
    st32((c.r[18].w[0] + 16u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9FBCu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C9FBCu) [[unlikely]] return; }
L_003C9FBC:
    st32((c.r[17].w[0]), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 24u), 0u);
    st32((c.r[18].w[0] + 60u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
L_003C9FDC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C9FF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA014u); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 117u, depth + 1u); else { c.pc = 0x003D0E00u; return; } if (c.pc != 0x003CA014u) [[unlikely]] return; }
L_003CA014:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;  if (t) { goto L_003CA038; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_003CA09C; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[16].w[0] - 1024u);  if (t) { goto L_003CA058; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[2].w[0] << 2);  if (t) { goto L_003CA068; } }
L_003CA038:
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA04Cu); set32(c.r[7], ld32((c.r[17].w[0] + 12u)));  if (depth < kMaxDepth) unit_00B2(c, 297u, depth + 1u); else { c.pc = 0x003CA2D8u; return; } if (c.pc != 0x003CA04Cu) [[unlikely]] return; }
L_003CA04C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003CA09C; } }
    c.budget -= 1;
L_003CA058:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA060u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_00B2(c, 304u, depth + 1u); else { c.pc = 0x003CA470u; return; } if (c.pc != 0x003CA060u) [[unlikely]] return; }
L_003CA060:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CA09C; } }
L_003CA068:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(64ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CA09C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] - 29392u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], c.r[18].w[0] >> 2);  if (t) { goto L_003CA09C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] - 29136u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA09Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CA09Cu) [[unlikely]] return; }
L_003CA09C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA0A4u);  if (depth < kMaxDepth) unit_00B4(c, 118u, depth + 1u); else { c.pc = 0x003D0E18u; return; } if (c.pc != 0x003CA0A4u) [[unlikely]] return; }
L_003CA0A4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CA0C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA0D0u);  if (depth < kMaxDepth) unit_0002(c, 466u, depth + 1u); else { c.pc = 0x0010BB10u; return; } if (c.pc != 0x003CA0D0u) [[unlikely]] return; }
L_003CA0D0:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA0DCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 368u, depth + 1u); else { c.pc = 0x0010EFA8u; return; } if (c.pc != 0x003CA0DCu) [[unlikely]] return; }
L_003CA0DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA0E4u);  if (depth < kMaxDepth) unit_0002(c, 466u, depth + 1u); else { c.pc = 0x0010BB10u; return; } if (c.pc != 0x003CA0E4u) [[unlikely]] return; }
L_003CA0E4:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA0F0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 368u, depth + 1u); else { c.pc = 0x0010EFA8u; return; } if (c.pc != 0x003CA0F0u) [[unlikely]] return; }
L_003CA0F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[5], ld32((c.r[2].w[0] - 30876u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[6], c.r[6].w[0] - 24592u);
    set32(c.r[7], c.r[7].w[0] - 29648u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA120u); set32(c.r[4], c.r[4].w[0] - 29720u);  if (depth < kMaxDepth) unit_0003(c, 371u, depth + 1u); else { c.pc = 0x0010F040u; return; } if (c.pc != 0x003CA120u) [[unlikely]] return; }
L_003CA120:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[2], c.r[2].w[0] - 30872u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA138u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 398u, depth + 1u); else { c.pc = 0x0010F458u; return; } if (c.pc != 0x003CA138u) [[unlikely]] return; }
L_003CA138:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003CA148:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] - 11264u);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[16], c.r[16].w[0] - 11008u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] - 29760u);
    st32((c.r[2].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[5], 0u + 2u);
    st32((c.r[2].w[0] + 8u), c.r[6].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 12u), c.r[7].w[0]);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], 0u + 16u);
    set32(c.r[10], 0u + 4u);
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA1A0u); st32((c.r[29].w[0]), 0u);  if (depth < kMaxDepth) unit_0003(c, 354u, depth + 1u); else { c.pc = 0x0010ED78u; return; } if (c.pc != 0x003CA1A0u) [[unlikely]] return; }
L_003CA1A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CA1B8:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[7], c.r[7].w[0] - 11264u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[7].w[0]), c.r[4].w[0]);
    set32(c.r[4], c.r[2].w[0] - 29760u);
    set32(c.r[9], c.r[9].w[0] - 11008u);
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 4u);
    c.r[10].d[0] = 0ull + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA1F8u); st32((c.r[29].w[0]), 0u);  if (depth < kMaxDepth) unit_0003(c, 354u, depth + 1u); else { c.pc = 0x0010ED78u; return; } if (c.pc != 0x003CA1F8u) [[unlikely]] return; }
L_003CA1F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CA208:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[3], c.r[3].w[0] - 30864u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0]), c.r[2].w[0]);  c.pc = t; return; }
L_003CA220:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = c.r[6].sd[0] <= 0; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_003CA25C; } }
    set32(c.r[7], 0u - 86u);
    c.budget -= 2;
L_003CA240:
    set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CA240u | kUnwind; return; } goto L_003CA240; } }
L_003CA25C:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[16], c.r[16].w[0] - 30860u);
    set32(c.r[5], c.r[5].w[0] + 18816u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA274u); set32(c.r[6], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x003CA274u) [[unlikely]] return; }
L_003CA274:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CA290:
    set32(c.r[3], c.r[4].w[0] << 4);
    c.r[5].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_003CA2B4; } }
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[1], c.r[1].w[0] - 30848u);
    set32(c.r[2], c.r[1].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_003CA2B4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003CA2C0:
    st32((c.r[4].w[0] + 44u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 40u), 0u);  c.pc = t; return; }
L_003CA2D8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.r[18].d[0] & 63ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0] + 32u), c.r[31].d[0]);  if (t) { goto L_003CA318; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 18840u);  if (t) { goto L_003CA3A8; } }
    c.budget -= 1;
L_003CA318:
    c.r[2].d[0] = c.r[19].d[0] & 31ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] & 63ull;  if (t) { goto L_003CA330; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 18872u);  if (t) { goto L_003CA3A8; } }
L_003CA330:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[8].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;  if (t) { goto L_003CA348; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 18904u);  if (t) { goto L_003CA35C; } }
L_003CA348:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[8].w[0] << 4);  if (t) { goto L_003CA370; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[5].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 18928u);
    c.budget -= 3;
L_003CA35C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA364u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003CA364u) [[unlikely]] return; }
L_003CA364:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003CA454; } }
    c.budget -= 1;
L_003CA370:
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[16], c.r[16].w[0] - 30848u);
    set32(c.r[16], c.r[16].w[0] + c.r[3].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 8;
    { const bool t = c.r[8].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003CA454; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA398u);  if (depth < kMaxDepth) unit_00B2(c, 287u, depth + 1u); else { c.pc = 0x003CA148u; return; } if (c.pc != 0x003CA398u) [[unlikely]] return; }
L_003CA398:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_003CA3B8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[4].w[0] + 18952u);
    c.budget -= 2;
L_003CA3A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA3B0u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003CA3B0u) [[unlikely]] return; }
L_003CA3B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003CA454; } }
L_003CA3B8:
    set32(c.r[3], c.r[17].w[0] - 64u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[2], c.r[18].w[0] + c.r[3].w[0]);
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 28u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 24u), c.r[19].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), c.r[18].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA3F4u); st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003CA3F4u) [[unlikely]] return; }
L_003CA3F4:
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA40Cu); set32(c.r[5], c.r[5].w[0] + 63u);  if (depth < kMaxDepth) unit_0003(c, 60u, depth + 1u); else { c.pc = 0x0010C518u; return; } if (c.pc != 0x003CA40Cu) [[unlikely]] return; }
L_003CA40C:
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA424u); set32(c.r[5], c.r[5].w[0] + 63u);  if (depth < kMaxDepth) unit_0003(c, 66u, depth + 1u); else { c.pc = 0x0010C658u; return; } if (c.pc != 0x003CA424u) [[unlikely]] return; }
L_003CA424:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] - 24032u);
    set32(c.r[2], c.r[2].w[0] - 24056u);
    st32((c.r[16].w[0] + 40u), c.r[3].w[0]);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 44u), 0u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 12;
L_003CA454:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003CA470:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[17], 0u + 1u);  if (t) { goto L_003CA4AC; } }
L_003CA498:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA4A0u);  if (depth < kMaxDepth) unit_00B2(c, 332u, depth + 1u); else { c.pc = 0x003CA8C8u; return; } if (c.pc != 0x003CA4A0u) [[unlikely]] return; }
L_003CA4A0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CA498u | kUnwind; return; } goto L_003CA498; } }
L_003CA4AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA4B4u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00B2(c, 289u, depth + 1u); else { c.pc = 0x003CA1B8u; return; } if (c.pc != 0x003CA4B4u) [[unlikely]] return; }
L_003CA4B4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[6], 0u + 68u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00124ED8u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 49u, depth); }
L_003CA4D8:
    st32((c.r[4].w[0] + 36u), c.r[6].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 32u), c.r[5].w[0]);  c.pc = t; return; }
L_003CA4E8:
    st32((c.r[4].w[0] + 44u), c.r[6].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 40u), c.r[5].w[0]);  c.pc = t; return; }
L_003CA4F8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[3], c.r[3].w[0] - 30856u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 13;
    { const bool t = c.r[5].d[0] != c.r[4].d[0]; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_003CA580; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 60u)));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0])));  goto L_003CA584; }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA55Cu); set32(c.r[5], c.r[5].w[0] - 1u);  if (depth < kMaxDepth) unit_0003(c, 66u, depth + 1u); else { c.pc = 0x0010C658u; return; } if (c.pc != 0x003CA55Cu) [[unlikely]] return; }
L_003CA55C:
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA570u); set32(c.r[6], ld32((c.r[16].w[0] + 16u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CA570u) [[unlikely]] return; }
L_003CA570:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 60u)));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_003CA580:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003CA584:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65280ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 6;
    if (c.r[2].d[0] != c.r[4].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003CA648; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[17], ld32((c.r[2].w[0] - 30868u)));
    c.budget -= 5;
    if (c.r[17].d[0] != c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003CA648; }
    set32(c.r[6], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA5C4u); set32(c.r[5], ld32((c.r[16].w[0] + 12u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CA5C4u) [[unlikely]] return; }
L_003CA5C4:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA5F0u); set32(c.r[5], c.r[5].w[0] - 1u);  if (depth < kMaxDepth) unit_0003(c, 60u, depth + 1u); else { c.pc = 0x0010C518u; return; } if (c.pc != 0x003CA5F0u) [[unlikely]] return; }
L_003CA5F0:
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA608u); set32(c.r[5], c.r[5].w[0] + 63u);  if (depth < kMaxDepth) unit_0003(c, 66u, depth + 1u); else { c.pc = 0x0010C658u; return; } if (c.pc != 0x003CA608u) [[unlikely]] return; }
L_003CA608:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 52u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 56u), c.r[5].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA63Cu); st32((c.r[16].w[0] + 60u), 0u);  if (depth < kMaxDepth) unit_0002(c, 620u, depth + 1u); else { c.pc = 0x0010BFE0u; return; } if (c.pc != 0x003CA63Cu) [[unlikely]] return; }
L_003CA63C:
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
L_003CA648:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CA658:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[2], ld32((c.r[19].w[0] - 30852u)));
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0] + 40u), c.r[31].d[0]);  if (t) { goto L_003CA718; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[17], c.r[16].w[0] - 29760u);
    set32(c.r[5], ld32((c.r[18].w[0] - 30876u)));
    c.budget -= 6;
L_003CA698:
    set32(c.r[4], c.r[16].w[0] - 29760u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA6A4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 342u, depth + 1u); else { c.pc = 0x0010EBA8u; return; } if (c.pc != 0x003CA6A4u) [[unlikely]] return; }
L_003CA6A4:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[17].w[0] + 36u)));  goto L_003CA6D8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA6B4u); set32(c.r[4], c.r[20].w[0] + 18992u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003CA6B4u) [[unlikely]] return; }
L_003CA6B4:
    c.budget -= 1;
L_003CA6B8:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CA6B8u | kUnwind; return; } goto L_003CA6B8; } }
    c.budget -= 1;
L_003CA6D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[19].w[0] - 30852u);  if (t) { goto L_003CA71C; } }
    set32(c.r[3], 0u - 1u);
    c.r[2].d[0] = 0ull | 65535ull;
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 4;
L_003CA6F0:
    c.budget -= 7;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], c.r[2].w[0] - 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CA6F0u | kUnwind; return; } goto L_003CA6F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[18].w[0] - 30876u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CA698u | kUnwind; return; } goto L_003CA698; } }
    c.budget -= 1;
L_003CA718:
    set32(c.r[3], c.r[19].w[0] - 30852u);
    c.budget -= 1;
L_003CA71C:
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003CA748:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], c.r[3].w[0] - 30852u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_003CA7A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[18], 0u + 1u);
    set32(c.r[16], c.r[2].w[0] - 30848u);
    set32(c.r[17], 0u + 7u);
    c.budget -= 5;
L_003CA788:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_003CA7A0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA79Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 304u, depth + 1u); else { c.pc = 0x003CA470u; return; } if (c.pc != 0x003CA79Cu) [[unlikely]] return; }
L_003CA79C:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_003CA7A0:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] + 68u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CA788u | kUnwind; return; } goto L_003CA788; } }
L_003CA7A8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CA7C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA7F8u); c.r[20].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 316u, depth + 1u); else { c.pc = 0x003D3278u; return; } if (c.pc != 0x003CA7F8u) [[unlikely]] return; }
L_003CA7F8:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_003CA830; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[8], c.r[7].w[0] - 11264u);
    c.budget -= 2;
L_003CA808:
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.r[5].d[0] = c.r[6].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != 0ull; st32((c.r[2].w[0]), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CA808u | kUnwind; return; } goto L_003CA808; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_003CA838; } }
L_003CA830:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 2;
L_003CA838:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[18], c.r[21].w[0] - 11008u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 29760u);
    set32(c.r[5], c.r[19].w[0] + 1024u);
    set32(c.r[7], c.r[7].w[0] - 11264u);
    set32(c.r[8], c.r[16].w[0] << 2);
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[10], c.r[17].w[0] << 2);
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA868u); st32((c.r[29].w[0]), 0u);  if (depth < kMaxDepth) unit_0003(c, 354u, depth + 1u); else { c.pc = 0x0010ED78u; return; } if (c.pc != 0x003CA868u) [[unlikely]] return; }
L_003CA868:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] <= 0; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_003CA898; } }
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_003CA878:
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[2].w[0] + c.r[9].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.r[5].d[0] = c.r[6].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != 0ull; st32((c.r[2].w[0]), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CA878u | kUnwind; return; } goto L_003CA878; } }
L_003CA898:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA8A0u);  if (depth < kMaxDepth) unit_00B4(c, 317u, depth + 1u); else { c.pc = 0x003D3290u; return; } if (c.pc != 0x003CA8A0u) [[unlikely]] return; }
L_003CA8A0:
    set32(c.r[2], ld32((c.r[21].w[0] - 11008u)));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003CA8C8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], 0u + 7u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA8E8u); set32(c.r[18], 0u + 1u);  if (depth < kMaxDepth) unit_00B4(c, 117u, depth + 1u); else { c.pc = 0x003D0E00u; return; } if (c.pc != 0x003CA8E8u) [[unlikely]] return; }
L_003CA8E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[16], c.r[2].w[0] - 30848u);
    c.budget -= 2;
L_003CA8F0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_003CA908; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA904u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 310u, depth + 1u); else { c.pc = 0x003CA4F8u; return; } if (c.pc != 0x003CA904u) [[unlikely]] return; }
L_003CA904:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_003CA908:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] + 68u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CA8F0u | kUnwind; return; } goto L_003CA8F0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00B4(c, 118u, depth); }
L_003CA928:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 28880u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA944u); set32(c.r[3], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00B3(c, 11u, depth + 1u); else { c.pc = 0x003CC170u; return; } if (c.pc != 0x003CA944u) [[unlikely]] return; }
L_003CA944:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[2], c.r[2].w[0] - 28856u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CA958:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], ld32((c.r[2].w[0] - 28876u)));
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003CA97C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA97Cu); set32(c.r[4], ld32((c.r[2].w[0] - 28872u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CA97Cu) [[unlikely]] return; }
L_003CA97C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CA988:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = 0ull | 32768ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA9A8u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003CA9A8u) [[unlikely]] return; }
L_003CA9A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[6], ld32((c.r[2].w[0] - 28868u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA9BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 139u, depth + 1u); else { c.pc = 0x0011D810u; return; } if (c.pc != 0x003CA9BCu) [[unlikely]] return; }
L_003CA9BC:
    c.r[4].d[0] = 0ull | 32769ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA9C8u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003CA9C8u) [[unlikely]] return; }
L_003CA9C8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CA9E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[2].w[0] - 28752u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 6;
L_003CA9F8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[7].d[0]) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_003CAA14; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_003CAA28; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_003CAA14:
    c.r[2].d[0] = c.r[5].sd[0] < 40ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 72u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CA9F8u | kUnwind; return; } goto L_003CA9F8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003CAA28:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003CAA30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003CAAE8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAA54u);  if (depth < kMaxDepth) unit_00B4(c, 318u, depth + 1u); else { c.pc = 0x003D32A8u; return; } if (c.pc != 0x003CAA54u) [[unlikely]] return; }
L_003CAA54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAA5Cu); set32(c.r[4], ld32((c.r[16].w[0] + 28u)));  if (depth < kMaxDepth) unit_00B2(c, 70u, depth + 1u); else { c.pc = 0x003C8968u; return; } if (c.pc != 0x003CAA5Cu) [[unlikely]] return; }
L_003CAA5C:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003CAAD8; }
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 19088u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x003C8000u < 16384u) { entry = entries_00B2[(t - 0x003C8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003CAA88:
    set32(c.r[2], 0u + 3u);
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003CAAC8; } }
L_003CAA98:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[16].w[0] + 20u), c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_003CAAC8; } }
    c.budget -= 1;
L_003CAAC0:
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 2;
L_003CAAC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAAD0u);  if (depth < kMaxDepth) unit_00B2(c, 56u, depth + 1u); else { c.pc = 0x003C8728u; return; } if (c.pc != 0x003CAAD0u) [[unlikely]] return; }
L_003CAAD0:
    st32((c.r[16].w[0] + 28u), 0u);
    c.budget -= 1;
L_003CAAD4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003CAAD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B4(c, 323u, depth); }
L_003CAAE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CAAF8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAB1Cu); set32(c.r[4], c.r[19].w[0] - 28864u);  if (depth < kMaxDepth) unit_00B4(c, 398u, depth + 1u); else { c.pc = 0x003D3D38u; return; } if (c.pc != 0x003CAB1Cu) [[unlikely]] return; }
L_003CAB1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);  if (t) { goto L_003CAB54; } }
    set32(c.r[18], 0u + 1u);
    set32(c.r[16], c.r[2].w[0] - 28752u);
    set32(c.r[17], 0u + 39u);
    c.budget -= 3;
L_003CAB30:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_003CAB48; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAB44u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 346u, depth + 1u); else { c.pc = 0x003CAA30u; return; } if (c.pc != 0x003CAB44u) [[unlikely]] return; }
L_003CAB44:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_003CAB48:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] + 72u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CAB30u | kUnwind; return; } goto L_003CAB30; } }
    st32((c.r[19].w[0] - 28864u), 0u);
    c.budget -= 1;
L_003CAB54:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003CAB70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st32((c.r[2].w[0] - 28876u), c.r[4].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] - 28872u), c.r[5].w[0]);  c.pc = t; return; }
L_003CAB88:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAB9Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 237u, depth + 1u); else { c.pc = 0x00127D00u; return; } if (c.pc != 0x003CAB9Cu) [[unlikely]] return; }
L_003CAB9C:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_003CABF0; } }
    set32(c.r[9], 0u + 47u);
    set32(c.r[8], 0u + 92u);
    set32(c.r[4], c.r[16].w[0] + c.r[6].w[0]);
    c.budget -= 4;
L_003CABB8:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[5].d[0] = c.r[6].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[9].d[0]; c.r[3].d[0] = ld8((c.r[4].w[0]));  if (t) { goto L_003CABD4; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[3].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 2;
L_003CABD4:
    set32(c.r[2], c.r[3].w[0] - 97u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(26ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] - 32u);  if (t) { goto L_003CABE8; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_003CABE8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CABB8u | kUnwind; return; } goto L_003CABB8; } }
L_003CABF0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CAC00:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 64u), c.r[31].d[0]);  if (t) { goto L_003CAC74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAC24u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 503u, depth + 1u); else { c.pc = 0x003CBD60u; return; } if (c.pc != 0x003CAC24u) [[unlikely]] return; }
L_003CAC24:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[17], c.r[3].w[0] - 25872u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003CAC70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAC44u);  if (depth < kMaxDepth) unit_00B2(c, 443u, depth + 1u); else { c.pc = 0x003CB5A8u; return; } if (c.pc != 0x003CAC44u) [[unlikely]] return; }
L_003CAC44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAC4Cu); c.r[4].d[0] = 0ull | 33024ull;  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003CAC4Cu) [[unlikely]] return; }
L_003CAC4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAC54u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 181u, depth + 1u); else { c.pc = 0x0011DD50u; return; } if (c.pc != 0x003CAC54u) [[unlikely]] return; }
L_003CAC54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAC5Cu); c.r[4].d[0] = 0ull | 33025ull;  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003CAC5Cu) [[unlikely]] return; }
L_003CAC5C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAC68u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 340u, depth + 1u); else { c.pc = 0x003CA988u; return; } if (c.pc != 0x003CAC68u) [[unlikely]] return; }
L_003CAC68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003CAC78; } }
L_003CAC70:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003CAC74:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003CAC78:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003CAC88:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 64u), c.r[31].d[0]);  if (t) { goto L_003CACB0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 19128u);  if (t) { goto L_003CAD2C; } }
    c.budget -= 1;
L_003CACB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CACB8u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 503u, depth + 1u); else { c.pc = 0x003CBD60u; return; } if (c.pc != 0x003CACB8u) [[unlikely]] return; }
L_003CACB8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[17], c.r[3].w[0] - 25872u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003CAD44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CACD8u);  if (depth < kMaxDepth) unit_00B2(c, 443u, depth + 1u); else { c.pc = 0x003CB5A8u; return; } if (c.pc != 0x003CACD8u) [[unlikely]] return; }
L_003CACD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CACE0u); c.r[4].d[0] = 0ull | 33280ull;  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003CACE0u) [[unlikely]] return; }
L_003CACE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CACE8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 181u, depth + 1u); else { c.pc = 0x0011DD50u; return; } if (c.pc != 0x003CACE8u) [[unlikely]] return; }
L_003CACE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CACF0u); c.r[4].d[0] = 0ull | 33281ull;  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003CACF0u) [[unlikely]] return; }
L_003CACF0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CACFCu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 340u, depth + 1u); else { c.pc = 0x003CA988u; return; } if (c.pc != 0x003CACFCu) [[unlikely]] return; }
L_003CACFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_003CAD40; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 25544u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_003CAD20; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAD20u); set32(c.r[4], c.r[4].w[0] + 19176u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003CAD20u) [[unlikely]] return; }
L_003CAD20:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] + 19216u);
    c.budget -= 3;
L_003CAD2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAD34u);  if (depth < kMaxDepth) unit_00B2(c, 338u, depth + 1u); else { c.pc = 0x003CA958u; return; } if (c.pc != 0x003CAD34u) [[unlikely]] return; }
L_003CAD34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003CAD44; } }
    c.budget -= 1;
L_003CAD40:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 1;
L_003CAD44:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003CAD58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] - 28752u);
    set32(c.r[4], 0u + 39u);
    c.budget -= 4;
L_003CAD68:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], c.r[3].w[0] + 72u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CAD68u | kUnwind; return; } goto L_003CAD68; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; return; }
L_003CAD90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], 0u + 72u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00124ED8u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 49u, depth); }
L_003CADB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.budget -= 8;
    { const bool t = c.r[17].d[0] != 0ull; st64((c.r[29].w[0] + 32u), c.r[31].d[0]);  if (t) { goto L_003CADE0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 19264u);  if (t) { goto L_003CAE18; } }
    c.budget -= 1;
L_003CADE0:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_003CADF8; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 19304u);  if (t) { goto L_003CAE18; } }
    c.budget -= 1;
L_003CADF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAE00u);  if (depth < kMaxDepth) unit_00B2(c, 378u, depth + 1u); else { c.pc = 0x003CAD58u; return; } if (c.pc != 0x003CAE00u) [[unlikely]] return; }
L_003CAE00:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[18], c.r[16].w[0] + 32u);  if (t) { goto L_003CAE28; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] + 19344u);
    c.budget -= 3;
L_003CAE18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAE20u);  if (depth < kMaxDepth) unit_00B2(c, 338u, depth + 1u); else { c.pc = 0x003CA958u; return; } if (c.pc != 0x003CAE20u) [[unlikely]] return; }
L_003CAE20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003CAF18; } }
L_003CAE28:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAE34u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 503u, depth + 1u); else { c.pc = 0x003CBD60u; return; } if (c.pc != 0x003CAE34u) [[unlikely]] return; }
L_003CAE34:
    set32(c.r[5], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003CAEC8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], c.r[2].w[0] - 25872u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAE54u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 443u, depth + 1u); else { c.pc = 0x003CB5A8u; return; } if (c.pc != 0x003CAE54u) [[unlikely]] return; }
L_003CAE54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 25544u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003CAE74; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAE74u); set32(c.r[4], c.r[4].w[0] + 19392u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003CAE74u) [[unlikely]] return; }
L_003CAE74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAE7Cu); c.r[4].d[0] = 0ull | 33536ull;  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003CAE7Cu) [[unlikely]] return; }
L_003CAE7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAE84u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 181u, depth + 1u); else { c.pc = 0x0011DD50u; return; } if (c.pc != 0x003CAE84u) [[unlikely]] return; }
L_003CAE84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAE8Cu); c.r[4].d[0] = 0ull | 33537ull;  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003CAE8Cu) [[unlikely]] return; }
L_003CAE8C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAE98u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 340u, depth + 1u); else { c.pc = 0x003CA988u; return; } if (c.pc != 0x003CAE98u) [[unlikely]] return; }
L_003CAE98:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));  goto L_003CAEC0; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAEB0u); set32(c.r[5], c.r[5].w[0] + 19432u);  if (depth < kMaxDepth) unit_00B2(c, 338u, depth + 1u); else { c.pc = 0x003CA958u; return; } if (c.pc != 0x003CAEB0u) [[unlikely]] return; }
L_003CAEB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAEB8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 380u, depth + 1u); else { c.pc = 0x003CAD90u; return; } if (c.pc != 0x003CAEB8u) [[unlikely]] return; }
L_003CAEB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003CAF18; } }
L_003CAEC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 36u)));  if (t) { goto L_003CAED0; } }
L_003CAEC8:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003CAED0:
    set32(c.r[2], c.r[5].w[0] + 2047u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] >> 11);
    set32(c.r[4], 0u + 1u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 20u), 0u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 14;
    { const bool t = c.r[19].d[0] != c.r[4].d[0]; st32((c.r[16].w[0] + 28u), 0u);  if (t) { goto L_003CAF14; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 3;
L_003CAF14:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003CAF18:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003CAF38:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_003CAF80; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));  goto L_003CAF68; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAF64u);  if (depth < kMaxDepth) unit_00B2(c, 410u, depth + 1u); else { c.pc = 0x003CB208u; return; } if (c.pc != 0x003CAF64u) [[unlikely]] return; }
L_003CAF64:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_003CAF68:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CAD90u | kUnwind; return; } goto L_003CAD90; }
L_003CAF80:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CAF90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003CAFB8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAFACu); set32(c.r[5], c.r[5].w[0] + 19480u);  if (depth < kMaxDepth) unit_00B2(c, 338u, depth + 1u); else { c.pc = 0x003CA958u; return; } if (c.pc != 0x003CAFACu) [[unlikely]] return; }
L_003CAFAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003CB018; } }
    c.budget -= 1;
L_003CAFB8:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_003CAFC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_003CAFF8; } }
L_003CAFC8:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_003CAFE0; } }
    set32(c.r[4], ld32((c.r[7].w[0] + 8u)));
    set32(c.r[2], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_003CAFFC; } }
L_003CAFE0:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; set32(c.r[4], ld32((c.r[7].w[0] + 8u)));  if (t) { goto L_003CAFFC; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_003CAFFC; } }
L_003CAFF8:
    set32(c.r[4], ld32((c.r[7].w[0] + 8u)));
    c.budget -= 1;
L_003CAFFC:
    set32(c.r[2], ld32((c.r[7].w[0] + 12u)));
    st32((c.r[7].w[0] + 20u), 0u);
    c.r[3].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] == 0) c.r[2].d[0] = c.r[4].d[0];
    c.r[4].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[4].d[0] != 0) c.r[2].d[0] = 0ull;
    st32((c.r[7].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 7;
L_003CB018:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CB028:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003CB050; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB044u); set32(c.r[5], c.r[5].w[0] + 19480u);  if (depth < kMaxDepth) unit_00B2(c, 338u, depth + 1u); else { c.pc = 0x003CA958u; return; } if (c.pc != 0x003CB044u) [[unlikely]] return; }
L_003CB044:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003CB054; } }
    c.budget -= 1;
L_003CB050:
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 1;
L_003CB054:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CB060:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.budget -= 10;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 32u), c.r[31].d[0]);  if (t) { goto L_003CB098; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 19480u);  if (t) { goto L_003CB0B8; } }
    c.budget -= 1;
L_003CB098:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] >= 0; c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_003CB0A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 19504u);  if (t) { goto L_003CB0B8; } }
L_003CB0A8:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));  goto L_003CB0C8; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[5], c.r[5].w[0] + 19536u);
    c.budget -= 2;
L_003CB0B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB0C0u);  if (depth < kMaxDepth) unit_00B2(c, 338u, depth + 1u); else { c.pc = 0x003CA958u; return; } if (c.pc != 0x003CB0C0u) [[unlikely]] return; }
L_003CB0C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003CB1E8; } }
L_003CB0C8:
    set32(c.r[19], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[19].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003CB1E8; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_003CB0E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003CB1E8; } }
    c.budget -= 1;
L_003CB0E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB0F0u);  if (depth < kMaxDepth) unit_00B2(c, 52u, depth + 1u); else { c.pc = 0x003C86A0u; return; } if (c.pc != 0x003CB0F0u) [[unlikely]] return; }
L_003CB0F0:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[16].w[0] + 28u), c.r[3].w[0]);  if (t) { goto L_003CB1E8; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[6], c.r[6].w[0] - 25552u);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[5].d[0] = ld8((c.r[6].w[0]));
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[16].w[0] + 68u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[7].d[0] = c.r[3].d[0];
    c.r[8].d[0] = ld8((c.r[6].w[0] + 1u));
    set32(c.r[5], c.r[7].w[0] << 11);
    set32(c.r[5], c.r[17].w[0] + c.r[5].w[0]);
    st8((c.r[16].w[0] + 69u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.r[2].d[0] = ld8((c.r[6].w[0] + 2u));
    st32((c.r[16].w[0] + 16u), c.r[7].w[0]);
    st8((c.r[16].w[0] + 70u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB150u); st32((c.r[16].w[0] + 24u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0003(c, 66u, depth + 1u); else { c.pc = 0x0010C658u; return; } if (c.pc != 0x003CB150u) [[unlikely]] return; }
L_003CB150:
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[8], c.r[16].w[0] + 68u);
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB170u); set32(c.r[7], ld32((c.r[16].w[0] + 24u)));  if (depth < kMaxDepth) unit_00B2(c, 61u, depth + 1u); else { c.pc = 0x003C87C8u; return; } if (c.pc != 0x003CB170u) [[unlikely]] return; }
L_003CB170:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);  goto L_003CB188; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB180u); set32(c.r[4], ld32((c.r[16].w[0] + 28u)));  if (depth < kMaxDepth) unit_00B2(c, 56u, depth + 1u); else { c.pc = 0x003C8728u; return; } if (c.pc != 0x003CB180u) [[unlikely]] return; }
L_003CB180:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003CB1E8; } }
L_003CB188:
    set32(c.r[3], 0u + 1u);
    set32(c.r[17], ld32((c.r[2].w[0] - 25548u)));
    c.budget -= 4;
    if (c.r[17].d[0] != c.r[3].d[0]) { st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[19].w[0]));  goto L_003CB1E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB1A0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 181u, depth + 1u); else { c.pc = 0x0011DD50u; return; } if (c.pc != 0x003CB1A0u) [[unlikely]] return; }
L_003CB1A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB1A8u);  if (depth < kMaxDepth) unit_00B2(c, 150u, depth + 1u); else { c.pc = 0x003C91F0u; return; } if (c.pc != 0x003CB1A8u) [[unlikely]] return; }
L_003CB1A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB1B0u);  if (depth < kMaxDepth) unit_00B2(c, 140u, depth + 1u); else { c.pc = 0x003C90E0u; return; } if (c.pc != 0x003CB1B0u) [[unlikely]] return; }
L_003CB1B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB1B8u); set32(c.r[4], ld32((c.r[16].w[0] + 28u)));  if (depth < kMaxDepth) unit_00B2(c, 83u, depth + 1u); else { c.pc = 0x003C8A98u; return; } if (c.pc != 0x003CB1B8u) [[unlikely]] return; }
L_003CB1B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB1C0u); set32(c.r[4], ld32((c.r[16].w[0] + 28u)));  if (depth < kMaxDepth) unit_00B2(c, 56u, depth + 1u); else { c.pc = 0x003C8728u; return; } if (c.pc != 0x003CB1C0u) [[unlikely]] return; }
L_003CB1C0:
    st32((c.r[16].w[0] + 28u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    st32((c.r[16].w[0] + 20u), c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_003CB1E4; } }
L_003CB1E0:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 1;
L_003CB1E4:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_003CB1E8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003CB208:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.budget -= 11;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 48u), c.r[31].d[0]);  if (t) { goto L_003CB260; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[5], c.r[5].w[0] + 19480u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 11;
    { set32(c.r[29], c.r[29].w[0] + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CA958u | kUnwind; return; } goto L_003CA958; }
L_003CB260:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003CB2E8; }
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].sd[0] = static_cast<std::int32_t>(0x00090000u);  if (t) { goto L_003CB284; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB284u);  if (depth < kMaxDepth) unit_00B2(c, 92u, depth + 1u); else { c.pc = 0x003C8BC8u; return; } if (c.pc != 0x003CB284u) [[unlikely]] return; }
L_003CB284:
    set32(c.r[19], 0u + 2u);
    c.r[17].d[0] = c.r[17].d[0] | 65535ull;
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 5;
L_003CB298:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB2A0u);  if (depth < kMaxDepth) unit_00B2(c, 140u, depth + 1u); else { c.pc = 0x003C90E0u; return; } if (c.pc != 0x003CB2A0u) [[unlikely]] return; }
L_003CB2A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB2A8u);  if (depth < kMaxDepth) unit_00B2(c, 354u, depth + 1u); else { c.pc = 0x003CAAF8u; return; } if (c.pc != 0x003CB2A8u) [[unlikely]] return; }
L_003CB2A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB2B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 417u, depth + 1u); else { c.pc = 0x003CB308u; return; } if (c.pc != 0x003CB2B0u) [[unlikely]] return; }
L_003CB2B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[19].d[0]) { st32((c.r[16].w[0] + 20u), 0u);  goto L_003CB2E0; }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], ld32((c.r[20].w[0] - 25544u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CB298u | kUnwind; return; } goto L_003CB298; } }
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[3].d[0]) { st32((c.r[16].w[0] + 20u), 0u);  goto L_003CB2E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB2DCu); set32(c.r[4], c.r[21].w[0] + 19576u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003CB2DCu) [[unlikely]] return; }
L_003CB2DC:
    st32((c.r[16].w[0] + 20u), 0u);
    c.budget -= 1;
L_003CB2E0:
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_003CB2E8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003CB308:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003CB330; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB324u); set32(c.r[5], c.r[5].w[0] + 19480u);  if (depth < kMaxDepth) unit_00B2(c, 338u, depth + 1u); else { c.pc = 0x003CA958u; return; } if (c.pc != 0x003CB324u) [[unlikely]] return; }
L_003CB324:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003CB334; } }
    c.budget -= 1;
L_003CB330:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 1;
L_003CB334:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CB340:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 2048u);  c.pc = t; return; }
L_003CB348:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003CB370; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB364u); set32(c.r[5], c.r[5].w[0] + 19480u);  if (depth < kMaxDepth) unit_00B2(c, 338u, depth + 1u); else { c.pc = 0x003CA958u; return; } if (c.pc != 0x003CB364u) [[unlikely]] return; }
L_003CB364:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003CB388; } }
    c.budget -= 1;
L_003CB370:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_003CB388; }
    set32(c.r[2], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] << 11);
    c.budget -= 2;
L_003CB388:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CB398:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0] - 25544u), c.r[4].w[0]);  c.pc = t; return; }
L_003CB3A8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[3].w[0] - 25544u)));  c.pc = t; return; }
L_003CB3B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[3].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] - 28868u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[2].w[0]), c.r[4].w[0]);  if (t) { goto L_003CB3D0; } }
    st32((c.r[2].w[0]), 0u);
    c.budget -= 1;
L_003CB3D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003CB3D8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[3].w[0] - 28868u)));  c.pc = t; return; }
L_003CB3E8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB404u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 503u, depth + 1u); else { c.pc = 0x003CBD60u; return; } if (c.pc != 0x003CB404u) [[unlikely]] return; }
L_003CB404:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[17], c.r[3].w[0] - 25872u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003CB47C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB424u);  if (depth < kMaxDepth) unit_00B2(c, 443u, depth + 1u); else { c.pc = 0x003CB5A8u; return; } if (c.pc != 0x003CB424u) [[unlikely]] return; }
L_003CB424:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB42Cu); c.r[4].d[0] = 0ull | 33792ull;  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003CB42Cu) [[unlikely]] return; }
L_003CB42C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB434u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 181u, depth + 1u); else { c.pc = 0x0011DD50u; return; } if (c.pc != 0x003CB434u) [[unlikely]] return; }
L_003CB434:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB43Cu); c.r[4].d[0] = 0ull | 33793ull;  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003CB43Cu) [[unlikely]] return; }
L_003CB43C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB448u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 340u, depth + 1u); else { c.pc = 0x003CA988u; return; } if (c.pc != 0x003CB448u) [[unlikely]] return; }
L_003CB448:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_003CB478; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 25544u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003CB46C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB46Cu); set32(c.r[4], c.r[4].w[0] + 19176u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003CB46Cu) [[unlikely]] return; }
L_003CB46C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003CB47C; } }
    c.budget -= 1;
L_003CB478:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 1;
L_003CB47C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003CB490:
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] << 11;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);  c.pc = t; return; }
L_003CB4A0:
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] << 11;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);  c.pc = t; return; }
L_003CB4C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003CB4C8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CB3E8u | kUnwind; return; } goto L_003CB3E8; }
L_003CB4E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003CB598; } }
    set32(c.r[2], 0u + 203u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[5].sd[0] < 204ll ? 1ull : 0ull;  if (t) { goto L_003CB580; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 205u);  if (t) { goto L_003CB530; } }
    set32(c.r[2], 0u + 201u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[5].sd[0] < 202ll ? 1ull : 0ull;  if (t) { goto L_003CB560; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 200u);  if (t) { goto L_003CB570; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_003CB550; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003CB59C; } }
    c.budget -= 1;
L_003CB530:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[5].sd[0] < 205ll ? 1ull : 0ull;  if (t) { goto L_003CB580; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 299u);  if (t) { goto L_003CB570; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_003CB590; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003CB59C; } }
L_003CB550:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB558u);  if (depth < kMaxDepth) unit_00B2(c, 434u, depth + 1u); else { c.pc = 0x003CB490u; return; } if (c.pc != 0x003CB558u) [[unlikely]] return; }
L_003CB558:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003CB594; } }
L_003CB560:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB568u);  if (depth < kMaxDepth) unit_00B2(c, 435u, depth + 1u); else { c.pc = 0x003CB4A0u; return; } if (c.pc != 0x003CB568u) [[unlikely]] return; }
L_003CB568:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003CB594; } }
L_003CB570:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB578u);  if (depth < kMaxDepth) unit_00B2(c, 436u, depth + 1u); else { c.pc = 0x003CB4C0u; return; } if (c.pc != 0x003CB578u) [[unlikely]] return; }
L_003CB578:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003CB594; } }
L_003CB580:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB588u);  if (depth < kMaxDepth) unit_00B2(c, 437u, depth + 1u); else { c.pc = 0x003CB4C8u; return; } if (c.pc != 0x003CB588u) [[unlikely]] return; }
L_003CB588:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003CB594; } }
L_003CB590:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_003CB594:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_003CB598:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003CB59C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CB5A8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[5], c.r[5].w[0] - 25536u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB5D0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x003CB5D0u) [[unlikely]] return; }
L_003CB5D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[2], 0u + 47u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 92u);  if (t) { goto L_003CB5F4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_003CB5F4; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB5F4u); set32(c.r[5], c.r[5].w[0] + 19616u);  if (depth < kMaxDepth) unit_0009(c, 220u, depth + 1u); else { c.pc = 0x001277E0u; return; } if (c.pc != 0x003CB5F4u) [[unlikely]] return; }
L_003CB5F4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB608u); set32(c.r[16], c.r[16].w[0] + 19624u);  if (depth < kMaxDepth) unit_0009(c, 220u, depth + 1u); else { c.pc = 0x001277E0u; return; } if (c.pc != 0x003CB608u) [[unlikely]] return; }
L_003CB608:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB610u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 237u, depth + 1u); else { c.pc = 0x00127D00u; return; } if (c.pc != 0x003CB610u) [[unlikely]] return; }
L_003CB610:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB620u); set32(c.r[4], c.r[2].w[0] - 2u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00127AA0u; return; } if (c.pc != 0x003CB620u) [[unlikely]] return; }
L_003CB620:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003CB638; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB634u);  if (depth < kMaxDepth) unit_0009(c, 220u, depth + 1u); else { c.pc = 0x001277E0u; return; } if (c.pc != 0x003CB634u) [[unlikely]] return; }
L_003CB634:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003CB638:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CAB88u | kUnwind; return; } goto L_003CAB88; }
L_003CB650:
    set32(c.r[4], c.r[4].w[0] << 24);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 24));
    set32(c.r[2], c.r[4].w[0] - 97u);
    set32(c.r[3], c.r[4].w[0] - 32u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(26ll) ? 1ull : 0ull;
    set32(c.r[5], c.r[3].w[0] << 24);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003CB674; } }
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 24));
    c.budget -= 1;
L_003CB674:
    c.r[3].d[0] = c.r[3].d[0] ^ 92ull;
    set32(c.r[2], 0u + 47u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];  c.pc = t; return; }
L_003CB688:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], c.r[4].w[0] << 24);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[5].w[0] << 24);
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 24));
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB6ACu); set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 24));  if (depth < kMaxDepth) unit_00B2(c, 450u, depth + 1u); else { c.pc = 0x003CB650u; return; } if (c.pc != 0x003CB6ACu) [[unlikely]] return; }
L_003CB6AC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB6B8u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 450u, depth + 1u); else { c.pc = 0x003CB650u; return; } if (c.pc != 0x003CB6B8u) [[unlikely]] return; }
L_003CB6B8:
    set32(c.r[3], 0u - 1u);
    c.r[16].d[0] = c.r[16].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = 0ull + 0ull;
    if (c.r[16].d[0] != 0) c.r[2].d[0] = c.r[3].d[0];
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CB6E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB704u); c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 237u, depth + 1u); else { c.pc = 0x00127D00u; return; } if (c.pc != 0x003CB704u) [[unlikely]] return; }
L_003CB704:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB710u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 237u, depth + 1u); else { c.pc = 0x00127D00u; return; } if (c.pc != 0x003CB710u) [[unlikely]] return; }
L_003CB710:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_003CB720; } }
L_003CB718:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003CB758; } }
L_003CB720:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003CB754; } }
    set32(c.r[3], c.r[18].w[0] + c.r[16].w[0]);
    c.budget -= 2;
L_003CB730:
    set32(c.r[2], c.r[19].w[0] + c.r[16].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB744u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00B2(c, 451u, depth + 1u); else { c.pc = 0x003CB688u; return; } if (c.pc != 0x003CB744u) [[unlikely]] return; }
L_003CB744:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CB718u | kUnwind; return; } goto L_003CB718; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[18].w[0] + c.r[16].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CB730u | kUnwind; return; } goto L_003CB730; } }
L_003CB754:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003CB758:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003CB778:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    c.r[21].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[23].d[0]);
    c.r[23].d[0] = c.r[8].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 21;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 4u), c.r[6].w[0]);  if (t) { goto L_003CB8B0; } }
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[2], c.r[22].w[0] << 3);
    set32(c.r[20], 0u + 10u);
    set32(c.r[30], 0u + 13u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 7;
L_003CB7E8:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[20].d[0]) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));  goto L_003CB7FC; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[18].w[0] + 1u);  if (t) { goto L_003CB88C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.budget -= 1;
L_003CB7FC:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[20].d[0]) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_003CB810; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] - 1u);  if (t) { goto L_003CB818; } }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_003CB810:
    set32(c.r[5], c.r[19].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[5].w[0] - 1u);
    c.budget -= 2;
L_003CB818:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[20].d[0]; set32(c.r[17], c.r[18].w[0] - c.r[4].w[0]);  if (t) { goto L_003CB82C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[30].d[0]; set32(c.r[2], c.r[5].w[0] - 2u);  if (t) { goto L_003CB834; } }
L_003CB82C:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[5].w[0] - 2u);
    c.budget -= 2;
L_003CB834:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[20].d[0]) { st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));  goto L_003CB84C; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[30].d[0]; set32(c.r[5], c.r[19].w[0] + c.r[4].w[0]);  if (t) { goto L_003CB850; } }
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_003CB84C:
    set32(c.r[5], c.r[19].w[0] + c.r[4].w[0]);
    c.budget -= 1;
L_003CB850:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB85Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x003CB85Cu) [[unlikely]] return; }
L_003CB85C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB864u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 359u, depth + 1u); else { c.pc = 0x003CAB88u; return; } if (c.pc != 0x003CB864u) [[unlikely]] return; }
L_003CB864:
    set32(c.r[6], c.r[16].w[0] + c.r[17].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] - 1u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { st8((c.r[6].w[0]), static_cast<std::uint8_t>(0u));  goto L_003CB874; }
L_003CB874:
    set32(c.r[3], c.r[18].w[0] + 1u);
    set32(c.r[2], c.r[23].w[0] + c.r[16].w[0]);
    set32(c.r[21], c.r[21].w[0] + 1u);
    set32(c.r[16], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { const bool t = c.r[21].d[0] == c.r[22].d[0]; c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_003CB8B0; } }
L_003CB88C:
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_003CB8B0; } }
    set32(c.r[2], c.r[19].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CB7E8u | kUnwind; return; } goto L_003CB7E8; }
L_003CB8B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[2], c.r[2].w[0] - 25568u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = c.r[21].d[0] + 0ull;  goto L_003CB8DC; }
    st32((c.r[2].w[0] + 12u), c.r[23].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0])));
    st32((c.r[2].w[0] + 8u), c.r[22].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[21].w[0]);
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 6;
L_003CB8DC:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 88u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003CB910:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st64((c.r[29].w[0] + 88u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[16].d[0]);
    set32(c.r[2], c.r[29].w[0] + 64u);
    st64((c.r[29].w[0] + 104u), c.r[19].d[0]);
    set32(c.r[5], c.r[3].w[0] + 19632u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    lwl(c.r[3], (c.r[17].w[0] + 3u));
    lwr(c.r[3], (c.r[17].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    swl(c.r[3], (c.r[2].w[0] + 3u));
    swr(c.r[3], (c.r[2].w[0]));
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB960u); st8((c.r[29].w[0] + 68u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x00127708u; return; } if (c.pc != 0x003CB960u) [[unlikely]] return; }
L_003CB960:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[19].sd[0] = static_cast<std::int32_t>(0x00440000u);  goto L_003CB980; }
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB974u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 177u, depth + 1u); else { c.pc = 0x003CD5A0u; return; } if (c.pc != 0x003CB974u) [[unlikely]] return; }
L_003CB974:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_003CBA80; } }
    c.budget -= 1;
L_003CB980:
    set32(c.r[6], 0u + 128u);
    set32(c.r[16], c.r[19].w[0] - 25272u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB994u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003CB994u) [[unlikely]] return; }
L_003CB994:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB9A4u); set32(c.r[16], 0u + 1u);  if (depth < kMaxDepth) unit_00B2(c, 443u, depth + 1u); else { c.pc = 0x003CB5A8u; return; } if (c.pc != 0x003CB9A4u) [[unlikely]] return; }
L_003CB9A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB9ACu); c.r[4].d[0] = 0ull | 36864ull;  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003CB9ACu) [[unlikely]] return; }
L_003CB9AC:
    c.budget -= 1;
L_003CB9B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB9B8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0007(c, 181u, depth + 1u); else { c.pc = 0x0011DD50u; return; } if (c.pc != 0x003CB9B8u) [[unlikely]] return; }
L_003CB9B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CB9B0u | kUnwind; return; } goto L_003CB9B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB9C8u); c.r[4].d[0] = 0ull | 36865ull;  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003CB9C8u) [[unlikely]] return; }
L_003CB9C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB9D0u); c.r[4].d[0] = 0ull | 37120ull;  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003CB9D0u) [[unlikely]] return; }
L_003CB9D0:
    set32(c.r[5], c.r[19].w[0] - 25272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB9DCu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 340u, depth + 1u); else { c.pc = 0x003CA988u; return; } if (c.pc != 0x003CB9DCu) [[unlikely]] return; }
L_003CB9DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003CB9F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull | 37121ull;  if (t) { goto L_003CBA34; } }
    c.budget -= 1;
L_003CB9F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB9F8u); c.r[4].d[0] = 0ull | 37122ull;  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003CB9F8u) [[unlikely]] return; }
L_003CB9F8:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = 0ull | 37376ull;
    st8((c.r[29].w[0] + 49u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[29].w[0] + 48u), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0] + 50u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBA14u); st8((c.r[29].w[0] + 51u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003CBA14u) [[unlikely]] return; }
L_003CBA14:
    set32(c.r[4], ld32((c.r[29].w[0])));
    set32(c.r[7], c.r[29].w[0] + 48u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBA28u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0007(c, 258u, depth + 1u); else { c.pc = 0x0011E760u; return; } if (c.pc != 0x003CBA28u) [[unlikely]] return; }
L_003CBA28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003CBA48; } }
    c.r[4].d[0] = 0ull | 37377ull;
    c.budget -= 1;
L_003CBA34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBA3Cu);  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003CBA3Cu) [[unlikely]] return; }
L_003CBA3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003CBA7C; } }
    c.budget -= 1;
L_003CBA48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBA50u); c.r[4].d[0] = 0ull | 37378ull;  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003CBA50u) [[unlikely]] return; }
L_003CBA50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBA58u); c.r[4].d[0] = 0ull | 37632ull;  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003CBA58u) [[unlikely]] return; }
L_003CBA58:
    set32(c.r[16], 0u + 1u);
    c.budget -= 2;
L_003CBA60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBA68u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0007(c, 181u, depth + 1u); else { c.pc = 0x0011DD50u; return; } if (c.pc != 0x003CBA68u) [[unlikely]] return; }
L_003CBA68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CBA60u | kUnwind; return; } goto L_003CBA60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBA78u); c.r[4].d[0] = 0ull | 37633ull;  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003CBA78u) [[unlikely]] return; }
L_003CBA78:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003CBA7C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_003CBA80:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 88u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 104u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003CBA98:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 112u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[20].d[0]);
    c.r[20].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 104u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[30].d[0]);
    c.r[30].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 120u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 136u), c.r[31].d[0]);
    c.budget -= 17;
    { const bool t = c.r[22].sd[0] <= 0; st32((c.r[29].w[0] + 48u), 0u);  if (t) { goto L_003CBBEC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[18].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[23], c.r[2].w[0] - 25568u);
    c.budget -= 3;
L_003CBAE8:
    set32(c.r[2], ld32((c.r[23].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[23].w[0] + 8u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[20].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[4].w[0] + c.r[20].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[17], c.r[21].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].sd[0] = static_cast<std::int32_t>(0x00440000u);  if (t) { goto L_003CBBDC; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBB1Cu); set32(c.r[5], c.r[19].w[0] - 25272u);  if (depth < kMaxDepth) unit_00B2(c, 443u, depth + 1u); else { c.pc = 0x003CB5A8u; return; } if (c.pc != 0x003CBB1Cu) [[unlikely]] return; }
L_003CBB1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBB24u); c.r[4].d[0] = 0ull | 37888ull;  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003CBB24u) [[unlikely]] return; }
L_003CBB24:
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_003CBB28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBB30u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0007(c, 181u, depth + 1u); else { c.pc = 0x0011DD50u; return; } if (c.pc != 0x003CBB30u) [[unlikely]] return; }
L_003CBB30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CBB28u | kUnwind; return; } goto L_003CBB28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBB40u); c.r[4].d[0] = 0ull | 37889ull;  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003CBB40u) [[unlikely]] return; }
L_003CBB40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBB48u); c.r[4].d[0] = 0ull | 38144ull;  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003CBB48u) [[unlikely]] return; }
L_003CBB48:
    set32(c.r[5], c.r[19].w[0] - 25272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBB54u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 340u, depth + 1u); else { c.pc = 0x003CA988u; return; } if (c.pc != 0x003CBB54u) [[unlikely]] return; }
L_003CBB54:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_003CBBA8; } }
    c.r[4].d[0] = 0ull | 38145ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBB6Cu); set32(c.r[30], c.r[30].w[0] + 1u);  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003CBB6Cu) [[unlikely]] return; }
L_003CBB6C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    st32((c.r[18].w[0]), c.r[2].w[0]);
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] - 25544u)));
    c.budget -= 8;
    if (c.r[2].d[0] != 0ull) { set32(c.r[20], c.r[20].w[0] + 1u);  goto L_003CBBE0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBB9Cu); set32(c.r[4], c.r[2].w[0] + 19640u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003CBB9Cu) [[unlikely]] return; }
L_003CBB9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] + 1u);  if (t) { goto L_003CBBE0; } }
    c.budget -= 1;
L_003CBBA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBBB0u); c.r[4].d[0] = 0ull | 38146ull;  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003CBBB0u) [[unlikely]] return; }
L_003CBBB0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 25544u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 48u)));  goto L_003CBBD4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBBD0u); set32(c.r[4], c.r[2].w[0] + 19664u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003CBBD0u) [[unlikely]] return; }
L_003CBBD0:
    set32(c.r[3], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_003CBBD4:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 48u), c.r[3].w[0]);
    c.budget -= 2;
L_003CBBDC:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_003CBBE0:
    c.r[2].d[0] = c.r[20].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CBAE8u | kUnwind; return; } goto L_003CBAE8; } }
L_003CBBEC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[16], c.r[4].w[0] - 25544u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 48u)));  goto L_003CBC14; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBC10u); set32(c.r[4], c.r[4].w[0] + 19688u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003CBC10u) [[unlikely]] return; }
L_003CBC10:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_003CBC14:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[30].d[0] + 0ull;  if (t) { goto L_003CBC3C; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[5], 0u + 10u);  if (t) { goto L_003CBC38; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBC38u); set32(c.r[4], c.r[4].w[0] + 19712u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003CBC38u) [[unlikely]] return; }
L_003CBC38:
    c.r[2].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 1;
L_003CBC3C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 88u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 104u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 120u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 136u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003CBC70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.budget -= 15;
    { const bool t = c.r[20].sd[0] <= 0; st64((c.r[29].w[0] + 56u), c.r[31].d[0]);  if (t) { goto L_003CBD08; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[17].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[21], c.r[2].w[0] - 25568u);
    c.budget -= 3;
L_003CBCB8:
    set32(c.r[2], ld32((c.r[21].w[0] + 12u)));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBCE0u); set32(c.r[5], c.r[18].w[0] + c.r[5].w[0]);  if (depth < kMaxDepth) unit_00B2(c, 454u, depth + 1u); else { c.pc = 0x003CB6E0u; return; } if (c.pc != 0x003CBCE0u) [[unlikely]] return; }
L_003CBCE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[16].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;  if (t) { goto L_003CBD00; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_003CBD10; } }
    c.budget -= 1;
L_003CBD00:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CBCB8u | kUnwind; return; } goto L_003CBCB8; } }
L_003CBD08:
    st32((c.r[19].w[0] + 4u), 0u);
    st32((c.r[19].w[0]), 0u);
    c.budget -= 2;
L_003CBD10:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003CBD38:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 25568u);
    set32(c.r[6], 0u + 16u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00124ED8u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 49u, depth); }
L_003CBD60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[4], c.r[4].w[0] + 19760u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBD88u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00127AA0u; return; } if (c.pc != 0x003CBD88u) [[unlikely]] return; }
L_003CBD88:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[3], c.r[3].w[0] - 25568u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_003CBDD0; } }
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 25544u)));
    c.budget -= 7;
    if (c.r[3].d[0] == c.r[4].d[0]) { set32(c.r[2], 0u + 1u);  goto L_003CBDF8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[5], 0u + 46u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBDC4u); set32(c.r[4], c.r[4].w[0] + 19768u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003CBDC4u) [[unlikely]] return; }
L_003CBDC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003CBDF8; } }
    c.budget -= 1;
L_003CBDD0:
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003CBDF4; } }
    set32(c.r[7], ld32((c.r[3].w[0] + 4u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBDF4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 499u, depth + 1u); else { c.pc = 0x003CBC70u; return; } if (c.pc != 0x003CBDF4u) [[unlikely]] return; }
L_003CBDF4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003CBDF8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CBE10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[6], 0u + 4096u);
    set32(c.r[4], c.r[20].w[0] - 10752u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBE50u); c.r[19].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003CBE50u) [[unlikely]] return; }
L_003CBE50:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 25568u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CBE68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBE68u);  if (depth < kMaxDepth) unit_00B2(c, 502u, depth + 1u); else { c.pc = 0x003CBD38u; return; } if (c.pc != 0x003CBE68u) [[unlikely]] return; }
L_003CBE68:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003CBE80; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003CBE80; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_003CBE88; } }
L_003CBE80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBE88u);  if (depth < kMaxDepth) unit_00B2(c, 502u, depth + 1u); else { c.pc = 0x003CBD38u; return; } if (c.pc != 0x003CBE88u) [[unlikely]] return; }
L_003CBE88:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003CBF9C; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);  if (t) { goto L_003CBEC0; } }
    set32(c.r[3], ld32((c.r[2].w[0] - 25544u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003CBF9C; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBEB4u); set32(c.r[4], c.r[4].w[0] + 19808u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003CBEB4u) [[unlikely]] return; }
L_003CBEB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003CBF9C; } }
    c.budget -= 1;
L_003CBEC0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003CBEF0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 25544u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003CBF9C; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBEE8u); set32(c.r[4], c.r[4].w[0] + 19856u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003CBEE8u) [[unlikely]] return; }
L_003CBEE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003CBF9C; } }
L_003CBEF0:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[20], c.r[20].w[0] - 10752u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBF00u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003CBF00u) [[unlikely]] return; }
L_003CBF00:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBF0Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 464u, depth + 1u); else { c.pc = 0x003CB910u; return; } if (c.pc != 0x003CBF0Cu) [[unlikely]] return; }
L_003CBF0C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[19].w[0] + 9u);  goto L_003CBF50; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 25544u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_003CBF38; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBF34u); set32(c.r[4], c.r[4].w[0] + 19904u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003CBF34u) [[unlikely]] return; }
L_003CBF34:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 1;
L_003CBF38:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBF44u); set32(c.r[5], c.r[5].w[0] + 19944u);  if (depth < kMaxDepth) unit_00B2(c, 338u, depth + 1u); else { c.pc = 0x003CA958u; return; } if (c.pc != 0x003CBF44u) [[unlikely]] return; }
L_003CBF44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003CBF9C; } }
    c.budget -= 1;
L_003CBF50:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    mmi::divu(c, 0, c.r[17].w[0], c.r[16].w[0]);
    set32(c.r[6], 0u + 4096u);
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x003CBF68u);  goto L_003CBF6C; }
L_003CBF6C:
    c.r[17].d[0] = c.lo.d[0];
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBF7Cu); set32(c.r[17], c.r[17].w[0] << 3);  if (depth < kMaxDepth) unit_00B2(c, 460u, depth + 1u); else { c.pc = 0x003CB778u; return; } if (c.pc != 0x003CBF7Cu) [[unlikely]] return; }
L_003CBF7C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBF88u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 484u, depth + 1u); else { c.pc = 0x003CBA98u; return; } if (c.pc != 0x003CBF88u) [[unlikely]] return; }
L_003CBF88:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x003CBF8Cu);  goto L_003CBF90; }
L_003CBF90:
    set32(c.r[3], c.r[19].w[0] + 1u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 3;
L_003CBF9C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003CBFC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 4096u);
    set32(c.r[4], c.r[2].w[0] - 10752u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 16;
    [[clang::musttail]] return unit_00B3(c, 1u, depth);
}

}
