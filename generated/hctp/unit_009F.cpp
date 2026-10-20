#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_009F[4096] = {
    1, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0,
    0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    7, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0,
    15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    17, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0,
    0, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 26, 0, 0, 27, 0, 0,
    28, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31,
    0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 37, 0, 38, 0, 39,
    0, 40, 0, 41, 0, 42, 0, 43, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 45, 0, 46, 0, 47, 0, 48, 0, 49, 0, 50, 0, 51, 0, 52, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0,
    0, 0, 56, 0, 57, 0, 0, 0, 58, 0, 59, 0, 0, 0, 0, 60, 0, 0, 61, 0, 62, 0, 63, 0, 64, 0, 65, 0, 66, 0, 67, 0,
    68, 0, 69, 0, 70, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0,
    75, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0,
    79, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0,
    0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 88, 0, 0,
    0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 96, 0,
    0, 97, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0,
    0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 108, 0,
    0, 0, 0, 109, 0, 0, 0, 110, 0, 111, 0, 112, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0,
    0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 125, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 0,
    128, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 135,
    0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 142, 0, 143, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 147, 0,
    0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 152, 0, 0, 153, 0, 0, 0,
    0, 0, 154, 0, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0,
    158, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 166, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0,
    0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0,
    0, 177, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 180, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 0,
    0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0,
    193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    194, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0,
    201, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 204, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0,
    0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0,
    0, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0,
    219, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 222, 0, 0, 223, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0,
    0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0,
    0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 237,
    0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 244, 0, 245, 0, 246, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0,
    248, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 251, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 253, 0,
    0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0,
    0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 263, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 279, 0, 0, 0,
    280, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 0, 284, 0, 0, 285, 0, 0, 286,
    0, 287, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 290, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 294, 0, 0, 0, 0, 0, 295, 0, 0,
    0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300,
    0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 302, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0,
    308, 0, 0, 0, 309, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0,
    0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0,
    320, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0,
    0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0,
    0, 326, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0,
    0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 332, 0,
    0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 335, 0, 0, 0, 0, 0, 0, 336, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 342, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 349, 0, 0, 0, 350, 0, 0, 351, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0,
    354, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 357, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0,
    360, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 362, 0, 363, 0, 0, 0, 364, 0, 0, 0, 0, 0, 365, 0, 366, 0, 0,
    367, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0,
    373, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 378, 0, 0,
    0, 0, 379, 0, 0, 0, 380, 0, 0, 0, 381, 0, 0, 0, 382, 0, 0, 0, 0, 383, 0, 384, 0, 0, 0, 385, 0, 0, 386, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 388, 0, 0, 0, 389, 0, 0, 390, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0,
    392, 0, 0, 0, 393, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 395, 0, 396, 0, 0, 397, 0, 0, 0, 0, 398, 0, 0, 0, 399, 0,
    0, 0, 0, 0, 400, 0, 0, 0, 0, 401, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 404, 0, 0, 0, 0, 0,
    0, 405, 0, 406, 0, 0, 407, 0, 0, 0, 0, 408, 0, 0, 0, 409, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 411, 0, 0, 412, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 421, 0, 0, 422, 0, 0, 423, 0, 0, 424,
    0, 0, 425, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 433, 0, 0, 0,
    0, 434, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 438, 0, 439, 0, 0,
    0, 440, 0, 0, 0, 0, 0, 441, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 444, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 446, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 448, 0, 0,
    0, 449, 0, 0, 450, 0, 451, 0, 452, 0, 0, 0, 453, 0, 0, 0, 454, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0,
    457, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 460, 0, 0, 0, 461, 0, 0, 0, 462, 0, 0, 0, 463,
    0, 0, 0, 0, 464, 0, 0, 0, 0, 465, 0, 0, 0, 0, 466, 0, 0, 0, 467, 0, 0, 0, 468, 0, 0, 0, 469, 0, 0, 0, 0, 0,
    0, 0, 0, 470, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 473, 0, 0, 0, 474, 0, 0, 475, 0, 0, 476, 0, 477,
    0, 478, 0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 481, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0,
};

void unit_009F(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0037C000;
    case 2u: goto L_0037C00C;
    case 3u: goto L_0037C020;
    case 4u: goto L_0037C038;
    case 5u: goto L_0037C170;
    case 6u: goto L_0037C188;
    case 7u: goto L_0037C280;
    case 8u: goto L_0037C298;
    case 9u: goto L_0037C390;
    case 10u: goto L_0037C3A8;
    case 11u: goto L_0037C4A0;
    case 12u: goto L_0037C4B8;
    case 13u: goto L_0037C5B0;
    case 14u: goto L_0037C5F4;
    case 15u: goto L_0037C600;
    case 16u: goto L_0037C6A4;
    case 17u: goto L_0037C700;
    case 18u: goto L_0037C708;
    case 19u: goto L_0037C720;
    case 20u: goto L_0037C79C;
    case 21u: goto L_0037C7E4;
    case 22u: goto L_0037C7F4;
    case 23u: goto L_0037C810;
    case 24u: goto L_0037C820;
    case 25u: goto L_0037C85C;
    case 26u: goto L_0037C868;
    case 27u: goto L_0037C874;
    case 28u: goto L_0037C880;
    case 29u: goto L_0037C88C;
    case 30u: goto L_0037C8C0;
    case 31u: goto L_0037C8FC;
    case 32u: goto L_0037C910;
    case 33u: goto L_0037C98C;
    case 34u: goto L_0037CA0C;
    case 35u: goto L_0037CAC0;
    case 36u: goto L_0037CB64;
    case 37u: goto L_0037CB6C;
    case 38u: goto L_0037CB74;
    case 39u: goto L_0037CB7C;
    case 40u: goto L_0037CB84;
    case 41u: goto L_0037CB8C;
    case 42u: goto L_0037CB94;
    case 43u: goto L_0037CB9C;
    case 44u: goto L_0037CBA4;
    case 45u: goto L_0037CC14;
    case 46u: goto L_0037CC1C;
    case 47u: goto L_0037CC24;
    case 48u: goto L_0037CC2C;
    case 49u: goto L_0037CC34;
    case 50u: goto L_0037CC3C;
    case 51u: goto L_0037CC44;
    case 52u: goto L_0037CC4C;
    case 53u: goto L_0037CC54;
    case 54u: goto L_0037CCD0;
    case 55u: goto L_0037CCF4;
    case 56u: goto L_0037CD08;
    case 57u: goto L_0037CD10;
    case 58u: goto L_0037CD20;
    case 59u: goto L_0037CD28;
    case 60u: goto L_0037CD3C;
    case 61u: goto L_0037CD48;
    case 62u: goto L_0037CD50;
    case 63u: goto L_0037CD58;
    case 64u: goto L_0037CD60;
    case 65u: goto L_0037CD68;
    case 66u: goto L_0037CD70;
    case 67u: goto L_0037CD78;
    case 68u: goto L_0037CD80;
    case 69u: goto L_0037CD88;
    case 70u: goto L_0037CD90;
    case 71u: goto L_0037CD9C;
    case 72u: goto L_0037CDB8;
    case 73u: goto L_0037CDD0;
    case 74u: goto L_0037CDEC;
    case 75u: goto L_0037CE00;
    case 76u: goto L_0037CE14;
    case 77u: goto L_0037CE3C;
    case 78u: goto L_0037CE6C;
    case 79u: goto L_0037CE80;
    case 80u: goto L_0037CE90;
    case 81u: goto L_0037CEB0;
    case 82u: goto L_0037CEC8;
    case 83u: goto L_0037CEF0;
    case 84u: goto L_0037CF10;
    case 85u: goto L_0037CF30;
    case 86u: goto L_0037CF54;
    case 87u: goto L_0037CF68;
    case 88u: goto L_0037CF74;
    case 89u: goto L_0037CF88;
    case 90u: goto L_0037CF98;
    case 91u: goto L_0037CFA8;
    case 92u: goto L_0037CFB8;
    case 93u: goto L_0037CFC8;
    case 94u: goto L_0037CFD8;
    case 95u: goto L_0037CFE8;
    case 96u: goto L_0037CFF8;
    case 97u: goto L_0037D004;
    case 98u: goto L_0037D020;
    case 99u: goto L_0037D034;
    case 100u: goto L_0037D048;
    case 101u: goto L_0037D070;
    case 102u: goto L_0037D090;
    case 103u: goto L_0037D0AC;
    case 104u: goto L_0037D0C0;
    case 105u: goto L_0037D0CC;
    case 106u: goto L_0037D0E0;
    case 107u: goto L_0037D0F0;
    case 108u: goto L_0037D0F8;
    case 109u: goto L_0037D10C;
    case 110u: goto L_0037D11C;
    case 111u: goto L_0037D124;
    case 112u: goto L_0037D12C;
    case 113u: goto L_0037D138;
    case 114u: goto L_0037D150;
    case 115u: goto L_0037D164;
    case 116u: goto L_0037D178;
    case 117u: goto L_0037D1A0;
    case 118u: goto L_0037D1C0;
    case 119u: goto L_0037D1D0;
    case 120u: goto L_0037D1F0;
    case 121u: goto L_0037D210;
    case 122u: goto L_0037D220;
    case 123u: goto L_0037D230;
    case 124u: goto L_0037D244;
    case 125u: goto L_0037D250;
    case 126u: goto L_0037D25C;
    case 127u: goto L_0037D270;
    case 128u: goto L_0037D280;
    case 129u: goto L_0037D290;
    case 130u: goto L_0037D2B0;
    case 131u: goto L_0037D2D0;
    case 132u: goto L_0037D2DC;
    case 133u: goto L_0037D330;
    case 134u: goto L_0037D370;
    case 135u: goto L_0037D37C;
    case 136u: goto L_0037D394;
    case 137u: goto L_0037D3B0;
    case 138u: goto L_0037D3CC;
    case 139u: goto L_0037D3E0;
    case 140u: goto L_0037D410;
    case 141u: goto L_0037D434;
    case 142u: goto L_0037D43C;
    case 143u: goto L_0037D444;
    case 144u: goto L_0037D44C;
    case 145u: goto L_0037D460;
    case 146u: goto L_0037D470;
    case 147u: goto L_0037D478;
    case 148u: goto L_0037D490;
    case 149u: goto L_0037D4A0;
    case 150u: goto L_0037D4B8;
    case 151u: goto L_0037D4C8;
    case 152u: goto L_0037D4E4;
    case 153u: goto L_0037D4F0;
    case 154u: goto L_0037D508;
    case 155u: goto L_0037D514;
    case 156u: goto L_0037D530;
    case 157u: goto L_0037D560;
    case 158u: goto L_0037D580;
    case 159u: goto L_0037D5A4;
    case 160u: goto L_0037D608;
    case 161u: goto L_0037D6B0;
    case 162u: goto L_0037D778;
    case 163u: goto L_0037D81C;
    case 164u: goto L_0037D828;
    case 165u: goto L_0037D840;
    case 166u: goto L_0037D884;
    case 167u: goto L_0037D89C;
    case 168u: goto L_0037D8C0;
    case 169u: goto L_0037D8E8;
    case 170u: goto L_0037D8F8;
    case 171u: goto L_0037D910;
    case 172u: goto L_0037D920;
    case 173u: goto L_0037D938;
    case 174u: goto L_0037D948;
    case 175u: goto L_0037D960;
    case 176u: goto L_0037D974;
    case 177u: goto L_0037D984;
    case 178u: goto L_0037D990;
    case 179u: goto L_0037D9B0;
    case 180u: goto L_0037DA0C;
    case 181u: goto L_0037DA20;
    case 182u: goto L_0037DA84;
    case 183u: goto L_0037DA9C;
    case 184u: goto L_0037DAD8;
    case 185u: goto L_0037DAEC;
    case 186u: goto L_0037DB10;
    case 187u: goto L_0037DB50;
    case 188u: goto L_0037DB68;
    case 189u: goto L_0037DBAC;
    case 190u: goto L_0037DBBC;
    case 191u: goto L_0037DBCC;
    case 192u: goto L_0037DBE0;
    case 193u: goto L_0037DC00;
    case 194u: goto L_0037DC80;
    case 195u: goto L_0037DC90;
    case 196u: goto L_0037DCA0;
    case 197u: goto L_0037DCB0;
    case 198u: goto L_0037DCC8;
    case 199u: goto L_0037DCD4;
    case 200u: goto L_0037DCF0;
    case 201u: goto L_0037DD00;
    case 202u: goto L_0037DD10;
    case 203u: goto L_0037DD30;
    case 204u: goto L_0037DD44;
    case 205u: goto L_0037DD58;
    case 206u: goto L_0037DD90;
    case 207u: goto L_0037DDE8;
    case 208u: goto L_0037DDF8;
    case 209u: goto L_0037DE04;
    case 210u: goto L_0037DE1C;
    case 211u: goto L_0037DE40;
    case 212u: goto L_0037DE78;
    case 213u: goto L_0037DE90;
    case 214u: goto L_0037DEA0;
    case 215u: goto L_0037DEB0;
    case 216u: goto L_0037DEC0;
    case 217u: goto L_0037DED4;
    case 218u: goto L_0037DEF0;
    case 219u: goto L_0037DF00;
    case 220u: goto L_0037DF10;
    case 221u: goto L_0037DF24;
    case 222u: goto L_0037DF30;
    case 223u: goto L_0037DF3C;
    case 224u: goto L_0037DF50;
    case 225u: goto L_0037DF60;
    case 226u: goto L_0037DF70;
    case 227u: goto L_0037DF90;
    case 228u: goto L_0037DFB0;
    case 229u: goto L_0037DFE4;
    case 230u: goto L_0037E008;
    case 231u: goto L_0037E02C;
    case 232u: goto L_0037E060;
    case 233u: goto L_0037E0A4;
    case 234u: goto L_0037E0B0;
    case 235u: goto L_0037E0C8;
    case 236u: goto L_0037E0E4;
    case 237u: goto L_0037E0FC;
    case 238u: goto L_0037E118;
    case 239u: goto L_0037E130;
    case 240u: goto L_0037E150;
    case 241u: goto L_0037E168;
    case 242u: goto L_0037E190;
    case 243u: goto L_0037E1AC;
    case 244u: goto L_0037E1BC;
    case 245u: goto L_0037E1C4;
    case 246u: goto L_0037E1CC;
    case 247u: goto L_0037E1E0;
    case 248u: goto L_0037E200;
    case 249u: goto L_0037E214;
    case 250u: goto L_0037E238;
    case 251u: goto L_0037E244;
    case 252u: goto L_0037E258;
    case 253u: goto L_0037E278;
    case 254u: goto L_0037E28C;
    case 255u: goto L_0037E2B0;
    case 256u: goto L_0037E2BC;
    case 257u: goto L_0037E2D0;
    case 258u: goto L_0037E2F0;
    case 259u: goto L_0037E304;
    case 260u: goto L_0037E334;
    case 261u: goto L_0037E350;
    case 262u: goto L_0037E3DC;
    case 263u: goto L_0037E3F0;
    case 264u: goto L_0037E42C;
    case 265u: goto L_0037E444;
    case 266u: goto L_0037E4A4;
    case 267u: goto L_0037E4B8;
    case 268u: goto L_0037E4DC;
    case 269u: goto L_0037E52C;
    case 270u: goto L_0037E544;
    case 271u: goto L_0037E5B0;
    case 272u: goto L_0037E5D0;
    case 273u: goto L_0037E5DC;
    case 274u: goto L_0037E620;
    case 275u: goto L_0037E640;
    case 276u: goto L_0037E65C;
    case 277u: goto L_0037E6A0;
    case 278u: goto L_0037E6E0;
    case 279u: goto L_0037E6F0;
    case 280u: goto L_0037E700;
    case 281u: goto L_0037E720;
    case 282u: goto L_0037E740;
    case 283u: goto L_0037E750;
    case 284u: goto L_0037E764;
    case 285u: goto L_0037E770;
    case 286u: goto L_0037E77C;
    case 287u: goto L_0037E784;
    case 288u: goto L_0037E794;
    case 289u: goto L_0037E7B0;
    case 290u: goto L_0037E7D0;
    case 291u: goto L_0037E7D8;
    case 292u: goto L_0037E810;
    case 293u: goto L_0037E850;
    case 294u: goto L_0037E85C;
    case 295u: goto L_0037E874;
    case 296u: goto L_0037E890;
    case 297u: goto L_0037E8AC;
    case 298u: goto L_0037E8BC;
    case 299u: goto L_0037E8D0;
    case 300u: goto L_0037E8FC;
    case 301u: goto L_0037E910;
    case 302u: goto L_0037E92C;
    case 303u: goto L_0037E938;
    case 304u: goto L_0037E98C;
    case 305u: goto L_0037E9B0;
    case 306u: goto L_0037E9BC;
    case 307u: goto L_0037E9F0;
    case 308u: goto L_0037EA00;
    case 309u: goto L_0037EA10;
    case 310u: goto L_0037EA20;
    case 311u: goto L_0037EA30;
    case 312u: goto L_0037EA40;
    case 313u: goto L_0037EA6C;
    case 314u: goto L_0037EA84;
    case 315u: goto L_0037EAA8;
    case 316u: goto L_0037EAB8;
    case 317u: goto L_0037EB20;
    case 318u: goto L_0037EB50;
    case 319u: goto L_0037EB68;
    case 320u: goto L_0037EB80;
    case 321u: goto L_0037EB98;
    case 322u: goto L_0037EBF0;
    case 323u: goto L_0037EC0C;
    case 324u: goto L_0037EC50;
    case 325u: goto L_0037EC70;
    case 326u: goto L_0037EC84;
    case 327u: goto L_0037ECA0;
    case 328u: goto L_0037ECF4;
    case 329u: goto L_0037ED04;
    case 330u: goto L_0037ED44;
    case 331u: goto L_0037ED60;
    case 332u: goto L_0037ED78;
    case 333u: goto L_0037ED90;
    case 334u: goto L_0037EDA8;
    case 335u: goto L_0037EE04;
    case 336u: goto L_0037EE20;
    case 337u: goto L_0037EE2C;
    case 338u: goto L_0037EE50;
    case 339u: goto L_0037EE90;
    case 340u: goto L_0037EEA8;
    case 341u: goto L_0037EEE4;
    case 342u: goto L_0037EEEC;
    case 343u: goto L_0037F03C;
    case 344u: goto L_0037F0B4;
    case 345u: goto L_0037F130;
    case 346u: goto L_0037F1E8;
    case 347u: goto L_0037F220;
    case 348u: goto L_0037F26C;
    case 349u: goto L_0037F294;
    case 350u: goto L_0037F2A4;
    case 351u: goto L_0037F2B0;
    case 352u: goto L_0037F2C8;
    case 353u: goto L_0037F2E0;
    case 354u: goto L_0037F300;
    case 355u: goto L_0037F314;
    case 356u: goto L_0037F32C;
    case 357u: goto L_0037F340;
    case 358u: goto L_0037F354;
    case 359u: goto L_0037F36C;
    case 360u: goto L_0037F380;
    case 361u: goto L_0037F3A4;
    case 362u: goto L_0037F3BC;
    case 363u: goto L_0037F3C4;
    case 364u: goto L_0037F3D4;
    case 365u: goto L_0037F3EC;
    case 366u: goto L_0037F3F4;
    case 367u: goto L_0037F400;
    case 368u: goto L_0037F414;
    case 369u: goto L_0037F5A0;
    case 370u: goto L_0037F5C0;
    case 371u: goto L_0037F5D4;
    case 372u: goto L_0037F5EC;
    case 373u: goto L_0037F600;
    case 374u: goto L_0037F614;
    case 375u: goto L_0037F62C;
    case 376u: goto L_0037F640;
    case 377u: goto L_0037F658;
    case 378u: goto L_0037F674;
    case 379u: goto L_0037F688;
    case 380u: goto L_0037F698;
    case 381u: goto L_0037F6A8;
    case 382u: goto L_0037F6B8;
    case 383u: goto L_0037F6CC;
    case 384u: goto L_0037F6D4;
    case 385u: goto L_0037F6E4;
    case 386u: goto L_0037F6F0;
    case 387u: goto L_0037F720;
    case 388u: goto L_0037F734;
    case 389u: goto L_0037F744;
    case 390u: goto L_0037F750;
    case 391u: goto L_0037F760;
    case 392u: goto L_0037F780;
    case 393u: goto L_0037F790;
    case 394u: goto L_0037F7A4;
    case 395u: goto L_0037F7C0;
    case 396u: goto L_0037F7C8;
    case 397u: goto L_0037F7D4;
    case 398u: goto L_0037F7E8;
    case 399u: goto L_0037F7F8;
    case 400u: goto L_0037F810;
    case 401u: goto L_0037F824;
    case 402u: goto L_0037F82C;
    case 403u: goto L_0037F860;
    case 404u: goto L_0037F868;
    case 405u: goto L_0037F884;
    case 406u: goto L_0037F88C;
    case 407u: goto L_0037F898;
    case 408u: goto L_0037F8AC;
    case 409u: goto L_0037F8BC;
    case 410u: goto L_0037F8D0;
    case 411u: goto L_0037F8E8;
    case 412u: goto L_0037F8F4;
    case 413u: goto L_0037F920;
    case 414u: goto L_0037F934;
    case 415u: goto L_0037F97C;
    case 416u: goto L_0037F9C8;
    case 417u: goto L_0037FA30;
    case 418u: goto L_0037FA50;
    case 419u: goto L_0037FAA8;
    case 420u: goto L_0037FAD0;
    case 421u: goto L_0037FAD8;
    case 422u: goto L_0037FAE4;
    case 423u: goto L_0037FAF0;
    case 424u: goto L_0037FAFC;
    case 425u: goto L_0037FB08;
    case 426u: goto L_0037FB20;
    case 427u: goto L_0037FB40;
    case 428u: goto L_0037FB50;
    case 429u: goto L_0037FB70;
    case 430u: goto L_0037FBB0;
    case 431u: goto L_0037FBC4;
    case 432u: goto L_0037FBDC;
    case 433u: goto L_0037FBF0;
    case 434u: goto L_0037FC04;
    case 435u: goto L_0037FC1C;
    case 436u: goto L_0037FC30;
    case 437u: goto L_0037FC54;
    case 438u: goto L_0037FC6C;
    case 439u: goto L_0037FC74;
    case 440u: goto L_0037FC84;
    case 441u: goto L_0037FC9C;
    case 442u: goto L_0037FCA4;
    case 443u: goto L_0037FCEC;
    case 444u: goto L_0037FCF4;
    case 445u: goto L_0037FD38;
    case 446u: goto L_0037FD40;
    case 447u: goto L_0037FD60;
    case 448u: goto L_0037FD74;
    case 449u: goto L_0037FD84;
    case 450u: goto L_0037FD90;
    case 451u: goto L_0037FD98;
    case 452u: goto L_0037FDA0;
    case 453u: goto L_0037FDB0;
    case 454u: goto L_0037FDC0;
    case 455u: goto L_0037FDD4;
    case 456u: goto L_0037FDEC;
    case 457u: goto L_0037FE00;
    case 458u: goto L_0037FE1C;
    case 459u: goto L_0037FE38;
    case 460u: goto L_0037FE4C;
    case 461u: goto L_0037FE5C;
    case 462u: goto L_0037FE6C;
    case 463u: goto L_0037FE7C;
    case 464u: goto L_0037FE90;
    case 465u: goto L_0037FEA4;
    case 466u: goto L_0037FEB8;
    case 467u: goto L_0037FEC8;
    case 468u: goto L_0037FED8;
    case 469u: goto L_0037FEE8;
    case 470u: goto L_0037FF0C;
    case 471u: goto L_0037FF14;
    case 472u: goto L_0037FF44;
    case 473u: goto L_0037FF4C;
    case 474u: goto L_0037FF5C;
    case 475u: goto L_0037FF68;
    case 476u: goto L_0037FF74;
    case 477u: goto L_0037FF7C;
    case 478u: goto L_0037FF84;
    case 479u: goto L_0037FF8C;
    case 480u: goto L_0037FFB0;
    case 481u: goto L_0037FFC0;
    case 482u: goto L_0037FFD4;
    case 483u: goto L_0037FFF0;
    default: bad_entry(c, 0x0037C000u); return;
    }
