#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0028[4096] = {
    1, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0,
    8, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0,
    0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 18, 0, 19, 0, 20, 0, 0, 21, 0, 0, 0, 0, 0,
    22, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 26, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    28, 0, 0, 0, 29, 0, 0, 30, 0, 31, 0, 32, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0,
    36, 0, 0, 0, 0, 37, 0, 0, 38, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 42, 0, 43, 0, 44,
    0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 50, 0, 51, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 54, 0, 55, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0,
    0, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 61, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0,
    0, 65, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0,
    75, 0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 81, 0, 82,
    0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 88,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 92, 0, 0, 93, 0, 94, 0, 0, 95, 0, 0,
    0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0,
    0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 103, 0, 104, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0,
    0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 113, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 115,
    0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 120, 0, 0, 0, 0,
    0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0,
    0, 124, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 129, 0, 130, 0, 0, 0, 131, 0, 0, 132, 0, 133,
    0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 139, 0, 140, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0,
    144, 0, 0, 0, 145, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0,
    149, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0,
    0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 164,
    0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 168, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0,
    173, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 185,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0,
    0, 188, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    190, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 198, 0, 0, 0, 0,
    0, 0, 199, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 206, 0, 0, 0, 207, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 213, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 227,
    0, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0,
    0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 237, 0,
    0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 240, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 242, 0,
    0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 246, 0, 247, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 250, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 251, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0,
    0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0,
    262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0,
    265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0,
    268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 276,
    0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 281, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    283, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 286, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 290, 0, 0, 0, 0, 0, 0,
    291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 293, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0,
    296, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 300,
    0, 0, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0,
    0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310,
    0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 316, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323,
    0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 326,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 328, 0, 0, 0, 0, 329, 0,
    0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 340, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0,
    343, 0, 0, 0, 344, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 347,
    0, 0, 348, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 351, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0,
    0, 353, 0, 0, 354, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 359, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 362, 0, 0, 0,
    0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0,
    0, 375, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 385, 0, 386, 0, 0, 387, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 389, 0, 0, 390, 0, 0, 0, 0, 0, 391,
    0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 394, 0, 395, 0, 396, 0, 397, 0, 398, 0,
    399, 0, 400, 0, 401, 0, 402, 0, 403, 0, 404, 0, 0, 0, 0, 0, 405, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0,
    0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    412, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0,
};

void unit_0028(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001A0000;
    case 2u: goto L_001A0008;
    case 3u: goto L_001A0020;
    case 4u: goto L_001A0030;
    case 5u: goto L_001A0044;
    case 6u: goto L_001A0054;
    case 7u: goto L_001A0068;
    case 8u: goto L_001A0080;
    case 9u: goto L_001A0090;
    case 10u: goto L_001A00A4;
    case 11u: goto L_001A00B8;
    case 12u: goto L_001A00C8;
    case 13u: goto L_001A00DC;
    case 14u: goto L_001A00F0;
    case 15u: goto L_001A0104;
    case 16u: goto L_001A0130;
    case 17u: goto L_001A0140;
    case 18u: goto L_001A014C;
    case 19u: goto L_001A0154;
    case 20u: goto L_001A015C;
    case 21u: goto L_001A0168;
    case 22u: goto L_001A0180;
    case 23u: goto L_001A0194;
    case 24u: goto L_001A01B0;
    case 25u: goto L_001A01C4;
    case 26u: goto L_001A01D0;
    case 27u: goto L_001A01D8;
    case 28u: goto L_001A0200;
    case 29u: goto L_001A0210;
    case 30u: goto L_001A021C;
    case 31u: goto L_001A0224;
    case 32u: goto L_001A022C;
    case 33u: goto L_001A0238;
    case 34u: goto L_001A0250;
    case 35u: goto L_001A0264;
    case 36u: goto L_001A0280;
    case 37u: goto L_001A0294;
    case 38u: goto L_001A02A0;
    case 39u: goto L_001A02A8;
    case 40u: goto L_001A02D0;
    case 41u: goto L_001A02E0;
    case 42u: goto L_001A02EC;
    case 43u: goto L_001A02F4;
    case 44u: goto L_001A02FC;
    case 45u: goto L_001A0308;
    case 46u: goto L_001A0320;
    case 47u: goto L_001A0334;
    case 48u: goto L_001A0350;
    case 49u: goto L_001A0364;
    case 50u: goto L_001A0370;
    case 51u: goto L_001A0378;
    case 52u: goto L_001A03A0;
    case 53u: goto L_001A03B0;
    case 54u: goto L_001A03BC;
    case 55u: goto L_001A03C4;
    case 56u: goto L_001A03D0;
    case 57u: goto L_001A03E0;
    case 58u: goto L_001A03F4;
    case 59u: goto L_001A0410;
    case 60u: goto L_001A0424;
    case 61u: goto L_001A0430;
    case 62u: goto L_001A0438;
    case 63u: goto L_001A0460;
    case 64u: goto L_001A0478;
    case 65u: goto L_001A0484;
    case 66u: goto L_001A048C;
    case 67u: goto L_001A04A4;
    case 68u: goto L_001A04F0;
    case 69u: goto L_001A053C;
    case 70u: goto L_001A0548;
    case 71u: goto L_001A0558;
    case 72u: goto L_001A059C;
    case 73u: goto L_001A05AC;
    case 74u: goto L_001A05F0;
    case 75u: goto L_001A0600;
    case 76u: goto L_001A060C;
    case 77u: goto L_001A0624;
    case 78u: goto L_001A0638;
    case 79u: goto L_001A0650;
    case 80u: goto L_001A0668;
    case 81u: goto L_001A0674;
    case 82u: goto L_001A067C;
    case 83u: goto L_001A069C;
    case 84u: goto L_001A06B0;
    case 85u: goto L_001A06C0;
    case 86u: goto L_001A070C;
    case 87u: goto L_001A0758;
    case 88u: goto L_001A077C;
    case 89u: goto L_001A07C8;
    case 90u: goto L_001A0818;
    case 91u: goto L_001A0840;
    case 92u: goto L_001A0854;
    case 93u: goto L_001A0860;
    case 94u: goto L_001A0868;
    case 95u: goto L_001A0874;
    case 96u: goto L_001A088C;
    case 97u: goto L_001A08A0;
    case 98u: goto L_001A08C0;
    case 99u: goto L_001A08D0;
    case 100u: goto L_001A08F8;
    case 101u: goto L_001A0904;
    case 102u: goto L_001A0930;
    case 103u: goto L_001A093C;
    case 104u: goto L_001A0944;
    case 105u: goto L_001A0960;
    case 106u: goto L_001A09B8;
    case 107u: goto L_001A09C8;
    case 108u: goto L_001A09D4;
    case 109u: goto L_001A09EC;
    case 110u: goto L_001A0A10;
    case 111u: goto L_001A0A60;
    case 112u: goto L_001A0AC0;
    case 113u: goto L_001A0AC8;
    case 114u: goto L_001A0AE4;
    case 115u: goto L_001A0AFC;
    case 116u: goto L_001A0B20;
    case 117u: goto L_001A0B30;
    case 118u: goto L_001A0B4C;
    case 119u: goto L_001A0B60;
    case 120u: goto L_001A0B6C;
    case 121u: goto L_001A0B8C;
    case 122u: goto L_001A0BA4;
    case 123u: goto L_001A0BE0;
    case 124u: goto L_001A0C04;
    case 125u: goto L_001A0C0C;
    case 126u: goto L_001A0C24;
    case 127u: goto L_001A0C30;
    case 128u: goto L_001A0C44;
    case 129u: goto L_001A0C50;
    case 130u: goto L_001A0C58;
    case 131u: goto L_001A0C68;
    case 132u: goto L_001A0C74;
    case 133u: goto L_001A0C7C;
    case 134u: goto L_001A0C94;
    case 135u: goto L_001A0CB0;
    case 136u: goto L_001A0CC4;
    case 137u: goto L_001A0CDC;
    case 138u: goto L_001A0CF0;
    case 139u: goto L_001A0D18;
    case 140u: goto L_001A0D20;
    case 141u: goto L_001A0D2C;
    case 142u: goto L_001A0D50;
    case 143u: goto L_001A0D70;
    case 144u: goto L_001A0D80;
    case 145u: goto L_001A0D90;
    case 146u: goto L_001A0D9C;
    case 147u: goto L_001A0DD0;
    case 148u: goto L_001A0DEC;
    case 149u: goto L_001A0E00;
    case 150u: goto L_001A0E24;
    case 151u: goto L_001A0E3C;
    case 152u: goto L_001A0E60;
    case 153u: goto L_001A0E70;
    case 154u: goto L_001A0EB0;
    case 155u: goto L_001A0EDC;
    case 156u: goto L_001A0EEC;
    case 157u: goto L_001A0F18;
    case 158u: goto L_001A0F64;
    case 159u: goto L_001A0F88;
    case 160u: goto L_001A1020;
    case 161u: goto L_001A1040;
    case 162u: goto L_001A109C;
    case 163u: goto L_001A10F0;
    case 164u: goto L_001A10FC;
    case 165u: goto L_001A1110;
    case 166u: goto L_001A1130;
    case 167u: goto L_001A1160;
    case 168u: goto L_001A116C;
    case 169u: goto L_001A1194;
    case 170u: goto L_001A11D0;
    case 171u: goto L_001A1244;
    case 172u: goto L_001A1260;
    case 173u: goto L_001A1280;
    case 174u: goto L_001A12A0;
    case 175u: goto L_001A12E0;
    case 176u: goto L_001A1324;
    case 177u: goto L_001A1510;
    case 178u: goto L_001A15B0;
    case 179u: goto L_001A1640;
    case 180u: goto L_001A1750;
    case 181u: goto L_001A1810;
    case 182u: goto L_001A18F8;
    case 183u: goto L_001A1940;
    case 184u: goto L_001A1970;
    case 185u: goto L_001A197C;
    case 186u: goto L_001A19D4;
    case 187u: goto L_001A19E0;
    case 188u: goto L_001A1A04;
    case 189u: goto L_001A1A14;
    case 190u: goto L_001A1A80;
    case 191u: goto L_001A1A90;
    case 192u: goto L_001A1AA0;
    case 193u: goto L_001A1ADC;
    case 194u: goto L_001A1B18;
    case 195u: goto L_001A1B74;
    case 196u: goto L_001A1BB0;
    case 197u: goto L_001A1BE0;
    case 198u: goto L_001A1BEC;
    case 199u: goto L_001A1C08;
    case 200u: goto L_001A1C20;
    case 201u: goto L_001A1C3C;
    case 202u: goto L_001A1CB0;
    case 203u: goto L_001A1CC8;
    case 204u: goto L_001A1CD0;
    case 205u: goto L_001A1D4C;
    case 206u: goto L_001A1D90;
    case 207u: goto L_001A1DA0;
    case 208u: goto L_001A1DA8;
    case 209u: goto L_001A1E1C;
    case 210u: goto L_001A1F2C;
    case 211u: goto L_001A1F4C;
    case 212u: goto L_001A1F5C;
    case 213u: goto L_001A1F64;
    case 214u: goto L_001A1FCC;
    case 215u: goto L_001A1FF4;
    case 216u: goto L_001A2024;
    case 217u: goto L_001A2048;
    case 218u: goto L_001A209C;
    case 219u: goto L_001A20C0;
    case 220u: goto L_001A20E4;
    case 221u: goto L_001A2130;
    case 222u: goto L_001A2154;
    case 223u: goto L_001A2170;
    case 224u: goto L_001A21B8;
    case 225u: goto L_001A21D0;
    case 226u: goto L_001A21EC;
    case 227u: goto L_001A21FC;
    case 228u: goto L_001A2210;
    case 229u: goto L_001A2220;
    case 230u: goto L_001A2248;
    case 231u: goto L_001A226C;
    case 232u: goto L_001A2290;
    case 233u: goto L_001A22C0;
    case 234u: goto L_001A22F0;
    case 235u: goto L_001A2330;
    case 236u: goto L_001A2360;
    case 237u: goto L_001A2378;
    case 238u: goto L_001A2390;
    case 239u: goto L_001A23B4;
    case 240u: goto L_001A23BC;
    case 241u: goto L_001A23D8;
    case 242u: goto L_001A23F8;
    case 243u: goto L_001A2410;
    case 244u: goto L_001A2430;
    case 245u: goto L_001A2458;
    case 246u: goto L_001A2484;
    case 247u: goto L_001A248C;
    case 248u: goto L_001A24A8;
    case 249u: goto L_001A24DC;
    case 250u: goto L_001A24E4;
    case 251u: goto L_001A2510;
    case 252u: goto L_001A2518;
    case 253u: goto L_001A2548;
    case 254u: goto L_001A2550;
    case 255u: goto L_001A2590;
    case 256u: goto L_001A25DC;
    case 257u: goto L_001A2608;
    case 258u: goto L_001A2640;
    case 259u: goto L_001A2678;
    case 260u: goto L_001A2690;
    case 261u: goto L_001A26F0;
    case 262u: goto L_001A2700;
    case 263u: goto L_001A27B0;
    case 264u: goto L_001A27EC;
    case 265u: goto L_001A2800;
    case 266u: goto L_001A286C;
    case 267u: goto L_001A28F4;
    case 268u: goto L_001A2900;
    case 269u: goto L_001A2958;
    case 270u: goto L_001A29B0;
    case 271u: goto L_001A29C0;
    case 272u: goto L_001A2A08;
    case 273u: goto L_001A2A3C;
    case 274u: goto L_001A2A44;
    case 275u: goto L_001A2A68;
    case 276u: goto L_001A2A7C;
    case 277u: goto L_001A2A90;
    case 278u: goto L_001A2AC0;
    case 279u: goto L_001A2AFC;
    case 280u: goto L_001A2B28;
    case 281u: goto L_001A2B30;
    case 282u: goto L_001A2B4C;
    case 283u: goto L_001A2B80;
    case 284u: goto L_001A2B88;
    case 285u: goto L_001A2BDC;
    case 286u: goto L_001A2BF0;
    case 287u: goto L_001A2C24;
    case 288u: goto L_001A2C2C;
    case 289u: goto L_001A2C5C;
    case 290u: goto L_001A2C64;
    case 291u: goto L_001A2C80;
    case 292u: goto L_001A2CA8;
    case 293u: goto L_001A2CBC;
    case 294u: goto L_001A2CD0;
    case 295u: goto L_001A2CEC;
    case 296u: goto L_001A2D00;
    case 297u: goto L_001A2D14;
    case 298u: goto L_001A2D50;
    case 299u: goto L_001A2D68;
    case 300u: goto L_001A2D7C;
    case 301u: goto L_001A2D90;
    case 302u: goto L_001A2DA4;
    case 303u: goto L_001A2DC0;
    case 304u: goto L_001A2DF8;
    case 305u: goto L_001A2E28;
    case 306u: goto L_001A2E38;
    case 307u: goto L_001A2E48;
    case 308u: goto L_001A2E78;
    case 309u: goto L_001A2E90;
    case 310u: goto L_001A2EFC;
    case 311u: goto L_001A2F04;
    case 312u: goto L_001A2F90;
    case 313u: goto L_001A2FA8;
    case 314u: goto L_001A2FC8;
    case 315u: goto L_001A3028;
    case 316u: goto L_001A3034;
    case 317u: goto L_001A304C;
    case 318u: goto L_001A306C;
    case 319u: goto L_001A3094;
    case 320u: goto L_001A30C0;
    case 321u: goto L_001A3124;
    case 322u: goto L_001A3130;
    case 323u: goto L_001A317C;
    case 324u: goto L_001A3184;
    case 325u: goto L_001A31F4;
    case 326u: goto L_001A31FC;
    case 327u: goto L_001A325C;
    case 328u: goto L_001A3264;
    case 329u: goto L_001A3278;
    case 330u: goto L_001A3298;
    case 331u: goto L_001A32C8;
    case 332u: goto L_001A32D4;
    case 333u: goto L_001A3300;
    case 334u: goto L_001A3354;
    case 335u: goto L_001A3364;
    case 336u: goto L_001A33CC;
    case 337u: goto L_001A33EC;
    case 338u: goto L_001A3440;
    case 339u: goto L_001A346C;
    case 340u: goto L_001A3478;
    case 341u: goto L_001A34D4;
    case 342u: goto L_001A34F0;
    case 343u: goto L_001A3500;
    case 344u: goto L_001A3510;
    case 345u: goto L_001A3520;
    case 346u: goto L_001A3564;
    case 347u: goto L_001A357C;
    case 348u: goto L_001A3588;
    case 349u: goto L_001A359C;
    case 350u: goto L_001A35C0;
    case 351u: goto L_001A35CC;
    case 352u: goto L_001A35E0;
    case 353u: goto L_001A3604;
    case 354u: goto L_001A3610;
    case 355u: goto L_001A3628;
    case 356u: goto L_001A3644;
    case 357u: goto L_001A3670;
    case 358u: goto L_001A3760;
    case 359u: goto L_001A3768;
    case 360u: goto L_001A37C0;
    case 361u: goto L_001A37E8;
    case 362u: goto L_001A37F0;
    case 363u: goto L_001A3808;
    case 364u: goto L_001A3828;
    case 365u: goto L_001A3868;
    case 366u: goto L_001A38D0;
    case 367u: goto L_001A392C;
    case 368u: goto L_001A3954;
    case 369u: goto L_001A39B8;
    case 370u: goto L_001A3A14;
    case 371u: goto L_001A3A4C;
    case 372u: goto L_001A3AC0;
    case 373u: goto L_001A3AD0;
    case 374u: goto L_001A3AEC;
    case 375u: goto L_001A3B04;
    case 376u: goto L_001A3B24;
    case 377u: goto L_001A3B44;
    case 378u: goto L_001A3B64;
    case 379u: goto L_001A3B9C;
    case 380u: goto L_001A3BB8;
    case 381u: goto L_001A3BD4;
    case 382u: goto L_001A3BF0;
    case 383u: goto L_001A3C1C;
    case 384u: goto L_001A3C40;
    case 385u: goto L_001A3C94;
    case 386u: goto L_001A3C9C;
    case 387u: goto L_001A3CA8;
    case 388u: goto L_001A3CC0;
    case 389u: goto L_001A3CD8;
    case 390u: goto L_001A3CE4;
    case 391u: goto L_001A3CFC;
    case 392u: goto L_001A3D20;
    case 393u: goto L_001A3D50;
    case 394u: goto L_001A3D58;
    case 395u: goto L_001A3D60;
    case 396u: goto L_001A3D68;
    case 397u: goto L_001A3D70;
    case 398u: goto L_001A3D78;
    case 399u: goto L_001A3D80;
    case 400u: goto L_001A3D88;
    case 401u: goto L_001A3D90;
    case 402u: goto L_001A3D98;
    case 403u: goto L_001A3DA0;
    case 404u: goto L_001A3DA8;
    case 405u: goto L_001A3DC0;
    case 406u: goto L_001A3DD0;
    case 407u: goto L_001A3DF0;
    case 408u: goto L_001A3E08;
    case 409u: goto L_001A3E58;
    case 410u: goto L_001A3EB8;
    case 411u: goto L_001A3EC8;
    case 412u: goto L_001A3F00;
    case 413u: goto L_001A3F10;
    case 414u: goto L_001A3F34;
    case 415u: goto L_001A3F50;
    case 416u: goto L_001A3FE8;
    default: bad_entry(c, 0x001A0000u); return;
    }