L_0037C000:
    set32(c.r[4], ld32((c.r[1].w[0] + 20144u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C00Cu); c.r[5].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0013(c, 218u, depth + 1u); else { c.pc = 0x0014F060u; return; } if (c.pc != 0x0037C00Cu) [[unlikely]] return; }
L_0037C00C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0037C020:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C038u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0037C038u) [[unlikely]] return; }
L_0037C038:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 21781u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0037C118; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0037C0E0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0037C0A8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0037C070; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0037C154; } }
L_0037C070:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[4].d[0];  if (t) { goto L_0037C0A0; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[3].d[0];  if (t) { goto L_0037C098; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0037C090; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; if (c.r[17].d[0] == 0) c.r[16].d[0] = 0ull;  if (t) { goto L_0037C150; } }
L_0037C090:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 6u);  if (t) { goto L_0037C150; } }
L_0037C098:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0037C150; } }
L_0037C0A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0037C150; } }
L_0037C0A8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[4].d[0];  if (t) { goto L_0037C0D8; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[3].d[0];  if (t) { goto L_0037C0D0; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0037C0C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; if (c.r[17].d[0] == 0) c.r[16].d[0] = 0ull;  if (t) { goto L_0037C150; } }
L_0037C0C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 12u);  if (t) { goto L_0037C150; } }
L_0037C0D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 4u);  if (t) { goto L_0037C150; } }
L_0037C0D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0037C150; } }
L_0037C0E0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[4].d[0];  if (t) { goto L_0037C110; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0037C108; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0037C100; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; if (c.r[17].d[0] == 0) c.r[16].d[0] = 0ull;  if (t) { goto L_0037C150; } }
L_0037C100:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 18u);  if (t) { goto L_0037C150; } }
L_0037C108:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 6u);  if (t) { goto L_0037C150; } }
L_0037C110:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0037C150; } }
L_0037C118:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[4].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0037C14C; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0037C144; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0037C13C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; if (c.r[17].d[0] == 0) c.r[16].d[0] = 0ull;  if (t) { goto L_0037C150; } }
L_0037C13C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 24u);  if (t) { goto L_0037C150; } }
L_0037C144:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 8u);  if (t) { goto L_0037C150; } }
L_0037C14C:
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_0037C150:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0037C154:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0037C170:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C188u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0037C188u) [[unlikely]] return; }
L_0037C188:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 21781u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0037C238; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0037C210; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0037C1E8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0037C1C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0037C264; } }
L_0037C1C0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[3].d[0];  if (t) { goto L_0037C1E0; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0037C1D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; if (c.r[17].d[0] == 0) c.r[16].d[0] = 0ull;  if (t) { goto L_0037C260; } }
L_0037C1D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0037C260; } }
L_0037C1E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0037C260; } }
L_0037C1E8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[3].d[0];  if (t) { goto L_0037C208; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0037C200; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; if (c.r[17].d[0] == 0) c.r[16].d[0] = 0ull;  if (t) { goto L_0037C260; } }
L_0037C200:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0037C260; } }
L_0037C208:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 4u);  if (t) { goto L_0037C260; } }
L_0037C210:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0037C230; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0037C228; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; if (c.r[17].d[0] == 0) c.r[16].d[0] = 0ull;  if (t) { goto L_0037C260; } }
L_0037C228:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0037C260; } }
L_0037C230:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 6u);  if (t) { goto L_0037C260; } }
L_0037C238:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0037C25C; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0037C254; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; if (c.r[17].d[0] == 0) c.r[16].d[0] = 0ull;  if (t) { goto L_0037C260; } }
L_0037C254:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 4u);  if (t) { goto L_0037C260; } }
L_0037C25C:
    set32(c.r[16], 0u + 8u);
    c.budget -= 1;
L_0037C260:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0037C264:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0037C280:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C298u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0037C298u) [[unlikely]] return; }
L_0037C298:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 21781u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0037C348; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0037C320; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0037C2F8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0037C2D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0037C374; } }
L_0037C2D0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[3].d[0];  if (t) { goto L_0037C2F0; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0037C2E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; if (c.r[17].d[0] == 0) c.r[16].d[0] = 0ull;  if (t) { goto L_0037C370; } }
L_0037C2E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0037C370; } }
L_0037C2F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0037C370; } }
L_0037C2F8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[3].d[0];  if (t) { goto L_0037C318; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0037C310; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; if (c.r[17].d[0] == 0) c.r[16].d[0] = 0ull;  if (t) { goto L_0037C370; } }
L_0037C310:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0037C370; } }
L_0037C318:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 4u);  if (t) { goto L_0037C370; } }
L_0037C320:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0037C340; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0037C338; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; if (c.r[17].d[0] == 0) c.r[16].d[0] = 0ull;  if (t) { goto L_0037C370; } }
L_0037C338:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0037C370; } }
L_0037C340:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 6u);  if (t) { goto L_0037C370; } }
L_0037C348:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0037C36C; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0037C364; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; if (c.r[17].d[0] == 0) c.r[16].d[0] = 0ull;  if (t) { goto L_0037C370; } }
L_0037C364:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 4u);  if (t) { goto L_0037C370; } }
L_0037C36C:
    set32(c.r[16], 0u + 8u);
    c.budget -= 1;
L_0037C370:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0037C374:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0037C390:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C3A8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0037C3A8u) [[unlikely]] return; }
L_0037C3A8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 21781u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0037C458; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0037C430; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0037C408; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0037C3E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0037C484; } }
L_0037C3E0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[3].d[0];  if (t) { goto L_0037C400; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0037C3F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; if (c.r[17].d[0] == 0) c.r[16].d[0] = 0ull;  if (t) { goto L_0037C480; } }
L_0037C3F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0037C480; } }
L_0037C400:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0037C480; } }
L_0037C408:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[3].d[0];  if (t) { goto L_0037C428; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0037C420; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; if (c.r[17].d[0] == 0) c.r[16].d[0] = 0ull;  if (t) { goto L_0037C480; } }
L_0037C420:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0037C480; } }
L_0037C428:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0037C480; } }
L_0037C430:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0037C450; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0037C448; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; if (c.r[17].d[0] == 0) c.r[16].d[0] = 0ull;  if (t) { goto L_0037C480; } }
L_0037C448:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0037C480; } }
L_0037C450:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0037C480; } }
L_0037C458:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0037C47C; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0037C474; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; if (c.r[17].d[0] == 0) c.r[16].d[0] = 0ull;  if (t) { goto L_0037C480; } }
L_0037C474:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 4u);  if (t) { goto L_0037C480; } }
L_0037C47C:
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_0037C480:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0037C484:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0037C4A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C4B8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0037C4B8u) [[unlikely]] return; }
L_0037C4B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 21781u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0037C568; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0037C540; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0037C518; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0037C4F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0037C598; } }
L_0037C4F0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[3].d[0];  if (t) { goto L_0037C510; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0037C508; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; if (c.r[17].d[0] == 0) c.r[16].d[0] = 0ull;  if (t) { goto L_0037C594; } }
L_0037C508:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 8u);  if (t) { goto L_0037C594; } }
L_0037C510:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0037C594; } }
L_0037C518:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[3].d[0];  if (t) { goto L_0037C538; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0037C530; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; if (c.r[17].d[0] == 0) c.r[16].d[0] = 0ull;  if (t) { goto L_0037C594; } }
L_0037C530:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 10u);  if (t) { goto L_0037C594; } }
L_0037C538:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0037C594; } }
L_0037C540:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0037C560; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0037C558; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; if (c.r[17].d[0] == 0) c.r[16].d[0] = 0ull;  if (t) { goto L_0037C594; } }
L_0037C558:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 12u);  if (t) { goto L_0037C594; } }
L_0037C560:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0037C594; } }
L_0037C568:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0037C590; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0037C588; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; if (c.r[17].d[0] == 0) c.r[16].d[0] = 0ull;  if (t) { goto L_0037C594; } }
L_0037C588:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 14u);  if (t) { goto L_0037C594; } }
L_0037C590:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0037C594:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0037C598:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0037C5B0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C5F4u); set32(c.r[17], 0u - 1u);  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0037C5F4u) [[unlikely]] return; }
L_0037C5F4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0037C62C; } }
L_0037C600:
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] + 16u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037C638; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[21].d[0];  if (t) { goto L_0037C628; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0037C638; } }
L_0037C628:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_0037C62C:
    c.r[2].d[0] = c.r[4].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] << 5);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037C600u | kUnwind; return; } goto L_0037C600; } }
L_0037C638:
    c.r[3].d[0] = ld16((c.r[22].w[0] + 12u));
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[4], c.r[3].w[0] + c.r[22].w[0]);
    c.budget -= 6;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 25u)));  if (t) { goto L_0037C658; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0037C890; } }
L_0037C658:
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[21].d[0]; set32(c.r[2], c.r[17].w[0] << 5);  if (t) { goto L_0037C66C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 1u);  if (t) { goto L_0037C680; } }
L_0037C66C:
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 25u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[19], 0u + 3u);  if (t) { goto L_0037C680; } }
    set32(c.r[19], 0u + 1u);
    c.budget -= 1;
L_0037C680:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0037C6DC; } }
    c.r[2].d[0] = ld16((c.r[22].w[0] + 14u));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C6A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0037C6A4u) [[unlikely]] return; }
L_0037C6A4:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 356u));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 356u));
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.r[2].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 20ll ? 1ull : 0ull;  if (t) { goto L_0037C6CC; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = c.r[3].sd[0] < 20ll ? 1ull : 0ull;  if (t) { goto L_0037C6D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 1u);  if (t) { goto L_0037C6DC; } }
L_0037C6CC:
    c.r[2].d[0] = c.r[3].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 1;
L_0037C6D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0037C6E0; } }
    set32(c.r[18], 0u + 2u);
    c.budget -= 1;
L_0037C6DC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0037C6E0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0037C750; } }
    c.r[2].d[0] = ld16((c.r[22].w[0] + 14u));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C700u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0037C700u) [[unlikely]] return; }
L_0037C700:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C708u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 390u, depth + 1u); else { c.pc = 0x0033B9A0u; return; } if (c.pc != 0x0037C708u) [[unlikely]] return; }
L_0037C708:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = ld16((c.r[22].w[0] + 14u));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C720u); set32(c.r[4], ld32((c.r[2].w[0] + 28u)));  if (depth < kMaxDepth) unit_008E(c, 390u, depth + 1u); else { c.pc = 0x0033B9A0u; return; } if (c.pc != 0x0037C720u) [[unlikely]] return; }
L_0037C720:
    set32(c.r[3], c.r[2].w[0] - c.r[16].w[0]);
    c.r[2].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 20ll ? 1ull : 0ull;  if (t) { goto L_0037C740; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = c.r[3].sd[0] < 20ll ? 1ull : 0ull;  if (t) { goto L_0037C744; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_0037C750; } }
L_0037C740:
    c.r[2].d[0] = c.r[3].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 1;
L_0037C744:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0037C754; } }
    set32(c.r[17], 0u + 2u);
    c.budget -= 1;
L_0037C750:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0037C754:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0037C76C; } }
    c.r[3].d[0] = ld16((c.r[22].w[0] + 4u));
    set32(c.r[2], 0u + 255u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0037C78C; } }
L_0037C76C:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[3].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_0037C7B0; } }
    c.r[2].d[0] = ld16((c.r[22].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037C78C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0037C7AC; } }
L_0037C78C:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0037C7AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C79Cu);  if (depth < kMaxDepth) unit_008E(c, 330u, depth + 1u); else { c.pc = 0x0033B260u; return; } if (c.pc != 0x0037C79Cu) [[unlikely]] return; }
L_0037C79C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], 0u + 2u);  if (t) { goto L_0037C7AC; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_0037C7AC:
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_0037C7B0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[4].d[0]; c.r[23].d[0] = 0ull + 0ull;  if (t) { goto L_0037C7D0; } }
    set32(c.r[3], ld32((c.r[22].w[0])));
    set32(c.r[2], 0u + 13u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0037C850; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[23].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0037C850; } }
L_0037C7D0:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0037C854; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C7E4u);  if (depth < kMaxDepth) unit_006D(c, 225u, depth + 1u); else { c.pc = 0x002B6350u; return; } if (c.pc != 0x0037C7E4u) [[unlikely]] return; }
L_0037C7E4:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C7F4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 250u, depth + 1u); else { c.pc = 0x002B6670u; return; } if (c.pc != 0x0037C7F4u) [[unlikely]] return; }
L_0037C7F4:
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C810u); c.r[20].d[0] = ld16((c.r[2].w[0] + 2u));  if (depth < kMaxDepth) unit_006D(c, 225u, depth + 1u); else { c.pc = 0x002B6350u; return; } if (c.pc != 0x0037C810u) [[unlikely]] return; }
L_0037C810:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C820u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 250u, depth + 1u); else { c.pc = 0x002B6670u; return; } if (c.pc != 0x0037C820u) [[unlikely]] return; }
L_0037C820:
    set32(c.r[4], ld32((c.r[21].w[0])));
    set32(c.r[5], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = c.r[20].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 4u));
    set32(c.r[2], c.r[2].w[0] << 1);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037C850; } }
    set32(c.r[23], 0u + 2u);
    c.budget -= 1;
L_0037C850:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0037C854:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C85Cu);  if (depth < kMaxDepth) unit_009F(c, 3u, depth + 1u); else { c.pc = 0x0037C020u; return; } if (c.pc != 0x0037C85Cu) [[unlikely]] return; }
L_0037C85C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C868u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 5u, depth + 1u); else { c.pc = 0x0037C170u; return; } if (c.pc != 0x0037C868u) [[unlikely]] return; }
L_0037C868:
    set32(c.r[18], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C874u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 7u, depth + 1u); else { c.pc = 0x0037C280u; return; } if (c.pc != 0x0037C874u) [[unlikely]] return; }
L_0037C874:
    set32(c.r[17], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C880u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 9u, depth + 1u); else { c.pc = 0x0037C390u; return; } if (c.pc != 0x0037C880u) [[unlikely]] return; }
L_0037C880:
    set32(c.r[16], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C88Cu); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 11u, depth + 1u); else { c.pc = 0x0037C4A0u; return; } if (c.pc != 0x0037C88Cu) [[unlikely]] return; }
L_0037C88C:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 1;
L_0037C890:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0037C8C0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C8FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0037C8FCu) [[unlikely]] return; }
L_0037C8FC:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u - 1u);
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0037C93C; } }
L_0037C910:
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[2].w[0] + 16u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037C948; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_0037C938; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0037C948; } }
L_0037C938:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_0037C93C:
    c.r[2].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] << 5);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037C910u | kUnwind; return; } goto L_0037C910; } }
L_0037C948:
    c.r[2].d[0] = ld16((c.r[21].w[0] + 12u));
    set32(c.r[17], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[17].d[0]; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 25u)));  if (t) { goto L_0037C968; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0037CCA0; } }
L_0037C968:
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_0037C9B0; } }
    c.r[2].d[0] = ld16((c.r[21].w[0] + 14u));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C98Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0037C98Cu) [[unlikely]] return; }
L_0037C98C:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 356u));
    c.r[3].d[0] = ld8((c.r[19].w[0] + 356u));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_0037C9A8; } }
    c.r[22].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0037C9A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0037C9EC; } }
L_0037C9B0:
    set32(c.r[2], c.r[5].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 25u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0037C9D0; } }
    set32(c.r[17], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0037C9EC; } }
L_0037C9D0:
    c.r[2].d[0] = ld16((c.r[21].w[0] + 14u));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[16].d[0]; set32(c.r[18], 0u + 2u);  if (t) { goto L_0037C9EC; } }
    set32(c.r[18], 0u + 3u);
    c.budget -= 1;
L_0037C9EC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0037CA9C; } }
    c.r[2].d[0] = ld16((c.r[21].w[0] + 14u));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CA0Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0037CA0Cu) [[unlikely]] return; }
L_0037CA0C:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 356u));
    c.r[2].d[0] = ld8((c.r[19].w[0] + 356u));
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.r[2].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 20ll ? 1ull : 0ull;  if (t) { goto L_0037CA34; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = c.r[3].sd[0] < 20ll ? 1ull : 0ull;  if (t) { goto L_0037CA38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0037CAFC; } }
L_0037CA34:
    c.r[2].d[0] = c.r[3].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 1;
L_0037CA38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].sd[0] < 30ll ? 1ull : 0ull;  if (t) { goto L_0037CA54; } }
    c.r[1].d[0] = c.r[3].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0037CA54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_0037CAF8; } }
L_0037CA54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 40ll ? 1ull : 0ull;  if (t) { goto L_0037CA6C; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = c.r[3].sd[0] < 40ll ? 1ull : 0ull;  if (t) { goto L_0037CA70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_0037CAF8; } }
L_0037CA6C:
    c.r[2].d[0] = c.r[3].sd[0] < 40ll ? 1ull : 0ull;
    c.budget -= 1;
L_0037CA70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].sd[0] < 50ll ? 1ull : 0ull;  if (t) { goto L_0037CA8C; } }
    c.r[1].d[0] = c.r[3].sd[0] < 50ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0037CA8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_0037CAF8; } }
L_0037CA8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037CAF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_0037CAF8; } }
L_0037CA9C:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_0037CAF8; } }
    c.r[2].d[0] = ld16((c.r[21].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CAC0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0037CAC0u) [[unlikely]] return; }
L_0037CAC0:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 356u));
    c.r[3].d[0] = ld8((c.r[19].w[0] + 356u));
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.r[2].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 20ll ? 1ull : 0ull;  if (t) { goto L_0037CAE8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = c.r[3].sd[0] < 20ll ? 1ull : 0ull;  if (t) { goto L_0037CAEC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u - 2u);  if (t) { goto L_0037CAF8; } }
L_0037CAE8:
    c.r[2].d[0] = c.r[3].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 1;
L_0037CAEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037CAF8; } }
    set32(c.r[16], 0u - 3u);
    c.budget -= 1;
L_0037CAF8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0037CAFC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0037CB18; } }
    c.r[4].d[0] = ld16((c.r[21].w[0] + 4u));
    set32(c.r[3], 0u + 255u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0037CB38; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0037CB18:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_0037CBB0; } }
    c.r[4].d[0] = ld16((c.r[21].w[0] + 4u));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0037CB38; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0037CBAC; } }
L_0037CB38:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[3].d[0] = c.r[22].d[0] & 255ull;  if (t) { goto L_0037CC5C; } }
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] << 2);  if (t) { goto L_0037CC58; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[4].w[0] - 3504u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0037C000u < 16384u) { entry = entries_009F[(t - 0x0037C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0037CB64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0037CC58; } }
L_0037CB6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0037CC58; } }
L_0037CB74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0037CC58; } }
L_0037CB7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0037CC58; } }
L_0037CB84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0037CC58; } }
L_0037CB8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0037CC58; } }
L_0037CB94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0037CC58; } }
L_0037CB9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0037CC58; } }
L_0037CBA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0037CC58; } }
L_0037CBAC:
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_0037CBB0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0037CBCC; } }
    c.r[4].d[0] = ld16((c.r[21].w[0] + 4u));
    set32(c.r[3], 0u + 255u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0037CBEC; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_0037CBCC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[3].d[0];  if (t) { goto L_0037CC58; } }
    c.r[4].d[0] = ld16((c.r[21].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0037CBEC; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0037CC58; } }
L_0037CBEC:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;  if (t) { goto L_0037CC58; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] << 2);  if (t) { goto L_0037CC58; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[4].w[0] - 3552u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0037C000u < 16384u) { entry = entries_009F[(t - 0x0037C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0037CC14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_0037CC58; } }
L_0037CC1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_0037CC58; } }
L_0037CC24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_0037CC58; } }
L_0037CC2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_0037CC58; } }
L_0037CC34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0037CC58; } }
L_0037CC3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0037CC58; } }
L_0037CC44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0037CC58; } }
L_0037CC4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0037CC58; } }
L_0037CC54:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0037CC58:
    c.r[3].d[0] = c.r[22].d[0] & 255ull;
    c.budget -= 1;
L_0037CC5C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0037CC6C; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0037CC6C:
    c.r[4].d[0] = ld8((c.r[19].w[0] + 356u));
    set32(c.r[3], c.r[17].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < 101ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);  if (t) { goto L_0037CC94; } }
    set32(c.r[2], 0u + 100u);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 3;
L_0037CC94:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_0037CCA0; } }
    set32(c.r[2], 0u - c.r[4].w[0]);
    c.budget -= 1;
L_0037CCA0:
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
L_0037CCD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[1].w[0] - 13168u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0037CDEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CCF4u);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x0037CCF4u) [[unlikely]] return; }
L_0037CCF4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CD08u); st32((c.r[29].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0037CD08u) [[unlikely]] return; }
L_0037CD08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CD10u);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x0037CD10u) [[unlikely]] return; }
L_0037CD10:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 2224u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CD20u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 195u, depth + 1u); else { c.pc = 0x00242E90u; return; } if (c.pc != 0x0037CD20u) [[unlikely]] return; }
L_0037CD20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CD28u); set32(c.r[4], 0u + 28u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0037CD28u) [[unlikely]] return; }
L_0037CD28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037CD3C; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CD3Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 29u, depth + 1u); else { c.pc = 0x0013C330u; return; } if (c.pc != 0x0037CD3Cu) [[unlikely]] return; }
L_0037CD3C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CD48u); st32((c.r[1].w[0] - 13168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009F(c, 194u, depth + 1u); else { c.pc = 0x0037DC80u; return; } if (c.pc != 0x0037CD48u) [[unlikely]] return; }
L_0037CD48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CD50u);  if (depth < kMaxDepth) unit_009F(c, 121u, depth + 1u); else { c.pc = 0x0037D210u; return; } if (c.pc != 0x0037CD50u) [[unlikely]] return; }
L_0037CD50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CD58u);  if (depth < kMaxDepth) unit_007A(c, 315u, depth + 1u); else { c.pc = 0x002EA950u; return; } if (c.pc != 0x0037CD58u) [[unlikely]] return; }
L_0037CD58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CD60u);  if (depth < kMaxDepth) unit_0087(c, 130u, depth + 1u); else { c.pc = 0x0031D010u; return; } if (c.pc != 0x0037CD60u) [[unlikely]] return; }
L_0037CD60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CD68u);  if (depth < kMaxDepth) unit_0087(c, 92u, depth + 1u); else { c.pc = 0x0031CB50u; return; } if (c.pc != 0x0037CD68u) [[unlikely]] return; }
L_0037CD68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CD70u);  if (depth < kMaxDepth) unit_0087(c, 101u, depth + 1u); else { c.pc = 0x0031CBF0u; return; } if (c.pc != 0x0037CD70u) [[unlikely]] return; }
L_0037CD70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CD78u); set32(c.r[4], c.r[2].w[0] + 928u);  if (depth < kMaxDepth) unit_0096(c, 426u, depth + 1u); else { c.pc = 0x0035BCC0u; return; } if (c.pc != 0x0037CD78u) [[unlikely]] return; }
L_0037CD78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CD80u);  if (depth < kMaxDepth) unit_009F(c, 218u, depth + 1u); else { c.pc = 0x0037DEF0u; return; } if (c.pc != 0x0037CD80u) [[unlikely]] return; }
L_0037CD80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CD88u);  if (depth < kMaxDepth) unit_0087(c, 101u, depth + 1u); else { c.pc = 0x0031CBF0u; return; } if (c.pc != 0x0037CD88u) [[unlikely]] return; }
L_0037CD88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CD90u); set32(c.r[16], c.r[2].w[0] + 928u);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x0037CD90u) [[unlikely]] return; }
L_0037CD90:
    st32((c.r[2].w[0] + 308u), c.r[16].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CD9Cu); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0037CD9Cu) [[unlikely]] return; }
L_0037CD9C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[3], 0u + 10752u);  if (t) { goto L_0037CDD4; } }
    set32(c.r[2], 0u + 11263u);
    st16((c.r[29].w[0] + 40u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CDB8u); st16((c.r[29].w[0] + 42u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x0037CDB8u) [[unlikely]] return; }
L_0037CDB8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 2216u);
    set32(c.r[6], c.r[29].w[0] + 40u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CDD0u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 7u, depth + 1u); else { c.pc = 0x001A80E0u; return; } if (c.pc != 0x0037CDD0u) [[unlikely]] return; }
L_0037CDD0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0037CDD4:
    set32(c.r[4], ld32((c.r[29].w[0] + 44u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[1].w[0] - 13160u), c.r[16].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CDECu); st32((c.r[1].w[0] - 13152u), 0u);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0037CDECu) [[unlikely]] return; }
L_0037CDEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0037CE00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CE14u); set32(c.r[4], ld32((c.r[1].w[0] - 2224u)));  if (depth < kMaxDepth) unit_0050(c, 200u, depth + 1u); else { c.pc = 0x00242F00u; return; } if (c.pc != 0x0037CE14u) [[unlikely]] return; }
L_0037CE14:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 13160u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0037CE3C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0037CE3C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CE3Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037CE3Cu) [[unlikely]] return; }
L_0037CE3C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[1].w[0] - 13160u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 13168u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0037CE6C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0037CE6C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CE6Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037CE6Cu) [[unlikely]] return; }
L_0037CE6C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[1].w[0] - 13168u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037CE80:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[1].w[0] - 13168u)));  c.pc = t; return; }
L_0037CE90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[1].w[0] - 13168u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0037CED8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CEB0u);  if (depth < kMaxDepth) unit_0050(c, 209u, depth + 1u); else { c.pc = 0x00243000u; return; } if (c.pc != 0x0037CEB0u) [[unlikely]] return; }
L_0037CEB0:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037CED8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CEC8u); set32(c.r[4], ld32((c.r[1].w[0] - 13160u)));  if (depth < kMaxDepth) unit_0029(c, 351u, depth + 1u); else { c.pc = 0x001A7FE0u; return; } if (c.pc != 0x0037CEC8u) [[unlikely]] return; }
L_0037CEC8:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0037CEDC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0037CED8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0037CEDC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037CEF0:
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 3456u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_0037CF10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 2272u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0])));  c.pc = t; return; }
L_0037CF30:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CF54u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 211u, depth + 1u); else { c.pc = 0x00243030u; return; } if (c.pc != 0x0037CF54u) [[unlikely]] return; }
L_0037CF54:
    set32(c.r[3], c.r[16].w[0] + 20u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CF68u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0017(c, 127u, depth + 1u); else { c.pc = 0x0015D890u; return; } if (c.pc != 0x0037CF68u) [[unlikely]] return; }
L_0037CF68:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CF74u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x0037CF74u) [[unlikely]] return; }
L_0037CF74:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 76u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CF88u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0037CF88u) [[unlikely]] return; }
L_0037CF88:
    set32(c.r[4], c.r[29].w[0] + 76u);
    set32(c.r[5], c.r[16].w[0] + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CF98u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0037CF98u) [[unlikely]] return; }
L_0037CF98:
    set32(c.r[4], c.r[18].w[0] + 107u);
    set32(c.r[5], c.r[16].w[0] + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CFA8u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0037CFA8u) [[unlikely]] return; }
L_0037CFA8:
    set32(c.r[4], c.r[18].w[0] + 123u);
    set32(c.r[5], c.r[16].w[0] + 24u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CFB8u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0037CFB8u) [[unlikely]] return; }
L_0037CFB8:
    set32(c.r[4], c.r[18].w[0] + 139u);
    set32(c.r[5], c.r[16].w[0] + 40u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CFC8u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0037CFC8u) [[unlikely]] return; }
L_0037CFC8:
    set32(c.r[4], c.r[18].w[0] + 155u);
    set32(c.r[5], c.r[16].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CFD8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0037CFD8u) [[unlikely]] return; }
L_0037CFD8:
    set32(c.r[4], c.r[18].w[0] + 156u);
    set32(c.r[5], c.r[16].w[0] + 57u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CFE8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0037CFE8u) [[unlikely]] return; }
L_0037CFE8:
    set32(c.r[4], c.r[18].w[0] + 157u);
    set32(c.r[5], c.r[16].w[0] + 58u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CFF8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0037CFF8u) [[unlikely]] return; }
L_0037CFF8:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D004u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x0037D004u) [[unlikely]] return; }
L_0037D004:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0037D020:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D034u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 211u, depth + 1u); else { c.pc = 0x00243030u; return; } if (c.pc != 0x0037D034u) [[unlikely]] return; }
L_0037D034:
    set32(c.r[3], c.r[16].w[0] + 20u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D048u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0017(c, 127u, depth + 1u); else { c.pc = 0x0015D890u; return; } if (c.pc != 0x0037D048u) [[unlikely]] return; }
L_0037D048:
    set32(c.r[4], ld32((c.r[29].w[0] + 32u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20430000u);
    c.r[2].d[0] = c.r[2].d[0] | 16720ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[16], 0u + 1u);  if (t) { goto L_0037D064; } }
    set32(c.r[16], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 1;
L_0037D064:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D070u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x0037D070u) [[unlikely]] return; }
L_0037D070:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0037D090:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D0ACu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 211u, depth + 1u); else { c.pc = 0x00243030u; return; } if (c.pc != 0x0037D0ACu) [[unlikely]] return; }
L_0037D0AC:
    set32(c.r[3], c.r[16].w[0] + 50u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D0C0u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0017(c, 127u, depth + 1u); else { c.pc = 0x0015D890u; return; } if (c.pc != 0x0037D0C0u) [[unlikely]] return; }
L_0037D0C0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D0CCu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x0037D0CCu) [[unlikely]] return; }
L_0037D0CC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 60u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D0E0u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0037D0E0u) [[unlikely]] return; }
L_0037D0E0:
    set32(c.r[4], c.r[29].w[0] + 60u);
    set32(c.r[5], c.r[17].w[0] + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D0F0u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0037D0F0u) [[unlikely]] return; }
L_0037D0F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D0F8u);  if (depth < kMaxDepth) unit_0087(c, 101u, depth + 1u); else { c.pc = 0x0031CBF0u; return; } if (c.pc != 0x0037D0F8u) [[unlikely]] return; }
L_0037D0F8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 8u);
    set32(c.r[4], c.r[16].w[0] + 368u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D10Cu); set32(c.r[6], 0u + 560u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0037D10Cu) [[unlikely]] return; }