L_001A0000:
    c.budget -= 2;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0008u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A0008u) [[unlikely]] return; }
L_001A0008:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001A0020:
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 1204u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 39u);  c.pc = t; return; }
L_001A0030:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 312u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0044u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001A0044u) [[unlikely]] return; }
L_001A0044:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001A0054; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0054u);  if (depth < kMaxDepth) unit_009B(c, 112u, depth + 1u); else { c.pc = 0x0036CEA0u; return; } if (c.pc != 0x001A0054u) [[unlikely]] return; }
L_001A0054:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0068u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A0068u) [[unlikely]] return; }
L_001A0068:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001A0080:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 39u);  c.pc = t; return; }
L_001A0090:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A00A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 127u, depth + 1u); else { c.pc = 0x0037D270u; return; } if (c.pc != 0x001A00A4u) [[unlikely]] return; }
L_001A00A4:
    st8((c.r[2].w[0] + 36u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], 0u + 736u);
    set32(c.r[2], ld32((c.r[16].w[0] + 1192u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A00B8u); set32(c.r[16], c.r[2].w[0] + 86u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001A00B8u) [[unlikely]] return; }
L_001A00B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001A00C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A00C8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 237u, depth + 1u); else { c.pc = 0x003A5E30u; return; } if (c.pc != 0x001A00C8u) [[unlikely]] return; }
L_001A00C8:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A00DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A00DCu) [[unlikely]] return; }
L_001A00DC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001A00F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0104u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 127u, depth + 1u); else { c.pc = 0x0037D270u; return; } if (c.pc != 0x001A0104u) [[unlikely]] return; }
L_001A0104:
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 36u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1204u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 38u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001A0130:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0140u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_007A(c, 321u, depth + 1u); else { c.pc = 0x002EA9B0u; return; } if (c.pc != 0x001A0140u) [[unlikely]] return; }
L_001A0140:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A014Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_007A(c, 387u, depth + 1u); else { c.pc = 0x002EB060u; return; } if (c.pc != 0x001A014Cu) [[unlikely]] return; }
L_001A014C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0154u);  if (depth < kMaxDepth) unit_009F(c, 127u, depth + 1u); else { c.pc = 0x0037D270u; return; } if (c.pc != 0x001A0154u) [[unlikely]] return; }
L_001A0154:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A015Cu); st8((c.r[2].w[0] + 36u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0087(c, 101u, depth + 1u); else { c.pc = 0x0031CBF0u; return; } if (c.pc != 0x001A015Cu) [[unlikely]] return; }
L_001A015C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0168u); set32(c.r[4], 0u + 1000u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001A0168u) [[unlikely]] return; }
L_001A0168:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], c.r[16].w[0] + 278u);  if (t) { goto L_001A0180; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0180u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 215u, depth + 1u); else { c.pc = 0x002AF670u; return; } if (c.pc != 0x001A0180u) [[unlikely]] return; }
L_001A0180:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0194u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A0194u) [[unlikely]] return; }
L_001A0194:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001A01B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A01C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_007A(c, 321u, depth + 1u); else { c.pc = 0x002EA9B0u; return; } if (c.pc != 0x001A01C4u) [[unlikely]] return; }
L_001A01C4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A01D0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_007A(c, 387u, depth + 1u); else { c.pc = 0x002EB060u; return; } if (c.pc != 0x001A01D0u) [[unlikely]] return; }
L_001A01D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A01D8u);  if (depth < kMaxDepth) unit_009F(c, 127u, depth + 1u); else { c.pc = 0x0037D270u; return; } if (c.pc != 0x001A01D8u) [[unlikely]] return; }
L_001A01D8:
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 36u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1204u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 38u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001A0200:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0210u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_007A(c, 321u, depth + 1u); else { c.pc = 0x002EA9B0u; return; } if (c.pc != 0x001A0210u) [[unlikely]] return; }
L_001A0210:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A021Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_007A(c, 387u, depth + 1u); else { c.pc = 0x002EB060u; return; } if (c.pc != 0x001A021Cu) [[unlikely]] return; }
L_001A021C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0224u);  if (depth < kMaxDepth) unit_009F(c, 127u, depth + 1u); else { c.pc = 0x0037D270u; return; } if (c.pc != 0x001A0224u) [[unlikely]] return; }
L_001A0224:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A022Cu); st8((c.r[2].w[0] + 36u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0087(c, 101u, depth + 1u); else { c.pc = 0x0031CBF0u; return; } if (c.pc != 0x001A022Cu) [[unlikely]] return; }
L_001A022C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0238u); set32(c.r[4], 0u + 1000u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001A0238u) [[unlikely]] return; }
L_001A0238:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], c.r[16].w[0] + 300u);  if (t) { goto L_001A0250; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0250u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 215u, depth + 1u); else { c.pc = 0x002AF670u; return; } if (c.pc != 0x001A0250u) [[unlikely]] return; }
L_001A0250:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0264u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A0264u) [[unlikely]] return; }
L_001A0264:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001A0280:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0294u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_007A(c, 321u, depth + 1u); else { c.pc = 0x002EA9B0u; return; } if (c.pc != 0x001A0294u) [[unlikely]] return; }
L_001A0294:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A02A0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_007A(c, 387u, depth + 1u); else { c.pc = 0x002EB060u; return; } if (c.pc != 0x001A02A0u) [[unlikely]] return; }
L_001A02A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A02A8u);  if (depth < kMaxDepth) unit_009F(c, 127u, depth + 1u); else { c.pc = 0x0037D270u; return; } if (c.pc != 0x001A02A8u) [[unlikely]] return; }
L_001A02A8:
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 36u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1204u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 38u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001A02D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A02E0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_007A(c, 321u, depth + 1u); else { c.pc = 0x002EA9B0u; return; } if (c.pc != 0x001A02E0u) [[unlikely]] return; }
L_001A02E0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A02ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_007A(c, 387u, depth + 1u); else { c.pc = 0x002EB060u; return; } if (c.pc != 0x001A02ECu) [[unlikely]] return; }
L_001A02EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A02F4u);  if (depth < kMaxDepth) unit_009F(c, 127u, depth + 1u); else { c.pc = 0x0037D270u; return; } if (c.pc != 0x001A02F4u) [[unlikely]] return; }
L_001A02F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A02FCu); st8((c.r[2].w[0] + 36u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0087(c, 101u, depth + 1u); else { c.pc = 0x0031CBF0u; return; } if (c.pc != 0x001A02FCu) [[unlikely]] return; }
L_001A02FC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0308u); set32(c.r[4], 0u + 1000u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001A0308u) [[unlikely]] return; }
L_001A0308:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], c.r[16].w[0] + 324u);  if (t) { goto L_001A0320; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0320u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 215u, depth + 1u); else { c.pc = 0x002AF670u; return; } if (c.pc != 0x001A0320u) [[unlikely]] return; }
L_001A0320:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0334u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A0334u) [[unlikely]] return; }
L_001A0334:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001A0350:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0364u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_007A(c, 321u, depth + 1u); else { c.pc = 0x002EA9B0u; return; } if (c.pc != 0x001A0364u) [[unlikely]] return; }
L_001A0364:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0370u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_007A(c, 387u, depth + 1u); else { c.pc = 0x002EB060u; return; } if (c.pc != 0x001A0370u) [[unlikely]] return; }
L_001A0370:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0378u);  if (depth < kMaxDepth) unit_009F(c, 127u, depth + 1u); else { c.pc = 0x0037D270u; return; } if (c.pc != 0x001A0378u) [[unlikely]] return; }
L_001A0378:
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 36u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1204u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 38u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001A03A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A03B0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_007A(c, 321u, depth + 1u); else { c.pc = 0x002EA9B0u; return; } if (c.pc != 0x001A03B0u) [[unlikely]] return; }
L_001A03B0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A03BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_007A(c, 387u, depth + 1u); else { c.pc = 0x002EB060u; return; } if (c.pc != 0x001A03BCu) [[unlikely]] return; }
L_001A03BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A03C4u);  if (depth < kMaxDepth) unit_009F(c, 127u, depth + 1u); else { c.pc = 0x0037D270u; return; } if (c.pc != 0x001A03C4u) [[unlikely]] return; }
L_001A03C4:
    st8((c.r[2].w[0] + 36u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A03D0u); set32(c.r[4], 0u + 640u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001A03D0u) [[unlikely]] return; }
L_001A03D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001A03E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A03E0u);  if (depth < kMaxDepth) unit_00A0(c, 272u, depth + 1u); else { c.pc = 0x00382370u; return; } if (c.pc != 0x001A03E0u) [[unlikely]] return; }
L_001A03E0:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A03F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A03F4u) [[unlikely]] return; }
L_001A03F4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001A0410:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0424u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_007A(c, 321u, depth + 1u); else { c.pc = 0x002EA9B0u; return; } if (c.pc != 0x001A0424u) [[unlikely]] return; }
L_001A0424:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0430u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_007A(c, 387u, depth + 1u); else { c.pc = 0x002EB060u; return; } if (c.pc != 0x001A0430u) [[unlikely]] return; }
L_001A0430:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0438u);  if (depth < kMaxDepth) unit_009F(c, 127u, depth + 1u); else { c.pc = 0x0037D270u; return; } if (c.pc != 0x001A0438u) [[unlikely]] return; }
L_001A0438:
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 36u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1204u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001A0460:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0478u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_007A(c, 321u, depth + 1u); else { c.pc = 0x002EA9B0u; return; } if (c.pc != 0x001A0478u) [[unlikely]] return; }
L_001A0478:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0484u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_007A(c, 387u, depth + 1u); else { c.pc = 0x002EB060u; return; } if (c.pc != 0x001A0484u) [[unlikely]] return; }
L_001A0484:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A048Cu);  if (depth < kMaxDepth) unit_009F(c, 127u, depth + 1u); else { c.pc = 0x0037D270u; return; } if (c.pc != 0x001A048Cu) [[unlikely]] return; }
L_001A048C:
    st8((c.r[2].w[0] + 36u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 1192u)));
    set32(c.r[17], c.r[2].w[0] + 86u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A04A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x001A04A4u) [[unlikely]] return; }
L_001A04A4:
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[16].w[0] + 1244u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 1u));
    st8((c.r[16].w[0] + 1245u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 2u));
    st8((c.r[16].w[0] + 1246u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 3u));
    st8((c.r[16].w[0] + 1247u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 4u));
    st8((c.r[16].w[0] + 1248u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[6].d[0] = ld8((c.r[2].w[0] + 5u));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 6u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 7u));
    st8((c.r[16].w[0] + 1249u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 1250u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A04F0u); st8((c.r[16].w[0] + 1251u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x001A04F0u) [[unlikely]] return; }
L_001A04F0:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 8u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[16].w[0] + 1252u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 9u));
    st8((c.r[16].w[0] + 1253u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 10u));
    st8((c.r[16].w[0] + 1254u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 11u));
    st8((c.r[16].w[0] + 1255u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 12u));
    st8((c.r[16].w[0] + 1256u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[6].d[0] = ld8((c.r[2].w[0] + 13u));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 14u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 15u));
    st8((c.r[16].w[0] + 1257u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 1258u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A053Cu); st8((c.r[16].w[0] + 1259u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x001A053Cu) [[unlikely]] return; }
L_001A053C:
    set32(c.r[2], ld32((c.r[2].w[0] + 360u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0548u); st32((c.r[16].w[0] + 1260u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0087(c, 101u, depth + 1u); else { c.pc = 0x0031CBF0u; return; } if (c.pc != 0x001A0548u) [[unlikely]] return; }
L_001A0548:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0558u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x001A0558u) [[unlikely]] return; }
L_001A0558:
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1u));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 2u));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 4u));
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 5u));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 6u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 7u));
    st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A059Cu); st8((c.r[2].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0087(c, 101u, depth + 1u); else { c.pc = 0x0031CBF0u; return; } if (c.pc != 0x001A059Cu) [[unlikely]] return; }
L_001A059C:
    set32(c.r[16], c.r[2].w[0] + 8u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A05ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x001A05ACu) [[unlikely]] return; }
L_001A05AC:
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    st8((c.r[2].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1u));
    st8((c.r[2].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 2u));
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    st8((c.r[2].w[0] + 11u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 4u));
    st8((c.r[2].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 5u));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 6u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 7u));
    st8((c.r[2].w[0] + 13u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 14u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A05F0u); st8((c.r[2].w[0] + 15u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0087(c, 101u, depth + 1u); else { c.pc = 0x0031CBF0u; return; } if (c.pc != 0x001A05F0u) [[unlikely]] return; }
L_001A05F0:
    set32(c.r[16], ld32((c.r[2].w[0] + 360u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0600u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x001A0600u) [[unlikely]] return; }
L_001A0600:
    st32((c.r[2].w[0] + 360u), c.r[16].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A060Cu); set32(c.r[4], 0u + 352u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001A060Cu) [[unlikely]] return; }
L_001A060C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001A0624; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0624u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_007B(c, 94u, depth + 1u); else { c.pc = 0x002ECB60u; return; } if (c.pc != 0x001A0624u) [[unlikely]] return; }
L_001A0624:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0638u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A0638u) [[unlikely]] return; }
L_001A0638:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001A0650:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0668u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_007A(c, 321u, depth + 1u); else { c.pc = 0x002EA9B0u; return; } if (c.pc != 0x001A0668u) [[unlikely]] return; }
L_001A0668:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0674u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_007A(c, 387u, depth + 1u); else { c.pc = 0x002EB060u; return; } if (c.pc != 0x001A0674u) [[unlikely]] return; }
L_001A0674:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A067Cu);  if (depth < kMaxDepth) unit_009F(c, 127u, depth + 1u); else { c.pc = 0x0037D270u; return; } if (c.pc != 0x001A067Cu) [[unlikely]] return; }
L_001A067C:
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 36u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 1204u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 1196u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A069Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A069Cu) [[unlikely]] return; }
L_001A069C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A0768; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 1192u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A06B0u); set32(c.r[17], c.r[2].w[0] + 86u);  if (depth < kMaxDepth) unit_0087(c, 101u, depth + 1u); else { c.pc = 0x0031CBF0u; return; } if (c.pc != 0x001A06B0u) [[unlikely]] return; }
L_001A06B0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A06C0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x001A06C0u) [[unlikely]] return; }
L_001A06C0:
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 1u));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 2u));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 3u));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 4u));
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[6].d[0] = ld8((c.r[2].w[0] + 5u));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 6u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 7u));
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A070Cu); st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x001A070Cu) [[unlikely]] return; }
L_001A070C:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 8u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 9u));
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 10u));
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 11u));
    st8((c.r[16].w[0] + 11u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 12u));
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[6].d[0] = ld8((c.r[2].w[0] + 13u));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 14u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 15u));
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 14u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0758u); st8((c.r[16].w[0] + 15u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x001A0758u) [[unlikely]] return; }
L_001A0758:
    set32(c.r[2], ld32((c.r[2].w[0] + 360u)));
    st32((c.r[16].w[0] + 360u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001A0820; } }
L_001A0768:
    set32(c.r[2], ld32((c.r[17].w[0] + 1192u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[2].w[0] + 86u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A077Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x001A077Cu) [[unlikely]] return; }
L_001A077C:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1244u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1245u));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1246u));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1247u));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1248u));
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[7].d[0] = ld8((c.r[17].w[0] + 1249u));
    c.r[6].d[0] = ld8((c.r[17].w[0] + 1250u));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1251u));
    st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A07C8u); st8((c.r[2].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x001A07C8u) [[unlikely]] return; }
L_001A07C8:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1252u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[2].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1253u));
    st8((c.r[2].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1254u));
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1255u));
    st8((c.r[2].w[0] + 11u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1256u));
    st8((c.r[2].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[7].d[0] = ld8((c.r[17].w[0] + 1257u));
    c.r[6].d[0] = ld8((c.r[17].w[0] + 1258u));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1259u));
    st8((c.r[2].w[0] + 13u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 14u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 15u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[16], ld32((c.r[17].w[0] + 1260u)));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0818u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x001A0818u) [[unlikely]] return; }
L_001A0818:
    st32((c.r[2].w[0] + 360u), c.r[16].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001A0820:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001A0840:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0854u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_007A(c, 321u, depth + 1u); else { c.pc = 0x002EA9B0u; return; } if (c.pc != 0x001A0854u) [[unlikely]] return; }
L_001A0854:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0860u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_007A(c, 387u, depth + 1u); else { c.pc = 0x002EB060u; return; } if (c.pc != 0x001A0860u) [[unlikely]] return; }
L_001A0860:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0868u);  if (depth < kMaxDepth) unit_009F(c, 127u, depth + 1u); else { c.pc = 0x0037D270u; return; } if (c.pc != 0x001A0868u) [[unlikely]] return; }
L_001A0868:
    st8((c.r[2].w[0] + 36u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0874u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001A0874u) [[unlikely]] return; }
L_001A0874:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A088C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 1192u)));
    c.r[6].d[0] = ld8((c.r[16].w[0] + 1188u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A088Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 99u, depth + 1u); else { c.pc = 0x001A08D0u; return; } if (c.pc != 0x001A088Cu) [[unlikely]] return; }
L_001A088C:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A08A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A08A0u) [[unlikely]] return; }
L_001A08A0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001A08C0:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1188u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; if (c.r[3].d[0] == 0) c.r[2].d[0] = 0ull;  c.pc = t; return; }
L_001A08D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A08F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 298u, depth + 1u); else { c.pc = 0x0012E440u; return; } if (c.pc != 0x001A08F8u) [[unlikely]] return; }
L_001A08F8:
    set32(c.r[4], c.r[18].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0904u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x001A0904u) [[unlikely]] return; }
L_001A0904:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 11936u);
    set32(c.r[2], c.r[2].w[0] - 11848u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    st8((c.r[18].w[0] + 32u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[18].w[0] + 36u), c.r[17].w[0]);
    st32((c.r[18].w[0] + 40u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0930u); st8((c.r[18].w[0] + 13u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_007A(c, 321u, depth + 1u); else { c.pc = 0x002EA9B0u; return; } if (c.pc != 0x001A0930u) [[unlikely]] return; }
L_001A0930:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A093Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_007A(c, 387u, depth + 1u); else { c.pc = 0x002EB060u; return; } if (c.pc != 0x001A093Cu) [[unlikely]] return; }
L_001A093C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0944u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x001A0944u) [[unlikely]] return; }
L_001A0944:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001A0960:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001A09EC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 11936u);
    set32(c.r[2], c.r[2].w[0] - 11848u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001A09B8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001A09B8; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A09B8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A09B8u) [[unlikely]] return; }
L_001A09B8:
    set32(c.r[4], c.r[17].w[0] + 20u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A09C8u); st32((c.r[17].w[0] + 40u), 0u);  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x001A09C8u) [[unlikely]] return; }
L_001A09C8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A09D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 300u, depth + 1u); else { c.pc = 0x0012E490u; return; } if (c.pc != 0x001A09D4u) [[unlikely]] return; }
L_001A09D4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001A09F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A09ECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001A09ECu) [[unlikely]] return; }
L_001A09EC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001A09F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001A0A10:
    set32(c.r[29], c.r[29].w[0] - 320u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[1].w[0] + 20144u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[17], ld32((c.r[1].w[0] + 1420u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1424u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1416u)));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0A60u); set32(c.r[18], c.r[3].w[0] << (c.r[2].w[0] & 31u));  if (depth < kMaxDepth) unit_0017(c, 177u, depth + 1u); else { c.pc = 0x0015E070u; return; } if (c.pc != 0x001A0A60u) [[unlikely]] return; }
L_001A0A60:
    c.f[0] = c.r[17].w[0];
    set32(c.r[2], 0u + 255u);
    c.f[1] = c.r[18].w[0];
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 1));
    st32((c.r[29].w[0] + 112u), 0u);
    st32((c.r[29].w[0] + 116u), 0u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 120u), 0u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[18].w[0]) >> 1));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[29].w[0] + 224u), c.f[0]);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 228u), c.f[1]);
    c.f[12] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[14] = ld32((c.r[1].w[0] + 14704u));
    c.budget -= 24;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0AC0u); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A0AC0u) [[unlikely]] return; }
L_001A0AC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0AC8u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0017(c, 179u, depth + 1u); else { c.pc = 0x0015E0B0u; return; } if (c.pc != 0x001A0AC8u) [[unlikely]] return; }
L_001A0AC8:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001A0AE4; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0AE4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A0AE4u) [[unlikely]] return; }
L_001A0AE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[2], c.r[2].w[0] - 17408u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0AFCu); st32((c.r[29].w[0] + 240u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 264u, depth + 1u); else { c.pc = 0x0014ADA0u; return; } if (c.pc != 0x001A0AFCu) [[unlikely]] return; }
L_001A0AFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_001A0B20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A0B30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0B4Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 318u, depth + 1u); else { c.pc = 0x0012E5E0u; return; } if (c.pc != 0x001A0B4Cu) [[unlikely]] return; }
L_001A0B4C:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A0BFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0B60u);  if (depth < kMaxDepth) unit_009F(c, 118u, depth + 1u); else { c.pc = 0x0037D1C0u; return; } if (c.pc != 0x001A0B60u) [[unlikely]] return; }
L_001A0B60:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0B6Cu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x001A0B6Cu) [[unlikely]] return; }
L_001A0B6C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[17], ld32((c.r[1].w[0] + 1420u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0B8Cu); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001A0B8Cu) [[unlikely]] return; }
L_001A0B8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 1));  if (t) { goto L_001A0BA8; } }
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[5].d[0] = ld64((c.r[3].w[0] + 16u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0BA4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x001A0BA4u) [[unlikely]] return; }
L_001A0BA4:
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 1));
    c.budget -= 1;
L_001A0BA8:
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 2));
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[3], c.r[3].w[0] - 20u);
    c.f[0] = c.r[3].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C70000u);
    c.f[14] = ld32((c.r[1].w[0] + 14704u));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[13] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0BE0u); c.f[12] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A0BE0u) [[unlikely]] return; }
L_001A0BE0:
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[1].w[0] + 14696u));
    st32((c.r[3].w[0] + 20u), c.f[0]);
    st32((c.r[3].w[0] + 24u), 0u);
    c.budget -= 7;
L_001A0BFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0C04u);  if (depth < kMaxDepth) unit_0087(c, 98u, depth + 1u); else { c.pc = 0x0031CBB0u; return; } if (c.pc != 0x001A0C04u) [[unlikely]] return; }
L_001A0C04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0C0Cu); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007A(c, 321u, depth + 1u); else { c.pc = 0x002EA9B0u; return; } if (c.pc != 0x001A0C0Cu) [[unlikely]] return; }
L_001A0C0C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[16].w[0] + 32u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001A0C38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0C24u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 109u, depth + 1u); else { c.pc = 0x0031CCE0u; return; } if (c.pc != 0x001A0C24u) [[unlikely]] return; }
L_001A0C24:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0C30u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_007A(c, 412u, depth + 1u); else { c.pc = 0x002EB480u; return; } if (c.pc != 0x001A0C30u) [[unlikely]] return; }
L_001A0C30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A0C50; } }
L_001A0C38:
    set32(c.r[5], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0C44u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 111u, depth + 1u); else { c.pc = 0x0031CD10u; return; } if (c.pc != 0x001A0C44u) [[unlikely]] return; }
L_001A0C44:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0C50u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_007A(c, 412u, depth + 1u); else { c.pc = 0x002EB480u; return; } if (c.pc != 0x001A0C50u) [[unlikely]] return; }
L_001A0C50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0C58u);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x001A0C58u) [[unlikely]] return; }
L_001A0C58:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] + 292u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0C68u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 161u, depth + 1u); else { c.pc = 0x0031D350u; return; } if (c.pc != 0x001A0C68u) [[unlikely]] return; }
L_001A0C68:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0C74u); st8((c.r[17].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00A2(c, 276u, depth + 1u); else { c.pc = 0x0038A8E0u; return; } if (c.pc != 0x001A0C74u) [[unlikely]] return; }
L_001A0C74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0C7Cu);  if (depth < kMaxDepth) unit_009F(c, 127u, depth + 1u); else { c.pc = 0x0037D270u; return; } if (c.pc != 0x001A0C7Cu) [[unlikely]] return; }
L_001A0C7C:
    st8((c.r[2].w[0] + 38u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 32u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A0C94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0C94u);  if (depth < kMaxDepth) unit_007A(c, 414u, depth + 1u); else { c.pc = 0x002EB4F0u; return; } if (c.pc != 0x001A0C94u) [[unlikely]] return; }
L_001A0C94:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001A0CB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0CC4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 80u, depth + 1u); else { c.pc = 0x0037CE90u; return; } if (c.pc != 0x001A0CC4u) [[unlikely]] return; }
L_001A0CC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A0CDC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0CDCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A0CDCu) [[unlikely]] return; }
L_001A0CDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001A0CF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[4].w[0] + 32u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_001A0D24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0D18u);  if (depth < kMaxDepth) unit_007A(c, 423u, depth + 1u); else { c.pc = 0x002EB590u; return; } if (c.pc != 0x001A0D18u) [[unlikely]] return; }
L_001A0D18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0D20u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007A(c, 450u, depth + 1u); else { c.pc = 0x002EB810u; return; } if (c.pc != 0x001A0D20u) [[unlikely]] return; }
L_001A0D20:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_001A0D24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0D2Cu);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x001A0D2Cu) [[unlikely]] return; }
L_001A0D2C:
    set32(c.r[3], ld32((c.r[2].w[0] + 276u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A0D50; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001A0D50; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0D50u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A0D50u) [[unlikely]] return; }
L_001A0D50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001A0D70:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001A0A10u | kUnwind; return; } goto L_001A0A10; }
L_001A0D80:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001A0960u | kUnwind; return; } goto L_001A0960; }
L_001A0D90:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_001A0DB0; } }
L_001A0D9C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_001A0DAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A0DC0; } }
L_001A0DAC:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_001A0DB0:
    c.r[3].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] << (c.r[2].w[0] & 31u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A0D9Cu | kUnwind; return; } goto L_001A0D9C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001A0DC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A0DD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[9].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 8u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0DECu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 153u, depth + 1u); else { c.pc = 0x001A0E70u; return; } if (c.pc != 0x001A0DECu) [[unlikely]] return; }
L_001A0DEC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001A0E00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001A0E3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0E24u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_0010(c, 83u, depth + 1u); else { c.pc = 0x00141160u; return; } if (c.pc != 0x001A0E24u) [[unlikely]] return; }
L_001A0E24:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[17].w[0] + 8u), 0u);  if (t) { goto L_001A0E3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0E3Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001A0E3Cu) [[unlikely]] return; }
L_001A0E3C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001A0E60:
    st32((c.r[4].w[0] + 8u), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_001A0E70:
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
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0EB0u); c.r[16].d[0] = c.r[9].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 83u, depth + 1u); else { c.pc = 0x00141160u; return; } if (c.pc != 0x001A0EB0u) [[unlikely]] return; }
L_001A0EB0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[3].d[0]; st32((c.r[21].w[0] + 8u), 0u);  if (t) { goto L_001A0EC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::mult(c, 0, c.r[19].w[0], c.r[18].w[0]); c.r[2].d[0] = c.lo.d[0];  if (t) { goto L_001A0ECC; } }
L_001A0EC4:
    set32(c.r[3], 0u + 4u);
    mmi::mult(c, 0, c.r[19].w[0], c.r[18].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 2;
L_001A0ECC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]); c.r[4].d[0] = c.lo.d[0];  if (t) { goto L_001A0EE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0EDCu);  if (depth < kMaxDepth) unit_0011(c, 313u, depth + 1u); else { c.pc = 0x00147E40u; return; } if (c.pc != 0x001A0EDCu) [[unlikely]] return; }
L_001A0EDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001A0EF0; } }
L_001A0EE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0EECu);  if (depth < kMaxDepth) unit_0010(c, 72u, depth + 1u); else { c.pc = 0x00141020u; return; } if (c.pc != 0x001A0EECu) [[unlikely]] return; }
L_001A0EEC:
    st32((c.r[21].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 1;
L_001A0EF0:
    st64((c.r[21].w[0]), 0ull);
    set32(c.r[2], 0u - 16384u);
    c.r[6].d[0] = ld16((c.r[21].w[0]));
    c.r[3].d[0] = c.r[17].d[0] & 16383ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0F18u); st16((c.r[21].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0013(c, 8u, depth + 1u); else { c.pc = 0x0014C060u; return; } if (c.pc != 0x001A0F18u) [[unlikely]] return; }
L_001A0F18:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[7].d[0] = ld64((c.r[21].w[0]));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 63ull;
    c.r[6].d[0] = c.r[2].d[0] << 14;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF00000u);
    c.r[5].d[0] = c.r[2].d[0] | 16383ull;
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[2].d[0] = c.r[20].d[0] & 63ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    set32(c.r[3], c.r[2].w[0] << 4);
    st64((c.r[21].w[0]), c.r[5].d[0]);
    set32(c.r[2], 0u - 1009u);
    c.r[5].d[0] = ld16((c.r[21].w[0] + 2u));
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0F64u); st16((c.r[21].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0028(c, 145u, depth + 1u); else { c.pc = 0x001A0D90u; return; } if (c.pc != 0x001A0F64u) [[unlikely]] return; }
L_001A0F64:
    c.r[5].d[0] = ld8((c.r[21].w[0] + 3u));
    c.r[3].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[2], 0u - 61u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0F88u); st8((c.r[21].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0028(c, 145u, depth + 1u); else { c.pc = 0x001A0D90u; return; } if (c.pc != 0x001A0F88u) [[unlikely]] return; }
L_001A0F88:
    c.r[3].d[0] = c.r[20].d[0] ^ 1ull;
    c.r[8].d[0] = ld64((c.r[21].w[0]));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[2].d[0] & 15ull;
    c.r[7].d[0] = c.r[4].d[0] << 30;
    set32(c.r[6], c.r[3].w[0] << 2);
    set32(c.r[4], 0u - 4u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FFF0000u);
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[5], 0u - 5u);
    c.r[4].d[0] = c.r[8].d[0] & c.r[3].d[0];
    c.r[7].d[0] = c.r[4].d[0] | c.r[7].d[0];
    c.r[3].d[0] = 0ull & 3ull;
    st64((c.r[21].w[0]), c.r[7].d[0]);
    set32(c.r[4], c.r[3].w[0] << 3);
    c.r[7].d[0] = ld8((c.r[21].w[0] + 4u));
    set32(c.r[3], 0u - 25u);
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[21].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[21].w[0] + 4u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[21].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 35;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001A1020:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1040u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001A1040u) [[unlikely]] return; }
L_001A1040:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001A10A0; } }
    c.r[6].d[0] = ld16((c.r[17].w[0] + 2u));
    set32(c.r[7], 0u + 1u);
    c.r[3].d[0] = ld64((c.r[17].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld8((c.r[17].w[0] + 3u));
    c.r[2].d[0] = ld16((c.r[17].w[0]));
    c.r[6].d[0] = c.r[6].d[0] << 54;
    c.r[8].d[0] = c.r[6].d[0] >> 58;
    c.r[3].d[0] = c.r[3].d[0] << 30;
    c.r[6].d[0] = c.r[5].d[0] << 58;
    c.r[3].d[0] = c.r[3].d[0] >> 60;
    c.r[5].d[0] = c.r[8].d[0] << 32;
    c.r[6].d[0] = c.r[6].d[0] >> 60;
    c.r[2].d[0] = c.r[2].d[0] & 16383ull;
    set32(c.r[6], c.r[7].w[0] << (c.r[6].w[0] & 31u));
    c.r[8].d[0] = c.r[2].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    set32(c.r[7], c.r[7].w[0] << (c.r[3].w[0] & 31u));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A109Cu); c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);  if (depth < kMaxDepth) unit_0028(c, 147u, depth + 1u); else { c.pc = 0x001A0DD0u; return; } if (c.pc != 0x001A109Cu) [[unlikely]] return; }
L_001A109C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001A10A0:
    c.r[5].d[0] = ld64((c.r[17].w[0]));
    set32(c.r[6], 0u + 1u);
    c.r[4].d[0] = ld8((c.r[17].w[0] + 3u));
    set32(c.r[2], 0u + 2u);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 2u));
    c.r[5].d[0] = c.r[5].d[0] << 30;
    c.r[4].d[0] = c.r[4].d[0] << 58;
    c.r[5].d[0] = c.r[5].d[0] >> 60;
    c.r[3].d[0] = c.r[3].d[0] << 54;
    c.r[4].d[0] = c.r[4].d[0] >> 60;
    c.r[3].d[0] = c.r[3].d[0] >> 58;
    set32(c.r[5], c.r[6].w[0] << (c.r[5].w[0] & 31u));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[6].w[0] << (c.r[4].w[0] & 31u));  if (t) { goto L_001A10E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] << 32;  if (t) { goto L_001A10E8; } }