L_0037D10C:
    set32(c.r[4], c.r[16].w[0] + 928u);
    set32(c.r[5], c.r[17].w[0] + 568u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D11Cu); set32(c.r[6], 0u + 160u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0037D11Cu) [[unlikely]] return; }
L_0037D11C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D124u);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x0037D124u) [[unlikely]] return; }
L_0037D124:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D12Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 166u, depth + 1u); else { c.pc = 0x0031D3A0u; return; } if (c.pc != 0x0037D12Cu) [[unlikely]] return; }
L_0037D12C:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D138u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x0037D138u) [[unlikely]] return; }
L_0037D138:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0037D150:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D164u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 211u, depth + 1u); else { c.pc = 0x00243030u; return; } if (c.pc != 0x0037D164u) [[unlikely]] return; }
L_0037D164:
    set32(c.r[3], c.r[16].w[0] + 50u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D178u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0017(c, 127u, depth + 1u); else { c.pc = 0x0015D890u; return; } if (c.pc != 0x0037D178u) [[unlikely]] return; }
L_0037D178:
    set32(c.r[4], ld32((c.r[29].w[0] + 32u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20430000u);
    c.r[2].d[0] = c.r[2].d[0] | 16720ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[16], 0u + 1u);  if (t) { goto L_0037D194; } }
    set32(c.r[16], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 1;
L_0037D194:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D1A0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x0037D1A0u) [[unlikely]] return; }
L_0037D1A0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0037D1C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[1].w[0] - 13160u)));  c.pc = t; return; }
L_0037D1D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[1].w[0] - 13160u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D1F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002A(c, 2u, depth + 1u); else { c.pc = 0x001A8040u; return; } if (c.pc != 0x0037D1F0u) [[unlikely]] return; }
L_0037D1F0:
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[16].w[0] << 5);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0037D210:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D220u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_009F(c, 127u, depth + 1u); else { c.pc = 0x0037D270u; return; } if (c.pc != 0x0037D220u) [[unlikely]] return; }
L_0037D220:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 44u);  if (t) { goto L_0037D25C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D230u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0037D230u) [[unlikely]] return; }
L_0037D230:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0037D248; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D244u);  if (depth < kMaxDepth) unit_009F(c, 130u, depth + 1u); else { c.pc = 0x0037D2B0u; return; } if (c.pc != 0x0037D244u) [[unlikely]] return; }
L_0037D244:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0037D248:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D250u);  if (depth < kMaxDepth) unit_009F(c, 79u, depth + 1u); else { c.pc = 0x0037CE80u; return; } if (c.pc != 0x0037D250u) [[unlikely]] return; }
L_0037D250:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D25Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x0037D25Cu) [[unlikely]] return; }
L_0037D25C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0037D270:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D280u);  if (depth < kMaxDepth) unit_009F(c, 79u, depth + 1u); else { c.pc = 0x0037CE80u; return; } if (c.pc != 0x0037D280u) [[unlikely]] return; }
L_0037D280:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x65640000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D290u); c.r[5].d[0] = c.r[2].d[0] | 21833ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x0037D290u) [[unlikely]] return; }
L_0037D290:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037D2A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_0037D2A4; } }
L_0037D2A0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0037D2A4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037D2B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x65640000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[2].d[0] | 21833ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D2D0u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013C370u; return; } if (c.pc != 0x0037D2D0u) [[unlikely]] return; }
L_0037D2D0:
    set32(c.r[4], c.r[16].w[0] + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D2DCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_000F(c, 256u, depth + 1u); else { c.pc = 0x0013E440u; return; } if (c.pc != 0x0037D2DCu) [[unlikely]] return; }
L_0037D2DC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 31776u);
    set32(c.r[2], c.r[2].w[0] - 31760u);
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 37u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 38u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 39u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 40u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 41u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0037D330:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0037D394; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 31776u);
    set32(c.r[2], c.r[2].w[0] - 31760u);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 28u);
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D370u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E490u; return; } if (c.pc != 0x0037D370u) [[unlikely]] return; }
L_0037D370:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D37Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x0037D37Cu) [[unlikely]] return; }
L_0037D37C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0037D398; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D394u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0037D394u) [[unlikely]] return; }
L_0037D394:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0037D398:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0037D3B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 36u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0037D3CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D3CCu);  if (depth < kMaxDepth) unit_009F(c, 139u, depth + 1u); else { c.pc = 0x0037D3E0u; return; } if (c.pc != 0x0037D3CCu) [[unlikely]] return; }
L_0037D3CC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037D3E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 38u));
    set32(c.r[16], ld32((c.r[1].w[0] - 1536u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0037D44C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D410u);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x0037D410u) [[unlikely]] return; }
L_0037D410:
    set32(c.r[3], ld32((c.r[2].w[0] + 276u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0037D44C; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 4u));
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], 0u + 400u);  if (t) { goto L_0037D44C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D434u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x0037D434u) [[unlikely]] return; }
L_0037D434:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D43Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 179u, depth + 1u); else { c.pc = 0x0031D500u; return; } if (c.pc != 0x0037D43Cu) [[unlikely]] return; }
L_0037D43C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D444u);  if (depth < kMaxDepth) unit_00A2(c, 282u, depth + 1u); else { c.pc = 0x0038A940u; return; } if (c.pc != 0x0037D444u) [[unlikely]] return; }
L_0037D444:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D44Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 339u, depth + 1u); else { c.pc = 0x0038B2D0u; return; } if (c.pc != 0x0037D44Cu) [[unlikely]] return; }
L_0037D44C:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 37u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0037D478; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D460u);  if (depth < kMaxDepth) unit_000F(c, 317u, depth + 1u); else { c.pc = 0x0013F0F0u; return; } if (c.pc != 0x0037D460u) [[unlikely]] return; }
L_0037D460:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037D478; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D470u);  if (depth < kMaxDepth) unit_007A(c, 321u, depth + 1u); else { c.pc = 0x002EA9B0u; return; } if (c.pc != 0x0037D470u) [[unlikely]] return; }
L_0037D470:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D478u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007A(c, 390u, depth + 1u); else { c.pc = 0x002EB120u; return; } if (c.pc != 0x0037D478u) [[unlikely]] return; }
L_0037D478:
    c.r[4].d[0] = ld16((c.r[16].w[0]));
    c.r[3].d[0] = c.r[4].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] & 8ull;  if (t) { goto L_0037D4A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D490u);  if (depth < kMaxDepth) unit_007A(c, 321u, depth + 1u); else { c.pc = 0x002EA9B0u; return; } if (c.pc != 0x0037D490u) [[unlikely]] return; }
L_0037D490:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[3].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D4A0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007A(c, 388u, depth + 1u); else { c.pc = 0x002EB080u; return; } if (c.pc != 0x0037D4A0u) [[unlikely]] return; }
L_0037D4A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0037D518; } }
L_0037D4A8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0037D4D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D4B8u);  if (depth < kMaxDepth) unit_007A(c, 321u, depth + 1u); else { c.pc = 0x002EA9B0u; return; } if (c.pc != 0x0037D4B8u) [[unlikely]] return; }
L_0037D4B8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[12] = c.r[3].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D4C8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007A(c, 388u, depth + 1u); else { c.pc = 0x002EB080u; return; } if (c.pc != 0x0037D4C8u) [[unlikely]] return; }
L_0037D4C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037D514; } }
L_0037D4D0:
    c.r[3].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] & 2ull;  if (t) { goto L_0037D4F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D4E4u);  if (depth < kMaxDepth) unit_009F(c, 200u, depth + 1u); else { c.pc = 0x0037DCF0u; return; } if (c.pc != 0x0037D4E4u) [[unlikely]] return; }
L_0037D4E4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D4F0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_009F(c, 192u, depth + 1u); else { c.pc = 0x0037DBE0u; return; } if (c.pc != 0x0037D4F0u) [[unlikely]] return; }
L_0037D4F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037D514; } }
L_0037D4F8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0037D514; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D508u);  if (depth < kMaxDepth) unit_009F(c, 200u, depth + 1u); else { c.pc = 0x0037DCF0u; return; } if (c.pc != 0x0037D508u) [[unlikely]] return; }
L_0037D508:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D514u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_009F(c, 192u, depth + 1u); else { c.pc = 0x0037DBE0u; return; } if (c.pc != 0x0037D514u) [[unlikely]] return; }
L_0037D514:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0037D518:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0037D530:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 36u));
    st8((c.r[4].w[0] + 39u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 37u));
    st8((c.r[4].w[0] + 40u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 38u));
    st8((c.r[4].w[0] + 41u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 36u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 37u), static_cast<std::uint8_t>(0u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 38u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_0037D560:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 39u));
    st8((c.r[4].w[0] + 36u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 40u));
    st8((c.r[4].w[0] + 37u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 41u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 38u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0037D580:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 31792u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D5A4u); set32(c.r[4], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0016(c, 15u, depth + 1u); else { c.pc = 0x001585A0u; return; } if (c.pc != 0x0037D5A4u) [[unlikely]] return; }
L_0037D5A4:
    set32(c.r[2], 0u + 20u);
    set32(c.r[3], 0u + 5u);
    st32((c.r[16].w[0] + 704u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[16].w[0] + 708u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[1].w[0] - 2016u));
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    st32((c.r[16].w[0] + 640u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 2016u));
    st32((c.r[16].w[0] + 644u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 2016u));
    st32((c.r[16].w[0] + 648u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[16].w[0] + 652u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[1].w[0] - 2024u));
    st32((c.r[29].w[0] + 96u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 2032u));
    st32((c.r[29].w[0] + 100u), c.f[1]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D608u); st32((c.r[29].w[0] + 104u), c.f[0]);  if (depth < kMaxDepth) unit_0011(c, 53u, depth + 1u); else { c.pc = 0x00145110u; return; } if (c.pc != 0x0037D608u) [[unlikely]] return; }
L_0037D608:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[29].w[0] + 100u), 0u);
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[3], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 104u), 0u);
    set32(c.r[2], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 108u), 0u);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[8]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[8].w[3]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[12]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = 0u;
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[2]);
    st128((c.r[16].w[0] + 592u) & ~15u, c.r[2]);
    c.f[2] = ld32((c.r[1].w[0] - 2016u));
    st32((c.r[16].w[0] + 656u), c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[2] = ld32((c.r[1].w[0] - 2016u));
    st32((c.r[16].w[0] + 660u), c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[2] = ld32((c.r[1].w[0] - 2016u));
    st32((c.r[16].w[0] + 664u), c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[16].w[0] + 668u), c.f[1]);
    c.f[1] = ld32((c.r[1].w[0] - 2040u));
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 2048u));
    st32((c.r[29].w[0] + 100u), c.f[1]);
    c.budget -= 42;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D6B0u); st32((c.r[29].w[0] + 104u), c.f[0]);  if (depth < kMaxDepth) unit_0011(c, 53u, depth + 1u); else { c.pc = 0x00145110u; return; } if (c.pc != 0x0037D6B0u) [[unlikely]] return; }
L_0037D6B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[3], c.r[29].w[0] + 32u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[0] = 0u;
    st32((c.r[29].w[0] + 96u), c.f[1]);
    set32(c.r[2], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 100u), c.f[0]);
    c.f[1] = 0u;
    c.f[0] = 0u;
    st32((c.r[29].w[0] + 104u), c.f[1]);
    st32((c.r[29].w[0] + 108u), c.f[0]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[8]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[8].w[3]);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[12]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[29].w[0] + 32u);
    st128((c.r[16].w[0] + 608u) & ~15u, c.r[2]);
    c.f[1] = ld32((c.r[1].w[0] - 2056u));
    st32((c.r[16].w[0] + 672u), c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = ld32((c.r[1].w[0] - 2056u));
    st32((c.r[16].w[0] + 676u), c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = ld32((c.r[1].w[0] - 2056u));
    st32((c.r[16].w[0] + 680u), c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[16].w[0] + 684u), c.f[0]);
    c.f[2] = ld32((c.r[1].w[0] - 2064u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = ld32((c.r[1].w[0] - 2064u));
    st32((c.r[29].w[0] + 96u), c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 2064u));
    st32((c.r[29].w[0] + 100u), c.f[1]);
    c.budget -= 50;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D778u); st32((c.r[29].w[0] + 104u), c.f[0]);  if (depth < kMaxDepth) unit_0011(c, 53u, depth + 1u); else { c.pc = 0x00145110u; return; } if (c.pc != 0x0037D778u) [[unlikely]] return; }
L_0037D778:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[3], c.r[29].w[0] + 32u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[0] = 0u;
    st32((c.r[29].w[0] + 96u), c.f[1]);
    set32(c.r[2], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 100u), c.f[0]);
    c.f[1] = 0u;
    c.f[0] = 0u;
    st32((c.r[29].w[0] + 104u), c.f[1]);
    st32((c.r[29].w[0] + 108u), c.f[0]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[8]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[8].w[3]);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[12]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[2]);
    st128((c.r[16].w[0] + 624u) & ~15u, c.r[2]);
    c.f[1] = ld32((c.r[1].w[0] - 2072u));
    st32((c.r[16].w[0] + 688u), c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = ld32((c.r[1].w[0] - 2072u));
    st32((c.r[16].w[0] + 692u), c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = ld32((c.r[1].w[0] - 2056u));
    st32((c.r[16].w[0] + 696u), c.f[1]);
    st32((c.r[16].w[0] + 700u), c.f[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 704u)));
    c.budget -= 41;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D81Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 179u, depth + 1u); else { c.pc = 0x0037D9B0u; return; } if (c.pc != 0x0037D81Cu) [[unlikely]] return; }
L_0037D81C:
    set32(c.r[5], ld32((c.r[16].w[0] + 708u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D828u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 186u, depth + 1u); else { c.pc = 0x0037DB10u; return; } if (c.pc != 0x0037D828u) [[unlikely]] return; }
L_0037D828:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0037D840:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0037D89C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[4], c.r[17].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] - 31792u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0037D884; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 18288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D884u); st32((c.r[17].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0015(c, 131u, depth + 1u); else { c.pc = 0x00157770u; return; } if (c.pc != 0x0037D884u) [[unlikely]] return; }
L_0037D884:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0037D8A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D89Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0037D89Cu) [[unlikely]] return; }
L_0037D89C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0037D8A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0037D8C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[1].w[0] + 20144u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D8E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 218u, depth + 1u); else { c.pc = 0x0014F060u; return; } if (c.pc != 0x0037D8E8u) [[unlikely]] return; }
L_0037D8E8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D8F8u); set32(c.r[6], c.r[17].w[0] + 592u);  if (depth < kMaxDepth) unit_0013(c, 94u, depth + 1u); else { c.pc = 0x0014D670u; return; } if (c.pc != 0x0037D8F8u) [[unlikely]] return; }
L_0037D8F8:
    c.f[12] = ld32((c.r[17].w[0] + 640u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = ld32((c.r[17].w[0] + 644u));
    c.f[14] = ld32((c.r[17].w[0] + 648u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D910u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0013(c, 95u, depth + 1u); else { c.pc = 0x0014D6C0u; return; } if (c.pc != 0x0037D910u) [[unlikely]] return; }
L_0037D910:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D920u); set32(c.r[6], c.r[17].w[0] + 608u);  if (depth < kMaxDepth) unit_0013(c, 94u, depth + 1u); else { c.pc = 0x0014D670u; return; } if (c.pc != 0x0037D920u) [[unlikely]] return; }
L_0037D920:
    c.f[12] = ld32((c.r[17].w[0] + 656u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = ld32((c.r[17].w[0] + 660u));
    c.f[14] = ld32((c.r[17].w[0] + 664u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D938u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0013(c, 95u, depth + 1u); else { c.pc = 0x0014D6C0u; return; } if (c.pc != 0x0037D938u) [[unlikely]] return; }
L_0037D938:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D948u); set32(c.r[6], c.r[17].w[0] + 624u);  if (depth < kMaxDepth) unit_0013(c, 94u, depth + 1u); else { c.pc = 0x0014D670u; return; } if (c.pc != 0x0037D948u) [[unlikely]] return; }
L_0037D948:
    c.f[12] = ld32((c.r[17].w[0] + 672u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = ld32((c.r[17].w[0] + 676u));
    c.f[14] = ld32((c.r[17].w[0] + 680u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D960u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0013(c, 95u, depth + 1u); else { c.pc = 0x0014D6C0u; return; } if (c.pc != 0x0037D960u) [[unlikely]] return; }
L_0037D960:
    c.f[12] = ld32((c.r[17].w[0] + 688u));
    c.f[13] = ld32((c.r[17].w[0] + 692u));
    c.f[14] = ld32((c.r[17].w[0] + 696u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D974u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 96u, depth + 1u); else { c.pc = 0x0014D700u; return; } if (c.pc != 0x0037D974u) [[unlikely]] return; }
L_0037D974:
    set32(c.r[25], ld32((c.r[17].w[0] + 168u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D984u); set32(c.r[4], c.r[17].w[0] + 16u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037D984u) [[unlikely]] return; }
L_0037D984:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D990u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0013(c, 99u, depth + 1u); else { c.pc = 0x0014D7F0u; return; } if (c.pc != 0x0037D990u) [[unlikely]] return; }
L_0037D990:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0037D9B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], c.r[5].w[0] << 2);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[3].w[0] + 3792u);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[4], c.r[2].w[0] << 2);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1200000u);
    c.f[20] = c.r[2].w[0];
    set32(c.r[18], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 18;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0037DA04; } }
    c.f[20] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[18].w[0] + 16u));  if (t) { goto L_0037DA28; } }
L_0037DA04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DA0Cu);  if (depth < kMaxDepth) unit_007A(c, 321u, depth + 1u); else { c.pc = 0x002EA9B0u; return; } if (c.pc != 0x0037DA0Cu) [[unlikely]] return; }
L_0037DA0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037DA24; } }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DA20u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007A(c, 407u, depth + 1u); else { c.pc = 0x002EB3D0u; return; } if (c.pc != 0x0037DA20u) [[unlikely]] return; }
L_0037DA20:
    c.f[20] = c.f[0];
    c.budget -= 1;
L_0037DA24:
    c.f[0] = ld32((c.r[18].w[0] + 16u));
    c.budget -= 1;