L_001A10E0:
    set32(c.r[2], 0u + 4u);
    c.r[18].d[0] = c.r[2].d[0] << 32;
    c.budget -= 2;
L_001A10E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A10F0u); c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 32);  if (depth < kMaxDepth) unit_0006(c, 221u, depth + 1u); else { c.pc = 0x0011A608u; return; } if (c.pc != 0x001A10F0u) [[unlikely]] return; }
L_001A10F0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A10FCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 221u, depth + 1u); else { c.pc = 0x0011A608u; return; } if (c.pc != 0x001A10FCu) [[unlikely]] return; }
L_001A10FC:
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    c.r[6].d[0] = c.r[2].d[0] << 32;
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1110u); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x001A1110u) [[unlikely]] return; }
L_001A1110:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001A1130:
    set32(c.r[29], c.r[29].w[0] - 1104u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001A1160; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1160u);  if (depth < kMaxDepth) unit_0010(c, 83u, depth + 1u); else { c.pc = 0x00141160u; return; } if (c.pc != 0x001A1160u) [[unlikely]] return; }
L_001A1160:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A116Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 152u, depth + 1u); else { c.pc = 0x0015DC50u; return; } if (c.pc != 0x001A116Cu) [[unlikely]] return; }
L_001A116C:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001A1244; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_001A118C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1100u), 0u);  if (t) { goto L_001A1198; } }
L_001A118C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1194u);  if (depth < kMaxDepth) unit_0012(c, 295u, depth + 1u); else { c.pc = 0x0014B6A0u; return; } if (c.pc != 0x001A1194u) [[unlikely]] return; }
L_001A1194:
    st32((c.r[29].w[0] + 1100u), c.r[2].w[0]);
    c.budget -= 1;
L_001A1198:
    set32(c.r[2], c.r[29].w[0] + 1100u);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[18].w[0] + 4u), c.f[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 18u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A11BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001A11CC; } }
L_001A11BC:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 12u));
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_001A11CC:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001A11D0:
    c.r[5].d[0] = c.r[6].d[0] & 31ull;
    c.r[2].d[0] = c.r[5].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[5].sd[0] < 16ll ? 1ull : 0ull;  if (t) { goto L_001A11F4; } }
    c.r[1].d[0] = c.r[5].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001A11F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { goto L_001A120C; } }
L_001A11F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[6].d[0] & 65504ull;  if (t) { goto L_001A1210; } }
    c.r[1].d[0] = c.r[5].sd[0] < 24ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001A120C; } }
    set32(c.r[5], c.r[5].w[0] - 8u);
    c.budget -= 1;
L_001A120C:
    c.r[3].d[0] = c.r[6].d[0] & 65504ull;
    c.budget -= 1;
L_001A1210:
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[6].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 64u), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A11D0u | kUnwind; return; } goto L_001A11D0; } }
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1244u); set32(c.r[6], 0u + 1024u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x001A1244u) [[unlikely]] return; }
L_001A1244:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1104u);  c.pc = t; return; }
L_001A1260:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[4].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + 14720u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_001A1280:
    set32(c.r[2], c.r[4].w[0] - 51u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 64u);  if (t) { goto L_001A1294; } }
    set32(c.r[2], 0u + 32u);
    c.budget -= 1;
L_001A1294:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A12A0:
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    mmi::mult(c, 1, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 28u), c.r[3].w[0]);  c.pc = t; return; }
L_001A12E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 15200u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 48u)));
    st32((c.r[4].w[0] + 32u), 0u);
    set32(c.r[3], c.r[3].w[0] << 4);
    st32((c.r[4].w[0] + 36u), 0u);
    set32(c.r[19], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1324u); set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0028(c, 174u, depth + 1u); else { c.pc = 0x001A12A0u; return; } if (c.pc != 0x001A1324u) [[unlikely]] return; }
L_001A1324:
    set32(c.r[5], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[3], 0u + 7u);
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[5], c.r[19].w[0] - c.r[5].w[0]);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 1));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[18].w[0]), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[5], c.r[16].w[0] - c.r[5].w[0]);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 1));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[18].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 48u)));
    c.budget -= 16;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[1].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;  if (t) { goto L_001A13F8; } }
    set32(c.r[6], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] >= 0;  if (t) { goto L_001A1384; } }
    st32((c.r[18].w[0]), 0u);
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 32u), c.r[3].w[0]);  if (t) { goto L_001A13AC; } }
L_001A1384:
    set32(c.r[5], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[6].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] - c.r[5].w[0]);  if (t) { goto L_001A13AC; } }
    st32((c.r[18].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    st32((c.r[18].w[0] + 32u), c.r[3].w[0]);
    c.budget -= 4;
L_001A13AC:
    set32(c.r[6], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] >= 0;  if (t) { goto L_001A13CC; } }
    st32((c.r[18].w[0] + 4u), 0u);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 36u), c.r[3].w[0]);  if (t) { goto L_001A14F4; } }
L_001A13CC:
    set32(c.r[5], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], c.r[6].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] - c.r[5].w[0]);  if (t) { goto L_001A14F4; } }
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 36u), c.r[3].w[0]);  if (t) { goto L_001A14F4; } }
L_001A13F8:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001A147C; } }
    set32(c.r[6], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] >= 0;  if (t) { goto L_001A1420; } }
    st32((c.r[18].w[0]), 0u);
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 32u), c.r[3].w[0]);  if (t) { goto L_001A1448; } }
L_001A1420:
    set32(c.r[5], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[6].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] - c.r[5].w[0]);  if (t) { goto L_001A1448; } }
    st32((c.r[18].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    st32((c.r[18].w[0] + 32u), c.r[3].w[0]);
    c.budget -= 4;
L_001A1448:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_001A1464; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001A14F4; } }
L_001A1464:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.r[3].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] - c.r[4].w[0]);  if (t) { goto L_001A14F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001A14F4; } }
L_001A147C:
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_001A1498; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[3].w[0]);  if (t) { goto L_001A14AC; } }
L_001A1498:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.r[3].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] - c.r[4].w[0]);  if (t) { goto L_001A14AC; } }
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_001A14AC:
    set32(c.r[6], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] >= 0;  if (t) { goto L_001A14CC; } }
    st32((c.r[18].w[0] + 4u), 0u);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 36u), c.r[3].w[0]);  if (t) { goto L_001A14F4; } }
L_001A14CC:
    set32(c.r[5], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], c.r[6].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] - c.r[5].w[0]);  if (t) { goto L_001A14F4; } }
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    st32((c.r[18].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 4;
L_001A14F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001A1510:
    set32(c.r[7], ld32((c.r[4].w[0] + 24u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[6], ld32((c.r[4].w[0])));
    set32(c.r[5], c.r[5].w[0] + 15200u);
    set32(c.r[3], 0u + 7u);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 1));
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    st32((c.r[4].w[0] + 40u), c.r[6].w[0]);
    set32(c.r[7], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 1));
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    st32((c.r[4].w[0] + 44u), c.r[6].w[0]);
    set32(c.r[7], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[6], c.r[7].w[0] << 4);
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[6].w[0] + 12u)));
    set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 1));
    c.budget -= 21;
    { const bool t = c.r[7].d[0] == c.r[3].d[0]; set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 1));  if (t) { goto L_001A15A4; } }
    c.r[1].d[0] = c.r[7].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001A158C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    c.r[1].d[0] = c.r[8].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001A15A4; } }
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 44u), c.r[3].w[0]);  if (t) { goto L_001A15A4; } }
L_001A158C:
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    c.r[1].d[0] = c.r[9].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001A15A4; } }
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    st32((c.r[4].w[0] + 40u), c.r[3].w[0]);
    c.budget -= 2;
L_001A15A4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A15B0:
    set32(c.r[6], ld32((c.r[4].w[0] + 24u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[7], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[5], c.r[5].w[0] + 15200u);
    set32(c.r[3], 0u + 7u);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 1));
    set32(c.r[6], c.r[7].w[0] - c.r[6].w[0]);
    st32((c.r[4].w[0]), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[7], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 1));
    set32(c.r[6], c.r[7].w[0] - c.r[6].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[6].w[0]);
    set32(c.r[7], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[6], c.r[7].w[0] << 4);
    c.budget -= 17;
    { const bool t = c.r[7].d[0] == c.r[3].d[0]; set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);  if (t) { goto L_001A1634; } }
    c.r[1].d[0] = c.r[7].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001A161C; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_001A1634; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 12u)));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001A1634; } }
L_001A161C:
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_001A1634; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_001A1634:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A1640:
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[12], c.r[10].w[0] << 4);
    set32(c.r[11], c.r[11].w[0] + 15200u);
    set32(c.r[3], 0u + 7u);
    set32(c.r[14], c.r[11].w[0] + c.r[12].w[0]);
    set32(c.r[12], ld32((c.r[14].w[0] + 8u)));
    set32(c.r[11], ld32((c.r[14].w[0] + 12u)));
    set32(c.r[13], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[12].w[0]) >> 1));
    c.budget -= 10;
    { const bool t = c.r[10].d[0] != c.r[3].d[0]; set32(c.r[11], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[11].w[0]) >> 1));  if (t) { goto L_001A167C; } }
    set32(c.r[6], c.r[6].w[0] - c.r[8].w[0]);
    set32(c.r[3], c.r[7].w[0] - c.r[9].w[0]);
    st32((c.r[4].w[0]), c.r[6].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[3].w[0]);  if (t) { goto L_001A1744; } }
L_001A167C:
    c.r[1].d[0] = c.r[10].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[8].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;  if (t) { goto L_001A16EC; } }
    set32(c.r[3], c.r[6].w[0] - c.r[8].w[0]);
    c.r[1].d[0] = c.r[9].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[4].w[0]), c.r[3].w[0]);  if (t) { goto L_001A16C4; } }
    set32(c.r[4], c.r[7].w[0] - c.r[9].w[0]);
    c.r[1].d[0] = c.r[11].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001A16BC; } }
    set32(c.r[3], ld32((c.r[14].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[3].w[0]);  if (t) { goto L_001A1744; } }
L_001A16BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[4].w[0]);  if (t) { goto L_001A1744; } }
L_001A16C4:
    set32(c.r[4], c.r[9].w[0] - c.r[7].w[0]);
    c.r[1].d[0] = c.r[11].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u - c.r[4].w[0]);  if (t) { goto L_001A16E4; } }
    set32(c.r[3], ld32((c.r[14].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[3].w[0]);  if (t) { goto L_001A1744; } }
L_001A16E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[3].w[0]);  if (t) { goto L_001A1744; } }
L_001A16EC:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[8].w[0] - c.r[6].w[0]);  if (t) { goto L_001A171C; } }
    set32(c.r[3], c.r[6].w[0] - c.r[8].w[0]);
    c.r[1].d[0] = c.r[13].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001A1714; } }
    set32(c.r[3], c.r[12].w[0] - c.r[3].w[0]);
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[3].w[0]);  if (t) { goto L_001A173C; } }
L_001A1714:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[3].w[0]);  if (t) { goto L_001A173C; } }
L_001A171C:
    c.r[1].d[0] = c.r[13].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001A1734; } }
    set32(c.r[3], c.r[12].w[0] - c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[3].w[0]);  if (t) { goto L_001A173C; } }
L_001A1734:
    set32(c.r[3], 0u - c.r[3].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_001A173C:
    set32(c.r[3], c.r[7].w[0] - c.r[9].w[0]);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_001A1744:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A1750:
    st32((c.r[5].w[0]), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[4].w[0]), 0u);
    set32(c.r[3], ld32((c.r[1].w[0] - 1536u)));
    c.r[7].d[0] = ld16((c.r[3].w[0] + 168u));
    c.r[3].d[0] = c.r[7].d[0] & 4096ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[7].d[0] & 16384ull;  if (t) { goto L_001A1790; } }
    c.r[1].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_001A1788; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[3].w[0]);  if (t) { goto L_001A1800; } }
L_001A1788:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[3].w[0]);  if (t) { goto L_001A1800; } }
L_001A1790:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;  if (t) { goto L_001A17B4; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001A17AC; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[3].w[0]);  if (t) { goto L_001A1800; } }
L_001A17AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[3].w[0]);  if (t) { goto L_001A1800; } }
L_001A17B4:
    c.r[3].d[0] = c.r[7].d[0] & 32768ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[7].d[0] & 8192ull;  if (t) { goto L_001A17E0; } }
    c.r[1].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_001A17D8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[3].w[0]);  if (t) { goto L_001A1800; } }
L_001A17D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[3].w[0]);  if (t) { goto L_001A1800; } }
L_001A17E0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;  if (t) { goto L_001A1800; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001A17FC; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[3].w[0]);  if (t) { goto L_001A1800; } }
L_001A17FC:
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_001A1800:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A1810:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], c.r[5].w[0] << 4);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] + 15200u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].d[0] = c.r[5].sd[0] < 4ll ? 1ull : 0ull;
    c.r[6].d[0] = ld8((c.r[4].w[0] + 14u));
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], 0u - 16u);
    c.r[3].d[0] = c.r[5].d[0] & 15ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 17;
    { const bool t = c.r[1].d[0] == 0ull; st8((c.r[4].w[0] + 14u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001A186C; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 14u));
    set32(c.r[2], 0u - 193u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(192ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 14u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_001A186C:
    c.r[8].d[0] = ld8((c.r[17].w[0] + 15u));
    set32(c.r[6], 0u - 4u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[3], 0u - 13u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    set32(c.r[2], 0u + 7u);
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[17].w[0] + 15u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[17].w[0] + 15u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 14;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; st8((c.r[17].w[0] + 15u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A18F0; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 6u));
    set32(c.r[2], c.r[3].w[0] - 46u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 56u);  if (t) { goto L_001A18C0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001A18F0; } }
L_001A18C0:
    c.r[6].d[0] = ld8((c.r[17].w[0] + 15u));
    set32(c.r[4], 0u - 4u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[2], 0u - 13u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[17].w[0] + 15u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[17].w[0] + 15u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 15u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 12;
L_001A18F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A18F8u); c.r[4].d[0] = ld8((c.r[17].w[0] + 6u));  if (depth < kMaxDepth) unit_0028(c, 173u, depth + 1u); else { c.pc = 0x001A1280u; return; } if (c.pc != 0x001A18F8u) [[unlikely]] return; }
L_001A18F8:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 15u));
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[4].d[0] & 3ull;
    set32(c.r[4], c.r[4].w[0] + 1u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 2));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 1));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001A1940:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1970u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x001A1970u) [[unlikely]] return; }
L_001A1970:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A197Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 283u, depth + 1u); else { c.pc = 0x0031E690u; return; } if (c.pc != 0x001A197Cu) [[unlikely]] return; }
L_001A197C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[22], c.r[29].w[0] + 164u);
    set32(c.r[17], c.r[29].w[0] + 168u);
    set32(c.r[30], c.r[29].w[0] + 172u);
    set32(c.r[16], c.r[29].w[0] + 176u);
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 2u)));
    st32((c.r[22].w[0]), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 15u));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 15u));
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 62;
    st32((c.r[30].w[0]), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 14u));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = c.r[3].d[0] >> 62;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = ld8((c.r[2].w[0] + 6u));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A19D4u); c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 173u, depth + 1u); else { c.pc = 0x001A1280u; return; } if (c.pc != 0x001A19D4u) [[unlikely]] return; }
L_001A19D4:
    st32((c.r[29].w[0] + 180u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A19E0u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0028(c, 174u, depth + 1u); else { c.pc = 0x001A12A0u; return; } if (c.pc != 0x001A19E0u) [[unlikely]] return; }
L_001A19E0:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 14u));
    set32(c.r[23], c.r[29].w[0] + 208u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[19].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    st32((c.r[23].w[0]), c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[1].w[0] - 1536u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1A04u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 317u, depth + 1u); else { c.pc = 0x0013F0F0u; return; } if (c.pc != 0x001A1A04u) [[unlikely]] return; }
L_001A1A04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001A1A88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1A14u); set32(c.r[4], 0u + 400u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x001A1A14u) [[unlikely]] return; }
L_001A1A14:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A1A30; } }
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_001A1A30:
    set32(c.r[3], ld32((c.r[23].w[0])));
    set32(c.r[2], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001A1A70; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 6u));
    set32(c.r[2], c.r[3].w[0] - 46u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 56u);  if (t) { goto L_001A1A5C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001A1A70; } }
L_001A1A5C:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A1A70; } }
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_001A1A70:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1A80u); st32((c.r[30].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0028(c, 175u, depth + 1u); else { c.pc = 0x001A12E0u; return; } if (c.pc != 0x001A1A80u) [[unlikely]] return; }
L_001A1A80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_001A1B50; } }
L_001A1A88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1A90u);  if (depth < kMaxDepth) unit_000F(c, 318u, depth + 1u); else { c.pc = 0x0013F100u; return; } if (c.pc != 0x001A1A90u) [[unlikely]] return; }
L_001A1A90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 400u);  if (t) { goto L_001A1AC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1AA0u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x001A1AA0u) [[unlikely]] return; }
L_001A1AA0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[19].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_001A1ABC; } }
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_001A1ABC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A1B50; } }
L_001A1AC4:
    st32((c.r[29].w[0] + 220u), 0u);
    set32(c.r[4], c.r[29].w[0] + 220u);
    st32((c.r[29].w[0] + 216u), 0u);
    set32(c.r[6], ld32((c.r[23].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1ADCu); set32(c.r[5], c.r[29].w[0] + 216u);  if (depth < kMaxDepth) unit_0028(c, 180u, depth + 1u); else { c.pc = 0x001A1750u; return; } if (c.pc != 0x001A1ADCu) [[unlikely]] return; }
L_001A1ADC:
    set32(c.r[5], ld32((c.r[29].w[0] + 220u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001A1AF4; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 216u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A1B50; } }
L_001A1AF4:
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[2], ld32((c.r[29].w[0] + 216u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[22].w[0])));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1B18u); st32((c.r[22].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0028(c, 175u, depth + 1u); else { c.pc = 0x001A12E0u; return; } if (c.pc != 0x001A1B18u) [[unlikely]] return; }
L_001A1B18:
    set32(c.r[3], ld32((c.r[29].w[0] + 220u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A1B34; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A1B34; } }
    c.r[19].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_001A1B34:
    set32(c.r[3], ld32((c.r[29].w[0] + 216u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A1B50; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 196u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A1B50; } }
    c.r[19].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_001A1B50:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_001A1B74; } }
    set32(c.r[7], ld32((c.r[16].w[0])));
    set32(c.r[6], ld32((c.r[22].w[0])));
    set32(c.r[8], ld32((c.r[17].w[0])));
    set32(c.r[9], ld32((c.r[30].w[0])));
    set32(c.r[5], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1B74u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 275u, depth + 1u); else { c.pc = 0x0031E3E0u; return; } if (c.pc != 0x001A1B74u) [[unlikely]] return; }
L_001A1B74:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_001A1BB0:
    set32(c.r[29], c.r[29].w[0] - 2144u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1BE0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x001A1BE0u) [[unlikely]] return; }
L_001A1BE0:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1BECu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 283u, depth + 1u); else { c.pc = 0x0031E690u; return; } if (c.pc != 0x001A1BECu) [[unlikely]] return; }
L_001A1BEC:
    set32(c.r[3], ld32((c.r[21].w[0] + 384u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 13u));
    c.r[16].d[0] = c.r[2].d[0] & 63ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1C08u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 290u, depth + 1u); else { c.pc = 0x0031E800u; return; } if (c.pc != 0x001A1C08u) [[unlikely]] return; }
L_001A1C08:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001A1C18; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull; set32(c.r[22], 0u - 256u);  if (t) { goto L_001A1C28; } }
L_001A1C18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1C20u);  if (depth < kMaxDepth) unit_0028(c, 183u, depth + 1u); else { c.pc = 0x001A1940u; return; } if (c.pc != 0x001A1C20u) [[unlikely]] return; }
L_001A1C20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_001A20F8; } }
L_001A1C28:
    set32(c.r[19], 0u + 256u);
    c.r[30].d[0] = c.r[22].d[0] + 0ull;
    c.r[23].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001A1D14; } }
L_001A1C3C:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[3], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] << 1);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[17], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[16], c.r[2].w[0] + 176u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 2u)));
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 15u));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 15u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 62;
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 14u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 62;
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1CB0u); c.r[4].d[0] = ld8((c.r[17].w[0] + 6u));  if (depth < kMaxDepth) unit_0028(c, 173u, depth + 1u); else { c.pc = 0x001A1280u; return; } if (c.pc != 0x001A1CB0u) [[unlikely]] return; }
L_001A1CB0:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[17].w[0] + 14u));
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1CC8u); st32((c.r[16].w[0] + 48u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0028(c, 174u, depth + 1u); else { c.pc = 0x001A12A0u; return; } if (c.pc != 0x001A1CC8u) [[unlikely]] return; }
L_001A1CC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1CD0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 177u, depth + 1u); else { c.pc = 0x001A1510u; return; } if (c.pc != 0x001A1CD0u) [[unlikely]] return; }
L_001A1CD0:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.r[1].d[0] = c.r[22].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[2].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;  if (t) { goto L_001A1CE4; } }
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001A1CE4:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001A1CF0; } }
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001A1CF0:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.r[1].d[0] = c.r[30].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[2].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;  if (t) { goto L_001A1D04; } }
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001A1D04:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001A1D10; } }
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001A1D10:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_001A1D14:
    c.r[2].d[0] = c.r[18].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = c.r[22].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A1C3Cu | kUnwind; return; } goto L_001A1C3C; } }
    set32(c.r[18], c.r[29].w[0] + 224u);
    set32(c.r[22], ld32((c.r[18].w[0])));
    c.r[7].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 2140u);
    set32(c.r[5], c.r[29].w[0] + 2136u);
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    c.r[9].d[0] = c.r[23].d[0] + 0ull;
    c.r[10].d[0] = c.r[22].d[0] + 0ull;
    st32((c.r[29].w[0] + 2140u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1D4Cu); st32((c.r[29].w[0] + 2136u), 0u);  if (depth < kMaxDepth) unit_0028(c, 179u, depth + 1u); else { c.pc = 0x001A1640u; return; } if (c.pc != 0x001A1D4Cu) [[unlikely]] return; }
L_001A1D4C:
    set32(c.r[3], ld32((c.r[29].w[0] + 2140u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[29].w[0] + 2136u)));
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[17], ld32((c.r[1].w[0] - 1536u)));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    st32((c.r[29].w[0] + 2140u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 2136u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 2140u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 2136u)));
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[23].w[0]);
    st32((c.r[29].w[0] + 2140u), c.r[3].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1D90u); st32((c.r[29].w[0] + 2136u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 317u, depth + 1u); else { c.pc = 0x0013F0F0u; return; } if (c.pc != 0x001A1D90u) [[unlikely]] return; }
L_001A1D90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001A1F44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1DA0u); set32(c.r[4], 0u + 400u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x001A1DA0u) [[unlikely]] return; }
L_001A1DA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_001A1F30; } }
L_001A1DA8:
    set32(c.r[2], c.r[19].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[16], c.r[2].w[0] + 176u);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[16].w[0] + 8u);  if (t) { goto L_001A1DE0; } }
    st32((c.r[3].w[0]), 0u);
    c.budget -= 1;
L_001A1DE0:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[4], c.r[29].w[0] + 2132u);
    set32(c.r[5], c.r[29].w[0] + 2128u);
    c.r[10].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[23], c.r[16].w[0] + 8u);
    set32(c.r[17], c.r[16].w[0] + 44u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 2132u), 0u);
    st32((c.r[29].w[0] + 2128u), 0u);
    set32(c.r[6], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 2140u)));
    set32(c.r[9], ld32((c.r[29].w[0] + 2136u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1E1Cu); set32(c.r[18], c.r[16].w[0] + 40u);  if (depth < kMaxDepth) unit_0028(c, 179u, depth + 1u); else { c.pc = 0x001A1640u; return; } if (c.pc != 0x001A1E1Cu) [[unlikely]] return; }
L_001A1E1C:
    set32(c.r[4], ld32((c.r[23].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001A1E54; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 2132u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 2140u)));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 2128u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 2136u)));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_001A1F24; } }
L_001A1E54:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001A1E88; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 2132u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 2140u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 2128u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 2136u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_001A1F24; } }
L_001A1E88:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_001A1ED0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 2132u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 2140u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 2128u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 2136u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_001A1F24; } }
L_001A1ED0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001A1F24; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 2132u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);  if (t) { goto L_001A1EEC; } }
    breakpoint(c, 0x001A1EE8u);
    c.budget -= 1;
L_001A1EEC:
    set32(c.r[3], ld32((c.r[29].w[0] + 2140u)));
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 2128u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_001A1F14; } }
    breakpoint(c, 0x001A1F10u);
    c.budget -= 1;
L_001A1F14:
    set32(c.r[2], ld32((c.r[29].w[0] + 2136u)));
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_001A1F24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1F2Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 178u, depth + 1u); else { c.pc = 0x001A15B0u; return; } if (c.pc != 0x001A1F2Cu) [[unlikely]] return; }
L_001A1F2C:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_001A1F30:
    c.r[3].d[0] = c.r[19].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A1DA8u | kUnwind; return; } goto L_001A1DA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A208C; } }
L_001A1F44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1F4Cu);  if (depth < kMaxDepth) unit_000F(c, 318u, depth + 1u); else { c.pc = 0x0013F100u; return; } if (c.pc != 0x001A1F4Cu) [[unlikely]] return; }
L_001A1F4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 400u);  if (t) { goto L_001A200C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1F5Cu);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x001A1F5Cu) [[unlikely]] return; }
L_001A1F5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001A1FF8; } }
L_001A1F64:
    set32(c.r[2], c.r[18].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[16], c.r[2].w[0] + 176u);
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[16].w[0] + 16u);  if (t) { goto L_001A1F9C; } }
    st32((c.r[3].w[0]), 0u);
    c.budget -= 1;
L_001A1F9C:
    st32((c.r[29].w[0] + 2124u), 0u);
    set32(c.r[4], c.r[29].w[0] + 2124u);
    st32((c.r[29].w[0] + 2120u), 0u);
    set32(c.r[5], c.r[29].w[0] + 2120u);
    set32(c.r[6], ld32((c.r[16].w[0] + 40u)));
    c.r[10].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[19], c.r[16].w[0] + 44u);
    set32(c.r[8], ld32((c.r[29].w[0] + 2140u)));
    set32(c.r[9], ld32((c.r[29].w[0] + 2136u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1FCCu); set32(c.r[17], c.r[16].w[0] + 40u);  if (depth < kMaxDepth) unit_0028(c, 179u, depth + 1u); else { c.pc = 0x001A1640u; return; } if (c.pc != 0x001A1FCCu) [[unlikely]] return; }
L_001A1FCC:
    set32(c.r[3], ld32((c.r[29].w[0] + 2140u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 2120u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 2136u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 2124u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1FF4u); st32((c.r[19].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0028(c, 178u, depth + 1u); else { c.pc = 0x001A15B0u; return; } if (c.pc != 0x001A1FF4u) [[unlikely]] return; }
L_001A1FF4:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_001A1FF8:
    c.r[3].d[0] = c.r[18].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A1F64u | kUnwind; return; } goto L_001A1F64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A208C; } }
L_001A200C:
    st32((c.r[29].w[0] + 2116u), 0u);
    set32(c.r[4], c.r[29].w[0] + 2116u);
    st32((c.r[29].w[0] + 2112u), 0u);
    set32(c.r[6], ld32((c.r[18].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2024u); set32(c.r[5], c.r[29].w[0] + 2112u);  if (depth < kMaxDepth) unit_0028(c, 180u, depth + 1u); else { c.pc = 0x001A1750u; return; } if (c.pc != 0x001A2024u) [[unlikely]] return; }
L_001A2024:
    set32(c.r[6], ld32((c.r[29].w[0] + 2116u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_001A203C; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 2112u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A208C; } }
L_001A203C:
    set32(c.r[5], ld32((c.r[29].w[0] + 2112u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_001A207C; } }
L_001A2048:
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[3].w[0] + 176u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 13;
L_001A207C:
    c.r[3].d[0] = c.r[7].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[7].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A2048u | kUnwind; return; } goto L_001A2048; } }
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_001A208C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001A20F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001A20E8; } }
L_001A209C:
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[17], c.r[2].w[0] + 176u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A20C0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 175u, depth + 1u); else { c.pc = 0x001A12E0u; return; } if (c.pc != 0x001A20C0u) [[unlikely]] return; }
L_001A20C0:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[6], ld32((c.r[17].w[0])));
    set32(c.r[7], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[9], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[10], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A20E4u); set32(c.r[5], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_0087(c, 276u, depth + 1u); else { c.pc = 0x0031E450u; return; } if (c.pc != 0x001A20E4u) [[unlikely]] return; }
L_001A20E4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001A20E8:
    c.r[3].d[0] = c.r[16].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A209Cu | kUnwind; return; } goto L_001A209C; } }
L_001A20F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_001A20F8:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 2144u);  c.pc = t; return; }
L_001A2130:
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 26336u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2154u); set32(c.r[5], c.r[5].w[0] + 15328u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x001A2154u) [[unlikely]] return; }
L_001A2154:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 26336u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001A2170:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] > 0; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_001A2188; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001A21C0; } }
L_001A2188:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_001A2198; } }
    set32(c.r[6], 0u + 3u);
    c.budget -= 1;
L_001A2198:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; set32(c.r[7], c.r[5].w[0] + 32767u);  if (t) { goto L_001A21A4; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_001A21A4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[4].w[0] + 26352u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A21B8u); set32(c.r[5], c.r[5].w[0] + 15328u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x001A21B8u) [[unlikely]] return; }
L_001A21B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 26352u);
    c.budget -= 2;
L_001A21C0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001A21D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A21ECu); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0017(c, 125u, depth + 1u); else { c.pc = 0x0015D850u; return; } if (c.pc != 0x001A21ECu) [[unlikely]] return; }
L_001A21EC:
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A21FCu); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0028(c, 303u, depth + 1u); else { c.pc = 0x001A2DC0u; return; } if (c.pc != 0x001A21FCu) [[unlikely]] return; }
L_001A21FC:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    st8((c.r[16].w[0] + 40u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2210u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x001A2210u) [[unlikely]] return; }
L_001A2210:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001A2220:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 656u), c.r[5].w[0]);
    set32(c.r[18], c.r[16].w[0] + 736u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2248u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 39u, depth + 1u); else { c.pc = 0x001486F0u; return; } if (c.pc != 0x001A2248u) [[unlikely]] return; }
L_001A2248:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[17], c.r[16].w[0] + 784u);
    set32(c.r[2], c.r[2].w[0] - 11728u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[18].w[0]), c.r[2].w[0]);
    st32((c.r[18].w[0] + 32u), c.r[16].w[0]);
    st32((c.r[18].w[0] + 36u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A226Cu); st8((c.r[18].w[0] + 40u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0012(c, 39u, depth + 1u); else { c.pc = 0x001486F0u; return; } if (c.pc != 0x001A226Cu) [[unlikely]] return; }
L_001A226C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 11728u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 32u), c.r[16].w[0]);
    st32((c.r[17].w[0] + 36u), 0u);
    st8((c.r[17].w[0] + 40u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st128((c.r[16].w[0]) & ~15u, c.r[0]);  if (t) { goto L_001A22AC; } }
L_001A2290:
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 48u), 0u);
    st32((c.r[2].w[0] + 52u), 0u);
    st32((c.r[2].w[0] + 56u), 0u);
    c.budget -= 7;
L_001A22AC:
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A2290u | kUnwind; return; } goto L_001A2290; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001A22D0; } }
L_001A22C0:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 728u), 0u);
    c.budget -= 4;
L_001A22D0:
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A22C0u | kUnwind; return; } goto L_001A22C0; } }
    st128((c.r[16].w[0] + 640u) & ~15u, c.r[0]);
    set32(c.r[2], 0u + 128u);
    st32((c.r[16].w[0] + 652u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001A2300; } }
L_001A22F0:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 660u), 0u);
    c.budget -= 4;
L_001A2300:
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(17ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A22F0u | kUnwind; return; } goto L_001A22F0; } }
    st128((c.r[16].w[0] + 832u) & ~15u, c.r[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st128((c.r[16].w[0] + 848u) & ~15u, c.r[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001A2330:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001A2378; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 11728u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2360u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 42u, depth + 1u); else { c.pc = 0x00148750u; return; } if (c.pc != 0x001A2360u) [[unlikely]] return; }
L_001A2360:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001A237C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2378u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001A2378u) [[unlikely]] return; }
L_001A2378:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001A237C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001A2390:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001A2410; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A23B4u);  if (depth < kMaxDepth) unit_0028(c, 255u, depth + 1u); else { c.pc = 0x001A2590u; return; } if (c.pc != 0x001A23B4u) [[unlikely]] return; }
L_001A23B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A23BCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 244u, depth + 1u); else { c.pc = 0x001A2430u; return; } if (c.pc != 0x001A23BCu) [[unlikely]] return; }
L_001A23BC:
    set32(c.r[4], c.r[17].w[0] + 784u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);  if (t) { goto L_001A23D8; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 11728u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A23D8u); st32((c.r[17].w[0] + 784u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 42u, depth + 1u); else { c.pc = 0x00148750u; return; } if (c.pc != 0x001A23D8u) [[unlikely]] return; }
L_001A23D8:
    set32(c.r[4], c.r[17].w[0] + 736u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] << 48;  if (t) { goto L_001A23FC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 11728u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A23F8u); st32((c.r[17].w[0] + 736u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 42u, depth + 1u); else { c.pc = 0x00148750u; return; } if (c.pc != 0x001A23F8u) [[unlikely]] return; }
L_001A23F8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_001A23FC:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001A2414; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2410u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001A2410u) [[unlikely]] return; }
L_001A2410:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001A2414:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001A2430:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001A2494; } }
L_001A2458:
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0] + 728u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[18], c.r[3].w[0] + 728u);  if (t) { goto L_001A248C; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001A248C; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001A2484; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2484u);  if (depth < kMaxDepth) unit_0010(c, 83u, depth + 1u); else { c.pc = 0x00141160u; return; } if (c.pc != 0x001A2484u) [[unlikely]] return; }
L_001A2484:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A248Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001A248Cu) [[unlikely]] return; }
L_001A248C:
    st32((c.r[18].w[0]), 0u);
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 2;
L_001A2494:
    c.r[3].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[19].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A2458u | kUnwind; return; } goto L_001A2458; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001A2558; } }