L_0037DA28:
    c.f[0] = fp::add(c.f[20], c.f[0]);
    st32((c.r[17].w[0] + 724u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 12u));
    c.f[0] = fp::add(c.f[20], c.f[0]);
    st32((c.r[17].w[0] + 728u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    st32((c.r[17].w[0] + 716u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    st32((c.r[17].w[0] + 720u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 724u));
    c.f[0] = ld32((c.r[17].w[0] + 728u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 728u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 716u));
    c.f[0] = ld32((c.r[17].w[0] + 720u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 720u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 704u)));
    c.budget -= 20;
    { const bool t = c.r[2].d[0] != c.r[16].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);  if (t) { goto L_0037DA8C; } }
    c.f[12] = ld32((c.r[17].w[0] + 712u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DA84u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 193u, depth + 1u); else { c.pc = 0x0037DC00u; return; } if (c.pc != 0x0037DA84u) [[unlikely]] return; }
L_0037DA84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0037DAF0; } }
L_0037DA8C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DA9Cu); st32((c.r[17].w[0] + 704u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_009F(c, 193u, depth + 1u); else { c.pc = 0x0037DC00u; return; } if (c.pc != 0x0037DA9Cu) [[unlikely]] return; }
L_0037DA9C:
    c.f[20] = 0u;
    set32(c.r[2], 0u + 20u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[16].sd[0] < 11ll ? 1ull : 0ull;  if (t) { goto L_0037DAB4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[20] = ld32((c.r[1].w[0] - 2080u));
    c.budget -= 2;
L_0037DAB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;  if (t) { goto L_0037DACC; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0xC1C00000u);  if (t) { goto L_0037DACC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 580u), c.r[2].w[0]);  if (t) { goto L_0037DAD0; } }
L_0037DACC:
    st32((c.r[17].w[0] + 580u), 0u);
    c.budget -= 1;
L_0037DAD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DAD8u);  if (depth < kMaxDepth) unit_007A(c, 321u, depth + 1u); else { c.pc = 0x002EA9B0u; return; } if (c.pc != 0x0037DAD8u) [[unlikely]] return; }
L_0037DAD8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.f[12] = c.f[20];  if (t) { goto L_0037DAEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DAECu);  if (depth < kMaxDepth) unit_007A(c, 389u, depth + 1u); else { c.pc = 0x002EB100u; return; } if (c.pc != 0x0037DAECu) [[unlikely]] return; }
L_0037DAEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0037DAF0:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0037DB10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 708u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[16].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0037DBCC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 2128u);
    st32((c.r[17].w[0] + 708u), c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DB50u); st32((c.r[17].w[0] + 576u), c.f[0]);  if (depth < kMaxDepth) unit_007A(c, 321u, depth + 1u); else { c.pc = 0x002EA9B0u; return; } if (c.pc != 0x0037DB50u) [[unlikely]] return; }
L_0037DB50:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 4u);  if (t) { goto L_0037DB6C; } }
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DB68u);  if (depth < kMaxDepth) unit_007A(c, 388u, depth + 1u); else { c.pc = 0x002EB080u; return; } if (c.pc != 0x0037DB68u) [[unlikely]] return; }
L_0037DB68:
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_0037DB6C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_0037DBCC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[29].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] + 4224u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.f[0] = ld32((c.r[1].w[0] - 2088u));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[2]);
    st128((c.r[17].w[0] + 560u) & ~15u, c.r[2]);
    c.f[12] = ld32((c.r[1].w[0] - 2088u));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DBACu); set32(c.r[4], c.r[17].w[0] + 592u);  if (depth < kMaxDepth) unit_0011(c, 21u, depth + 1u); else { c.pc = 0x001444F0u; return; } if (c.pc != 0x0037DBACu) [[unlikely]] return; }
L_0037DBAC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[12] = ld32((c.r[1].w[0] - 2088u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DBBCu); set32(c.r[4], c.r[17].w[0] + 608u);  if (depth < kMaxDepth) unit_0011(c, 21u, depth + 1u); else { c.pc = 0x001444F0u; return; } if (c.pc != 0x0037DBBCu) [[unlikely]] return; }
L_0037DBBC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[12] = ld32((c.r[1].w[0] - 2088u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DBCCu); set32(c.r[4], c.r[17].w[0] + 624u);  if (depth < kMaxDepth) unit_0011(c, 21u, depth + 1u); else { c.pc = 0x001444F0u; return; } if (c.pc != 0x0037DBCCu) [[unlikely]] return; }
L_0037DBCC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0037DBE0:
    c.f[1] = c.r[5].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 2096u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[2] = ld32((c.r[4].w[0] + 712u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 8;
    { c.f[12] = fp::add(c.f[2], c.f[0]);  goto L_0037DC00; }
L_0037DC00:
    c.f[0] = 0u;
    set32(c.r[29], c.r[29].w[0] - 16u);
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 712u), c.f[12]);  if (t) { goto L_0037DC18; } }
    st32((c.r[4].w[0] + 712u), c.f[0]);
    c.budget -= 1;
L_0037DC18:
    c.f[1] = ld32((c.r[4].w[0] + 712u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0037DC38; } }
    st32((c.r[4].w[0] + 712u), c.f[0]);
    c.budget -= 1;
L_0037DC38:
    ld128((c.r[4].w[0] + 512u) & ~15u, c.r[3]);
    set32(c.r[5], c.r[29].w[0]);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.f[2] = ld32((c.r[4].w[0] + 712u));
    c.f[0] = ld32((c.r[4].w[0] + 728u));
    c.f[1] = ld32((c.r[4].w[0] + 724u));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 720u));
    c.f[1] = ld32((c.r[4].w[0] + 716u));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 8u), c.f[0]);
    ld128((c.r[29].w[0]) & ~15u, c.r[3]);
    st128((c.r[4].w[0] + 512u) & ~15u, c.r[3]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037DC80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DC90u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_009F(c, 200u, depth + 1u); else { c.pc = 0x0037DCF0u; return; } if (c.pc != 0x0037DC90u) [[unlikely]] return; }
L_0037DC90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 768u);  if (t) { goto L_0037DCD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DCA0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0037DCA0u) [[unlikely]] return; }
L_0037DCA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0037DCB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DCB0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 203u, depth + 1u); else { c.pc = 0x0037DD30u; return; } if (c.pc != 0x0037DCB0u) [[unlikely]] return; }
L_0037DCB0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0037DCB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037DCC0; } }
    set32(c.r[16], c.r[16].w[0] + 736u);
    c.budget -= 1;
L_0037DCC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DCC8u);  if (depth < kMaxDepth) unit_009F(c, 79u, depth + 1u); else { c.pc = 0x0037CE80u; return; } if (c.pc != 0x0037DCC8u) [[unlikely]] return; }
L_0037DCC8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DCD4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x0037DCD4u) [[unlikely]] return; }
L_0037DCD4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0037DCF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DD00u);  if (depth < kMaxDepth) unit_009F(c, 79u, depth + 1u); else { c.pc = 0x0037CE80u; return; } if (c.pc != 0x0037DD00u) [[unlikely]] return; }
L_0037DD00:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x65640000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DD10u); c.r[5].d[0] = c.r[2].d[0] | 19779ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x0037DD10u) [[unlikely]] return; }
L_0037DD10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037DD20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_0037DD24; } }
L_0037DD20:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0037DD24:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037DD30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DD44u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 158u, depth + 1u); else { c.pc = 0x0037D580u; return; } if (c.pc != 0x0037DD44u) [[unlikely]] return; }
L_0037DD44:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x65640000u);
    set32(c.r[4], c.r[16].w[0] + 736u);
    c.r[5].d[0] = c.r[2].d[0] | 19779ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DD58u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013C370u; return; } if (c.pc != 0x0037DD58u) [[unlikely]] return; }
L_0037DD58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 31824u);
    set32(c.r[3], c.r[3].w[0] - 31808u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 760u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 764u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0037DD90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0037DE1C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 31824u);
    set32(c.r[2], c.r[2].w[0] - 31808u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 760u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 764u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0037DDE8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0037DDE8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DDE8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037DDE8u) [[unlikely]] return; }
L_0037DDE8:
    set32(c.r[4], c.r[17].w[0] + 736u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DDF8u); st32((c.r[17].w[0] + 764u), 0u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x0037DDF8u) [[unlikely]] return; }
L_0037DDF8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DE04u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009F(c, 165u, depth + 1u); else { c.pc = 0x0037D840u; return; } if (c.pc != 0x0037DE04u) [[unlikely]] return; }
L_0037DE04:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0037DE20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DE1Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0037DE1Cu) [[unlikely]] return; }
L_0037DE1C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0037DE20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0037DE40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 764u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[3].w[0] + 624u);  if (t) { goto L_0037DEC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DE78u); set32(c.r[4], 0u + 432u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0037DE78u) [[unlikely]] return; }
L_0037DE78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0037DE90; } }
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 7u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DE90u); set32(c.r[7], 0u + 9u);  if (depth < kMaxDepth) unit_002A(c, 335u, depth + 1u); else { c.pc = 0x001AB970u; return; } if (c.pc != 0x0037DE90u) [[unlikely]] return; }
L_0037DE90:
    st32((c.r[18].w[0] + 764u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DEA0u); set32(c.r[5], 0u + 10018u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x0037DEA0u) [[unlikely]] return; }
L_0037DEA0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DEB0u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x0037DEB0u) [[unlikely]] return; }
L_0037DEB0:
    set32(c.r[4], ld32((c.r[18].w[0] + 764u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DEC0u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x0037DEC0u) [[unlikely]] return; }
L_0037DEC0:
    set32(c.r[4], ld32((c.r[18].w[0] + 764u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DED4u); c.r[5].d[0] = c.r[17].d[0] & 65535ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037DED4u) [[unlikely]] return; }
L_0037DED4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0037DEF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DF00u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_009F(c, 224u, depth + 1u); else { c.pc = 0x0037DF50u; return; } if (c.pc != 0x0037DF00u) [[unlikely]] return; }
L_0037DF00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 764u);  if (t) { goto L_0037DF3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DF10u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0037DF10u) [[unlikely]] return; }
L_0037DF10:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0037DF28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DF24u);  if (depth < kMaxDepth) unit_009F(c, 227u, depth + 1u); else { c.pc = 0x0037DF90u; return; } if (c.pc != 0x0037DF24u) [[unlikely]] return; }
L_0037DF24:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0037DF28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DF30u);  if (depth < kMaxDepth) unit_009F(c, 79u, depth + 1u); else { c.pc = 0x0037CE80u; return; } if (c.pc != 0x0037DF30u) [[unlikely]] return; }
L_0037DF30:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DF3Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x0037DF3Cu) [[unlikely]] return; }
L_0037DF3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0037DF50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DF60u);  if (depth < kMaxDepth) unit_009F(c, 79u, depth + 1u); else { c.pc = 0x0037CE80u; return; } if (c.pc != 0x0037DF60u) [[unlikely]] return; }
L_0037DF60:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x65640000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DF70u); c.r[5].d[0] = c.r[2].d[0] | 20560ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x0037DF70u) [[unlikely]] return; }
L_0037DF70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037DF80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_0037DF84; } }
L_0037DF80:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0037DF84:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037DF90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x65640000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[2].d[0] | 20560ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DFB0u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013C370u; return; } if (c.pc != 0x0037DFB0u) [[unlikely]] return; }
L_0037DFB0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] - 31840u);
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    st8((c.r[16].w[0] + 736u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 740u), 0u);
    st32((c.r[16].w[0] + 744u), 0u);
    st32((c.r[16].w[0] + 748u), 0u);
    st32((c.r[16].w[0] + 752u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 756u), 0u);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 760u), c.r[2].w[0]);  if (t) { goto L_0037DFF4; } }
L_0037DFE4:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 28u), 0u);
    c.budget -= 4;
L_0037DFF4:
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(59ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037DFE4u | kUnwind; return; } goto L_0037DFE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0037E018; } }
L_0037E008:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 264u), 0u);
    c.budget -= 4;
L_0037E018:
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(59ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037E008u | kUnwind; return; } goto L_0037E008; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0037E03C; } }
L_0037E02C:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 500u), 0u);
    c.budget -= 4;
L_0037E03C:
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(59ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037E02Cu | kUnwind; return; } goto L_0037E02C; } }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0037E060:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0037E168; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 31840u);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 740u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0037E0A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E0A4u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0037E0A4u) [[unlikely]] return; }
L_0037E0A4:
    st32((c.r[17].w[0] + 740u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0037E0D0; } }
L_0037E0B0:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[18], c.r[2].w[0] + 28u);  if (t) { goto L_0037E0C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E0C8u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0037E0C8u) [[unlikely]] return; }
L_0037E0C8:
    st32((c.r[18].w[0]), 0u);
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 2;
L_0037E0D0:
    c.r[2].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(59ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[19].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037E0B0u | kUnwind; return; } goto L_0037E0B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0037E104; } }
L_0037E0E4:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 264u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[18], c.r[2].w[0] + 264u);  if (t) { goto L_0037E0FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E0FCu);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0037E0FCu) [[unlikely]] return; }
L_0037E0FC:
    st32((c.r[18].w[0]), 0u);
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 2;
L_0037E104:
    c.r[2].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(59ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[19].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037E0E4u | kUnwind; return; } goto L_0037E0E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0037E138; } }
L_0037E118:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 500u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[18], c.r[2].w[0] + 500u);  if (t) { goto L_0037E130; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E130u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0037E130u) [[unlikely]] return; }
L_0037E130:
    st32((c.r[18].w[0]), 0u);
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 2;
L_0037E138:
    c.r[2].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(59ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[19].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037E118u | kUnwind; return; } goto L_0037E118; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E150u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x0037E150u) [[unlikely]] return; }
L_0037E150:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0037E16C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E168u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0037E168u) [[unlikely]] return; }
L_0037E168:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0037E16C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0037E190:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E1ACu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0050(c, 211u, depth + 1u); else { c.pc = 0x00243030u; return; } if (c.pc != 0x0037E1ACu) [[unlikely]] return; }
L_0037E1AC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E1BCu); set32(c.r[6], 0u + 30u);  if (depth < kMaxDepth) unit_0017(c, 127u, depth + 1u); else { c.pc = 0x0015D890u; return; } if (c.pc != 0x0037E1BCu) [[unlikely]] return; }
L_0037E1BC:
    c.r[16].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 2;
L_0037E1C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E1CCu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0037E1CCu) [[unlikely]] return; }
L_0037E1CC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 64u);  if (t) { goto L_0037E1E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E1E0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x0037E1E0u) [[unlikely]] return; }
L_0037E1E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0037E1F0; } }
L_0037E1E8:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_0037E1F0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[4], 0u + 8u);  if (t) { goto L_0037E220; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E200u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0037E200u) [[unlikely]] return; }
L_0037E200:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] << 2);  if (t) { goto L_0037E218; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E214u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 274u, depth + 1u); else { c.pc = 0x0037E620u; return; } if (c.pc != 0x0037E214u) [[unlikely]] return; }
L_0037E214:
    set32(c.r[3], c.r[16].w[0] << 2);
    c.budget -= 1;
L_0037E218:
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 2;
L_0037E220:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 59ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[16].d[0] & 65535ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037E1C4u | kUnwind; return; } goto L_0037E1C4; } }
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] + 1000u);
    c.budget -= 2;
L_0037E238:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E244u); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0037E244u) [[unlikely]] return; }
L_0037E244:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 64u);  if (t) { goto L_0037E260; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E258u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x0037E258u) [[unlikely]] return; }
L_0037E258:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0037E268; } }
L_0037E260:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_0037E268:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[4], 0u + 8u);  if (t) { goto L_0037E298; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E278u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0037E278u) [[unlikely]] return; }
L_0037E278:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] << 2);  if (t) { goto L_0037E290; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E28Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 274u, depth + 1u); else { c.pc = 0x0037E620u; return; } if (c.pc != 0x0037E28Cu) [[unlikely]] return; }
L_0037E28C:
    set32(c.r[3], c.r[16].w[0] << 2);
    c.budget -= 1;
L_0037E290:
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 264u), c.r[2].w[0]);
    c.budget -= 2;
L_0037E298:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 59ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] + 1000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037E238u | kUnwind; return; } goto L_0037E238; } }
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] + 2000u);
    c.budget -= 2;
L_0037E2B0:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E2BCu); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0037E2BCu) [[unlikely]] return; }
L_0037E2BC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 64u);  if (t) { goto L_0037E2D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E2D0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x0037E2D0u) [[unlikely]] return; }
L_0037E2D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0037E2E0; } }
L_0037E2D8:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_0037E2E0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[4], 0u + 16u);  if (t) { goto L_0037E310; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E2F0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0037E2F0u) [[unlikely]] return; }
L_0037E2F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] << 2);  if (t) { goto L_0037E308; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E304u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 275u, depth + 1u); else { c.pc = 0x0037E640u; return; } if (c.pc != 0x0037E304u) [[unlikely]] return; }
L_0037E304:
    set32(c.r[3], c.r[16].w[0] << 2);
    c.budget -= 1;
L_0037E308:
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 500u), c.r[2].w[0]);
    c.budget -= 2;
L_0037E310:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 59ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] + 2000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037E2B0u | kUnwind; return; } goto L_0037E2B0; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    st8((c.r[17].w[0] + 736u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E334u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x0037E334u) [[unlikely]] return; }
L_0037E334:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0037E350:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 748u)));
    c.budget -= 17;
    { const bool t = c.r[17].d[0] != c.r[3].d[0]; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0037E3B8; } }
    set32(c.r[3], ld32((c.r[22].w[0] + 752u)));
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != c.r[3].d[0];  if (t) { goto L_0037E3B8; } }
    set32(c.r[3], ld32((c.r[22].w[0] + 756u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_0037E3B8; } }
    set32(c.r[3], ld32((c.r[22].w[0] + 760u)));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[3].d[0];  if (t) { goto L_0037E584; } }
L_0037E3B8:
    st32((c.r[22].w[0] + 748u), c.r[17].w[0]);
    st32((c.r[22].w[0] + 752u), c.r[21].w[0]);
    st32((c.r[22].w[0] + 756u), c.r[16].w[0]);
    st32((c.r[22].w[0] + 760u), c.r[20].w[0]);
    c.r[3].d[0] = ld8((c.r[22].w[0] + 736u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_0037E3DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E3DCu);  if (depth < kMaxDepth) unit_009F(c, 242u, depth + 1u); else { c.pc = 0x0037E190u; return; } if (c.pc != 0x0037E3DCu) [[unlikely]] return; }
L_0037E3DC:
    set32(c.r[4], ld32((c.r[22].w[0] + 740u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0037E3F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E3F0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0037E3F0u) [[unlikely]] return; }
L_0037E3F0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[22].w[0] + 740u), 0u);  if (t) { goto L_0037E514; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0037E488; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_0037E414; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  if (t) { goto L_0037E588; } }
L_0037E414:
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0] + 500u)));
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E42Cu); set32(c.r[4], c.r[16].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0037E42Cu) [[unlikely]] return; }
L_0037E42C:
    st32((c.r[22].w[0] + 740u), c.r[2].w[0]);
    set32(c.r[5], c.r[21].w[0] + 1u);
    set32(c.r[7], ld32((c.r[17].w[0] + 4u)));
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0037E474; } }
L_0037E444:
    c.r[3].d[0] = ld8((c.r[7].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0037E458; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0037E46C; } }
L_0037E458:
    set32(c.r[3], ld32((c.r[22].w[0] + 740u)));
    set32(c.r[4], c.r[8].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[6].w[0]);
    c.budget -= 5;
L_0037E46C:
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] + 2u);
    c.budget -= 2;
L_0037E474:
    c.r[3].d[0] = c.r[6].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037E444u | kUnwind; return; } goto L_0037E444; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[22].w[0] + 744u), c.r[8].w[0]);  if (t) { goto L_0037E584; } }
L_0037E488:
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 264u)));
    set32(c.r[23], ld32((c.r[2].w[0] + 500u)));
    set32(c.r[19], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E4A4u); set32(c.r[4], c.r[19].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0037E4A4u) [[unlikely]] return; }
L_0037E4A4:
    st32((c.r[22].w[0] + 740u), c.r[2].w[0]);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[17], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0037E500; } }
L_0037E4B8:
    c.r[4].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], c.r[21].w[0] + 1u);  if (t) { goto L_0037E4CC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0037E4F8; } }
L_0037E4CC:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E4DCu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 277u, depth + 1u); else { c.pc = 0x0037E6A0u; return; } if (c.pc != 0x0037E4DCu) [[unlikely]] return; }
L_0037E4DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037E4F8; } }
    set32(c.r[3], ld32((c.r[22].w[0] + 740u)));
    set32(c.r[4], c.r[18].w[0] << 2);
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[16].w[0]);
    c.budget -= 5;
L_0037E4F8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 2u);
    c.budget -= 2;
L_0037E500:
    c.r[3].d[0] = c.r[16].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037E4B8u | kUnwind; return; } goto L_0037E4B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[22].w[0] + 744u), c.r[18].w[0]);  if (t) { goto L_0037E584; } }
L_0037E514:
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E52Cu); set32(c.r[4], c.r[16].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0037E52Cu) [[unlikely]] return; }
L_0037E52C:
    st32((c.r[22].w[0] + 740u), c.r[2].w[0]);
    set32(c.r[5], c.r[21].w[0] + 1u);
    set32(c.r[7], ld32((c.r[17].w[0] + 4u)));
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0037E574; } }
L_0037E544:
    c.r[3].d[0] = ld8((c.r[7].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0037E558; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0037E56C; } }
L_0037E558:
    set32(c.r[3], ld32((c.r[22].w[0] + 740u)));
    set32(c.r[4], c.r[8].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[6].w[0]);
    c.budget -= 5;
L_0037E56C:
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] + 2u);
    c.budget -= 2;
L_0037E574:
    c.r[3].d[0] = c.r[6].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037E544u | kUnwind; return; } goto L_0037E544; } }
    st32((c.r[22].w[0] + 744u), c.r[8].w[0]);
    c.budget -= 1;
L_0037E584:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_0037E588:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0037E5B0:
    set32(c.r[2], ld32((c.r[4].w[0] + 740u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0])));  c.pc = t; return; }
L_0037E5D0:
    set32(c.r[7], ld32((c.r[4].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0037E600; } }
L_0037E5DC:
    set32(c.r[3], ld32((c.r[4].w[0] + 740u)));
    set32(c.r[6], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0037E5FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037E610; } }
L_0037E5FC:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_0037E600:
    c.r[3].d[0] = c.r[2].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037E5DCu | kUnwind; return; } goto L_0037E5DC; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0037E610:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037E620:
    set32(c.r[6], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[6].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  c.pc = t; return; }
L_0037E640:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E65Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 274u, depth + 1u); else { c.pc = 0x0037E620u; return; } if (c.pc != 0x0037E65Cu) [[unlikely]] return; }
L_0037E65C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] + 8u);
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[16], c.r[16].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 12u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0037E6A0:
    set32(c.r[8], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = c.r[6].d[0] & 7ull;
    set32(c.r[7], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    mmi::mult(c, 0, c.r[5].w[0], c.r[8].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 3));
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_0037E6E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E6F0u);  if (depth < kMaxDepth) unit_009F(c, 79u, depth + 1u); else { c.pc = 0x0037CE80u; return; } if (c.pc != 0x0037E6F0u) [[unlikely]] return; }
L_0037E6F0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x65640000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E700u); c.r[5].d[0] = c.r[2].d[0] | 21316ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x0037E700u) [[unlikely]] return; }
L_0037E700:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037E710; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_0037E714; } }
L_0037E710:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0037E714:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037E720:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E740u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_009F(c, 278u, depth + 1u); else { c.pc = 0x0037E6E0u; return; } if (c.pc != 0x0037E740u) [[unlikely]] return; }
L_0037E740:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0037E788; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E750u); set32(c.r[4], 0u + 200u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0037E750u) [[unlikely]] return; }
L_0037E750:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0037E768; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E764u);  if (depth < kMaxDepth) unit_009F(c, 289u, depth + 1u); else { c.pc = 0x0037E7B0u; return; } if (c.pc != 0x0037E764u) [[unlikely]] return; }
L_0037E764:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0037E768:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E770u);  if (depth < kMaxDepth) unit_009F(c, 79u, depth + 1u); else { c.pc = 0x0037CE80u; return; } if (c.pc != 0x0037E770u) [[unlikely]] return; }
L_0037E770:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E77Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x0037E77Cu) [[unlikely]] return; }
L_0037E77C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E784u);  if (depth < kMaxDepth) unit_009F(c, 278u, depth + 1u); else { c.pc = 0x0037E6E0u; return; } if (c.pc != 0x0037E784u) [[unlikely]] return; }
L_0037E784:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0037E788:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E794u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 296u, depth + 1u); else { c.pc = 0x0037E890u; return; } if (c.pc != 0x0037E794u) [[unlikely]] return; }
L_0037E794:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0037E7B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x65640000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[2].d[0] | 21316ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E7D0u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013C370u; return; } if (c.pc != 0x0037E7D0u) [[unlikely]] return; }
L_0037E7D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E7D8u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0012(c, 39u, depth + 1u); else { c.pc = 0x001486F0u; return; } if (c.pc != 0x0037E7D8u) [[unlikely]] return; }
L_0037E7D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 31888u);
    set32(c.r[3], c.r[3].w[0] - 31872u);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 32u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 196u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0037E810:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0037E874; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 31888u);
    set32(c.r[2], c.r[2].w[0] - 31872u);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 32u);
    st32((c.r[17].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E850u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 42u, depth + 1u); else { c.pc = 0x00148750u; return; } if (c.pc != 0x0037E850u) [[unlikely]] return; }
L_0037E850:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E85Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x0037E85Cu) [[unlikely]] return; }
L_0037E85C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0037E878; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E874u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0037E874u) [[unlikely]] return; }
L_0037E874:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0037E878:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0037E890:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E8ACu); c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 223u, depth + 1u); else { c.pc = 0x001A2170u; return; } if (c.pc != 0x0037E8ACu) [[unlikely]] return; }
L_0037E8AC:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E8BCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 45u, depth + 1u); else { c.pc = 0x001487B0u; return; } if (c.pc != 0x0037E8BCu) [[unlikely]] return; }
L_0037E8BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0037E8D0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[4], c.r[29].w[0] + 96u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E8FCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0017(c, 125u, depth + 1u); else { c.pc = 0x0015D850u; return; } if (c.pc != 0x0037E8FCu) [[unlikely]] return; }
L_0037E8FC:
    c.r[19].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 64u), 0u);
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0037E970; } }
L_0037E910:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] + 1000u);  if (t) { goto L_0037E960; } }
L_0037E92C:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E938u); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0037E938u) [[unlikely]] return; }
L_0037E938:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037E95C; } }
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[3], c.r[18].w[0] + 1u);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 64u), c.r[3].w[0]);  if (t) { goto L_0037E96C; } }
L_0037E95C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0037E960:
    c.r[2].d[0] = c.r[16].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] + c.r[16].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037E92Cu | kUnwind; return; } goto L_0037E92C; } }
L_0037E96C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0037E970:
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(33ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[18].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037E910u | kUnwind; return; } goto L_0037E910; } }
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E98Cu); st32((c.r[20].w[0] + 196u), c.r[19].w[0]);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x0037E98Cu) [[unlikely]] return; }
L_0037E98C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0037E9B0:
    set32(c.r[6], ld32((c.r[4].w[0] + 196u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0037E9D8; } }
L_0037E9BC:
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 64u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_0037E9D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037E9E8; } }
L_0037E9D4:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_0037E9D8:
    c.r[3].d[0] = c.r[2].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[2].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037E9BCu | kUnwind; return; } goto L_0037E9BC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0037E9E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037E9F0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 28u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0037D3B0u | kUnwind; return; } goto L_0037D3B0; }
L_0037EA00:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 28u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0037D330u | kUnwind; return; } goto L_0037D330; }
L_0037EA10:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 736u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0037DD90u | kUnwind; return; } goto L_0037DD90; }
L_0037EA20:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0037E8D0u | kUnwind; return; } goto L_0037E8D0; }
L_0037EA30:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0037E810u | kUnwind; return; } goto L_0037E810; }
L_0037EA40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x474F0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EA6Cu); c.r[7].d[0] = c.r[2].d[0] | 16970ull;  if (depth < kMaxDepth) unit_002C(c, 200u, depth + 1u); else { c.pc = 0x001B1A30u; return; } if (c.pc != 0x0037EA6Cu) [[unlikely]] return; }
L_0037EA6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 31728u);
    set32(c.r[4], c.r[16].w[0] + 100u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EA84u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002A(c, 154u, depth + 1u); else { c.pc = 0x001A97D0u; return; } if (c.pc != 0x0037EA84u) [[unlikely]] return; }
L_0037EA84:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[1].w[0] + 26176u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[2].w[0] + 6108u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EAA8u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0037EAA8u) [[unlikely]] return; }
L_0037EAA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0037EAB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EAB8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 246u, depth + 1u); else { c.pc = 0x0014FA00u; return; } if (c.pc != 0x0037EAB8u) [[unlikely]] return; }
L_0037EAB8:
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 96u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00050000u);
    c.r[6].d[0] = c.r[2].d[0] | 12801ull;
    set32(c.r[3], 0u + 16u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[5].w[0] + 192u), c.r[6].d[0]);
    st32((c.r[16].w[0] + 128u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 132u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 136u), c.r[4].w[0]);
    st16((c.r[16].w[0] + 148u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 150u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st16((c.r[16].w[0] + 144u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 144u)));
    st16((c.r[16].w[0] + 146u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 26;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0037EB20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0037EB68; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 31728u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EB50u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002C(c, 203u, depth + 1u); else { c.pc = 0x001B1AC0u; return; } if (c.pc != 0x0037EB50u) [[unlikely]] return; }
L_0037EB50:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0037EB6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EB68u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0037EB68u) [[unlikely]] return; }
L_0037EB68:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0037EB6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0037EB80:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EB98u); set32(c.r[4], c.r[16].w[0] + 100u);  if (depth < kMaxDepth) unit_002A(c, 155u, depth + 1u); else { c.pc = 0x001A9810u; return; } if (c.pc != 0x0037EB98u) [[unlikely]] return; }
L_0037EB98:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 116u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0037EC84; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 146u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0037EBBC; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 146u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0037EC0C; } }
L_0037EBBC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0037EC0C; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 148u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[16].w[0] + 148u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 148u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 150u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037EBE8; } }
    st16((c.r[16].w[0] + 148u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_0037EBE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EBF0u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 148u)));  if (depth < kMaxDepth) unit_0024(c, 185u, depth + 1u); else { c.pc = 0x00191690u; return; } if (c.pc != 0x0037EBF0u) [[unlikely]] return; }
L_0037EBF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037EC0C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EC0Cu); set32(c.r[5], c.r[5].w[0] - 2008u);  if (depth < kMaxDepth) unit_0014(c, 36u, depth + 1u); else { c.pc = 0x00150610u; return; } if (c.pc != 0x0037EC0Cu) [[unlikely]] return; }
L_0037EC0C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[29].w[0] + 32u);
    set32(c.r[3], ld32((c.r[1].w[0] + 28272u)));
    set32(c.r[3], c.r[3].w[0] + 400u);
    ld128((c.r[3].w[0]) & ~15u, c.r[6]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[2].w[0]) & ~15u, c.r[6]);
    st128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[2].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[2].w[0] + 48u) & ~15u, c.r[9]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 17;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EC50u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037EC50u) [[unlikely]] return; }
L_0037EC50:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[2]);
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EC70u); set32(c.r[6], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037EC70u) [[unlikely]] return; }
L_0037EC70:
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EC84u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037EC84u) [[unlikely]] return; }
L_0037EC84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0037ECA0:
    set32(c.r[29], c.r[29].w[0] - 288u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 116u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0037EE2C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[6], ld32((c.r[1].w[0] + 28272u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[16].w[0] + 32u);
    ld128((c.r[6].w[0] + 464u) & ~15u, c.r[6]);
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[6]);
    st32((c.r[29].w[0] + 264u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 268u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 256u), 0u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037ECF4u); st32((c.r[29].w[0] + 260u), 0u);  if (depth < kMaxDepth) unit_0011(c, 53u, depth + 1u); else { c.pc = 0x00145110u; return; } if (c.pc != 0x0037ECF4u) [[unlikely]] return; }
L_0037ECF4:
    set32(c.r[4], c.r[29].w[0] + 256u);
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037ED04u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 20u, depth + 1u); else { c.pc = 0x001444C0u; return; } if (c.pc != 0x0037ED04u) [[unlikely]] return; }
L_0037ED04:
    c.f[6] = ld32((c.r[29].w[0] + 272u));
    c.f[5] = ld32((c.r[29].w[0] + 256u));
    c.f[4] = ld32((c.r[29].w[0] + 276u));
    c.f[3] = ld32((c.r[29].w[0] + 260u));
    c.f[2] = ld32((c.r[29].w[0] + 280u));
    c.f[1] = ld32((c.r[29].w[0] + 264u));
    c.f[0] = 0u;
    c.f[5] = fp::mul(c.f[6], c.f[5]);
    c.f[3] = fp::mul(c.f[4], c.f[3]);
    c.facc = fp::add(c.f[5], c.f[3]);
    c.f[20] = fp::add(c.facc, fp::mul(c.f[2], c.f[1]));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[29].w[0] + 64u);  if (t) { goto L_0037EE2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037ED44u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0049(c, 202u, depth + 1u); else { c.pc = 0x00226870u; return; } if (c.pc != 0x0037ED44u) [[unlikely]] return; }
L_0037ED44:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[17], ld32((c.r[1].w[0] + 20144u)));
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.f[13] = ld32((c.r[16].w[0] + 132u));
    c.f[14] = ld32((c.r[16].w[0] + 136u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037ED60u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 96u, depth + 1u); else { c.pc = 0x0014D700u; return; } if (c.pc != 0x0037ED60u) [[unlikely]] return; }
L_0037ED60:
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[13] = ld32((c.r[16].w[0] + 132u));
    c.f[14] = ld32((c.r[16].w[0] + 136u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037ED78u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0013(c, 95u, depth + 1u); else { c.pc = 0x0014D6C0u; return; } if (c.pc != 0x0037ED78u) [[unlikely]] return; }
L_0037ED78:
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[13] = ld32((c.r[16].w[0] + 132u));
    c.f[14] = ld32((c.r[16].w[0] + 136u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037ED90u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0013(c, 95u, depth + 1u); else { c.pc = 0x0014D6C0u; return; } if (c.pc != 0x0037ED90u) [[unlikely]] return; }
L_0037ED90:
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[13] = ld32((c.r[16].w[0] + 132u));
    c.f[14] = ld32((c.r[16].w[0] + 136u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EDA8u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0013(c, 95u, depth + 1u); else { c.pc = 0x0014D6C0u; return; } if (c.pc != 0x0037EDA8u) [[unlikely]] return; }
L_0037EDA8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 1992u));
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_0037EDCC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 96u)));  if (t) { goto L_0037EDFC; } }
L_0037EDCC:
    c.f[0] = ld32((c.r[1].w[0] - 2000u));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[1] = fp::sub(c.f[20], c.f[0]);  if (t) { goto L_0037EDE8; } }
    c.f[12] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037EDF8; } }
L_0037EDE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 4;
L_0037EDF8:
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 1;
L_0037EDFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EE04u);  if (depth < kMaxDepth) unit_0015(c, 85u, depth + 1u); else { c.pc = 0x00156E00u; return; } if (c.pc != 0x0037EE04u) [[unlikely]] return; }
L_0037EE04:
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[4], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    st32((c.r[3].w[0] + 256u), c.r[4].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EE20u); set32(c.r[4], ld32((c.r[16].w[0] + 96u)));  if (depth < kMaxDepth) unit_0014(c, 141u, depth + 1u); else { c.pc = 0x00153370u; return; } if (c.pc != 0x0037EE20u) [[unlikely]] return; }
L_0037EE20:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EE2Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0049(c, 204u, depth + 1u); else { c.pc = 0x00226900u; return; } if (c.pc != 0x0037EE2Cu) [[unlikely]] return; }
L_0037EE2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_0037EE50:
    set32(c.r[29], c.r[29].w[0] - 256u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EE90u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 298u, depth + 1u); else { c.pc = 0x0012E440u; return; } if (c.pc != 0x0037EE90u) [[unlikely]] return; }