L_001A24A8:
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[18], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[19], ld32((c.r[18].w[0] + 56u)));
    c.budget -= 6;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[20], c.r[18].w[0] + 56u);  if (t) { goto L_001A24E4; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_001A24E4; } }
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001A24DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A24DCu);  if (depth < kMaxDepth) unit_0010(c, 83u, depth + 1u); else { c.pc = 0x00141160u; return; } if (c.pc != 0x001A24DCu) [[unlikely]] return; }
L_001A24DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A24E4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001A24E4u) [[unlikely]] return; }
L_001A24E4:
    st32((c.r[20].w[0]), 0u);
    set32(c.r[19], ld32((c.r[18].w[0] + 52u)));
    c.budget -= 4;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[20], c.r[18].w[0] + 52u);  if (t) { goto L_001A2518; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_001A2518; } }
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001A2510; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2510u);  if (depth < kMaxDepth) unit_0010(c, 83u, depth + 1u); else { c.pc = 0x00141160u; return; } if (c.pc != 0x001A2510u) [[unlikely]] return; }
L_001A2510:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2518u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001A2518u) [[unlikely]] return; }
L_001A2518:
    st32((c.r[20].w[0]), 0u);
    set32(c.r[19], c.r[18].w[0] + 48u);
    set32(c.r[18], ld32((c.r[18].w[0] + 48u)));
    c.budget -= 5;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001A2550; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001A2550; } }
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001A2548; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2548u);  if (depth < kMaxDepth) unit_0010(c, 83u, depth + 1u); else { c.pc = 0x00141160u; return; } if (c.pc != 0x001A2548u) [[unlikely]] return; }
L_001A2548:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2550u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001A2550u) [[unlikely]] return; }
L_001A2550:
    st32((c.r[19].w[0]), 0u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_001A2558:
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[16].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A24A8u | kUnwind; return; } goto L_001A24A8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001A2590:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 13u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = ld8((c.r[4].w[0] + 6u));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001A25D0; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 852u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001A25D4; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 656u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 284u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
L_001A25D0:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001A25D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(17ll) ? 1ull : 0ull;  if (t) { goto L_001A2614; } }
L_001A25DC:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[18], c.r[2].w[0] + 660u);
    set32(c.r[2], ld32((c.r[2].w[0] + 660u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A2600; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 656u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 284u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_001A2600:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2608u); set32(c.r[4], ld32((c.r[18].w[0])));  if (depth < kMaxDepth) unit_0010(c, 83u, depth + 1u); else { c.pc = 0x00141160u; return; } if (c.pc != 0x001A2608u) [[unlikely]] return; }
L_001A2608:
    st32((c.r[18].w[0]), 0u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(17ll) ? 1ull : 0ull;
    c.budget -= 3;
L_001A2614:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A25DCu | kUnwind; return; } goto L_001A25DC; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001A2640:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], c.r[5].w[0] << 2);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], c.r[2].w[0] + 660u);
    set32(c.r[2], ld32((c.r[2].w[0] + 660u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A2670; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 656u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 284u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_001A2670:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2678u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0010(c, 83u, depth + 1u); else { c.pc = 0x00141160u; return; } if (c.pc != 0x001A2678u) [[unlikely]] return; }
L_001A2678:
    st32((c.r[16].w[0]), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001A2690:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[7].d[0] = ld64((c.r[5].w[0]));
    c.r[3].d[0] = ld64((c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = c.r[7].d[0] != c.r[3].d[0];  if (t) { goto L_001A26B8; } }
    c.r[7].d[0] = ld64((c.r[5].w[0] + 8u));
    c.r[3].d[0] = ld64((c.r[4].w[0] + 8u));
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_001A26F0; } }
L_001A26B8:
    ld128((c.r[5].w[0]) & ~15u, c.r[3]);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 9u));
    st32((c.r[4].w[0] + 640u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 10u)));
    st32((c.r[4].w[0] + 644u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 11u)));
    st32((c.r[4].w[0] + 648u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 12u));
    c.budget -= 11;
    { const bool t = c.r[6].d[0] == 0ull; st32((c.r[4].w[0] + 652u), c.r[3].w[0]);  if (t) { goto L_001A26F0; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A26F0u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 278u, depth + 1u); else { c.pc = 0x001A2AC0u; return; } if (c.pc != 0x001A26F0u) [[unlikely]] return; }
L_001A26F0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001A2700:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = c.r[10].d[0] & 3ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[10], c.r[2].w[0] << 4);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], 0u - 49u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 56u);
    st128((c.r[4].w[0]) & ~15u, c.r[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 14u));
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[10].d[0];
    c.budget -= 22;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; st8((c.r[4].w[0] + 14u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A276C; } }
    set32(c.r[2], c.r[16].w[0] - 46u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001A276C; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001A276C:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] - 51u);  if (t) { goto L_001A2784; } }
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001A2784; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001A2784:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_001A27B0; } }
    c.r[6].d[0] = ld8((c.r[17].w[0] + 14u));
    set32(c.r[2], 0u - 16u);
    c.r[3].d[0] = c.r[9].d[0] & 15ull;
    c.r[5].d[0] = c.r[9].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A27B0u); st8((c.r[17].w[0] + 14u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0028(c, 181u, depth + 1u); else { c.pc = 0x001A1810u; return; } if (c.pc != 0x001A27B0u) [[unlikely]] return; }
L_001A27B0:
    st128((c.r[17].w[0] + 640u) & ~15u, c.r[0]);
    set32(c.r[3], 0u + 128u);
    st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 2u);
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 11u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; st32((c.r[17].w[0] + 652u), c.r[3].w[0]);  if (t) { goto L_001A27DC; } }
    st8((c.r[17].w[0] + 12u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 652u), 0u);
    c.budget -= 2;
L_001A27DC:
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A27ECu); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 278u, depth + 1u); else { c.pc = 0x001A2AC0u; return; } if (c.pc != 0x001A27ECu) [[unlikely]] return; }
L_001A27EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001A2800:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[5].sd[0] < 12ll ? 1ull : 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001A2824; } }
    c.r[1].d[0] = c.r[5].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001A2824; } }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_001A2824:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A2874; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[5].w[0] - 14u);  if (t) { goto L_001A2850; } }
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001A2874; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 6u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_001A2874; } }
L_001A2850:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 14u));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[7].d[0] = ld8((c.r[4].w[0] + 7u));
    c.r[9].d[0] = c.r[2].d[0] & 15ull;
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A286Cu); c.r[10].d[0] = c.r[2].d[0] >> 62;  if (depth < kMaxDepth) unit_0028(c, 262u, depth + 1u); else { c.pc = 0x001A2700u; return; } if (c.pc != 0x001A286Cu) [[unlikely]] return; }
L_001A286C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_001A28F8; } }
L_001A2874:
    st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], 0u + 2u);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 6u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001A2898; } }
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 652u), 0u);  if (t) { goto L_001A28B4; } }
L_001A2898:
    st128((c.r[4].w[0] + 640u) & ~15u, c.r[0]);
    set32(c.r[2], 0u + 128u);
    st8((c.r[4].w[0] + 9u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 11u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 652u), c.r[2].w[0]);
    c.budget -= 7;
L_001A28B4:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 6u));
    c.r[2].d[0] = c.r[3].d[0] ^ 56ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A28D0; } }
    set32(c.r[2], c.r[3].w[0] - 46u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 2;
L_001A28D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A28E0; } }
    set32(c.r[2], c.r[3].w[0] - 51u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 2;
L_001A28E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_001A28EC; } }
    st8((c.r[4].w[0] + 15u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001A28EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A28F4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0028(c, 278u, depth + 1u); else { c.pc = 0x001A2AC0u; return; } if (c.pc != 0x001A28F4u) [[unlikely]] return; }
L_001A28F4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001A28F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001A2900:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[5].sd[0] < 12ll ? 1ull : 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001A2928; } }
    c.r[1].d[0] = c.r[5].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001A2928; } }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_001A2928:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A2960; } }
    c.r[2].d[0] = ld16((c.r[4].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A2960; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 14u));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[2].d[0] & 15ull;
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2958u); c.r[10].d[0] = c.r[2].d[0] >> 62;  if (depth < kMaxDepth) unit_0028(c, 262u, depth + 1u); else { c.pc = 0x001A2700u; return; } if (c.pc != 0x001A2958u) [[unlikely]] return; }
L_001A2958:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_001A29B4; } }
L_001A2960:
    st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], 0u + 2u);
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 6u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001A2988; } }
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 652u), 0u);  if (t) { goto L_001A29A4; } }
L_001A2988:
    st128((c.r[4].w[0] + 640u) & ~15u, c.r[0]);
    set32(c.r[2], 0u + 128u);
    st8((c.r[4].w[0] + 9u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 11u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 652u), c.r[2].w[0]);
    c.budget -= 7;
L_001A29A4:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A29B0u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 278u, depth + 1u); else { c.pc = 0x001A2AC0u; return; } if (c.pc != 0x001A29B0u) [[unlikely]] return; }
L_001A29B0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001A29B4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001A29C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 128u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[16].d[0] = 0ull + 0ull;
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st128((c.r[4].w[0] + 640u) & ~15u, c.r[0]);
    st8((c.r[4].w[0] + 9u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 11u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 652u), c.r[2].w[0]);  if (t) { goto L_001A2A4C; } }
L_001A2A08:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 6;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[19], c.r[2].w[0] + 56u);  if (t) { goto L_001A2A44; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001A2A44; } }
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001A2A3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2A3Cu);  if (depth < kMaxDepth) unit_0010(c, 83u, depth + 1u); else { c.pc = 0x00141160u; return; } if (c.pc != 0x001A2A3Cu) [[unlikely]] return; }
L_001A2A3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2A44u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001A2A44u) [[unlikely]] return; }
L_001A2A44:
    st32((c.r[19].w[0]), 0u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_001A2A4C:
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A2A08u | kUnwind; return; } goto L_001A2A08; } }
    st8((c.r[17].w[0] + 824u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = ld8((c.r[17].w[0] + 7u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2A68u); c.r[4].d[0] = ld8((c.r[17].w[0] + 6u));  if (depth < kMaxDepth) unit_0028(c, 223u, depth + 1u); else { c.pc = 0x001A2170u; return; } if (c.pc != 0x001A2A68u) [[unlikely]] return; }
L_001A2A68:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001A2A98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2A7Cu);  if (depth < kMaxDepth) unit_0011(c, 255u, depth + 1u); else { c.pc = 0x001475B0u; return; } if (c.pc != 0x001A2A7Cu) [[unlikely]] return; }
L_001A2A7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001A2A98; } }
    set32(c.r[4], c.r[17].w[0] + 784u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2A90u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 45u, depth + 1u); else { c.pc = 0x001487B0u; return; } if (c.pc != 0x001A2A90u) [[unlikely]] return; }
L_001A2A90:
    set32(c.r[3], 0u + 2u);
    st32((c.r[17].w[0] + 820u), c.r[3].w[0]);
    c.budget -= 2;
L_001A2A98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001A2AC0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001A2BE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001A2B38; } }
L_001A2AFC:
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[20], ld32((c.r[3].w[0] + 728u)));
    c.budget -= 4;
    { const bool t = c.r[20].d[0] == 0ull; set32(c.r[21], c.r[3].w[0] + 728u);  if (t) { goto L_001A2B30; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_001A2B30; } }
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001A2B28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2B28u);  if (depth < kMaxDepth) unit_0010(c, 83u, depth + 1u); else { c.pc = 0x00141160u; return; } if (c.pc != 0x001A2B28u) [[unlikely]] return; }
L_001A2B28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2B30u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001A2B30u) [[unlikely]] return; }
L_001A2B30:
    st32((c.r[21].w[0]), 0u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_001A2B38:
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A2AFCu | kUnwind; return; } goto L_001A2AFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001A2B90; } }
L_001A2B4C:
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[20], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 6;
    { const bool t = c.r[20].d[0] == 0ull; set32(c.r[21], c.r[3].w[0] + 48u);  if (t) { goto L_001A2B88; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_001A2B88; } }
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001A2B80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2B80u);  if (depth < kMaxDepth) unit_0010(c, 83u, depth + 1u); else { c.pc = 0x00141160u; return; } if (c.pc != 0x001A2B80u) [[unlikely]] return; }
L_001A2B80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2B88u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001A2B88u) [[unlikely]] return; }
L_001A2B88:
    st32((c.r[21].w[0]), 0u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_001A2B90:
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[16].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A2B4Cu | kUnwind; return; } goto L_001A2B4C; } }
    c.r[4].d[0] = ld8((c.r[19].w[0] + 6u));
    c.r[3].d[0] = c.r[4].sd[0] < 12ll ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A2BB4; } }
    c.r[3].d[0] = c.r[4].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 1;
L_001A2BB4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A2BDC; } }
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_001A2BDC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001A2BDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2BDCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 255u, depth + 1u); else { c.pc = 0x001A2590u; return; } if (c.pc != 0x001A2BDCu) [[unlikely]] return; }
L_001A2BDC:
    st128((c.r[19].w[0] + 832u) & ~15u, c.r[0]);
    c.budget -= 1;
L_001A2BE0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001A2C84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;  if (t) { goto L_001A2C70; } }
L_001A2BF0:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[20], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[21], ld32((c.r[20].w[0] + 56u)));
    c.budget -= 6;
    { const bool t = c.r[21].d[0] == 0ull; set32(c.r[22], c.r[20].w[0] + 56u);  if (t) { goto L_001A2C2C; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_001A2C2C; } }
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001A2C24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2C24u);  if (depth < kMaxDepth) unit_0010(c, 83u, depth + 1u); else { c.pc = 0x00141160u; return; } if (c.pc != 0x001A2C24u) [[unlikely]] return; }
L_001A2C24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2C2Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001A2C2Cu) [[unlikely]] return; }
L_001A2C2C:
    st32((c.r[22].w[0]), 0u);
    set32(c.r[21], c.r[20].w[0] + 52u);
    set32(c.r[20], ld32((c.r[20].w[0] + 52u)));
    c.budget -= 5;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_001A2C64; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_001A2C64; } }
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001A2C5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2C5Cu);  if (depth < kMaxDepth) unit_0010(c, 83u, depth + 1u); else { c.pc = 0x00141160u; return; } if (c.pc != 0x001A2C5Cu) [[unlikely]] return; }
L_001A2C5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2C64u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001A2C64u) [[unlikely]] return; }
L_001A2C64:
    st32((c.r[21].w[0]), 0u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 3;
L_001A2C70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A2BF0u | kUnwind; return; } goto L_001A2BF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2C80u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 255u, depth + 1u); else { c.pc = 0x001A2590u; return; } if (c.pc != 0x001A2C80u) [[unlikely]] return; }
L_001A2C80:
    st128((c.r[19].w[0] + 848u) & ~15u, c.r[0]);
    c.budget -= 1;
L_001A2C84:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 6u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A2D1C; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001A2CD4; } }
    st8((c.r[19].w[0] + 776u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = ld16((c.r[19].w[0] + 4u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2CA8u); c.r[4].d[0] = ld8((c.r[19].w[0] + 6u));  if (depth < kMaxDepth) unit_0028(c, 221u, depth + 1u); else { c.pc = 0x001A2130u; return; } if (c.pc != 0x001A2CA8u) [[unlikely]] return; }
L_001A2CA8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001A2CD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2CBCu);  if (depth < kMaxDepth) unit_0011(c, 255u, depth + 1u); else { c.pc = 0x001475B0u; return; } if (c.pc != 0x001A2CBCu) [[unlikely]] return; }
L_001A2CBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001A2CD4; } }
    set32(c.r[4], c.r[19].w[0] + 736u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2CD0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 45u, depth + 1u); else { c.pc = 0x001487B0u; return; } if (c.pc != 0x001A2CD0u) [[unlikely]] return; }
L_001A2CD0:
    st32((c.r[19].w[0] + 772u), 0u);
    c.budget -= 1;
L_001A2CD4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001A2D1C; } }
    st8((c.r[19].w[0] + 824u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = ld8((c.r[19].w[0] + 7u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2CECu); c.r[4].d[0] = ld8((c.r[19].w[0] + 6u));  if (depth < kMaxDepth) unit_0028(c, 223u, depth + 1u); else { c.pc = 0x001A2170u; return; } if (c.pc != 0x001A2CECu) [[unlikely]] return; }
L_001A2CEC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001A2D1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2D00u);  if (depth < kMaxDepth) unit_0011(c, 255u, depth + 1u); else { c.pc = 0x001475B0u; return; } if (c.pc != 0x001A2D00u) [[unlikely]] return; }
L_001A2D00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001A2D1C; } }
    set32(c.r[4], c.r[19].w[0] + 784u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2D14u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 45u, depth + 1u); else { c.pc = 0x001487B0u; return; } if (c.pc != 0x001A2D14u) [[unlikely]] return; }
L_001A2D14:
    set32(c.r[3], 0u + 1u);
    st32((c.r[19].w[0] + 820u), c.r[3].w[0]);
    c.budget -= 2;