L_0037EE90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[4], c.r[21].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] - 31552u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EEA8u); st32((c.r[21].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A1(c, 33u, depth + 1u); else { c.pc = 0x003845C0u; return; } if (c.pc != 0x0037EEA8u) [[unlikely]] return; }
L_0037EEA8:
    st32((c.r[21].w[0] + 4960u), c.r[17].w[0]);
    set32(c.r[2], 0u + 2u);
    st32((c.r[21].w[0] + 4964u), c.r[16].w[0]);
    st32((c.r[21].w[0] + 4968u), 0u);
    st32((c.r[21].w[0] + 4972u), 0u);
    set32(c.r[3], ld32((c.r[21].w[0] + 4964u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0037EEDC; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 4960u)));
    c.r[2].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] + 4u);  if (t) { goto L_0037EEDC; } }
    st32((c.r[21].w[0] + 4960u), c.r[2].w[0]);
    c.budget -= 1;
L_0037EEDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EEE4u);  if (depth < kMaxDepth) unit_0087(c, 101u, depth + 1u); else { c.pc = 0x0031CBF0u; return; } if (c.pc != 0x0037EEE4u) [[unlikely]] return; }
L_0037EEE4:
    set32(c.r[20], c.r[2].w[0] + 928u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0037EEEC:
    set32(c.r[5], c.r[20].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[21].w[0] + c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 107u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 16ll ? 1ull : 0ull;
    st8((c.r[4].w[0] + 4976u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 123u)));
    st8((c.r[4].w[0] + 4992u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 139u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[4].w[0] + 5008u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037EEECu | kUnwind; return; } goto L_0037EEEC; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 4960u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 1984u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; c.r[23].d[0] = ld8((c.r[20].w[0] + 159u));  if (t) { goto L_0037EFC0; } }
    set32(c.r[2], c.r[4].w[0] + c.r[20].w[0]);
    set32(c.r[18], c.r[29].w[0] + 236u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 107u)));
    set32(c.r[17], c.r[29].w[0] + 232u);
    set32(c.r[16], c.r[29].w[0] + 240u);
    c.f[0] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[18].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 4960u)));
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 107u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[17].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 4960u)));
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 107u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0]), c.f[0]);
    st8((c.r[29].w[0] + 244u), static_cast<std::uint8_t>(0u));
    c.budget -= 30;
    { const bool t = 0ull == 0ull; st64((c.r[29].w[0] + 248u), 0ull);  if (t) { goto L_0037F040; } }
L_0037EFC0:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_0037EFEC; } }
    c.f[0] = ld32((c.r[19].w[0] + 24u));
    set32(c.r[18], c.r[29].w[0] + 236u);
    set32(c.r[17], c.r[29].w[0] + 232u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 36u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.f[0]);  if (t) { goto L_0037F00C; } }
L_0037EFEC:
    c.f[0] = c.r[2].w[0];
    set32(c.r[18], c.r[29].w[0] + 236u);
    set32(c.r[17], c.r[29].w[0] + 232u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 12u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0]), c.f[0]);
    c.budget -= 8;
L_0037F00C:
    set32(c.r[3], ld32((c.r[21].w[0] + 4960u)));
    set32(c.r[16], c.r[29].w[0] + 240u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], 0u + 13u);
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 107u)));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0]), c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F03Cu); st8((c.r[29].w[0] + 244u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009F(c, 119u, depth + 1u); else { c.pc = 0x0037D1D0u; return; } if (c.pc != 0x0037F03Cu) [[unlikely]] return; }
L_0037F03C:
    st64((c.r[29].w[0] + 248u), c.r[2].d[0]);
    c.budget -= 1;
L_0037F040:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_0037F068; } }
    c.f[0] = ld32((c.r[19].w[0] + 28u));
    set32(c.r[22], c.r[29].w[0] + 164u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[22].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 160u), c.f[0]);  if (t) { goto L_0037F084; } }
L_0037F068:
    c.f[0] = ld32((c.r[19].w[0] + 4u));
    set32(c.r[22], c.r[29].w[0] + 164u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[22].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 16u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.budget -= 7;
L_0037F084:
    set32(c.r[2], ld32((c.r[21].w[0] + 4960u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], 0u + 26u);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 123u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 168u);
    st32((c.r[2].w[0]), c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F0B4u); st8((c.r[29].w[0] + 172u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_009F(c, 119u, depth + 1u); else { c.pc = 0x0037D1D0u; return; } if (c.pc != 0x0037F0B4u) [[unlikely]] return; }
L_0037F0B4:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull; st64((c.r[29].w[0] + 176u), c.r[2].d[0]);  if (t) { goto L_0037F0E0; } }
    c.f[0] = ld32((c.r[19].w[0] + 32u));
    set32(c.r[23], c.r[29].w[0] + 188u);
    set32(c.r[30], c.r[29].w[0] + 184u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[23].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 44u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[30].w[0]), c.f[0]);  if (t) { goto L_0037F100; } }
L_0037F0E0:
    c.f[0] = ld32((c.r[19].w[0] + 8u));
    set32(c.r[23], c.r[29].w[0] + 188u);
    set32(c.r[30], c.r[29].w[0] + 184u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[23].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 20u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[30].w[0]), c.f[0]);
    c.budget -= 8;
L_0037F100:
    set32(c.r[3], ld32((c.r[21].w[0] + 4960u)));
    set32(c.r[19], c.r[29].w[0] + 192u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], 0u + 23u);
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 139u)));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[19].w[0]), c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F130u); st8((c.r[29].w[0] + 196u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009F(c, 119u, depth + 1u); else { c.pc = 0x0037D1D0u; return; } if (c.pc != 0x0037F130u) [[unlikely]] return; }
L_0037F130:
    st64((c.r[29].w[0] + 200u), c.r[2].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 216u), 0u);
    st32((c.r[29].w[0] + 212u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st8((c.r[29].w[0] + 220u), static_cast<std::uint8_t>(0u));
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    st64((c.r[29].w[0] + 224u), 0ull);
    set32(c.r[2], 0u + 8u);
    set32(c.r[3], ld32((c.r[21].w[0] + 4960u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0037F16C; } }
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 7u);  if (t) { goto L_0037F1A4; } }
L_0037F16C:
    c.f[3] = ld32((c.r[18].w[0]));
    set32(c.r[2], c.r[29].w[0] + 168u);
    c.f[2] = ld32((c.r[17].w[0]));
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = ld32((c.r[22].w[0]));
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[16].w[0]), c.f[0]);
    st32((c.r[22].w[0]), c.f[3]);
    st32((c.r[29].w[0] + 160u), c.f[2]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.f[1]);  if (t) { goto L_0037F1DC; } }
L_0037F1A4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[21].w[0] + 32u);  if (t) { goto L_0037F1E0; } }
    c.f[3] = ld32((c.r[18].w[0]));
    c.f[2] = ld32((c.r[17].w[0]));
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = ld32((c.r[23].w[0]));
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[30].w[0]));
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0]));
    st32((c.r[16].w[0]), c.f[0]);
    st32((c.r[23].w[0]), c.f[3]);
    st32((c.r[30].w[0]), c.f[2]);
    st32((c.r[19].w[0]), c.f[1]);
    c.budget -= 12;
L_0037F1DC:
    set32(c.r[4], c.r[21].w[0] + 32u);
    c.budget -= 1;
L_0037F1E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F1E8u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_00A1(c, 75u, depth + 1u); else { c.pc = 0x00384A30u; return; } if (c.pc != 0x0037F1E8u) [[unlikely]] return; }
L_0037F1E8:
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
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
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_0037F220:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0037F2C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 31552u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 4972u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0037F26C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0037F26C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F26Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037F26Cu) [[unlikely]] return; }
L_0037F26C:
    st32((c.r[17].w[0] + 4972u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 4968u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0037F294; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0037F294; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F294u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037F294u) [[unlikely]] return; }
L_0037F294:
    set32(c.r[4], c.r[17].w[0] + 32u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F2A4u); st32((c.r[17].w[0] + 4968u), 0u);  if (depth < kMaxDepth) unit_00A1(c, 49u, depth + 1u); else { c.pc = 0x00384740u; return; } if (c.pc != 0x0037F2A4u) [[unlikely]] return; }
L_0037F2A4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F2B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 300u, depth + 1u); else { c.pc = 0x0012E490u; return; } if (c.pc != 0x0037F2B0u) [[unlikely]] return; }
L_0037F2B0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0037F2CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F2C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0037F2C8u) [[unlikely]] return; }
L_0037F2C8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0037F2CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0037F2E0:
    set32(c.r[3], ld32((c.r[4].w[0] + 4968u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0037F2F0; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 137u));
    c.budget -= 1;
L_0037F2F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037F300:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F314u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 80u, depth + 1u); else { c.pc = 0x0037CE90u; return; } if (c.pc != 0x0037F314u) [[unlikely]] return; }
L_0037F314:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037F32C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F32Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037F32Cu) [[unlikely]] return; }
L_0037F32C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0037F340:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F354u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 353u, depth + 1u); else { c.pc = 0x0037F2E0u; return; } if (c.pc != 0x0037F354u) [[unlikely]] return; }
L_0037F354:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037F36C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F36Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037F36Cu) [[unlikely]] return; }
L_0037F36C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0037F380:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[1].w[0] - 1536u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F3A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 314u, depth + 1u); else { c.pc = 0x0013F0C0u; return; } if (c.pc != 0x0037F3A4u) [[unlikely]] return; }
L_0037F3A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0037F3CC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F3BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037F3BCu) [[unlikely]] return; }
L_0037F3BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F3C4u); set32(c.r[4], 0u + 400u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x0037F3C4u) [[unlikely]] return; }
L_0037F3C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[16].w[0] + 32u);  if (t) { goto L_0037F3F8; } }
L_0037F3CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F3D4u);  if (depth < kMaxDepth) unit_000F(c, 315u, depth + 1u); else { c.pc = 0x0013F0D0u; return; } if (c.pc != 0x0037F3D4u) [[unlikely]] return; }
L_0037F3D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037F3F4; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F3ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037F3ECu) [[unlikely]] return; }
L_0037F3EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F3F4u); set32(c.r[4], 0u + 401u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x0037F3F4u) [[unlikely]] return; }
L_0037F3F4:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 1;
L_0037F3F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F400u);  if (depth < kMaxDepth) unit_00A1(c, 103u, depth + 1u); else { c.pc = 0x00385050u; return; } if (c.pc != 0x0037F400u) [[unlikely]] return; }
L_0037F400:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0037F5A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F414u);  if (depth < kMaxDepth) unit_0087(c, 101u, depth + 1u); else { c.pc = 0x0031CBF0u; return; } if (c.pc != 0x0037F414u) [[unlikely]] return; }
L_0037F414:
    c.f[2] = ld32((c.r[16].w[0] + 4864u));
    set32(c.r[4], ld32((c.r[16].w[0] + 4960u)));
    c.f[1] = ld32((c.r[16].w[0] + 4860u));
    set32(c.r[2], c.r[2].w[0] + 928u);
    c.f[0] = ld32((c.r[16].w[0] + 4852u));
    set32(c.r[3], 0u + 8u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    st8((c.r[4].w[0] + 107u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.f[2] = ld32((c.r[16].w[0] + 4816u));
    set32(c.r[4], ld32((c.r[16].w[0] + 4960u)));
    c.f[1] = ld32((c.r[16].w[0] + 4812u));
    c.f[0] = ld32((c.r[16].w[0] + 4804u));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    st8((c.r[4].w[0] + 123u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.f[2] = ld32((c.r[16].w[0] + 4832u));
    set32(c.r[4], ld32((c.r[16].w[0] + 4960u)));
    c.f[1] = ld32((c.r[16].w[0] + 4828u));
    c.f[0] = ld32((c.r[16].w[0] + 4820u));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    st8((c.r[4].w[0] + 139u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 4960u)));
    c.budget -= 38;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[5], c.r[4].w[0] + c.r[2].w[0]);  if (t) { goto L_0037F4B8; } }
    set32(c.r[3], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 7u);  if (t) { goto L_0037F4D4; } }
L_0037F4B8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 107u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 123u)));
    st8((c.r[5].w[0] + 107u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 4960u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 123u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0037F4F4; } }
L_0037F4D4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[5], c.r[4].w[0] + c.r[2].w[0]);  if (t) { goto L_0037F4F4; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 107u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 139u)));
    st8((c.r[5].w[0] + 107u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 4960u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st8((c.r[3].w[0] + 139u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
L_0037F4F4:
    set32(c.r[4], ld32((c.r[16].w[0] + 4960u)));
    set32(c.r[3], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0037F50C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 113u)));
    st8((c.r[2].w[0] + 112u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0037F50C:
    set32(c.r[4], ld32((c.r[16].w[0] + 4960u)));
    set32(c.r[3], 0u + 9u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0037F524; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 116u)));
    st8((c.r[2].w[0] + 117u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0037F524:
    set32(c.r[4], ld32((c.r[16].w[0] + 4960u)));
    set32(c.r[3], 0u + 13u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0037F53C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 120u)));
    st8((c.r[2].w[0] + 121u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0037F53C:
    set32(c.r[3], ld32((c.r[16].w[0] + 4964u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0037F598; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 4960u)));
    c.r[3].d[0] = c.r[4].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[4].w[0] + 4u);  if (t) { goto L_0037F598; } }
    set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 107u)));
    set32(c.r[5], c.r[6].w[0] + c.r[2].w[0]);
    st8((c.r[5].w[0] + 107u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], 0u + 13u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4960u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 123u)));
    st8((c.r[5].w[0] + 123u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 4960u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 139u)));
    c.budget -= 14;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; st8((c.r[5].w[0] + 139u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0037F598; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 120u)));
    st8((c.r[2].w[0] + 121u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0037F598:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F5A0u);  if (depth < kMaxDepth) unit_007A(c, 324u, depth + 1u); else { c.pc = 0x002EA9F0u; return; } if (c.pc != 0x0037F5A0u) [[unlikely]] return; }
L_0037F5A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0037F5C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F5D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 353u, depth + 1u); else { c.pc = 0x0037F2E0u; return; } if (c.pc != 0x0037F5D4u) [[unlikely]] return; }
L_0037F5D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037F5EC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F5ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037F5ECu) [[unlikely]] return; }
L_0037F5EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0037F600:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F614u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 353u, depth + 1u); else { c.pc = 0x0037F2E0u; return; } if (c.pc != 0x0037F614u) [[unlikely]] return; }
L_0037F614:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037F62C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F62Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037F62Cu) [[unlikely]] return; }
L_0037F62C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0037F640:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F658u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 318u, depth + 1u); else { c.pc = 0x0012E5E0u; return; } if (c.pc != 0x0037F658u) [[unlikely]] return; }
L_0037F658:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 4968u)));
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[3].w[0] + 624u);  if (t) { goto L_0037F6B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F674u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0037F674u) [[unlikely]] return; }
L_0037F674:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0037F688; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F688u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_002A(c, 287u, depth + 1u); else { c.pc = 0x001AB200u; return; } if (c.pc != 0x0037F688u) [[unlikely]] return; }
L_0037F688:
    st32((c.r[16].w[0] + 4968u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F698u); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x0037F698u) [[unlikely]] return; }
L_0037F698:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F6A8u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x0037F6A8u) [[unlikely]] return; }
L_0037F6A8:
    set32(c.r[4], ld32((c.r[16].w[0] + 4968u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F6B8u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x0037F6B8u) [[unlikely]] return; }
L_0037F6B8:
    set32(c.r[4], ld32((c.r[16].w[0] + 4968u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F6CCu); set32(c.r[5], 0u + 167u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037F6CCu) [[unlikely]] return; }
L_0037F6CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F6D4u);  if (depth < kMaxDepth) unit_009F(c, 200u, depth + 1u); else { c.pc = 0x0037DCF0u; return; } if (c.pc != 0x0037F6D4u) [[unlikely]] return; }
L_0037F6D4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F6E4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 211u, depth + 1u); else { c.pc = 0x0037DE40u; return; } if (c.pc != 0x0037F6E4u) [[unlikely]] return; }
L_0037F6E4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F6F0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_009F(c, 186u, depth + 1u); else { c.pc = 0x0037DB10u; return; } if (c.pc != 0x0037F6F0u) [[unlikely]] return; }
L_0037F6F0:
    set32(c.r[5], ld32((c.r[16].w[0] + 4960u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 1936u);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F720u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 179u, depth + 1u); else { c.pc = 0x0037D9B0u; return; } if (c.pc != 0x0037F720u) [[unlikely]] return; }
L_0037F720:
    set32(c.r[2], ld32((c.r[16].w[0] + 4972u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 1200u);  if (t) { goto L_0037F748; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F734u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0037F734u) [[unlikely]] return; }
L_0037F734:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0037F744; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F744u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 158u, depth + 1u); else { c.pc = 0x00385BA0u; return; } if (c.pc != 0x0037F744u) [[unlikely]] return; }
L_0037F744:
    st32((c.r[16].w[0] + 4972u), c.r[2].w[0]);
    c.budget -= 1;
L_0037F748:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F750u); set32(c.r[4], ld32((c.r[16].w[0] + 4972u)));  if (depth < kMaxDepth) unit_00A1(c, 183u, depth + 1u); else { c.pc = 0x00385E00u; return; } if (c.pc != 0x0037F750u) [[unlikely]] return; }
L_0037F750:
    set32(c.r[5], 0u + 15u);
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F760u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 131u, depth + 1u); else { c.pc = 0x003856F0u; return; } if (c.pc != 0x0037F760u) [[unlikely]] return; }
L_0037F760:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0037F780:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E600u | kUnwind; return; } [[clang::musttail]] return unit_000B(c, 319u, depth); }
L_0037F790:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F7A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 320u, depth + 1u); else { c.pc = 0x0012E610u; return; } if (c.pc != 0x0037F7A4u) [[unlikely]] return; }
L_0037F7A4:
    set32(c.r[4], ld32((c.r[16].w[0] + 4968u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0037F7C0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F7C0u); set32(c.r[5], 0u + 168u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037F7C0u) [[unlikely]] return; }
L_0037F7C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F7C8u);  if (depth < kMaxDepth) unit_009F(c, 200u, depth + 1u); else { c.pc = 0x0037DCF0u; return; } if (c.pc != 0x0037F7C8u) [[unlikely]] return; }
L_0037F7C8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F7D4u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_009F(c, 211u, depth + 1u); else { c.pc = 0x0037DE40u; return; } if (c.pc != 0x0037F7D4u) [[unlikely]] return; }
L_0037F7D4:
    set32(c.r[4], ld32((c.r[16].w[0] + 4972u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0037F7E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F7E8u);  if (depth < kMaxDepth) unit_00A1(c, 184u, depth + 1u); else { c.pc = 0x00385E30u; return; } if (c.pc != 0x0037F7E8u) [[unlikely]] return; }
L_0037F7E8:
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[5], 0u + 15u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F7F8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 135u, depth + 1u); else { c.pc = 0x00385760u; return; } if (c.pc != 0x0037F7F8u) [[unlikely]] return; }
L_0037F7F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0037F810:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F824u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 101u, depth + 1u); else { c.pc = 0x0031CBF0u; return; } if (c.pc != 0x0037F824u) [[unlikely]] return; }
L_0037F824:
    set32(c.r[7], c.r[2].w[0] + 928u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0037F82C:
    set32(c.r[5], c.r[16].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[7].w[0] + c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4976u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 16ll ? 1ull : 0ull;
    st8((c.r[4].w[0] + 107u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4992u)));
    st8((c.r[4].w[0] + 123u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 5008u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[4].w[0] + 139u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037F82Cu | kUnwind; return; } goto L_0037F82C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F860u);  if (depth < kMaxDepth) unit_007A(c, 324u, depth + 1u); else { c.pc = 0x002EA9F0u; return; } if (c.pc != 0x0037F860u) [[unlikely]] return; }
L_0037F860:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F868u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 321u, depth + 1u); else { c.pc = 0x0012E630u; return; } if (c.pc != 0x0037F868u) [[unlikely]] return; }
L_0037F868:
    set32(c.r[4], ld32((c.r[16].w[0] + 4968u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0037F884; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F884u); set32(c.r[5], 0u + 168u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037F884u) [[unlikely]] return; }
L_0037F884:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F88Cu);  if (depth < kMaxDepth) unit_009F(c, 200u, depth + 1u); else { c.pc = 0x0037DCF0u; return; } if (c.pc != 0x0037F88Cu) [[unlikely]] return; }
L_0037F88C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F898u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_009F(c, 211u, depth + 1u); else { c.pc = 0x0037DE40u; return; } if (c.pc != 0x0037F898u) [[unlikely]] return; }
L_0037F898:
    set32(c.r[4], ld32((c.r[16].w[0] + 4972u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0037F8AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F8ACu);  if (depth < kMaxDepth) unit_00A1(c, 184u, depth + 1u); else { c.pc = 0x00385E30u; return; } if (c.pc != 0x0037F8ACu) [[unlikely]] return; }
L_0037F8AC:
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[5], 0u + 15u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F8BCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 135u, depth + 1u); else { c.pc = 0x00385760u; return; } if (c.pc != 0x0037F8BCu) [[unlikely]] return; }
L_0037F8BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0037F8D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F8E8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 298u, depth + 1u); else { c.pc = 0x0012E440u; return; } if (c.pc != 0x0037F8E8u) [[unlikely]] return; }
L_0037F8E8:
    set32(c.r[4], c.r[16].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F8F4u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x0037F8F4u) [[unlikely]] return; }
L_0037F8F4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 31664u);
    set32(c.r[2], c.r[2].w[0] - 31576u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 48u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[5], c.r[16].w[0] + 176u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F920u); st32((c.r[16].w[0] + 32u), 0u);  if (depth < kMaxDepth) unit_00A1(c, 155u, depth + 1u); else { c.pc = 0x00385B50u; return; } if (c.pc != 0x0037F920u) [[unlikely]] return; }
L_0037F920:
    st32((c.r[16].w[0] + 208u), 0u);
    set32(c.r[4], c.r[16].w[0] + 216u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F934u); st32((c.r[16].w[0] + 212u), 0u);  if (depth < kMaxDepth) unit_0049(c, 271u, depth + 1u); else { c.pc = 0x002275A0u; return; } if (c.pc != 0x0037F934u) [[unlikely]] return; }
L_0037F934:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[14] = ld32((c.r[1].w[0] - 1088u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42280000u);
    c.f[12] = c.r[2].w[0];
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[16].w[0] + 276u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], 0u + 11u);
    c.f[13] = c.r[3].w[0];
    set32(c.r[6], 0u + 765u);
    c.f[15] = c.r[2].w[0];
    set32(c.r[7], 0u + 830u);
    set32(c.r[8], c.r[8].w[0] - 1152u);
    set32(c.r[9], c.r[9].w[0] - 1120u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F97Cu); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000D(c, 34u, depth + 1u); else { c.pc = 0x00134330u; return; } if (c.pc != 0x0037F97Cu) [[unlikely]] return; }
L_0037F97C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] + 4240u);
    set32(c.r[7], c.r[29].w[0] + 32u);
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    set32(c.r[4], c.r[4].w[0] + 4256u);
    set32(c.r[5], c.r[29].w[0] + 56u);
    set32(c.r[3], c.r[29].w[0] + 48u);
    c.r[8].d[0] = 0ull + 0ull;
    st128((c.r[7].w[0]) & ~15u, c.r[6]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[6]);
    set32(c.r[2], c.r[2].w[0] + 4264u);
    st128((c.r[16].w[0] + 128u) & ~15u, c.r[6]);
    c.r[4].d[0] = ld64((c.r[4].w[0]));
    st64((c.r[5].w[0]), c.r[4].d[0]);
    c.r[2].d[0] = ld64((c.r[2].w[0]));
    st64((c.r[3].w[0]), c.r[2].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x438E0000u);
    c.budget -= 19;
L_0037F9C8:
    set32(c.r[3], c.r[8].w[0] << 2);
    set32(c.r[2], c.r[8].w[0] << 1);
    set32(c.r[6], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[7], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[8].sd[0] < 2ll ? 1ull : 0ull;
    st32((c.r[7].w[0] + 176u), c.r[4].w[0]);
    st32((c.r[7].w[0] + 180u), c.r[5].w[0]);
    st8((c.r[7].w[0] + 184u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[6].w[0] + 48u)));
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 200u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037F9C8u | kUnwind; return; } goto L_0037F9C8; } }
    set32(c.r[3], c.r[16].w[0] + 176u);
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 160u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 64u);
    st32((c.r[16].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    st32((c.r[16].w[0] + 168u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 124u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FA30u); st8((c.r[16].w[0] + 120u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x0037FA30u) [[unlikely]] return; }
L_0037FA30:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0037FA50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0037FB20; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 31664u);
    set32(c.r[2], c.r[2].w[0] - 31576u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 208u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0037FAA8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0037FAA8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FAA8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037FAA8u) [[unlikely]] return; }
L_0037FAA8:
    st32((c.r[17].w[0] + 208u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 212u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0037FAD0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0037FAD0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FAD0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037FAD0u) [[unlikely]] return; }
L_0037FAD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FAD8u); st32((c.r[17].w[0] + 212u), 0u);  if (depth < kMaxDepth) unit_007A(c, 420u, depth + 1u); else { c.pc = 0x002EB550u; return; } if (c.pc != 0x0037FAD8u) [[unlikely]] return; }
L_0037FAD8:
    set32(c.r[4], c.r[17].w[0] + 276u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FAE4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000D(c, 54u, depth + 1u); else { c.pc = 0x00134720u; return; } if (c.pc != 0x0037FAE4u) [[unlikely]] return; }
L_0037FAE4:
    set32(c.r[4], c.r[17].w[0] + 216u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FAF0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0049(c, 274u, depth + 1u); else { c.pc = 0x002275F0u; return; } if (c.pc != 0x0037FAF0u) [[unlikely]] return; }
L_0037FAF0:
    set32(c.r[4], c.r[17].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FAFCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x0037FAFCu) [[unlikely]] return; }
L_0037FAFC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FB08u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 300u, depth + 1u); else { c.pc = 0x0012E490u; return; } if (c.pc != 0x0037FB08u) [[unlikely]] return; }
L_0037FB08:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0037FB24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FB20u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0037FB20u) [[unlikely]] return; }
L_0037FB20:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0037FB24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0037FB40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037FB50:
    c.f[0] = ld32((c.r[4].w[0] + 228u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 6;
    { set32(c.r[4], c.r[4].w[0] + 48u);  [[clang::musttail]] return unit_00A1(c, 142u, depth); }
L_0037FB70:
    set32(c.r[3], ld32((c.r[4].w[0] + 208u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0037FB80; } }
    c.r[5].d[0] = ld8((c.r[3].w[0] + 137u));
    c.budget -= 1;
L_0037FB80:
    set32(c.r[2], ld32((c.r[4].w[0] + 212u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[5].d[0] & 255ull;  if (t) { goto L_0037FB90; } }
    c.r[4].d[0] = ld8((c.r[3].w[0] + 137u));
    c.budget -= 1;
L_0037FB90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037FBA4; } }
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0037FBA8; } }
L_0037FBA4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0037FBA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037FBB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FBC4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 80u, depth + 1u); else { c.pc = 0x0037CE90u; return; } if (c.pc != 0x0037FBC4u) [[unlikely]] return; }
L_0037FBC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037FBDC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FBDCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037FBDCu) [[unlikely]] return; }
L_0037FBDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0037FBF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FC04u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 429u, depth + 1u); else { c.pc = 0x0037FB70u; return; } if (c.pc != 0x0037FC04u) [[unlikely]] return; }
L_0037FC04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037FC1C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FC1Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037FC1Cu) [[unlikely]] return; }
L_0037FC1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0037FC30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[1].w[0] - 1536u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FC54u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 314u, depth + 1u); else { c.pc = 0x0013F0C0u; return; } if (c.pc != 0x0037FC54u) [[unlikely]] return; }
L_0037FC54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0037FC7C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FC6Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037FC6Cu) [[unlikely]] return; }
L_0037FC6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FC74u); set32(c.r[4], 0u + 400u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x0037FC74u) [[unlikely]] return; }
L_0037FC74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0037FD44; } }
L_0037FC7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FC84u);  if (depth < kMaxDepth) unit_000F(c, 315u, depth + 1u); else { c.pc = 0x0013F0D0u; return; } if (c.pc != 0x0037FC84u) [[unlikely]] return; }
L_0037FC84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037FCAC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FC9Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037FC9Cu) [[unlikely]] return; }
L_0037FC9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FCA4u); set32(c.r[4], 0u + 401u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x0037FCA4u) [[unlikely]] return; }
L_0037FCA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FD40; } }
L_0037FCAC:
    c.r[4].d[0] = ld16((c.r[17].w[0] + 168u));
    c.r[3].d[0] = c.r[4].d[0] & 32768ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] & 8192ull;  if (t) { goto L_0037FCFC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[16].w[0] + 32u), c.r[2].w[0]);  if (t) { goto L_0037FCD4; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 2;
L_0037FCD4:
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[4], c.r[16].w[0] + 64u);
    st32((c.r[16].w[0] + 168u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 124u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FCECu); st8((c.r[16].w[0] + 120u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x0037FCECu) [[unlikely]] return; }
L_0037FCEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FCF4u); set32(c.r[4], 0u + 402u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x0037FCF4u) [[unlikely]] return; }
L_0037FCF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FD40; } }
L_0037FCFC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0037FD40; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037FD20; } }
    st32((c.r[16].w[0] + 32u), 0u);
    c.budget -= 1;
L_0037FD20:
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[4], c.r[16].w[0] + 64u);
    st32((c.r[16].w[0] + 168u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 124u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FD38u); st8((c.r[16].w[0] + 120u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x0037FD38u) [[unlikely]] return; }
L_0037FD38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FD40u); set32(c.r[4], 0u + 402u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x0037FD40u) [[unlikely]] return; }
L_0037FD40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0037FD44:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0037FD60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FD74u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 429u, depth + 1u); else { c.pc = 0x0037FB70u; return; } if (c.pc != 0x0037FD74u) [[unlikely]] return; }
L_0037FD74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037FDB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FD84u);  if (depth < kMaxDepth) unit_0087(c, 98u, depth + 1u); else { c.pc = 0x0031CBB0u; return; } if (c.pc != 0x0037FD84u) [[unlikely]] return; }
L_0037FD84:
    set32(c.r[5], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FD90u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 109u, depth + 1u); else { c.pc = 0x0031CCE0u; return; } if (c.pc != 0x0037FD90u) [[unlikely]] return; }
L_0037FD90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FD98u);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x0037FD98u) [[unlikely]] return; }
L_0037FD98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FDA0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 161u, depth + 1u); else { c.pc = 0x0031D350u; return; } if (c.pc != 0x0037FDA0u) [[unlikely]] return; }
L_0037FDA0:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FDB0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037FDB0u) [[unlikely]] return; }
L_0037FDB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0037FDC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FDD4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 429u, depth + 1u); else { c.pc = 0x0037FB70u; return; } if (c.pc != 0x0037FDD4u) [[unlikely]] return; }
L_0037FDD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037FDEC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FDECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037FDECu) [[unlikely]] return; }
L_0037FDEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0037FE00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FE1Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 318u, depth + 1u); else { c.pc = 0x0012E5E0u; return; } if (c.pc != 0x0037FE1Cu) [[unlikely]] return; }
L_0037FE1C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 208u)));
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[3].w[0] + 624u);  if (t) { goto L_0037FE7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FE38u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0037FE38u) [[unlikely]] return; }
L_0037FE38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0037FE4C; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FE4Cu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_002A(c, 287u, depth + 1u); else { c.pc = 0x001AB200u; return; } if (c.pc != 0x0037FE4Cu) [[unlikely]] return; }
L_0037FE4C:
    st32((c.r[16].w[0] + 208u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FE5Cu); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x0037FE5Cu) [[unlikely]] return; }
L_0037FE5C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FE6Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x0037FE6Cu) [[unlikely]] return; }
L_0037FE6C:
    set32(c.r[4], ld32((c.r[16].w[0] + 208u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FE7Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x0037FE7Cu) [[unlikely]] return; }
L_0037FE7C:
    set32(c.r[4], ld32((c.r[16].w[0] + 208u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FE90u); set32(c.r[5], 0u + 161u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037FE90u) [[unlikely]] return; }
L_0037FE90:
    set32(c.r[2], ld32((c.r[16].w[0] + 212u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037FEE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FEA4u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0037FEA4u) [[unlikely]] return; }
L_0037FEA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0037FEB8; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FEB8u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0025(c, 304u, depth + 1u); else { c.pc = 0x00196C90u; return; } if (c.pc != 0x0037FEB8u) [[unlikely]] return; }
L_0037FEB8:
    st32((c.r[16].w[0] + 212u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FEC8u); set32(c.r[5], 0u + 10002u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x0037FEC8u) [[unlikely]] return; }
L_0037FEC8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FED8u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x0037FED8u) [[unlikely]] return; }
L_0037FED8:
    set32(c.r[4], ld32((c.r[16].w[0] + 212u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FEE8u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x0037FEE8u) [[unlikely]] return; }
L_0037FEE8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 212u)));
    c.f[0] = ld32((c.r[1].w[0] - 1096u));
    st32((c.r[2].w[0] + 104u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 212u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FF0Cu); set32(c.r[5], 0u + 5u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037FF0Cu) [[unlikely]] return; }
L_0037FF0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FF14u); set32(c.r[4], c.r[16].w[0] + 276u);  if (depth < kMaxDepth) unit_000D(c, 68u, depth + 1u); else { c.pc = 0x001348C0u; return; } if (c.pc != 0x0037FF14u) [[unlikely]] return; }
L_0037FF14:
    st32((c.r[16].w[0] + 252u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    st32((c.r[16].w[0] + 256u), 0u);
    set32(c.r[3], 0u + 5u);
    st32((c.r[16].w[0] + 260u), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 216u);
    set32(c.r[2], 0u + 15u);
    st32((c.r[16].w[0] + 264u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 268u), c.r[2].w[0]);
    set32(c.r[5], c.r[16].w[0] + 252u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FF44u); st32((c.r[16].w[0] + 272u), 0u);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x0037FF44u) [[unlikely]] return; }
L_0037FF44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FF4Cu);  if (depth < kMaxDepth) unit_009F(c, 200u, depth + 1u); else { c.pc = 0x0037DCF0u; return; } if (c.pc != 0x0037FF4Cu) [[unlikely]] return; }
L_0037FF4C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FF5Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 211u, depth + 1u); else { c.pc = 0x0037DE40u; return; } if (c.pc != 0x0037FF5Cu) [[unlikely]] return; }
L_0037FF5C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FF68u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_009F(c, 186u, depth + 1u); else { c.pc = 0x0037DB10u; return; } if (c.pc != 0x0037FF68u) [[unlikely]] return; }
L_0037FF68:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FF74u); set32(c.r[5], 0u + 19u);  if (depth < kMaxDepth) unit_009F(c, 179u, depth + 1u); else { c.pc = 0x0037D9B0u; return; } if (c.pc != 0x0037FF74u) [[unlikely]] return; }
L_0037FF74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FF7Cu);  if (depth < kMaxDepth) unit_007A(c, 423u, depth + 1u); else { c.pc = 0x002EB590u; return; } if (c.pc != 0x0037FF7Cu) [[unlikely]] return; }
L_0037FF7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FF84u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007A(c, 451u, depth + 1u); else { c.pc = 0x002EB820u; return; } if (c.pc != 0x0037FF84u) [[unlikely]] return; }
L_0037FF84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FF8Cu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x0037FF8Cu) [[unlikely]] return; }
L_0037FF8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0037FFB0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E600u | kUnwind; return; } [[clang::musttail]] return unit_000B(c, 319u, depth); }
L_0037FFC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FFD4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 320u, depth + 1u); else { c.pc = 0x0012E610u; return; } if (c.pc != 0x0037FFD4u) [[unlikely]] return; }
L_0037FFD4:
    set32(c.r[4], ld32((c.r[16].w[0] + 208u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0037FFF0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FFF0u); set32(c.r[5], 0u + 162u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037FFF0u) [[unlikely]] return; }
L_0037FFF0:
    set32(c.r[4], ld32((c.r[16].w[0] + 212u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_00A0(c, 2u, depth); } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.budget -= 1;
    [[clang::musttail]] return unit_00A0(c, 1u, depth);
}

}