L_001A2D1C:
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
L_001A2D50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2D68u); set32(c.r[4], c.r[16].w[0] + 744u);  if (depth < kMaxDepth) unit_0011(c, 177u, depth + 1u); else { c.pc = 0x00146C10u; return; } if (c.pc != 0x001A2D68u) [[unlikely]] return; }
L_001A2D68:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 744u);  if (t) { goto L_001A2D80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2D7Cu);  if (depth < kMaxDepth) unit_0011(c, 182u, depth + 1u); else { c.pc = 0x00146C90u; return; } if (c.pc != 0x001A2D7Cu) [[unlikely]] return; }
L_001A2D7C:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_001A2D80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 792u);  if (t) { goto L_001A2DA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2D90u);  if (depth < kMaxDepth) unit_0011(c, 177u, depth + 1u); else { c.pc = 0x00146C10u; return; } if (c.pc != 0x001A2D90u) [[unlikely]] return; }
L_001A2D90:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 792u);  if (t) { goto L_001A2DA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2DA4u);  if (depth < kMaxDepth) unit_0011(c, 182u, depth + 1u); else { c.pc = 0x00146C90u; return; } if (c.pc != 0x001A2DA4u) [[unlikely]] return; }
L_001A2DA4:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_001A2DA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001A2DC0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 656u)));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 300u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2DF8u); st32((c.r[29].w[0] + 76u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x001A2DF8u) [[unlikely]] return; }
L_001A2DF8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001A2E40; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001A2E30; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001A2E20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[18].w[0] + 6u));  if (t) { goto L_001A2E4C; } }
L_001A2E20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2E28u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 309u, depth + 1u); else { c.pc = 0x001A2E90u; return; } if (c.pc != 0x001A2E28u) [[unlikely]] return; }
L_001A2E28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A2E48; } }
L_001A2E30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2E38u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 320u, depth + 1u); else { c.pc = 0x001A30C0u; return; } if (c.pc != 0x001A2E38u) [[unlikely]] return; }
L_001A2E38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A2E48; } }
L_001A2E40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2E48u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 333u, depth + 1u); else { c.pc = 0x001A3300u; return; } if (c.pc != 0x001A2E48u) [[unlikely]] return; }
L_001A2E48:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 6u));
    c.budget -= 1;
L_001A2E4C:
    set32(c.r[2], 0u + 13u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001A2E70; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 656u)));
    c.r[3].d[0] = ld8((c.r[18].w[0] + 852u));
    set32(c.r[2], ld32((c.r[4].w[0] + 288u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001A2E70; } }
    st8((c.r[4].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_001A2E70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2E78u); set32(c.r[4], ld32((c.r[29].w[0] + 76u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x001A2E78u) [[unlikely]] return; }
L_001A2E78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001A2E90:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 824u));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001A2EF0; } }
    c.r[3].d[0] = ld8((c.r[22].w[0] + 6u));
    c.r[2].d[0] = c.r[3].sd[0] < 12ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A2EE4; } }
    c.r[2].d[0] = c.r[3].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 1;
L_001A2EE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_001A2EF4; } }
    c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_001A2EF0:
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001A2EF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[20].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;  if (t) { goto L_001A3008; } }
L_001A2EFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2F04u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 172u, depth + 1u); else { c.pc = 0x001A1260u; return; } if (c.pc != 0x001A2F04u) [[unlikely]] return; }
L_001A2F04:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[20].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[20].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[16], c.r[22].w[0] + c.r[4].w[0]);
    set32(c.r[23], c.r[16].w[0] + 16u);
    st128((c.r[16].w[0] + 16u) & ~15u, c.r[3]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[2]);
    c.budget -= 10;
    { const bool t = c.r[18].d[0] == 0ull; st128((c.r[16].w[0] + 32u) & ~15u, c.r[2]);  if (t) { goto L_001A2F38; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A3000; } }
L_001A2F38:
    c.r[3].d[0] = ld8((c.r[22].w[0] + 14u));
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] << 58;
    c.r[3].d[0] = c.r[3].d[0] >> 62;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_001A2F6C; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 8u);  if (t) { goto L_001A3000; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; c.r[5].d[0] = c.r[20].d[0] & 65535ull;  if (t) { goto L_001A2F88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] + 1u);  if (t) { goto L_001A3004; } }
L_001A2F6C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001A2F84; } }
    set32(c.r[2], c.r[20].w[0] - 5u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001A3000; } }
L_001A2F84:
    c.r[5].d[0] = c.r[20].d[0] & 65535ull;
    c.budget -= 1;
L_001A2F88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2F90u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x001A2F90u) [[unlikely]] return; }
L_001A2F90:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 8u);  if (t) { goto L_001A3000; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2FA8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001A2FA8u) [[unlikely]] return; }
L_001A2FA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001A2FB8; } }
    st32((c.r[19].w[0]), 0u);
    st32((c.r[19].w[0] + 4u), 0u);
    c.budget -= 2;
L_001A2FB8:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2FC8u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 166u, depth + 1u); else { c.pc = 0x001A1130u; return; } if (c.pc != 0x001A2FC8u) [[unlikely]] return; }
L_001A2FC8:
    st32((c.r[16].w[0] + 48u), c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[23].w[0])));
    set32(c.r[6], ld32((c.r[16].w[0] + 20u)));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 20u));
    c.r[4].d[0] = ld16((c.r[4].w[0] + 22u));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], c.r[16].w[0] + 20u);  if (t) { goto L_001A2FF0; } }
    st32((c.r[23].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_001A2FF0:
    c.r[1].d[0] = c.r[4].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001A3000; } }
    st32((c.r[5].w[0]), c.r[4].w[0]);
    c.budget -= 1;
L_001A3000:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_001A3004:
    c.r[2].d[0] = c.r[20].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 1;
L_001A3008:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A2EFCu | kUnwind; return; } goto L_001A2EFC; } }
    c.r[3].d[0] = ld8((c.r[22].w[0] + 6u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_001A308C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001A307C; } }
L_001A3028:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3034u); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x001A3034u) [[unlikely]] return; }
L_001A3034:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 8u);  if (t) { goto L_001A3078; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A304Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001A304Cu) [[unlikely]] return; }
L_001A304C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001A305C; } }
    st32((c.r[18].w[0]), 0u);
    st32((c.r[18].w[0] + 4u), 0u);
    c.budget -= 2;
L_001A305C:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A306Cu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 166u, depth + 1u); else { c.pc = 0x001A1130u; return; } if (c.pc != 0x001A306Cu) [[unlikely]] return; }
L_001A306C:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 728u), c.r[18].w[0]);
    c.budget -= 3;
L_001A3078:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001A307C:
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] + 13u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A3028u | kUnwind; return; } goto L_001A3028; } }
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 1;
L_001A308C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3094u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 338u, depth + 1u); else { c.pc = 0x001A3440u; return; } if (c.pc != 0x001A3094u) [[unlikely]] return; }
L_001A3094:
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
L_001A30C0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 776u));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001A3118; } }
    c.r[3].d[0] = ld8((c.r[21].w[0] + 6u));
    c.r[2].d[0] = c.r[3].sd[0] < 12ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A310C; } }
    c.r[2].d[0] = c.r[3].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 1;
L_001A310C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_001A311C; } }
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_001A3118:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001A311C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;  if (t) { goto L_001A32B4; } }
L_001A3124:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3130u); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x001A3130u) [[unlikely]] return; }
L_001A3130:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_001A318C; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[2], c.r[19].w[0] << 1);  if (t) { goto L_001A32AC; } }
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[18], c.r[2].w[0] + 48u);  if (t) { goto L_001A3184; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001A3184; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001A317C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A317Cu);  if (depth < kMaxDepth) unit_0010(c, 83u, depth + 1u); else { c.pc = 0x00141160u; return; } if (c.pc != 0x001A317Cu) [[unlikely]] return; }
L_001A317C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3184u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001A3184u) [[unlikely]] return; }
L_001A3184:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), 0u);  if (t) { goto L_001A32AC; } }
L_001A318C:
    c.r[3].d[0] = ld8((c.r[21].w[0] + 14u));
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] << 58;
    c.r[3].d[0] = c.r[3].d[0] >> 62;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_001A3204; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 8u);  if (t) { goto L_001A31B8; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 8u);  if (t) { goto L_001A3270; } }
L_001A31B8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[2], c.r[19].w[0] << 1);  if (t) { goto L_001A32AC; } }
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[18], c.r[2].w[0] + 48u);  if (t) { goto L_001A31FC; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001A31FC; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001A31F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A31F4u);  if (depth < kMaxDepth) unit_0010(c, 83u, depth + 1u); else { c.pc = 0x00141160u; return; } if (c.pc != 0x001A31F4u) [[unlikely]] return; }
L_001A31F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A31FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001A31FCu) [[unlikely]] return; }
L_001A31FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), 0u);  if (t) { goto L_001A32AC; } }
L_001A3204:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001A326C; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 6u);  if (t) { goto L_001A3220; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_001A326C; } }
L_001A3220:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[2], c.r[19].w[0] << 1);  if (t) { goto L_001A32AC; } }
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[18], c.r[2].w[0] + 48u);  if (t) { goto L_001A3264; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001A3264; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001A325C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A325Cu);  if (depth < kMaxDepth) unit_0010(c, 83u, depth + 1u); else { c.pc = 0x00141160u; return; } if (c.pc != 0x001A325Cu) [[unlikely]] return; }
L_001A325C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3264u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001A3264u) [[unlikely]] return; }
L_001A3264:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), 0u);  if (t) { goto L_001A32AC; } }
L_001A326C:
    set32(c.r[4], 0u + 8u);
    c.budget -= 1;
L_001A3270:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3278u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001A3278u) [[unlikely]] return; }
L_001A3278:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001A3288; } }
    st32((c.r[18].w[0]), 0u);
    st32((c.r[18].w[0] + 4u), 0u);
    c.budget -= 2;
L_001A3288:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3298u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 166u, depth + 1u); else { c.pc = 0x001A1130u; return; } if (c.pc != 0x001A3298u) [[unlikely]] return; }
L_001A3298:
    set32(c.r[2], c.r[19].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 52u), c.r[18].w[0]);
    c.budget -= 5;
L_001A32AC:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 2;
L_001A32B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[19].w[0] + 100u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A3124u | kUnwind; return; } goto L_001A3124; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A32C8u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 333u, depth + 1u); else { c.pc = 0x001A3300u; return; } if (c.pc != 0x001A32C8u) [[unlikely]] return; }
L_001A32C8:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A32D4u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 338u, depth + 1u); else { c.pc = 0x001A3440u; return; } if (c.pc != 0x001A32D4u) [[unlikely]] return; }
L_001A32D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001A3300:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8u));
    c.budget -= 12;
    { const bool t = c.r[3].sd[0] <= 0; c.r[20].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001A3410; } }
    set32(c.r[4], c.r[3].w[0] - 1u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[3].w[0] + 1000u);  if (t) { goto L_001A3404; } }
L_001A3354:
    set32(c.r[2], c.r[19].w[0] + c.r[18].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3364u); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x001A3364u) [[unlikely]] return; }
L_001A3364:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_001A3400; } }
    c.r[4].d[0] = ld8((c.r[21].w[0] + 14u));
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = c.r[4].d[0] << 58;
    c.r[4].d[0] = c.r[4].d[0] >> 62;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_001A33A8; } }
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 8u);  if (t) { goto L_001A3400; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[3].d[0]; set32(c.r[4], 0u + 8u);  if (t) { goto L_001A33C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_001A3404; } }
L_001A33A8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001A33C0; } }
    set32(c.r[3], c.r[18].w[0] - 5u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001A3400; } }
L_001A33C0:
    set32(c.r[4], 0u + 8u);
    c.budget -= 1;
L_001A33C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A33CCu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001A33CCu) [[unlikely]] return; }
L_001A33CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001A33DC; } }
    st32((c.r[17].w[0]), 0u);
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 2;
L_001A33DC:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A33ECu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 166u, depth + 1u); else { c.pc = 0x001A1130u; return; } if (c.pc != 0x001A33ECu) [[unlikely]] return; }
L_001A33EC:
    set32(c.r[3], c.r[18].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 56u), c.r[17].w[0]);
    c.budget -= 5;
L_001A3400:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_001A3404:
    c.r[3].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A3354u | kUnwind; return; } goto L_001A3354; } }
L_001A3410:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001A3440:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[18].w[0] + 10000u);
    c.budget -= 11;
L_001A346C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3478u); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x001A3478u) [[unlikely]] return; }
L_001A3478:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001A3538; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 14u));
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] << 58;
    c.r[3].d[0] = c.r[3].d[0] >> 62;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_001A34B4; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001A34CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_001A353C; } }
L_001A34B4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001A34C8; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_001A3538; } }
L_001A34C8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001A34CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A34D4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 143u, depth + 1u); else { c.pc = 0x0015DAE0u; return; } if (c.pc != 0x001A34D4u) [[unlikely]] return; }
L_001A34D4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 656u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 304u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001A34F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A34F0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 313u, depth + 1u); else { c.pc = 0x00147E40u; return; } if (c.pc != 0x001A34F0u) [[unlikely]] return; }
L_001A34F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001A3504; } }
L_001A34F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3500u);  if (depth < kMaxDepth) unit_0010(c, 72u, depth + 1u); else { c.pc = 0x00141020u; return; } if (c.pc != 0x001A3500u) [[unlikely]] return; }
L_001A3500:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001A3504:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3510u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x001A3510u) [[unlikely]] return; }
L_001A3510:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3520u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x001A3520u) [[unlikely]] return; }
L_001A3520:
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 660u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 656u)));
    st8((c.r[2].w[0] + 284u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_001A3538:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_001A353C:
    c.r[2].d[0] = c.r[18].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[18].w[0] + 10000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A346Cu | kUnwind; return; } goto L_001A346C; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 6u));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001A3580; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3564u); set32(c.r[5], 0u + 19910u);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x001A3564u) [[unlikely]] return; }
L_001A3564:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001A357C; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 656u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A357Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 27u, depth + 1u); else { c.pc = 0x001A46F0u; return; } if (c.pc != 0x001A357Cu) [[unlikely]] return; }
L_001A357C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001A3580:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3588u); set32(c.r[5], 0u + 20000u);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x001A3588u) [[unlikely]] return; }
L_001A3588:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001A35A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A359Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x001A359Cu) [[unlikely]] return; }
L_001A359C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A35A8; } }
L_001A35A4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001A35A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001A35C4; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[20].w[0] + 832u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A35C0u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x001A35C0u) [[unlikely]] return; }
L_001A35C0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001A35C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A35CCu); set32(c.r[5], 0u + 20001u);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x001A35CCu) [[unlikely]] return; }
L_001A35CC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001A35E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A35E0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x001A35E0u) [[unlikely]] return; }
L_001A35E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A35EC; } }
L_001A35E8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001A35EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001A3608; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[20].w[0] + 832u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3604u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x001A3604u) [[unlikely]] return; }
L_001A3604:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001A3608:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3610u); set32(c.r[5], 0u + 20002u);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x001A3610u) [[unlikely]] return; }
L_001A3610:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001A3630; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3628u);  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x001A3628u) [[unlikely]] return; }
L_001A3628:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001A3634; } }
L_001A3630:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001A3634:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[4], c.r[20].w[0] + 848u);  if (t) { goto L_001A3644; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3644u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x001A3644u) [[unlikely]] return; }
L_001A3644:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001A3670:
    ld128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], c.r[29].w[0]);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0; c.r[1].d[0] = c.r[3].sd[0] < 256ll ? 1ull : 0ull;  if (t) { goto L_001A3694; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0]), 0u);  if (t) { goto L_001A36A4; } }
L_001A3694:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[7], c.r[29].w[0] + 4u);  if (t) { goto L_001A36A8; } }
    set32(c.r[3], 0u + 255u);
    st32((c.r[29].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_001A36A4:
    set32(c.r[7], c.r[29].w[0] + 4u);
    c.budget -= 1;
L_001A36A8:
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.r[1].d[0] = c.r[3].sd[0] < -127ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[3].sd[0] < 128ll ? 1ull : 0ull;  if (t) { goto L_001A36C4; } }
    set32(c.r[3], 0u - 127u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), c.r[3].w[0]);  if (t) { goto L_001A36D4; } }
L_001A36C4:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[6], c.r[29].w[0] + 8u);  if (t) { goto L_001A36D8; } }
    set32(c.r[3], 0u + 127u);
    st32((c.r[7].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_001A36D4:
    set32(c.r[6], c.r[29].w[0] + 8u);
    c.budget -= 1;
L_001A36D8:
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.r[1].d[0] = c.r[3].sd[0] < -127ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[3].sd[0] < 128ll ? 1ull : 0ull;  if (t) { goto L_001A36F4; } }
    set32(c.r[3], 0u - 127u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.r[3].w[0]);  if (t) { goto L_001A3704; } }
L_001A36F4:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[5], c.r[29].w[0] + 12u);  if (t) { goto L_001A3708; } }
    set32(c.r[3], 0u + 127u);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_001A3704:
    set32(c.r[5], c.r[29].w[0] + 12u);
    c.budget -= 1;
L_001A3708:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; c.r[1].d[0] = c.r[3].sd[0] < 129ll ? 1ull : 0ull;  if (t) { goto L_001A371C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), 0u);  if (t) { goto L_001A372C; } }
L_001A371C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], c.r[29].w[0]);  if (t) { goto L_001A3730; } }
    set32(c.r[3], 0u + 128u);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_001A372C:
    set32(c.r[3], c.r[29].w[0]);
    c.budget -= 1;
L_001A3730:
    ld128((c.r[3].w[0]) & ~15u, c.r[3]);
    st128((c.r[4].w[0] + 640u) & ~15u, c.r[3]);
    set32(c.r[3], ld32((c.r[29].w[0])));
    st8((c.r[4].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[7].w[0])));
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[6].w[0])));
    st8((c.r[4].w[0] + 11u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[5].w[0])));
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001A3760:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001A3784; } }
L_001A3768:
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 660u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001A3780; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A37B8; } }
L_001A3780:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_001A3784:
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(17ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A3768u | kUnwind; return; } goto L_001A3768; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 6u));
    set32(c.r[2], 0u + 13u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001A37B8; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 852u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001A37B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A37B8; } }
L_001A37B4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001A37B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A37C0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 52u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A37E8u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x001A37E8u) [[unlikely]] return; }
L_001A37E8:
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[17].w[0] << 2);
    c.budget -= 2;
L_001A37F0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[2].w[0] + 144u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3808u); set32(c.r[7], c.r[2].w[0] + 80u);  if (depth < kMaxDepth) unit_0028(c, 366u, depth + 1u); else { c.pc = 0x001A38D0u; return; } if (c.pc != 0x001A3808u) [[unlikely]] return; }
L_001A3808:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 13ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A37F0u | kUnwind; return; } goto L_001A37F0; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[3].w[0] << 2);
    c.budget -= 4;
L_001A3828:
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001A3844; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_001A3844:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 13ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A3828u | kUnwind; return; } goto L_001A3828; } }
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3868u); set32(c.r[5], c.r[2].w[0] + 144u);  if (depth < kMaxDepth) unit_0026(c, 201u, depth + 1u); else { c.pc = 0x00199E10u; return; } if (c.pc != 0x001A3868u) [[unlikely]] return; }
L_001A3868:
    set32(c.r[4], ld32((c.r[29].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 5));  if (t) { goto L_001A387C; } }
    set32(c.r[3], c.r[4].w[0] + 31u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    c.budget -= 2;
L_001A387C:
    st32((c.r[29].w[0] + 64u), c.r[3].w[0]);
    set32(c.r[5], c.r[29].w[0] + 68u);
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 5));  if (t) { goto L_001A3898; } }
    set32(c.r[3], c.r[4].w[0] + 31u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    c.budget -= 2;
L_001A3898:
    set32(c.r[4], c.r[3].w[0] - 128u);
    st32((c.r[5].w[0]), c.r[4].w[0]);
    set32(c.r[3], c.r[29].w[0] + 64u);
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[4], c.r[4].w[0] - 128u);
    st32((c.r[29].w[0] + 72u), c.r[4].w[0]);
    ld128((c.r[3].w[0]) & ~15u, c.r[3]);
    st128((c.r[16].w[0]) & ~15u, c.r[3]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_001A38D0:
    set32(c.r[29], c.r[29].w[0] - 1120u);
    set32(c.r[3], c.r[5].w[0] << 1);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[3], c.r[3].w[0] << 4);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[20], c.r[3].w[0] + 16u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 18;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001A3920; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), 0u);  if (t) { goto L_001A3A9C; } }
L_001A3920:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A392Cu); set32(c.r[5], 0u + 1024u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x001A392Cu) [[unlikely]] return; }
L_001A392C:
    set32(c.r[5], ld32((c.r[20].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[6], c.r[5].w[0] + 4u);
    set32(c.r[5], ld32((c.r[5].w[0] + 4u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[4].d[0] = ld16((c.r[5].w[0] + 12u));
    set32(c.r[7], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[7].w[0] + c.r[3].w[0]);  if (t) { goto L_001A3970; } }
L_001A3954:
    c.r[3].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[4], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 7;
L_001A3970:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A3954u | kUnwind; return; } goto L_001A3954; } }
    set32(c.r[5], ld32((c.r[6].w[0])));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 18u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A3990; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_001A39A0; } }
L_001A3990:
    c.r[4].d[0] = ld16((c.r[5].w[0] + 12u));
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_001A39A0:
    set32(c.r[6], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != c.r[6].d[0]; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001A39EC; } }
    set32(c.r[7], 0u + 128u);
    set32(c.r[6], c.r[7].w[0] << 2);
    c.budget -= 2;
L_001A39B8:
    set32(c.r[6], c.r[6].w[0] + c.r[29].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0] + 96u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001A39D4; } }
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 2;
L_001A39D4:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[6].d[0] = c.r[7].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[6], c.r[7].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A39B8u | kUnwind; return; } goto L_001A39B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] << 2);  if (t) { goto L_001A3A8C; } }
L_001A39EC:
    c.r[7].d[0] = ld8((c.r[19].w[0] + 6u));
    c.r[6].d[0] = c.r[7].sd[0] < 12ll ? 1ull : 0ull;
    c.r[6].d[0] = c.r[6].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001A3A04; } }
    c.r[6].d[0] = c.r[7].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 1;
L_001A3A04:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_001A3A48; } }
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[7].w[0] << 2);
    c.budget -= 2;
L_001A3A14:
    set32(c.r[6], c.r[6].w[0] + c.r[29].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0] + 96u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001A3A30; } }
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 2;
L_001A3A30:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[6].d[0] = c.r[7].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[6], c.r[7].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A3A14u | kUnwind; return; } goto L_001A3A14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A3A88; } }
L_001A3A48:
    set32(c.r[7], c.r[8].w[0] << 2);
    c.budget -= 1;
L_001A3A4C:
    set32(c.r[6], c.r[5].w[0] + c.r[7].w[0]);
    c.r[6].d[0] = ld8((c.r[6].w[0] + 3u));
    c.r[6].d[0] = c.r[6].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[6], c.r[7].w[0] + c.r[29].w[0]);  if (t) { goto L_001A3A78; } }
    set32(c.r[6], ld32((c.r[6].w[0] + 96u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001A3A78; } }
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 2;
L_001A3A78:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[6].d[0] = c.r[8].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[7], c.r[8].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A3A4Cu | kUnwind; return; } goto L_001A3A4C; } }
L_001A3A88:
    set32(c.r[4], c.r[4].w[0] << 2);
    c.budget -= 1;
L_001A3A8C:
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    st32((c.r[17].w[0]), c.f[0]);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_001A3A9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1120u);  c.pc = t; return; }
L_001A3AC0:
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[1].w[0] + 26368u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001A3AD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3AECu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 256u, depth + 1u); else { c.pc = 0x0013E440u; return; } if (c.pc != 0x001A3AECu) [[unlikely]] return; }
L_001A3AEC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[17].w[0] + 156u);
    set32(c.r[2], c.r[2].w[0] - 11760u);
    set32(c.r[5], 0u + 40u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3B04u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x001A3B04u) [[unlikely]] return; }
L_001A3B04:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x001A0000u);
    set32(c.r[4], c.r[17].w[0] + 200u);
    set32(c.r[5], c.r[5].w[0] + 3680u);
    set32(c.r[6], c.r[6].w[0] + 3584u);
    set32(c.r[7], 0u + 16u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3B24u); set32(c.r[8], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 89u, depth + 1u); else { c.pc = 0x00100790u; return; } if (c.pc != 0x001A3B24u) [[unlikely]] return; }
L_001A3B24:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x001A0000u);
    set32(c.r[4], c.r[17].w[0] + 232u);
    set32(c.r[5], c.r[5].w[0] + 3680u);
    set32(c.r[6], c.r[6].w[0] + 3584u);
    set32(c.r[7], 0u + 16u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3B44u); set32(c.r[8], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 89u, depth + 1u); else { c.pc = 0x00100790u; return; } if (c.pc != 0x001A3B44u) [[unlikely]] return; }
L_001A3B44:
    st32((c.r[17].w[0] + 268u), c.r[16].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 26368u));
    c.r[3].d[0] = 0ull + 0ull;
    st8((c.r[17].w[0] + 304u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 26368u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A3B74; } }
L_001A3B64:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 4;
L_001A3B74:
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(37ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A3B64u | kUnwind; return; } goto L_001A3B64; } }
    set32(c.r[6], 0u + 256u);
    set32(c.r[4], c.r[17].w[0] + 200u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3B9Cu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0028(c, 153u, depth + 1u); else { c.pc = 0x001A0E70u; return; } if (c.pc != 0x001A3B9Cu) [[unlikely]] return; }
L_001A3B9C:
    set32(c.r[8], c.r[16].w[0] + 1024u);
    set32(c.r[4], c.r[17].w[0] + 216u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 256u);
    set32(c.r[7], 0u + 128u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3BB8u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0028(c, 153u, depth + 1u); else { c.pc = 0x001A0E70u; return; } if (c.pc != 0x001A3BB8u) [[unlikely]] return; }
L_001A3BB8:
    c.r[9].d[0] = ld8((c.r[17].w[0] + 304u));
    set32(c.r[6], 0u + 256u);
    set32(c.r[4], c.r[17].w[0] + 232u);
    set32(c.r[5], 0u + 2u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3BD4u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 153u, depth + 1u); else { c.pc = 0x001A0E70u; return; } if (c.pc != 0x001A3BD4u) [[unlikely]] return; }
L_001A3BD4:
    c.r[9].d[0] = ld8((c.r[17].w[0] + 304u));
    set32(c.r[8], c.r[16].w[0] + 512u);
    set32(c.r[4], c.r[17].w[0] + 248u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 256u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3BF0u); set32(c.r[7], 0u + 128u);  if (depth < kMaxDepth) unit_0028(c, 153u, depth + 1u); else { c.pc = 0x001A0E70u; return; } if (c.pc != 0x001A3BF0u) [[unlikely]] return; }
L_001A3BF0:
    st32((c.r[17].w[0] + 264u), 0u);
    set32(c.r[2], 0u + 37u);
    st32((c.r[17].w[0] + 272u), 0u);
    st32((c.r[17].w[0] + 276u), 0u);
    st32((c.r[17].w[0] + 280u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 292u), 0u);
    st8((c.r[17].w[0] + 296u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 288u), 0u);
    st8((c.r[17].w[0] + 284u), static_cast<std::uint8_t>(0u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3C1Cu); st32((c.r[17].w[0] + 308u), 0u);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x001A3C1Cu) [[unlikely]] return; }
L_001A3C1C:
    st32((c.r[17].w[0] + 300u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001A3C40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001A3CFC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 11760u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[18].w[0] + 264u)));
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001A3CA0; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001A3C9C; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001A3C94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3C94u);  if (depth < kMaxDepth) unit_0010(c, 83u, depth + 1u); else { c.pc = 0x00141160u; return; } if (c.pc != 0x001A3C94u) [[unlikely]] return; }
L_001A3C94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3C9Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001A3C9Cu) [[unlikely]] return; }
L_001A3C9C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001A3CA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3CA8u); st32((c.r[18].w[0] + 264u), 0u);  if (depth < kMaxDepth) unit_0029(c, 33u, depth + 1u); else { c.pc = 0x001A47B0u; return; } if (c.pc != 0x001A3CA8u) [[unlikely]] return; }
L_001A3CA8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001A0000u);
    set32(c.r[4], c.r[18].w[0] + 232u);
    set32(c.r[5], c.r[5].w[0] + 3584u);
    set32(c.r[6], 0u + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3CC0u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 86u, depth + 1u); else { c.pc = 0x00100720u; return; } if (c.pc != 0x001A3CC0u) [[unlikely]] return; }
L_001A3CC0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001A0000u);
    set32(c.r[4], c.r[18].w[0] + 200u);
    set32(c.r[5], c.r[5].w[0] + 3584u);
    set32(c.r[6], 0u + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3CD8u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 86u, depth + 1u); else { c.pc = 0x00100720u; return; } if (c.pc != 0x001A3CD8u) [[unlikely]] return; }
L_001A3CD8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3CE4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E490u; return; } if (c.pc != 0x001A3CE4u) [[unlikely]] return; }
L_001A3CE4:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001A3D00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3CFCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001A3CFCu) [[unlikely]] return; }
L_001A3CFC:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001A3D00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001A3D20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 276u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001A3DA8; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 15344u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x001A0000u < 16384u) { entry = entries_0028[(t - 0x001A0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001A3D50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3D58u);  if (depth < kMaxDepth) unit_0028(c, 407u, depth + 1u); else { c.pc = 0x001A3DF0u; return; } if (c.pc != 0x001A3D58u) [[unlikely]] return; }
L_001A3D58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_001A3DAC; } }
L_001A3D60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3D68u);  if (depth < kMaxDepth) unit_0028(c, 413u, depth + 1u); else { c.pc = 0x001A3F10u; return; } if (c.pc != 0x001A3D68u) [[unlikely]] return; }
L_001A3D68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A3DA8; } }
L_001A3D70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3D78u);  if (depth < kMaxDepth) unit_0028(c, 415u, depth + 1u); else { c.pc = 0x001A3F50u; return; } if (c.pc != 0x001A3D78u) [[unlikely]] return; }
L_001A3D78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A3DA8; } }
L_001A3D80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3D88u);  if (depth < kMaxDepth) unit_0029(c, 9u, depth + 1u); else { c.pc = 0x001A4160u; return; } if (c.pc != 0x001A3D88u) [[unlikely]] return; }
L_001A3D88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A3DA8; } }
L_001A3D90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3D98u);  if (depth < kMaxDepth) unit_0029(c, 13u, depth + 1u); else { c.pc = 0x001A41D0u; return; } if (c.pc != 0x001A3D98u) [[unlikely]] return; }
L_001A3D98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A3DA8; } }
L_001A3DA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3DA8u);  if (depth < kMaxDepth) unit_0029(c, 11u, depth + 1u); else { c.pc = 0x001A41A0u; return; } if (c.pc != 0x001A3DA8u) [[unlikely]] return; }
L_001A3DA8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001A3DAC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001A3DC0:
    st32((c.r[4].w[0] + 280u), 0u);
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 276u), c.r[3].w[0]);  c.pc = t; return; }
L_001A3DD0:
    st32((c.r[4].w[0] + 280u), 0u);
    set32(c.r[2], 0u + 2u);
    st32((c.r[4].w[0] + 276u), c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 7;
    { c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001A2AC0u | kUnwind; return; } goto L_001A2AC0; }
L_001A3DF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001A3E30; } }
L_001A3E08:
    set32(c.r[3], ld32((c.r[17].w[0] + 280u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 280u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 280u)));
    c.r[3].d[0] = c.r[3].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A3E30; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 276u), c.r[3].w[0]);  if (t) { goto L_001A3EEC; } }
L_001A3E30:
    set32(c.r[3], ld32((c.r[17].w[0] + 280u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A3E08u | kUnwind; return; } goto L_001A3E08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3E58u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 298u, depth + 1u); else { c.pc = 0x001A2D50u; return; } if (c.pc != 0x001A3E58u) [[unlikely]] return; }
L_001A3E58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A3EEC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 292u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_001A3E8C; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 13u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A3EA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001A3EA4; } }
L_001A3E8C:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 13u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A3EA4; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001A3EA4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001A3EB8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3EB8u); set32(c.r[5], c.r[17].w[0] + 200u);  if (depth < kMaxDepth) unit_0026(c, 216u, depth + 1u); else { c.pc = 0x0019A210u; return; } if (c.pc != 0x001A3EB8u) [[unlikely]] return; }
L_001A3EB8:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3EC8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A3EC8u) [[unlikely]] return; }
L_001A3EC8:
    set32(c.r[3], ld32((c.r[17].w[0] + 280u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 280u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 280u)));
    c.r[3].d[0] = c.r[3].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A3EEC; } }
    set32(c.r[3], 0u + 4u);
    st32((c.r[17].w[0] + 276u), c.r[3].w[0]);
    c.budget -= 2;
L_001A3EEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001A3F00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A3F10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 280u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3F34u); set32(c.r[4], ld32((c.r[2].w[0] + 8u)));  if (depth < kMaxDepth) unit_0028(c, 298u, depth + 1u); else { c.pc = 0x001A2D50u; return; } if (c.pc != 0x001A3F34u) [[unlikely]] return; }
L_001A3F34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_001A3F40; } }
    st32((c.r[16].w[0] + 276u), c.r[3].w[0]);
    c.budget -= 1;
L_001A3F40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001A3F50:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], ld32((c.r[4].w[0] + 280u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 292u)));
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[19], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 17;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_001A3FB0; } }
    c.r[3].d[0] = ld8((c.r[19].w[0] + 13u));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 36u);  if (t) { goto L_001A3FCC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001A3FC8; } }
L_001A3FB0:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 13u));
    c.r[3].d[0] = c.r[3].d[0] << 57;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A3FC8; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001A3FC8:
    set32(c.r[3], 0u + 36u);
    c.budget -= 1;
L_001A3FCC:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[3].d[0];  if (t) { goto L_001A3FD8; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001A3FD8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001A3FE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3FE8u); set32(c.r[5], c.r[16].w[0] + 200u);  if (depth < kMaxDepth) unit_0026(c, 216u, depth + 1u); else { c.pc = 0x0019A210u; return; } if (c.pc != 0x001A3FE8u) [[unlikely]] return; }
L_001A3FE8:
    set32(c.r[4], ld32((c.r[16].w[0] + 280u)));
    set32(c.r[3], 0u + 36u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_0029(c, 1u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4000u);  if (depth < kMaxDepth) unit_0028(c, 244u, depth + 1u); else { c.pc = 0x001A2430u; return; } if (c.pc != 0x001A4000u) [[unlikely]] return; }
    [[clang::musttail]] return unit_0029(c, 1u, depth);
}

}
