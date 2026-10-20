#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00A6[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 8,
    0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0,
    0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 16, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 21,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0,
    0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0,
    0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 40, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 46, 0, 0, 0, 0, 47, 0, 0,
    0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 54, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0,
    0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 65, 0, 66, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 73, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0,
    0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 80, 0, 81, 0, 0, 0, 0, 0, 0,
    82, 0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0,
    0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0,
    0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    105, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0,
    113, 0, 0, 0, 0, 114, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0,
    0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 123, 0, 0, 0, 0,
    124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0,
    0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0,
    0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134,
    0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 138, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 144,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 147, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0,
    149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0,
    0, 0, 0, 0, 0, 0, 152, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 159, 0, 160, 0, 0, 0, 0, 161, 0,
    0, 0, 0, 162, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0,
    0, 165, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 171, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 174, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 182, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 186,
    0, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0,
    0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0,
    0, 0, 0, 203, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0,
    207, 0, 0, 0, 0, 208, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0,
    0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 213, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 215, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    219, 0, 0, 220, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0,
    227, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0,
    0, 0, 0, 0, 239, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0,
    0, 0, 0, 0, 0, 245, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 250,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0,
    0, 252, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 254, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 267, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 274, 0,
    0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 276, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0, 279, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 282, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293,
    0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    298, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 307, 0,
    0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 309, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0,
    0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 314, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 317, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0,
    324, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    328, 0, 0, 0, 0, 329, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 333, 0,
    0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 336, 0, 0, 0, 0, 337, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 341, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0,
    345, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 347, 0, 0, 0, 348, 0, 349, 0, 0, 0, 0, 0, 350, 0, 0, 0, 351, 0, 0, 0,
    352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 357, 0, 0, 0, 0, 358, 0, 0,
    0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 362, 0, 0, 0,
    0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 364, 0, 0, 0, 0, 365, 0, 366, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0,
    369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    374, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 384, 0, 385, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 394, 0,
    0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 400, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0,
    0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0,
    0, 0, 0, 0, 0, 405, 0, 0, 0, 406, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 413, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0,
    415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 417, 0, 0, 0, 418, 0, 0, 0, 419, 0, 0,
    420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0,
    0, 424, 0, 0, 0, 0, 0, 425, 0, 0, 0, 426, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 429, 0, 430, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433,
    0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 436, 0, 0, 0, 437, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 439,
};

void unit_00A6(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00398000;
    case 2u: goto L_00398010;
    case 3u: goto L_00398020;
    case 4u: goto L_0039804C;
    case 5u: goto L_00398058;
    case 6u: goto L_003980B4;
    case 7u: goto L_003980D8;
    case 8u: goto L_003980FC;
    case 9u: goto L_0039811C;
    case 10u: goto L_00398140;
    case 11u: goto L_00398160;
    case 12u: goto L_00398184;
    case 13u: goto L_003981AC;
    case 14u: goto L_003981BC;
    case 15u: goto L_003981E0;
    case 16u: goto L_00398208;
    case 17u: goto L_00398210;
    case 18u: goto L_00398220;
    case 19u: goto L_00398238;
    case 20u: goto L_00398258;
    case 21u: goto L_0039827C;
    case 22u: goto L_003982B0;
    case 23u: goto L_003982C0;
    case 24u: goto L_003983D0;
    case 25u: goto L_003983E0;
    case 26u: goto L_003983F0;
    case 27u: goto L_00398414;
    case 28u: goto L_00398430;
    case 29u: goto L_00398548;
    case 30u: goto L_0039856C;
    case 31u: goto L_00398588;
    case 32u: goto L_003985AC;
    case 33u: goto L_003985D0;
    case 34u: goto L_003985EC;
    case 35u: goto L_00398670;
    case 36u: goto L_003986A0;
    case 37u: goto L_003986B8;
    case 38u: goto L_003986D0;
    case 39u: goto L_003986F0;
    case 40u: goto L_00398790;
    case 41u: goto L_0039879C;
    case 42u: goto L_003987C0;
    case 43u: goto L_00398808;
    case 44u: goto L_00398830;
    case 45u: goto L_00398858;
    case 46u: goto L_00398860;
    case 47u: goto L_00398874;
    case 48u: goto L_00398888;
    case 49u: goto L_003988C0;
    case 50u: goto L_003988F8;
    case 51u: goto L_00398920;
    case 52u: goto L_0039892C;
    case 53u: goto L_00398964;
    case 54u: goto L_00398970;
    case 55u: goto L_003989A8;
    case 56u: goto L_003989B4;
    case 57u: goto L_00398A10;
    case 58u: goto L_00398A48;
    case 59u: goto L_00398A88;
    case 60u: goto L_00398AD4;
    case 61u: goto L_00398ADC;
    case 62u: goto L_00398AF0;
    case 63u: goto L_00398B04;
    case 64u: goto L_00398B2C;
    case 65u: goto L_00398B38;
    case 66u: goto L_00398B40;
    case 67u: goto L_00398B60;
    case 68u: goto L_00398BC4;
    case 69u: goto L_00398BEC;
    case 70u: goto L_00398C14;
    case 71u: goto L_00398C3C;
    case 72u: goto L_00398C64;
    case 73u: goto L_00398C8C;
    case 74u: goto L_00398C94;
    case 75u: goto L_00398CC0;
    case 76u: goto L_00398CE8;
    case 77u: goto L_00398D04;
    case 78u: goto L_00398D1C;
    case 79u: goto L_00398D40;
    case 80u: goto L_00398D5C;
    case 81u: goto L_00398D64;
    case 82u: goto L_00398D80;
    case 83u: goto L_00398D94;
    case 84u: goto L_00398DA4;
    case 85u: goto L_00398DB4;
    case 86u: goto L_00398DC4;
    case 87u: goto L_00398DD8;
    case 88u: goto L_00398E08;
    case 89u: goto L_00398E1C;
    case 90u: goto L_00398E2C;
    case 91u: goto L_00398E3C;
    case 92u: goto L_00398E4C;
    case 93u: goto L_00398E60;
    case 94u: goto L_00398E74;
    case 95u: goto L_00398E88;
    case 96u: goto L_00398E98;
    case 97u: goto L_00398EA8;
    case 98u: goto L_00398EB8;
    case 99u: goto L_00398ECC;
    case 100u: goto L_00398ED4;
    case 101u: goto L_00398EE8;
    case 102u: goto L_00398EF8;
    case 103u: goto L_00398F08;
    case 104u: goto L_00398F18;
    case 105u: goto L_00398F80;
    case 106u: goto L_00398F90;
    case 107u: goto L_00398FA4;
    case 108u: goto L_00398FB4;
    case 109u: goto L_00398FC4;
    case 110u: goto L_00398FD4;
    case 111u: goto L_00399044;
    case 112u: goto L_0039905C;
    case 113u: goto L_00399080;
    case 114u: goto L_00399094;
    case 115u: goto L_0039909C;
    case 116u: goto L_003990B0;
    case 117u: goto L_003990E0;
    case 118u: goto L_00399104;
    case 119u: goto L_00399120;
    case 120u: goto L_00399138;
    case 121u: goto L_00399150;
    case 122u: goto L_00399164;
    case 123u: goto L_0039916C;
    case 124u: goto L_00399180;
    case 125u: goto L_003991B0;
    case 126u: goto L_003991D4;
    case 127u: goto L_003991F0;
    case 128u: goto L_00399208;
    case 129u: goto L_00399220;
    case 130u: goto L_00399274;
    case 131u: goto L_00399298;
    case 132u: goto L_003992AC;
    case 133u: goto L_003992D0;
    case 134u: goto L_003992FC;
    case 135u: goto L_00399310;
    case 136u: goto L_00399320;
    case 137u: goto L_00399338;
    case 138u: goto L_00399348;
    case 139u: goto L_00399350;
    case 140u: goto L_00399384;
    case 141u: goto L_003993B0;
    case 142u: goto L_003993C0;
    case 143u: goto L_003993EC;
    case 144u: goto L_003993FC;
    case 145u: goto L_00399428;
    case 146u: goto L_00399440;
    case 147u: goto L_0039944C;
    case 148u: goto L_0039945C;
    case 149u: goto L_00399480;
    case 150u: goto L_003994B4;
    case 151u: goto L_003994F8;
    case 152u: goto L_00399518;
    case 153u: goto L_00399520;
    case 154u: goto L_00399534;
    case 155u: goto L_00399548;
    case 156u: goto L_00399550;
    case 157u: goto L_0039959C;
    case 158u: goto L_003995BC;
    case 159u: goto L_003995DC;
    case 160u: goto L_003995E4;
    case 161u: goto L_003995F8;
    case 162u: goto L_0039960C;
    case 163u: goto L_00399614;
    case 164u: goto L_00399660;
    case 165u: goto L_00399684;
    case 166u: goto L_00399698;
    case 167u: goto L_003996BC;
    case 168u: goto L_003996C4;
    case 169u: goto L_003996D8;
    case 170u: goto L_003996EC;
    case 171u: goto L_003996F4;
    case 172u: goto L_00399740;
    case 173u: goto L_00399760;
    case 174u: goto L_00399774;
    case 175u: goto L_003997B0;
    case 176u: goto L_003997DC;
    case 177u: goto L_00399810;
    case 178u: goto L_00399858;
    case 179u: goto L_0039988C;
    case 180u: goto L_003998BC;
    case 181u: goto L_003998EC;
    case 182u: goto L_003998F8;
    case 183u: goto L_00399924;
    case 184u: goto L_00399950;
    case 185u: goto L_00399964;
    case 186u: goto L_0039997C;
    case 187u: goto L_00399990;
    case 188u: goto L_003999A4;
    case 189u: goto L_003999BC;
    case 190u: goto L_003999D0;
    case 191u: goto L_003999F4;
    case 192u: goto L_00399A5C;
    case 193u: goto L_00399A9C;
    case 194u: goto L_00399AB8;
    case 195u: goto L_00399AE4;
    case 196u: goto L_00399B04;
    case 197u: goto L_00399B14;
    case 198u: goto L_00399B48;
    case 199u: goto L_00399B7C;
    case 200u: goto L_00399BC0;
    case 201u: goto L_00399BD4;
    case 202u: goto L_00399BF0;
    case 203u: goto L_00399C0C;
    case 204u: goto L_00399C14;
    case 205u: goto L_00399C40;
    case 206u: goto L_00399C70;
    case 207u: goto L_00399C80;
    case 208u: goto L_00399C94;
    case 209u: goto L_00399C9C;
    case 210u: goto L_00399CF0;
    case 211u: goto L_00399D10;
    case 212u: goto L_00399D38;
    case 213u: goto L_00399D54;
    case 214u: goto L_00399D60;
    case 215u: goto L_00399D98;
    case 216u: goto L_00399DA4;
    case 217u: goto L_00399DF0;
    case 218u: goto L_00399E48;
    case 219u: goto L_00399E80;
    case 220u: goto L_00399E8C;
    case 221u: goto L_00399E98;
    case 222u: goto L_00399ED0;
    case 223u: goto L_00399F1C;
    case 224u: goto L_00399F2C;
    case 225u: goto L_00399F44;
    case 226u: goto L_00399F60;
    case 227u: goto L_00399F80;
    case 228u: goto L_00399F94;
    case 229u: goto L_00399FB0;
    case 230u: goto L_0039A060;
    case 231u: goto L_0039A094;
    case 232u: goto L_0039A0C0;
    case 233u: goto L_0039A0E4;
    case 234u: goto L_0039A13C;
    case 235u: goto L_0039A164;
    case 236u: goto L_0039A1A4;
    case 237u: goto L_0039A1D0;
    case 238u: goto L_0039A1F0;
    case 239u: goto L_0039A210;
    case 240u: goto L_0039A21C;
    case 241u: goto L_0039A270;
    case 242u: goto L_0039A2B0;
    case 243u: goto L_0039A2D4;
    case 244u: goto L_0039A2F4;
    case 245u: goto L_0039A314;
    case 246u: goto L_0039A320;
    case 247u: goto L_0039A374;
    case 248u: goto L_0039A3DC;
    case 249u: goto L_0039A3F0;
    case 250u: goto L_0039A3FC;
    case 251u: goto L_0039A470;
    case 252u: goto L_0039A484;
    case 253u: goto L_0039A490;
    case 254u: goto L_0039A504;
    case 255u: goto L_0039A518;
    case 256u: goto L_0039A558;
    case 257u: goto L_0039A59C;
    case 258u: goto L_0039A5B8;
    case 259u: goto L_0039A61C;
    case 260u: goto L_0039A63C;
    case 261u: goto L_0039A660;
    case 262u: goto L_0039A6B0;
    case 263u: goto L_0039A700;
    case 264u: goto L_0039A750;
    case 265u: goto L_0039A7A0;
    case 266u: goto L_0039A7C0;
    case 267u: goto L_0039A808;
    case 268u: goto L_0039A824;
    case 269u: goto L_0039A848;
    case 270u: goto L_0039A8B0;
    case 271u: goto L_0039A8BC;
    case 272u: goto L_0039A8CC;
    case 273u: goto L_0039A8DC;
    case 274u: goto L_0039A8F8;
    case 275u: goto L_0039A91C;
    case 276u: goto L_0039A984;
    case 277u: goto L_0039A990;
    case 278u: goto L_0039A9A0;
    case 279u: goto L_0039A9B0;
    case 280u: goto L_0039A9C4;
    case 281u: goto L_0039AA20;
    case 282u: goto L_0039AA88;
    case 283u: goto L_0039AA94;
    case 284u: goto L_0039AAA4;
    case 285u: goto L_0039AAD0;
    case 286u: goto L_0039AAF4;
    case 287u: goto L_0039AB20;
    case 288u: goto L_0039AB44;
    case 289u: goto L_0039AB74;
    case 290u: goto L_0039ABB0;
    case 291u: goto L_0039ABE0;
    case 292u: goto L_0039AC54;
    case 293u: goto L_0039AC7C;
    case 294u: goto L_0039AC8C;
    case 295u: goto L_0039ACB0;
    case 296u: goto L_0039ACC0;
    case 297u: goto L_0039ACD0;
    case 298u: goto L_0039AD00;
    case 299u: goto L_0039AD24;
    case 300u: goto L_0039AD64;
    case 301u: goto L_0039ADA0;
    case 302u: goto L_0039ADD0;
    case 303u: goto L_0039AE14;
    case 304u: goto L_0039AE44;
    case 305u: goto L_0039AEC0;
    case 306u: goto L_0039AEE8;
    case 307u: goto L_0039AEF8;
    case 308u: goto L_0039AF1C;
    case 309u: goto L_0039AF2C;
    case 310u: goto L_0039AF3C;
    case 311u: goto L_0039AF70;
    case 312u: goto L_0039AF88;
    case 313u: goto L_0039AFB4;
    case 314u: goto L_0039AFC4;
    case 315u: goto L_0039AFCC;
    case 316u: goto L_0039B028;
    case 317u: goto L_0039B030;
    case 318u: goto L_0039B050;
    case 319u: goto L_0039B09C;
    case 320u: goto L_0039B0AC;
    case 321u: goto L_0039B0C4;
    case 322u: goto L_0039B0E0;
    case 323u: goto L_0039B0F0;
    case 324u: goto L_0039B100;
    case 325u: goto L_0039B124;
    case 326u: goto L_0039B144;
    case 327u: goto L_0039B158;
    case 328u: goto L_0039B180;
    case 329u: goto L_0039B194;
    case 330u: goto L_0039B1A8;
    case 331u: goto L_0039B1C4;
    case 332u: goto L_0039B1E0;
    case 333u: goto L_0039B1F8;
    case 334u: goto L_0039B20C;
    case 335u: goto L_0039B238;
    case 336u: goto L_0039B284;
    case 337u: goto L_0039B298;
    case 338u: goto L_0039B2AC;
    case 339u: goto L_0039B2C4;
    case 340u: goto L_0039B2E0;
    case 341u: goto L_0039B2F8;
    case 342u: goto L_0039B3BC;
    case 343u: goto L_0039B3CC;
    case 344u: goto L_0039B3E8;
    case 345u: goto L_0039B400;
    case 346u: goto L_0039B424;
    case 347u: goto L_0039B430;
    case 348u: goto L_0039B440;
    case 349u: goto L_0039B448;
    case 350u: goto L_0039B460;
    case 351u: goto L_0039B470;
    case 352u: goto L_0039B480;
    case 353u: goto L_0039B4B8;
    case 354u: goto L_0039B520;
    case 355u: goto L_0039B534;
    case 356u: goto L_0039B550;
    case 357u: goto L_0039B560;
    case 358u: goto L_0039B574;
    case 359u: goto L_0039B590;
    case 360u: goto L_0039B5C0;
    case 361u: goto L_0039B5D8;
    case 362u: goto L_0039B5F0;
    case 363u: goto L_0039B614;
    case 364u: goto L_0039B628;
    case 365u: goto L_0039B63C;
    case 366u: goto L_0039B644;
    case 367u: goto L_0039B654;
    case 368u: goto L_0039B670;
    case 369u: goto L_0039B680;
    case 370u: goto L_0039B6C0;
    case 371u: goto L_0039B6F0;
    case 372u: goto L_0039B720;
    case 373u: goto L_0039B750;
    case 374u: goto L_0039B780;
    case 375u: goto L_0039B790;
    case 376u: goto L_0039B7B0;
    case 377u: goto L_0039B7DC;
    case 378u: goto L_0039B808;
    case 379u: goto L_0039B834;
    case 380u: goto L_0039B86C;
    case 381u: goto L_0039B898;
    case 382u: goto L_0039B8C4;
    case 383u: goto L_0039B8F0;
    case 384u: goto L_0039B91C;
    case 385u: goto L_0039B924;
    case 386u: goto L_0039B93C;
    case 387u: goto L_0039B958;
    case 388u: goto L_0039B968;
    case 389u: goto L_0039B9A8;
    case 390u: goto L_0039B9D8;
    case 391u: goto L_0039BA08;
    case 392u: goto L_0039BA38;
    case 393u: goto L_0039BA68;
    case 394u: goto L_0039BA78;
    case 395u: goto L_0039BA98;
    case 396u: goto L_0039BAC4;
    case 397u: goto L_0039BAF0;
    case 398u: goto L_0039BB1C;
    case 399u: goto L_0039BB48;
    case 400u: goto L_0039BB50;
    case 401u: goto L_0039BB70;
    case 402u: goto L_0039BB88;
    case 403u: goto L_0039BBD0;
    case 404u: goto L_0039BBF0;
    case 405u: goto L_0039BC14;
    case 406u: goto L_0039BC24;
    case 407u: goto L_0039BC34;
    case 408u: goto L_0039BC74;
    case 409u: goto L_0039BCB4;
    case 410u: goto L_0039BCD4;
    case 411u: goto L_0039BCF0;
    case 412u: goto L_0039BD3C;
    case 413u: goto L_0039BD4C;
    case 414u: goto L_0039BD64;
    case 415u: goto L_0039BD80;
    case 416u: goto L_0039BDCC;
    case 417u: goto L_0039BDD4;
    case 418u: goto L_0039BDE4;
    case 419u: goto L_0039BDF4;
    case 420u: goto L_0039BE00;
    case 421u: goto L_0039BE30;
    case 422u: goto L_0039BE50;
    case 423u: goto L_0039BE70;
    case 424u: goto L_0039BE84;
    case 425u: goto L_0039BE9C;
    case 426u: goto L_0039BEAC;
    case 427u: goto L_0039BEC0;
    case 428u: goto L_0039BEE4;
    case 429u: goto L_0039BEF0;
    case 430u: goto L_0039BEF8;
    case 431u: goto L_0039BF34;
    case 432u: goto L_0039BF4C;
    case 433u: goto L_0039BF7C;
    case 434u: goto L_0039BF8C;
    case 435u: goto L_0039BFAC;
    case 436u: goto L_0039BFBC;
    case 437u: goto L_0039BFCC;
    case 438u: goto L_0039BFE0;
    case 439u: goto L_0039BFFC;
    default: bad_entry(c, 0x00398000u); return;
    }
L_00398000:
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 1;
    c.pc = 0x00398004u; [[clang::musttail]] return dispatch(c, 0u, depth);
L_00398010:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[1].w[0] - 13088u)));  c.pc = t; return; }
L_00398020:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039804Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0017(c, 125u, depth + 1u); else { c.pc = 0x0015D850u; return; } if (c.pc != 0x0039804Cu) [[unlikely]] return; }
L_0039804C:
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
L_00398058:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_003980AC; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_003980A4; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0039809C; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_00398094; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0039808C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003980B4; } }
L_0039808C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[20].w[0] + 2984u);  if (t) { goto L_003980B0; } }
L_00398094:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[20].w[0] + 5928u);  if (t) { goto L_003980B0; } }
L_0039809C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[20].w[0] + 4456u);  if (t) { goto L_003980B0; } }
L_003980A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[20].w[0] + 1512u);  if (t) { goto L_003980B0; } }
L_003980AC:
    set32(c.r[19], c.r[20].w[0] + 40u);
    c.budget -= 1;
L_003980B0:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003980B4:
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003980D8u); set32(c.r[5], c.r[19].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0017(c, 147u, depth + 1u); else { c.pc = 0x0015DBB0u; return; } if (c.pc != 0x003980D8u) [[unlikely]] return; }
L_003980D8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003980B4u | kUnwind; return; } goto L_003980B4; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00398058u | kUnwind; return; } goto L_00398058; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003980FC:
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039811Cu); set32(c.r[5], c.r[2].w[0] + 7400u);  if (depth < kMaxDepth) unit_0017(c, 147u, depth + 1u); else { c.pc = 0x0015DBB0u; return; } if (c.pc != 0x0039811Cu) [[unlikely]] return; }
L_0039811C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003980FCu | kUnwind; return; } goto L_003980FC; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    st8((c.r[20].w[0] + 7448u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398140u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x00398140u) [[unlikely]] return; }
L_00398140:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00398160:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398184u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 2u, depth + 1u); else { c.pc = 0x00398010u; return; } if (c.pc != 0x00398184u) [[unlikely]] return; }
L_00398184:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003981BC; } }
    st8((c.r[2].w[0] + 7449u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 4u);
    st32((c.r[18].w[0] + 7452u), c.r[17].w[0]);
    st32((c.r[18].w[0] + 7456u), c.r[16].w[0]);
    c.budget -= 6;
    { const bool t = c.r[17].d[0] != c.r[3].d[0]; st32((c.r[18].w[0] + 7460u), 0u);  if (t) { goto L_003981BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003981ACu);  if (depth < kMaxDepth) unit_0023(c, 256u, depth + 1u); else { c.pc = 0x0018E780u; return; } if (c.pc != 0x003981ACu) [[unlikely]] return; }
L_003981AC:
    set32(c.r[5], ld32((c.r[18].w[0] + 7456u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003981BCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0024(c, 5u, depth + 1u); else { c.pc = 0x00190090u; return; } if (c.pc != 0x003981BCu) [[unlikely]] return; }
L_003981BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003981E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 7449u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0039829C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 7456u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398208u); set32(c.r[4], ld32((c.r[16].w[0] + 7452u)));  if (depth < kMaxDepth) unit_00A6(c, 23u, depth + 1u); else { c.pc = 0x003982C0u; return; } if (c.pc != 0x00398208u) [[unlikely]] return; }
L_00398208:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398210u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 256u, depth + 1u); else { c.pc = 0x00189B70u; return; } if (c.pc != 0x00398210u) [[unlikely]] return; }
L_00398210:
    set32(c.r[5], ld32((c.r[16].w[0] + 7460u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398220u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 274u, depth + 1u); else { c.pc = 0x00189D70u; return; } if (c.pc != 0x00398220u) [[unlikely]] return; }
L_00398220:
    set32(c.r[3], ld32((c.r[16].w[0] + 7460u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_0039827C; } }
    set32(c.r[4], ld32((c.r[1].w[0] + 26160u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398238u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 500u, depth + 1u); else { c.pc = 0x0018BFA0u; return; } if (c.pc != 0x00398238u) [[unlikely]] return; }
L_00398238:
    set32(c.r[5], ld32((c.r[16].w[0] + 7452u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00398260; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398258u);  if (depth < kMaxDepth) unit_0022(c, 484u, depth + 1u); else { c.pc = 0x0018BD60u; return; } if (c.pc != 0x00398258u) [[unlikely]] return; }
L_00398258:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 7460u)));  if (t) { goto L_00398280; } }
L_00398260:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0039827C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039827Cu);  if (depth < kMaxDepth) unit_0022(c, 484u, depth + 1u); else { c.pc = 0x0018BD60u; return; } if (c.pc != 0x0039827Cu) [[unlikely]] return; }
L_0039827C:
    set32(c.r[4], ld32((c.r[16].w[0] + 7460u)));
    c.budget -= 1;
L_00398280:
    set32(c.r[3], 0u + 20u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[16].w[0] + 7460u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 7460u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0039829C; } }
    st8((c.r[16].w[0] + 7449u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0039829C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003982B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 13088u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 40u);  c.pc = t; return; }
L_003982C0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_00398390; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_0039836C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_00398348; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_00398324; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_00398300; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_003983B4; } }
L_00398300:
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[2], ld32((c.r[1].w[0] - 13088u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 40u);  if (t) { goto L_003983BC; } }
L_00398324:
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[2], ld32((c.r[1].w[0] - 13088u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1512u);  if (t) { goto L_003983BC; } }
L_00398348:
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[2], ld32((c.r[1].w[0] - 13088u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 2984u);  if (t) { goto L_003983BC; } }
L_0039836C:
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[2], ld32((c.r[1].w[0] - 13088u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 4456u);  if (t) { goto L_003983BC; } }
L_00398390:
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[2], ld32((c.r[1].w[0] - 13088u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 5928u);  if (t) { goto L_003983BC; } }
L_003983B4:
    set32(c.r[2], ld32((c.r[1].w[0] - 13088u)));
    set32(c.r[2], c.r[2].w[0] + 5928u);
    c.budget -= 2;
L_003983BC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003983D0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003981E0u | kUnwind; return; } goto L_003981E0; }
L_003983E0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00397EE0u | kUnwind; return; } [[clang::musttail]] return unit_00A5(c, 514u, depth); }
L_003983F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], 0u + 31u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8896u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00398414; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398414u);  if (depth < kMaxDepth) unit_00A6(c, 28u, depth + 1u); else { c.pc = 0x00398430u; return; } if (c.pc != 0x00398414u) [[unlikely]] return; }
L_00398414:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00398430:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1F00000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[0] = c.r[3].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = ld32((c.r[4].w[0] + 228u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003985B4; } }
    c.f[1] = ld32((c.r[17].w[0] + 224u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42DA0000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003985B4; } }
    c.f[2] = ld32((c.r[5].w[0] + 224u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C60000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003985B4; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003985B4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = ld32((c.r[17].w[0] + 212u));
    c.f[0] = ld32((c.r[1].w[0] + 1824u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003985B4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] + 1816u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003984D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003985B8; } }
L_003984D4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = ld32((c.r[5].w[0] + 212u));
    c.f[0] = ld32((c.r[1].w[0] + 1808u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003985B4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] + 1800u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00398508; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003985B4; } }
L_00398508:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C00000u);
    c.f[0] = ld32((c.r[1].w[0] + 1792u));
    st32((c.r[17].w[0] + 212u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] + 1784u));
    st32((c.r[5].w[0] + 212u), c.f[0]);
    st32((c.r[5].w[0] + 224u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 240u)));
    c.budget -= 11;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_00398538; } }
    set32(c.r[5], c.r[5].w[0] + 436u);
    c.budget -= 1;
L_00398538:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398548u); c.r[5].d[0] = c.r[2].d[0] | 21057ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x00398548u) [[unlikely]] return; }
L_00398548:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0039855C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_0039855C; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0039855C:
    set32(c.r[2], 0u + 10000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039856Cu); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C3DA0u; return; } if (c.pc != 0x0039856Cu) [[unlikely]] return; }
L_0039856C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);  if (t) { goto L_0039857C; } }
    set32(c.r[17], c.r[17].w[0] + 436u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);
    c.budget -= 2;
L_0039857C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398588u); c.r[5].d[0] = c.r[2].d[0] | 21057ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x00398588u) [[unlikely]] return; }
L_00398588:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0039859C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_0039859C; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0039859C:
    set32(c.r[2], 0u + 10000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003985ACu); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C3DA0u; return; } if (c.pc != 0x003985ACu) [[unlikely]] return; }
L_003985AC:
    set32(c.r[3], 0u + 12524u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_003985B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003985B8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003985D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x474F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[7].d[0] = c.r[2].d[0] | 16970ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003985ECu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 200u, depth + 1u); else { c.pc = 0x001B1A30u; return; } if (c.pc != 0x003985ECu) [[unlikely]] return; }
L_003985EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[16].w[0] + 96u);
    set32(c.r[2], c.r[2].w[0] - 28656u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[16].w[0] + 112u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[16].w[0] + 96u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[16].w[0] + 100u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    st32((c.r[16].w[0] + 104u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[16].w[0] + 112u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[16].w[0] + 116u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.f[0] = ld32((c.r[3].w[0] + 20u));
    st32((c.r[16].w[0] + 120u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 30;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00398670:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003986B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 28656u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003986A0u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002C(c, 203u, depth + 1u); else { c.pc = 0x001B1AC0u; return; } if (c.pc != 0x003986A0u) [[unlikely]] return; }
L_003986A0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003986BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003986B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x003986B8u) [[unlikely]] return; }
L_003986B8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003986BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003986D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00398898; } }
L_003986F0:
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 28320u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00398894; } }
    ld128((c.r[16].w[0] + 224u) & ~15u, c.r[3]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    c.f[0] = ld32((c.r[18].w[0] + 96u));
    c.f[1] = ld32((c.r[29].w[0] + 64u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00398894; } }
    c.f[3] = ld32((c.r[29].w[0] + 68u));
    c.f[0] = ld32((c.r[18].w[0] + 100u));
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00398894; } }
    c.f[2] = ld32((c.r[29].w[0] + 72u));
    c.f[0] = ld32((c.r[18].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00398894; } }
    c.f[0] = ld32((c.r[18].w[0] + 112u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00398894; } }
    c.f[0] = ld32((c.r[18].w[0] + 116u));
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00398894; } }
    c.f[0] = ld32((c.r[18].w[0] + 120u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00398894; } }
    set32(c.r[25], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00398790u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00398790u) [[unlikely]] return; }
L_00398790:
    c.f[12] = ld32((c.r[2].w[0] + 4u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039879Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 18u, depth + 1u); else { c.pc = 0x0026C340u; return; } if (c.pc != 0x0039879Cu) [[unlikely]] return; }
L_0039879C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00398894; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 68u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 60u)));
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003987C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x003987C0u) [[unlikely]] return; }
L_003987C0:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[5], 0u - 65u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    ld128((c.r[2].w[0] + 224u) & ~15u, c.r[2]);
    st128((c.r[16].w[0] + 224u) & ~15u, c.r[2]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 394u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 394u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 394u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st8((c.r[3].w[0] + 394u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 18;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00398808u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00398808u) [[unlikely]] return; }
L_00398808:
    c.f[1] = ld32((c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 224u), c.f[0]);
    set32(c.r[25], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00398830u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00398830u) [[unlikely]] return; }
L_00398830:
    c.f[1] = ld32((c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[2].w[0] + 224u), c.f[0]);
    set32(c.r[25], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00398858u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00398858u) [[unlikely]] return; }
L_00398858:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398860u); c.f[12] = ld32((c.r[2].w[0] + 4u));  if (depth < kMaxDepth) unit_0010(c, 265u, depth + 1u); else { c.pc = 0x00143C10u; return; } if (c.pc != 0x00398860u) [[unlikely]] return; }
L_00398860:
    st32((c.r[16].w[0] + 212u), c.f[0]);
    set32(c.r[25], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00398874u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00398874u) [[unlikely]] return; }
L_00398874:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[1].w[0] + 1776u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398888u); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0010(c, 265u, depth + 1u); else { c.pc = 0x00143C10u; return; } if (c.pc != 0x00398888u) [[unlikely]] return; }
L_00398888:
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 212u), c.f[0]);  if (t) { goto L_003988A4; } }
L_00398894:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00398898:
    c.r[3].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003986F0u | kUnwind; return; } goto L_003986F0; } }
L_003988A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003988C0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 14;
L_003988F8:
    set32(c.r[3], c.r[17].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] + 2048u);
    set32(c.r[16], c.r[3].w[0] << 4);
    set32(c.r[20], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[21], c.r[19].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398920u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x00398920u) [[unlikely]] return; }
L_00398920:
    set32(c.r[5], c.r[20].w[0] + 22u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039892Cu); set32(c.r[4], c.r[21].w[0] + 22u);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x0039892Cu) [[unlikely]] return; }
L_0039892C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[3].w[0] + 2048u);
    set32(c.r[2], c.r[2].w[0] + 2528u);
    set32(c.r[20], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = ld16((c.r[3].w[0] + 44u));
    set32(c.r[22], c.r[18].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    st16((c.r[21].w[0] + 44u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 46u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398964u); st8((c.r[21].w[0] + 46u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x00398964u) [[unlikely]] return; }
L_00398964:
    set32(c.r[5], c.r[20].w[0] + 22u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398970u); set32(c.r[4], c.r[22].w[0] + 22u);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x00398970u) [[unlikely]] return; }
L_00398970:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[3].w[0] + 2528u);
    set32(c.r[2], c.r[2].w[0] + 3008u);
    set32(c.r[21], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = ld16((c.r[3].w[0] + 44u));
    set32(c.r[20], c.r[23].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    st16((c.r[22].w[0] + 44u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 46u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003989A8u); st8((c.r[22].w[0] + 46u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x003989A8u) [[unlikely]] return; }
L_003989A8:
    set32(c.r[5], c.r[21].w[0] + 22u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003989B4u); set32(c.r[4], c.r[20].w[0] + 22u);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x003989B4u) [[unlikely]] return; }
L_003989B4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 3008u);
    set32(c.r[5], c.r[3].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = ld16((c.r[5].w[0] + 44u));
    c.r[3].d[0] = c.r[17].sd[0] < 10ll ? 1ull : 0ull;
    st16((c.r[20].w[0] + 44u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 46u));
    st8((c.r[20].w[0] + 46u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 47u));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[20].w[0] + 47u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003988F8u | kUnwind; return; } goto L_003988F8; } }
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
L_00398A10:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], 0u + 2u);
    set32(c.r[5], c.r[16].w[0] + 100u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398A48u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 12u, depth + 1u); else { c.pc = 0x001300B0u; return; } if (c.pc != 0x00398A48u) [[unlikely]] return; }
L_00398A48:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 28528u);
    set32(c.r[2], c.r[2].w[0] - 28440u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[4], 0u + 124u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 40u), 0u);
    st32((c.r[16].w[0] + 44u), 0u);
    st32((c.r[16].w[0] + 88u), 0u);
    st32((c.r[16].w[0] + 92u), 0u);
    st32((c.r[16].w[0] + 96u), 0u);
    st8((c.r[16].w[0] + 156u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 160u), c.r[17].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398A88u); st32((c.r[16].w[0] + 172u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00398A88u) [[unlikely]] return; }
L_00398A88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_00398AD4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[14] = ld32((c.r[1].w[0] + 3592u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42400000u);
    c.f[12] = c.r[4].w[0];
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.f[13] = c.r[3].w[0];
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 12u);
    set32(c.r[8], c.r[8].w[0] + 1840u);
    set32(c.r[9], c.r[9].w[0] + 1872u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[15] = ld32((c.r[1].w[0] + 3584u));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398AD4u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000D(c, 34u, depth + 1u); else { c.pc = 0x00134330u; return; } if (c.pc != 0x00398AD4u) [[unlikely]] return; }
L_00398AD4:
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00398ADC:
    set32(c.r[17], c.r[18].w[0] << 2);
    set32(c.r[4], 0u + 36u);
    set32(c.r[2], c.r[16].w[0] + c.r[17].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398AF0u); st32((c.r[2].w[0] + 48u), 0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00398AF0u) [[unlikely]] return; }
L_00398AF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] + c.r[17].w[0]);  if (t) { goto L_00398B08; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398B04u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 271u, depth + 1u); else { c.pc = 0x002275A0u; return; } if (c.pc != 0x00398B04u) [[unlikely]] return; }
L_00398B04:
    set32(c.r[3], c.r[16].w[0] + c.r[17].w[0]);
    c.budget -= 1;
L_00398B08:
    set32(c.r[18], c.r[18].w[0] + 1u);
    st32((c.r[3].w[0] + 116u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[18].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00398ADCu | kUnwind; return; } goto L_00398ADC; } }
    st32((c.r[16].w[0] + 164u), 0u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398B2Cu); st32((c.r[16].w[0] + 168u), 0u);  if (depth < kMaxDepth) unit_0053(c, 59u, depth + 1u); else { c.pc = 0x0024C560u; return; } if (c.pc != 0x00398B2Cu) [[unlikely]] return; }
L_00398B2C:
    set32(c.r[4], c.r[16].w[0] + 100u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398B38u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x00398B38u) [[unlikely]] return; }
L_00398B38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398B40u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x00398B40u) [[unlikely]] return; }
L_00398B40:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00398B60:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00398D1C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 28528u);
    set32(c.r[2], c.r[2].w[0] - 28440u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00398BC4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00398BC4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00398BC4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00398BC4u) [[unlikely]] return; }
L_00398BC4:
    st32((c.r[18].w[0] + 44u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 96u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00398BEC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00398BEC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00398BECu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00398BECu) [[unlikely]] return; }
L_00398BEC:
    st32((c.r[18].w[0] + 96u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 88u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00398C14; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00398C14; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00398C14u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00398C14u) [[unlikely]] return; }
L_00398C14:
    st32((c.r[18].w[0] + 88u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 92u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00398C3C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00398C3C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00398C3Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00398C3Cu) [[unlikely]] return; }
L_00398C3C:
    st32((c.r[18].w[0] + 92u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 164u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00398C64; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00398C64; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00398C64u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00398C64u) [[unlikely]] return; }
L_00398C64:
    st32((c.r[18].w[0] + 164u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 168u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00398C8C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00398C8C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00398C8Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00398C8Cu) [[unlikely]] return; }
L_00398C8C:
    st32((c.r[18].w[0] + 168u), 0u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00398C94:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[19], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 48u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[20], c.r[19].w[0] + 48u);  if (t) { goto L_00398CC0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00398CC0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00398CC0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00398CC0u) [[unlikely]] return; }
L_00398CC0:
    st32((c.r[20].w[0]), 0u);
    set32(c.r[4], ld32((c.r[19].w[0] + 116u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[20], c.r[19].w[0] + 116u);  if (t) { goto L_00398CE8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00398CE8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00398CE8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00398CE8u) [[unlikely]] return; }
L_00398CE8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[20].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00398C94u | kUnwind; return; } goto L_00398C94; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398D04u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 15u, depth + 1u); else { c.pc = 0x00130130u; return; } if (c.pc != 0x00398D04u) [[unlikely]] return; }
L_00398D04:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00398D20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398D1Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00398D1Cu) [[unlikely]] return; }
L_00398D1C:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00398D20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00398D40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398D5Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000C(c, 25u, depth + 1u); else { c.pc = 0x00130270u; return; } if (c.pc != 0x00398D5Cu) [[unlikely]] return; }
L_00398D5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398D64u); set32(c.r[4], ld32((c.r[17].w[0] + 44u)));  if (depth < kMaxDepth) unit_000D(c, 68u, depth + 1u); else { c.pc = 0x001348C0u; return; } if (c.pc != 0x00398D64u) [[unlikely]] return; }
L_00398D64:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[3].w[0] + 624u);  if (t) { goto L_00398DC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398D80u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00398D80u) [[unlikely]] return; }
L_00398D80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00398D94; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398D94u); set32(c.r[6], 0u + 11u);  if (depth < kMaxDepth) unit_002A(c, 287u, depth + 1u); else { c.pc = 0x001AB200u; return; } if (c.pc != 0x00398D94u) [[unlikely]] return; }
L_00398D94:
    st32((c.r[17].w[0] + 96u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398DA4u); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x00398DA4u) [[unlikely]] return; }
L_00398DA4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398DB4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x00398DB4u) [[unlikely]] return; }
L_00398DB4:
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398DC4u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x00398DC4u) [[unlikely]] return; }
L_00398DC4:
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00398DD8u); set32(c.r[5], 0u + 46u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00398DD8u) [[unlikely]] return; }
L_00398DD8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00260000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    c.r[3].d[0] = c.r[3].d[0] | 22647ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[2].w[0] + 104u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 88u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 160u);  if (t) { goto L_00398E4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398E08u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00398E08u) [[unlikely]] return; }
L_00398E08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00398E1C; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398E1Cu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_002A(c, 287u, depth + 1u); else { c.pc = 0x001AB200u; return; } if (c.pc != 0x00398E1Cu) [[unlikely]] return; }
L_00398E1C:
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398E2Cu); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x00398E2Cu) [[unlikely]] return; }
L_00398E2C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398E3Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x00398E3Cu) [[unlikely]] return; }
L_00398E3C:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398E4Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x00398E4Cu) [[unlikely]] return; }
L_00398E4C:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00398E60u); set32(c.r[5], 0u + 74u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00398E60u) [[unlikely]] return; }
L_00398E60:
    set32(c.r[2], ld32((c.r[17].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 160u);  if (t) { goto L_00398EB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398E74u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00398E74u) [[unlikely]] return; }
L_00398E74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00398E88; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398E88u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_002A(c, 287u, depth + 1u); else { c.pc = 0x001AB200u; return; } if (c.pc != 0x00398E88u) [[unlikely]] return; }
L_00398E88:
    st32((c.r[17].w[0] + 92u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398E98u); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x00398E98u) [[unlikely]] return; }
L_00398E98:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398EA8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x00398EA8u) [[unlikely]] return; }
L_00398EA8:
    set32(c.r[4], ld32((c.r[17].w[0] + 92u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398EB8u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x00398EB8u) [[unlikely]] return; }
L_00398EB8:
    set32(c.r[4], ld32((c.r[17].w[0] + 92u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00398ECCu); set32(c.r[5], 0u + 78u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00398ECCu) [[unlikely]] return; }
L_00398ECC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398ED4u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00398ED4u) [[unlikely]] return; }
L_00398ED4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00398EE8; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398EE8u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0025(c, 304u, depth + 1u); else { c.pc = 0x00196C90u; return; } if (c.pc != 0x00398EE8u) [[unlikely]] return; }
L_00398EE8:
    st32((c.r[17].w[0] + 164u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398EF8u); set32(c.r[5], 0u + 10011u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x00398EF8u) [[unlikely]] return; }
L_00398EF8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398F08u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x00398F08u) [[unlikely]] return; }
L_00398F08:
    set32(c.r[4], ld32((c.r[17].w[0] + 164u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398F18u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x00398F18u) [[unlikely]] return; }
L_00398F18:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.f[1] = ld32((c.r[1].w[0] + 3576u));
    set32(c.r[7], ld32((c.r[17].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42B40000u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[7].w[0] + 112u), c.f[1]);
    c.f[1] = ld32((c.r[1].w[0] + 3576u));
    st32((c.r[7].w[0] + 116u), c.f[1]);
    st32((c.r[7].w[0] + 120u), c.r[6].w[0]);
    st32((c.r[7].w[0] + 124u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 164u)));
    st32((c.r[2].w[0] + 96u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 100u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 104u), c.f[0]);
    st32((c.r[2].w[0] + 108u), c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 26;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00398F80u); set32(c.r[5], 0u + 6u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00398F80u) [[unlikely]] return; }
L_00398F80:
    set32(c.r[2], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[4], 0u + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398F90u); st8((c.r[2].w[0] + 16u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00398F90u) [[unlikely]] return; }
L_00398F90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00398FA4; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398FA4u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0025(c, 304u, depth + 1u); else { c.pc = 0x00196C90u; return; } if (c.pc != 0x00398FA4u) [[unlikely]] return; }
L_00398FA4:
    st32((c.r[17].w[0] + 168u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398FB4u); set32(c.r[5], 0u + 10011u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x00398FB4u) [[unlikely]] return; }
L_00398FB4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398FC4u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x00398FC4u) [[unlikely]] return; }
L_00398FC4:
    set32(c.r[4], ld32((c.r[17].w[0] + 168u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398FD4u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x00398FD4u) [[unlikely]] return; }
L_00398FD4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.f[2] = ld32((c.r[1].w[0] + 3576u));
    set32(c.r[7], ld32((c.r[17].w[0] + 168u)));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[3], 0u + 403u);
    c.f[0] = c.r[2].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[7].w[0] + 112u), c.f[2]);
    c.f[2] = ld32((c.r[1].w[0] + 3576u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[7].w[0] + 116u), c.f[2]);
    st32((c.r[7].w[0] + 120u), c.r[6].w[0]);
    st32((c.r[7].w[0] + 124u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 168u)));
    st32((c.r[2].w[0] + 96u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 100u), c.f[1]);
    st32((c.r[2].w[0] + 104u), c.f[0]);
    st32((c.r[2].w[0] + 108u), c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 168u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 28;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00399044u); set32(c.r[5], 0u + 7u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00399044u) [[unlikely]] return; }
L_00399044:
    set32(c.r[2], ld32((c.r[17].w[0] + 168u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st8((c.r[2].w[0] + 16u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039905Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002A(c, 147u, depth + 1u); else { c.pc = 0x001A96C0u; return; } if (c.pc != 0x0039905Cu) [[unlikely]] return; }
L_0039905C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00399080:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399094u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 26u, depth + 1u); else { c.pc = 0x00130280u; return; } if (c.pc != 0x00399094u) [[unlikely]] return; }
L_00399094:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039909Cu); set32(c.r[4], ld32((c.r[16].w[0] + 44u)));  if (depth < kMaxDepth) unit_000D(c, 69u, depth + 1u); else { c.pc = 0x001348D0u; return; } if (c.pc != 0x0039909Cu) [[unlikely]] return; }
L_0039909C:
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003990B0u); set32(c.r[5], 0u + 45u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003990B0u) [[unlikely]] return; }
L_003990B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00260000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.r[3].d[0] = c.r[3].d[0] | 22647ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[2].w[0] + 104u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003990E0u); set32(c.r[5], 0u + 75u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003990E0u) [[unlikely]] return; }
L_003990E0:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0039910C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00399104u); set32(c.r[5], 0u + 82u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00399104u) [[unlikely]] return; }
L_00399104:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 164u)));  if (t) { goto L_00399124; } }
L_0039910C:
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00399120u); set32(c.r[5], 0u + 81u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00399120u) [[unlikely]] return; }
L_00399120:
    set32(c.r[2], ld32((c.r[16].w[0] + 164u)));
    c.budget -= 1;
L_00399124:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[2].w[0] + 16u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[16].w[0] + 168u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399138u); st8((c.r[2].w[0] + 16u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00A6(c, 129u, depth + 1u); else { c.pc = 0x00399220u; return; } if (c.pc != 0x00399138u) [[unlikely]] return; }
L_00399138:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00399150:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399164u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 27u, depth + 1u); else { c.pc = 0x00130290u; return; } if (c.pc != 0x00399164u) [[unlikely]] return; }
L_00399164:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039916Cu); set32(c.r[4], ld32((c.r[16].w[0] + 44u)));  if (depth < kMaxDepth) unit_000D(c, 69u, depth + 1u); else { c.pc = 0x001348D0u; return; } if (c.pc != 0x0039916Cu) [[unlikely]] return; }
L_0039916C:
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00399180u); set32(c.r[5], 0u + 45u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00399180u) [[unlikely]] return; }
L_00399180:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00260000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.r[3].d[0] = c.r[3].d[0] | 22647ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[2].w[0] + 104u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003991B0u); set32(c.r[5], 0u + 75u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003991B0u) [[unlikely]] return; }
L_003991B0:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003991DC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003991D4u); set32(c.r[5], 0u + 82u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003991D4u) [[unlikely]] return; }
L_003991D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 164u)));  if (t) { goto L_003991F4; } }
L_003991DC:
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003991F0u); set32(c.r[5], 0u + 81u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003991F0u) [[unlikely]] return; }
L_003991F0:
    set32(c.r[2], ld32((c.r[16].w[0] + 164u)));
    c.budget -= 1;
L_003991F4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[2].w[0] + 16u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[16].w[0] + 168u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399208u); st8((c.r[2].w[0] + 16u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00A6(c, 129u, depth + 1u); else { c.pc = 0x00399220u; return; } if (c.pc != 0x00399208u) [[unlikely]] return; }
L_00399208:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00399220:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[7], c.r[29].w[0] + 80u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[3].w[0] + 5856u);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[4], c.r[4].w[0] + 5824u);
    c.r[16].d[0] = 0ull + 0ull;
    ld128((c.r[4].w[0]) & ~15u, c.r[6]);
    c.r[4].d[0] = ld64((c.r[4].w[0] + 16u));
    st128((c.r[7].w[0]) & ~15u, c.r[6]);
    st64((c.r[7].w[0] + 16u), c.r[4].d[0]);
    ld128((c.r[3].w[0]) & ~15u, c.r[4]);
    c.r[3].d[0] = ld64((c.r[3].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[4]);
    st64((c.r[5].w[0] + 16u), c.r[3].d[0]);
    set32(c.r[3], c.r[16].w[0] << 2);
    c.budget -= 21;
L_00399274:
    set32(c.r[4], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;  if (t) { goto L_003992AC; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003992A0; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 116u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399298u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x00399298u) [[unlikely]] return; }
L_00399298:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_003992B0; } }
L_003992A0:
    set32(c.r[4], ld32((c.r[4].w[0] + 116u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003992ACu); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x003992ACu) [[unlikely]] return; }
L_003992AC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_003992B0:
    c.r[3].d[0] = c.r[16].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00399274u | kUnwind; return; } goto L_00399274; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003992D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x6D6E0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003992FCu); c.r[5].d[0] = c.r[2].d[0] | 21335ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x003992FCu) [[unlikely]] return; }
L_003992FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00399308; } }
    set32(c.r[17], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_00399308:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399310u);  if (depth < kMaxDepth) unit_002A(c, 135u, depth + 1u); else { c.pc = 0x001A9560u; return; } if (c.pc != 0x00399310u) [[unlikely]] return; }
L_00399310:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0039945C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399320u);  if (depth < kMaxDepth) unit_004F(c, 127u, depth + 1u); else { c.pc = 0x0023DDB0u; return; } if (c.pc != 0x00399320u) [[unlikely]] return; }
L_00399320:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0039945C; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0039945C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399338u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0053(c, 82u, depth + 1u); else { c.pc = 0x0024C840u; return; } if (c.pc != 0x00399338u) [[unlikely]] return; }
L_00399338:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0039945C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399348u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0053(c, 82u, depth + 1u); else { c.pc = 0x0024C840u; return; } if (c.pc != 0x00399348u) [[unlikely]] return; }
L_00399348:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0039945C; } }
L_00399350:
    set32(c.r[3], ld32((c.r[18].w[0] + 172u)));
    set32(c.r[2], 0u + 63u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 62u);  if (t) { goto L_003993F4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003993B8; } }
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0039937C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_0039942C; } }
L_0039937C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399384u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00399384u) [[unlikely]] return; }
L_00399384:
    set32(c.r[3], c.r[16].w[0] << 1);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[7].d[0] = ld16((c.r[1].w[0] + 20374u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003993B0u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 87u, depth + 1u); else { c.pc = 0x0024C8E0u; return; } if (c.pc != 0x003993B0u) [[unlikely]] return; }
L_003993B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00399428; } }
L_003993B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003993C0u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x003993C0u) [[unlikely]] return; }
L_003993C0:
    set32(c.r[3], c.r[16].w[0] << 1);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[7].d[0] = ld16((c.r[1].w[0] + 20854u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003993ECu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 87u, depth + 1u); else { c.pc = 0x0024C8E0u; return; } if (c.pc != 0x003993ECu) [[unlikely]] return; }
L_003993EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00399428; } }
L_003993F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003993FCu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x003993FCu) [[unlikely]] return; }
L_003993FC:
    set32(c.r[3], c.r[16].w[0] << 1);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[7].d[0] = ld16((c.r[1].w[0] + 21334u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399428u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 87u, depth + 1u); else { c.pc = 0x0024C8E0u; return; } if (c.pc != 0x00399428u) [[unlikely]] return; }
L_00399428:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0039942C:
    c.r[2].d[0] = c.r[16].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00399350u | kUnwind; return; } goto L_00399350; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399440u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0053(c, 90u, depth + 1u); else { c.pc = 0x0024C940u; return; } if (c.pc != 0x00399440u) [[unlikely]] return; }
L_00399440:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039944Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 149u, depth + 1u); else { c.pc = 0x00399480u; return; } if (c.pc != 0x0039944Cu) [[unlikely]] return; }
L_0039944C:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039945Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039945Cu) [[unlikely]] return; }
L_0039945C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00399480:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
L_003994B4:
    set32(c.r[4], ld32((c.r[21].w[0] + 160u)));
    set32(c.r[2], 0u + 63u);
    set32(c.r[3], ld32((c.r[21].w[0] + 172u)));
    c.r[20].d[0] = c.r[19].d[0] ^ c.r[4].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[20].d[0] = c.r[20].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_00399674; } }
    set32(c.r[2], 0u + 62u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[19].w[0] << 1);  if (t) { goto L_003995B0; } }
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[19].w[0] << 1);  if (t) { goto L_003994EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (t) { goto L_00399754; } }
L_003994EC:
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003994F8u); set32(c.r[17], c.r[2].w[0] << 4);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x003994F8u) [[unlikely]] return; }
L_003994F8:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20376u)));
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399518u); set32(c.r[5], c.r[5].w[0] + 3488u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x00399518u) [[unlikely]] return; }
L_00399518:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399520u); set32(c.r[4], 0u + 112u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00399520u) [[unlikely]] return; }
L_00399520:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003995A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399534u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00399534u) [[unlikely]] return; }
L_00399534:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399548u); c.r[16].d[0] = ld16((c.r[1].w[0] + 20374u));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00399548u) [[unlikely]] return; }
L_00399548:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399550u); set32(c.r[22], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00399550u) [[unlikely]] return; }
L_00399550:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[1].d[0] = c.r[1].d[0] | 20330ull;
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[7], c.r[22].w[0] + c.r[1].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[1].d[0] = c.r[1].d[0] | 20352ull;
    c.r[10].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[9], c.r[2].w[0] + c.r[1].w[0]);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] + 1904u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[13] = ld32((c.r[2].w[0]));
    c.f[12] = 0u;
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039959Cu); set32(c.r[8], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_00A6(c, 217u, depth + 1u); else { c.pc = 0x00399DF0u; return; } if (c.pc != 0x0039959Cu) [[unlikely]] return; }
L_0039959C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003995A0:
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 48u), c.r[18].w[0]);  if (t) { goto L_00399750; } }
L_003995B0:
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003995BCu); set32(c.r[17], c.r[2].w[0] << 4);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x003995BCu) [[unlikely]] return; }
L_003995BC:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20856u)));
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003995DCu); set32(c.r[5], c.r[5].w[0] + 3488u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x003995DCu) [[unlikely]] return; }
L_003995DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003995E4u); set32(c.r[4], 0u + 112u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003995E4u) [[unlikely]] return; }
L_003995E4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00399664; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003995F8u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x003995F8u) [[unlikely]] return; }
L_003995F8:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039960Cu); c.r[16].d[0] = ld16((c.r[1].w[0] + 20854u));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0039960Cu) [[unlikely]] return; }
L_0039960C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399614u); set32(c.r[22], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00399614u) [[unlikely]] return; }
L_00399614:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[1].d[0] = c.r[1].d[0] | 20810ull;
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[7], c.r[22].w[0] + c.r[1].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[1].d[0] = c.r[1].d[0] | 20832ull;
    c.r[10].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[9], c.r[2].w[0] + c.r[1].w[0]);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] + 1904u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[13] = ld32((c.r[2].w[0]));
    c.f[12] = 0u;
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399660u); set32(c.r[8], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_00A6(c, 217u, depth + 1u); else { c.pc = 0x00399DF0u; return; } if (c.pc != 0x00399660u) [[unlikely]] return; }
L_00399660:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00399664:
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 48u), c.r[18].w[0]);  if (t) { goto L_00399750; } }
L_00399674:
    set32(c.r[2], c.r[19].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399684u); set32(c.r[17], c.r[2].w[0] << 4);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00399684u) [[unlikely]] return; }
L_00399684:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399698u); c.r[16].d[0] = ld8((c.r[1].w[0] + 21336u));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00399698u) [[unlikely]] return; }
L_00399698:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[7].d[0] = ld8((c.r[1].w[0] + 21337u));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003996BCu); set32(c.r[5], c.r[5].w[0] + 3496u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x003996BCu) [[unlikely]] return; }
L_003996BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003996C4u); set32(c.r[4], 0u + 112u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003996C4u) [[unlikely]] return; }
L_003996C4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00399744; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003996D8u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x003996D8u) [[unlikely]] return; }
L_003996D8:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003996ECu); c.r[16].d[0] = ld16((c.r[1].w[0] + 21334u));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x003996ECu) [[unlikely]] return; }
L_003996EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003996F4u); set32(c.r[22], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x003996F4u) [[unlikely]] return; }
L_003996F4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[1].d[0] = c.r[1].d[0] | 21290ull;
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[7], c.r[22].w[0] + c.r[1].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[1].d[0] = c.r[1].d[0] | 21312ull;
    c.r[10].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[9], c.r[2].w[0] + c.r[1].w[0]);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] + 1904u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[13] = ld32((c.r[2].w[0]));
    c.f[12] = 0u;
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399740u); set32(c.r[8], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_00A6(c, 217u, depth + 1u); else { c.pc = 0x00399DF0u; return; } if (c.pc != 0x00399740u) [[unlikely]] return; }
L_00399740:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00399744:
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 48u), c.r[18].w[0]);
    c.budget -= 3;
L_00399750:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 1;
L_00399754:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399760u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 93u, depth + 1u); else { c.pc = 0x0024C9A0u; return; } if (c.pc != 0x00399760u) [[unlikely]] return; }
L_00399760:
    set32(c.r[3], c.r[19].w[0] << 2);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[21].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399774u); set32(c.r[4], ld32((c.r[2].w[0] + 48u)));  if (depth < kMaxDepth) unit_00A6(c, 226u, depth + 1u); else { c.pc = 0x00399F60u; return; } if (c.pc != 0x00399774u) [[unlikely]] return; }
L_00399774:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003994B4u | kUnwind; return; } goto L_003994B4; } }
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_003997B0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] + 5888u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[7], c.r[29].w[0] + 160u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], 0u + 2u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
L_003997DC:
    ld128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st128((c.r[7].w[0]) & ~15u, c.r[3]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[7], c.r[7].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003997DCu | kUnwind; return; } goto L_003997DC; } }
    c.r[3].d[0] = ld64((c.r[5].w[0]));
    set32(c.r[6], c.r[29].w[0] + 112u);
    set32(c.r[4], 0u + 2u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[7].w[0]), c.r[3].d[0]);
    set32(c.r[5], c.r[5].w[0] + 5936u);
    c.budget -= 6;
L_00399810:
    ld128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st128((c.r[6].w[0]) & ~15u, c.r[3]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[6], c.r[6].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00399810u | kUnwind; return; } goto L_00399810; } }
    c.r[4].d[0] = ld64((c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[3].w[0] + 5984u);
    set32(c.r[18], 0u + 5u);
    st64((c.r[6].w[0]), c.r[4].d[0]);
    set32(c.r[5], c.r[29].w[0] + 80u);
    ld128((c.r[3].w[0]) & ~15u, c.r[4]);
    c.r[3].d[0] = ld64((c.r[3].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[4]);
    st64((c.r[5].w[0] + 16u), c.r[3].d[0]);
    set32(c.r[16], c.r[18].w[0] << 2);
    c.budget -= 11;
L_00399858:
    set32(c.r[5], c.r[19].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 48u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[17], c.r[5].w[0] + 48u);  if (t) { goto L_003998BC; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 92u)));
    set32(c.r[4], c.r[16].w[0] + c.r[29].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 112u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 128u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00399898; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 116u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039988Cu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x0039988Cu) [[unlikely]] return; }
L_0039988C:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[4], 0u + 2u);
    st32((c.r[3].w[0] + 12u), c.r[4].w[0]);
    c.budget -= 3;
L_00399898:
    set32(c.r[4], ld32((c.r[19].w[0] + 92u)));
    set32(c.r[3], c.r[16].w[0] + c.r[29].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 160u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 128u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003998BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003998BCu); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_00A6(c, 261u, depth + 1u); else { c.pc = 0x0039A660u; return; } if (c.pc != 0x003998BCu) [[unlikely]] return; }
L_003998BC:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[18].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00399858u | kUnwind; return; } goto L_00399858; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 92u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 137u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0039992C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003998ECu); set32(c.r[5], 0u + 79u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003998ECu) [[unlikely]] return; }
L_003998EC:
    set32(c.r[4], 0u + 2u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[19].w[0] + 40u), c.r[4].w[0]);
    c.budget -= 3;
L_003998F8:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] + 48u)));
    c.r[2].d[0] = c.r[5].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 12u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003998F8u | kUnwind; return; } goto L_003998F8; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00399924u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00399924u) [[unlikely]] return; }
L_00399924:
    set32(c.r[3], ld32((c.r[19].w[0] + 24u)));
    st32((c.r[3].w[0] + 36u), 0u);
    c.budget -= 2;
L_0039992C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_00399950:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399964u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 210u, depth + 1u); else { c.pc = 0x00399CF0u; return; } if (c.pc != 0x00399964u) [[unlikely]] return; }
L_00399964:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0039997C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039997Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039997Cu) [[unlikely]] return; }
L_0039997C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00399990:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003999A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 210u, depth + 1u); else { c.pc = 0x00399CF0u; return; } if (c.pc != 0x003999A4u) [[unlikely]] return; }
L_003999A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003999BC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003999BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003999BCu) [[unlikely]] return; }
L_003999BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003999D0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] + 6016u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[6], c.r[29].w[0] + 80u);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], 0u + 2u);
    c.budget -= 9;
L_003999F4:
    ld128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st128((c.r[6].w[0]) & ~15u, c.r[3]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[6], c.r[6].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003999F4u | kUnwind; return; } goto L_003999F4; } }
    c.r[4].d[0] = ld64((c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[3].w[0] + 6064u);
    st64((c.r[6].w[0]), c.r[4].d[0]);
    set32(c.r[5], c.r[29].w[0] + 48u);
    ld128((c.r[3].w[0]) & ~15u, c.r[4]);
    c.r[3].d[0] = ld64((c.r[3].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[4]);
    st64((c.r[5].w[0] + 16u), c.r[3].d[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 92u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 137u));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00399B2C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00399AFC; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.r[1].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 2;
L_00399A5C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;  if (t) { goto L_00399AA0; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 156u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00399A9C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 92u)));
    set32(c.r[5], c.r[16].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[29].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 128u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00399A9C; } }
    set32(c.r[2], c.r[17].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 116u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399A9Cu); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x00399A9Cu) [[unlikely]] return; }
L_00399A9C:
    c.r[1].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 1;
L_00399AA0:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00399AC0; } }
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399AB8u); set32(c.r[4], ld32((c.r[2].w[0] + 48u)));  if (depth < kMaxDepth) unit_00A6(c, 262u, depth + 1u); else { c.pc = 0x0039A6B0u; return; } if (c.pc != 0x00399AB8u) [[unlikely]] return; }
L_00399AB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_00399AE8; } }
L_00399AC0:
    set32(c.r[3], ld32((c.r[17].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 128u)));
    c.r[3].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00399AE4; } }
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399AE4u); set32(c.r[4], ld32((c.r[2].w[0] + 48u)));  if (depth < kMaxDepth) unit_00A6(c, 263u, depth + 1u); else { c.pc = 0x0039A700u; return; } if (c.pc != 0x00399AE4u) [[unlikely]] return; }
L_00399AE4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00399AE8:
    c.r[3].d[0] = c.r[16].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00399A5Cu | kUnwind; return; } goto L_00399A5C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00399BAC; } }
L_00399AFC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00399BA8; } }
L_00399B04:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399B14u); set32(c.r[4], ld32((c.r[2].w[0] + 48u)));  if (depth < kMaxDepth) unit_00A6(c, 264u, depth + 1u); else { c.pc = 0x0039A750u; return; } if (c.pc != 0x00399B14u) [[unlikely]] return; }
L_00399B14:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00399B04u | kUnwind; return; } goto L_00399B04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00399BA8; } }
L_00399B2C:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00399BA8; } }
    st32((c.r[17].w[0] + 40u), 0u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00399B48:
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] + 48u)));
    c.r[2].d[0] = c.r[4].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 12u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00399B48u | kUnwind; return; } goto L_00399B48; } }
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], 0u + 2u);
    st8((c.r[17].w[0] + 156u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399B7Cu); st32((c.r[2].w[0] + 36u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x00399B7Cu) [[unlikely]] return; }
L_00399B7C:
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00399B9C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 16u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00399BA8; } }
L_00399B9C:
    set32(c.r[3], ld32((c.r[17].w[0] + 168u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 16u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
L_00399BA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00399BAC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00399BC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399BD4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 319u, depth + 1u); else { c.pc = 0x0012E600u; return; } if (c.pc != 0x00399BD4u) [[unlikely]] return; }
L_00399BD4:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[4], 0u + 1u);
    st32((c.r[3].w[0] + 36u), c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00399BF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399C0Cu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x00399C0Cu) [[unlikely]] return; }
L_00399C0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00399C28; } }
L_00399C14:
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_00399C28:
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00399C14u | kUnwind; return; } goto L_00399C14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399C40u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00399C40u) [[unlikely]] return; }
L_00399C40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00399C70; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00399C54; } }
    set32(c.r[7], c.r[7].w[0] + 20u);
    c.budget -= 1;
L_00399C54:
    set32(c.r[8], ld32((c.r[16].w[0] + 28u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[9], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399C70u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 371u, depth + 1u); else { c.pc = 0x0012EBA0u; return; } if (c.pc != 0x00399C70u) [[unlikely]] return; }
L_00399C70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00399C80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399C94u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 304u, depth + 1u); else { c.pc = 0x0012E500u; return; } if (c.pc != 0x00399C94u) [[unlikely]] return; }
L_00399C94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00399CC8; } }
L_00399C9C:
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00399CD4; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 116u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[4].w[0] + 104u), c.r[3].w[0]);
    c.budget -= 7;
L_00399CC8:
    c.r[3].d[0] = c.r[5].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00399C9Cu | kUnwind; return; } goto L_00399C9C; } }
L_00399CD4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00399CF0:
    set32(c.r[3], ld32((c.r[4].w[0] + 88u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 137u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00399D04; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00399D04:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00399D10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[5].w[0] + 24u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399D38u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x00399D38u) [[unlikely]] return; }
L_00399D38:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00399D84; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 92u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00399D54u); set32(c.r[5], 0u + 80u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00399D54u) [[unlikely]] return; }
L_00399D54:
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 40u), c.r[5].w[0]);
    c.budget -= 3;
L_00399D60:
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[4], ld32((c.r[3].w[0] + 48u)));
    c.r[3].d[0] = c.r[6].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 12u), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00399D60u | kUnwind; return; } goto L_00399D60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), 0u);  if (t) { goto L_00399DC4; } }
L_00399D84:
    set32(c.r[4], ld32((c.r[17].w[0] + 92u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00399D98u); set32(c.r[5], 0u + 79u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00399D98u) [[unlikely]] return; }
L_00399D98:
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 40u), c.r[5].w[0]);
    c.budget -= 3;
L_00399DA4:
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[4], ld32((c.r[3].w[0] + 48u)));
    c.r[3].d[0] = c.r[6].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 12u), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00399DA4u | kUnwind; return; } goto L_00399DA4; } }
    st32((c.r[16].w[0] + 36u), 0u);
    c.budget -= 1;
L_00399DC4:
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    st8((c.r[3].w[0] + 16u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[17].w[0] + 168u)));
    st8((c.r[3].w[0] + 16u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00399DF0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], 0u + 4u);
    c.f[21] = c.f[12];
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399E48u); c.f[20] = c.f[13];  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x00399E48u) [[unlikely]] return; }
L_00399E48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 28544u);
    set32(c.r[4], c.r[18].w[0] + 36u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    st32((c.r[18].w[0] + 12u), 0u);
    st32((c.r[18].w[0] + 16u), c.f[21]);
    st32((c.r[18].w[0] + 20u), c.f[20]);
    st32((c.r[18].w[0] + 24u), c.r[17].w[0]);
    st32((c.r[18].w[0] + 28u), c.r[16].w[0]);
    st32((c.r[18].w[0] + 32u), 0u);
    st32((c.r[18].w[0] + 104u), 0u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399E80u); st8((c.r[18].w[0] + 108u), static_cast<std::uint8_t>(c.r[19].w[0]));  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x00399E80u) [[unlikely]] return; }
L_00399E80:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399E8Cu); set32(c.r[4], c.r[18].w[0] + 58u);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x00399E8Cu) [[unlikely]] return; }
L_00399E8C:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399E98u); set32(c.r[4], c.r[18].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x00399E98u) [[unlikely]] return; }
L_00399E98:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00399ED0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00399F44; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 28544u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00399F1C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00399F1C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00399F1Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00399F1Cu) [[unlikely]] return; }
L_00399F1C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399F2Cu); st32((c.r[17].w[0] + 32u), 0u);  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x00399F2Cu) [[unlikely]] return; }
L_00399F2C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00399F48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399F44u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00399F44u) [[unlikely]] return; }
L_00399F44:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00399F48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00399F60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399F80u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00399F80u) [[unlikely]] return; }
L_00399F80:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00399F98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399F94u);  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x00399F94u) [[unlikely]] return; }
L_00399F94:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00399F98:
    st32((c.r[17].w[0] + 32u), c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00399FB0:
    set32(c.r[29], c.r[29].w[0] - 256u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00150000u);
    c.r[4].d[0] = c.r[4].d[0] | 17999ull;
    c.f[0] = c.r[4].w[0];
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0039A040; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0039A004; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.f[0] = c.r[3].w[0];
    c.f[20] = fp::cvt_s_w(c.f[0]);
    c.budget -= 5;
L_0039A004:
    c.f[1] = ld32((c.r[18].w[0] + 20u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0039A63C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0039A040; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0039A640; } }
L_0039A040:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[4], c.r[4].w[0] + 6096u);
    set32(c.r[6], c.r[29].w[0] + 208u);
    set32(c.r[3], 0u + 2u);
    set32(c.r[17], ld32((c.r[2].w[0] + 332u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 440u)));
    c.budget -= 8;
L_0039A060:
    ld128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[6].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], c.r[4].w[0] + 16u);
    set32(c.r[6], c.r[6].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039A060u | kUnwind; return; } goto L_0039A060; } }
    c.r[2].d[0] = ld64((c.r[4].w[0]));
    set32(c.r[5], c.r[29].w[0] + 160u);
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[6].w[0]), c.r[2].d[0]);
    set32(c.r[4], c.r[4].w[0] + 6144u);
    c.budget -= 6;
L_0039A094:
    ld128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], c.r[4].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039A094u | kUnwind; return; } goto L_0039A094; } }
    c.r[2].d[0] = ld64((c.r[4].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A0C0u); st64((c.r[5].w[0]), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0039A0C0u) [[unlikely]] return; }
L_0039A0C0:
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[3], 0u + 16u);
    st32((c.r[17].w[0] + 48u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[17].w[0] + 52u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (t) { goto L_0039A100; } }
L_0039A0E4:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039A0E4u | kUnwind; return; } goto L_0039A0E4; } }
L_0039A100:
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.f[0] = ld32((c.r[18].w[0] + 16u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.f[1] = ld32((c.r[2].w[0] + 160u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 144u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 20u));
    st32((c.r[29].w[0] + 148u), c.f[0]);
    st32((c.r[29].w[0] + 152u), c.f[20]);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 108u));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0039A15C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A13Cu); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0039A13Cu) [[unlikely]] return; }
L_0039A13C:
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[17].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[17].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (t) { goto L_0039A17C; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0039A15C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A164u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0039A164u) [[unlikely]] return; }
L_0039A164:
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[17].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[17].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 6;
L_0039A17C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A1A4u); set32(c.r[4], ld32((c.r[2].w[0] + 208u)));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x0039A1A4u) [[unlikely]] return; }
L_0039A1A4:
    st32((c.r[17].w[0] + 352u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 356u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    st32((c.r[17].w[0] + 300u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A1D0u); set32(c.r[5], c.r[29].w[0] + 144u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039A1D0u) [[unlikely]] return; }
L_0039A1D0:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A1F0u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039A1F0u) [[unlikely]] return; }
L_0039A1F0:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A210u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039A210u) [[unlikely]] return; }
L_0039A210:
    set32(c.r[3], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 16u);  if (t) { goto L_0039A238; } }
L_0039A21C:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039A21Cu | kUnwind; return; } goto L_0039A21C; } }
L_0039A238:
    c.f[2] = ld32((c.r[18].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43690000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], 0u + 3u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1A00000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[29].w[0] + 128u), c.f[1]);
    c.f[1] = ld32((c.r[18].w[0] + 20u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 132u), c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A270u); st32((c.r[29].w[0] + 136u), c.f[20]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0039A270u) [[unlikely]] return; }
L_0039A270:
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], 0u + 400u);
    st32((c.r[17].w[0] + 48u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[17].w[0] + 52u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[1].w[0] + 3568u));
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] + 3568u));
    st32((c.r[17].w[0] + 20u), c.f[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A2B0u); st32((c.r[17].w[0] + 24u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x0039A2B0u) [[unlikely]] return; }
L_0039A2B0:
    st32((c.r[17].w[0] + 352u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 356u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A2D4u); set32(c.r[5], c.r[29].w[0] + 128u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039A2D4u) [[unlikely]] return; }
L_0039A2D4:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A2F4u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039A2F4u) [[unlikely]] return; }
L_0039A2F4:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A314u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039A314u) [[unlikely]] return; }
L_0039A314:
    set32(c.r[3], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 16u);  if (t) { goto L_0039A33C; } }
L_0039A320:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039A320u | kUnwind; return; } goto L_0039A320; } }
L_0039A33C:
    c.f[2] = ld32((c.r[18].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43BF0000u);
    c.f[1] = c.r[2].w[0];
    c.r[4].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1A00000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[29].w[0] + 112u), c.f[1]);
    c.f[1] = ld32((c.r[18].w[0] + 20u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 116u), c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A374u); st32((c.r[29].w[0] + 120u), c.f[20]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0039A374u) [[unlikely]] return; }
L_0039A374:
    set32(c.r[7], ld32((c.r[2].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], c.r[18].w[0] + 80u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 48u), c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[16].w[0] + 52u), c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[1].w[0] + 3560u));
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] + 3560u));
    st32((c.r[16].w[0] + 20u), c.f[0]);
    st32((c.r[16].w[0] + 24u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 352u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 356u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    st32((c.r[17].w[0] + 300u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 26;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A3DCu); set32(c.r[5], c.r[29].w[0] + 112u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039A3DCu) [[unlikely]] return; }
L_0039A3DC:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A3F0u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039A3F0u) [[unlikely]] return; }
L_0039A3F0:
    set32(c.r[3], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 16u);  if (t) { goto L_0039A418; } }
L_0039A3FC:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039A3FCu | kUnwind; return; } goto L_0039A3FC; } }
L_0039A418:
    set32(c.r[2], 0u + 503u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[18].w[0] + 16u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1100000u);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[29].w[0] + 96u), c.f[1]);
    c.f[1] = ld32((c.r[18].w[0] + 20u));
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], c.r[18].w[0] + 36u);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 104u), c.f[20]);
    st32((c.r[29].w[0] + 100u), c.f[0]);
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 356u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 22;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A470u); set32(c.r[5], c.r[29].w[0] + 96u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039A470u) [[unlikely]] return; }
L_0039A470:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A484u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039A484u) [[unlikely]] return; }
L_0039A484:
    set32(c.r[3], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 16u);  if (t) { goto L_0039A4AC; } }
L_0039A490:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039A490u | kUnwind; return; } goto L_0039A490; } }
L_0039A4AC:
    c.f[2] = ld32((c.r[18].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43D40000u);
    c.f[1] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::add(c.f[1], c.f[2]);
    set32(c.r[2], c.r[18].w[0] + 58u);
    st32((c.r[29].w[0] + 80u), c.f[1]);
    c.f[1] = ld32((c.r[18].w[0] + 20u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 88u), c.f[20]);
    st32((c.r[29].w[0] + 84u), c.f[0]);
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 356u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 22;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A504u); set32(c.r[5], c.r[29].w[0] + 80u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039A504u) [[unlikely]] return; }
L_0039A504:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A518u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039A518u) [[unlikely]] return; }
L_0039A518:
    set32(c.r[4], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0039A63C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0039A5A8; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x433B0000u);
    c.f[1] = ld32((c.r[18].w[0] + 16u));
    c.f[0] = c.r[2].w[0];
    c.f[13] = ld32((c.r[18].w[0] + 20u));
    c.f[14] = c.f[20];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A558u); c.f[12] = fp::add(c.f[0], c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039A558u) [[unlikely]] return; }
L_0039A558:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], ld32((c.r[18].w[0] + 32u)));
    c.f[0] = ld32((c.r[1].w[0] + 3552u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[3].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] + 3552u));
    st32((c.r[3].w[0] + 20u), c.f[0]);
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 17;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A59Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039A59Cu) [[unlikely]] return; }
L_0039A59C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039A63C; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0039A5A8:
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A5B8u); set32(c.r[8], 0u + 82u);  if (depth < kMaxDepth) unit_0017(c, 190u, depth + 1u); else { c.pc = 0x0015EE00u; return; } if (c.pc != 0x0039A5B8u) [[unlikely]] return; }
L_0039A5B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[2] = ld32((c.r[1].w[0] + 3544u));
    set32(c.r[5], ld32((c.r[18].w[0] + 32u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x433B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[2].w[0];
    c.f[1] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41600000u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[5].w[0] + 16u), c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[2] = ld32((c.r[1].w[0] + 3536u));
    c.f[14] = c.f[20];
    st32((c.r[5].w[0] + 20u), c.f[2]);
    st32((c.r[5].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 32u)));
    c.f[2] = ld32((c.r[18].w[0] + 20u));
    c.f[4] = ld32((c.r[18].w[0] + 16u));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    c.f[12] = fp::add(c.f[3], c.f[4]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 25;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A61Cu); c.f[13] = fp::sub(c.f[1], c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039A61Cu) [[unlikely]] return; }
L_0039A61C:
    set32(c.r[3], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A63Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039A63Cu) [[unlikely]] return; }
L_0039A63C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0039A640:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_0039A660:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = ld32((c.r[4].w[0] + 20u));
    set32(c.r[3], c.r[3].w[0] + 1952u);
    c.f[0] = ld32((c.r[1].w[0] + 3528u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 20u), c.f[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 24u)));
    c.f[0] = ld32((c.r[4].w[0] + 20u));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 15;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0039A6A0; } }
    st32((c.r[4].w[0] + 20u), c.f[1]);
    c.budget -= 1;
L_0039A6A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0039A6B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = ld32((c.r[4].w[0] + 20u));
    set32(c.r[3], c.r[3].w[0] + 2000u);
    c.f[0] = ld32((c.r[1].w[0] + 3520u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 20u), c.f[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 24u)));
    c.f[0] = ld32((c.r[4].w[0] + 20u));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 15;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0039A6F0; } }
    st32((c.r[4].w[0] + 20u), c.f[1]);
    c.budget -= 1;
L_0039A6F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0039A700:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = ld32((c.r[4].w[0] + 20u));
    set32(c.r[3], c.r[3].w[0] + 2000u);
    c.f[0] = ld32((c.r[1].w[0] + 3528u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 20u), c.f[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 24u)));
    c.f[0] = ld32((c.r[4].w[0] + 20u));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 15;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0039A740; } }
    st32((c.r[4].w[0] + 20u), c.f[1]);
    c.budget -= 1;
L_0039A740:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0039A750:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = ld32((c.r[4].w[0] + 20u));
    set32(c.r[3], c.r[3].w[0] + 1952u);
    c.f[0] = ld32((c.r[1].w[0] + 3528u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 20u), c.f[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 24u)));
    c.f[0] = ld32((c.r[4].w[0] + 20u));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 15;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0039A790; } }
    st32((c.r[4].w[0] + 20u), c.f[1]);
    c.budget -= 1;
L_0039A790:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0039A7A0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A7C0u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x0039A7C0u) [[unlikely]] return; }
L_0039A7C0:
    set32(c.r[3], ld32((c.r[2].w[0] + 600u)));
    set32(c.r[2], 0u + 11u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0039A7D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 255u);  if (t) { goto L_0039AAAC; } }
L_0039A7D8:
    set32(c.r[2], 0u + 60u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 59u);  if (t) { goto L_0039A9A8; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0039A8D4; } }
    set32(c.r[2], 0u + 58u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0039A800; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0039AAAC; } }
L_0039A800:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A808u); set32(c.r[17], c.r[29].w[0] + 158u);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x0039A808u) [[unlikely]] return; }
L_0039A808:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 690u)));
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0039A82C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A824u);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x0039A824u) [[unlikely]] return; }
L_0039A824:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 692u)));
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0039A82C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[2].d[0] = c.r[2].sd[0] < 100ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0039A840; } }
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0039A840:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A848u);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x0039A848u) [[unlikely]] return; }
L_0039A848:
    c.r[4].d[0] = ld16((c.r[2].w[0] + 266u));
    set32(c.r[3], c.r[4].w[0] - 10000u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_0039A874; } }
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_0039A868; } }
    breakpoint(c, 0x0039A864u);
    c.budget -= 1;
L_0039A868:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039A878; } }
L_0039A874:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0039A878:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[3].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_0039A888; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[2].w[0] + 86u);  if (t) { goto L_0039A89C; } }
L_0039A888:
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_0039A898; } }
    breakpoint(c, 0x0039A894u);
    c.budget -= 1;
L_0039A898:
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 1;
L_0039A89C:
    set32(c.r[2], c.r[29].w[0] + 156u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A8B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x0039A8B0u) [[unlikely]] return; }
L_0039A8B0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A8BCu); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x0039A8BCu) [[unlikely]] return; }
L_0039A8BC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A8CCu); set32(c.r[4], c.r[4].w[0] - 19526u);  if (depth < kMaxDepth) unit_00A6(c, 285u, depth + 1u); else { c.pc = 0x0039AAD0u; return; } if (c.pc != 0x0039A8CCu) [[unlikely]] return; }
L_0039A8CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0039AAA8; } }
L_0039A8D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A8DCu); set32(c.r[17], c.r[29].w[0] + 158u);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x0039A8DCu) [[unlikely]] return; }
L_0039A8DC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 690u)));
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0039A900; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A8F8u);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x0039A8F8u) [[unlikely]] return; }
L_0039A8F8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 692u)));
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0039A900:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[2].d[0] = c.r[2].sd[0] < 100ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0039A914; } }
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0039A914:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A91Cu);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x0039A91Cu) [[unlikely]] return; }
L_0039A91C:
    c.r[4].d[0] = ld16((c.r[2].w[0] + 266u));
    set32(c.r[3], c.r[4].w[0] - 10000u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_0039A948; } }
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_0039A93C; } }
    breakpoint(c, 0x0039A938u);
    c.budget -= 1;
L_0039A93C:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039A94C; } }
L_0039A948:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0039A94C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[3].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_0039A95C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[2].w[0] + 86u);  if (t) { goto L_0039A970; } }
L_0039A95C:
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_0039A96C; } }
    breakpoint(c, 0x0039A968u);
    c.budget -= 1;
L_0039A96C:
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 1;
L_0039A970:
    set32(c.r[2], c.r[29].w[0] + 156u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A984u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x0039A984u) [[unlikely]] return; }
L_0039A984:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A990u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x0039A990u) [[unlikely]] return; }
L_0039A990:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A9A0u); set32(c.r[4], c.r[4].w[0] - 19046u);  if (depth < kMaxDepth) unit_00A6(c, 285u, depth + 1u); else { c.pc = 0x0039AAD0u; return; } if (c.pc != 0x0039A9A0u) [[unlikely]] return; }
L_0039A9A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0039AAA8; } }
L_0039A9A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A9B0u);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x0039A9B0u) [[unlikely]] return; }
L_0039A9B0:
    set32(c.r[16], ld32((c.r[2].w[0] + 684u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0039A9D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A9C4u);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x0039A9C4u) [[unlikely]] return; }
L_0039A9C4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 688u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0039A9D8; } }
L_0039A9D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 255u);  if (t) { goto L_0039AAAC; } }
L_0039A9D8:
    set32(c.r[2], 0u + 3600u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[16].w[0], c.r[2].w[0]);  if (t) { goto L_0039A9E8; } }
    breakpoint(c, 0x0039A9E4u);
    c.budget -= 1;
L_0039A9E8:
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], 0u + 60u);
    mmi::div(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[29].w[0] + 110u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0039AA00; } }
    breakpoint(c, 0x0039A9FCu);
    c.budget -= 1;
L_0039AA00:
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], 0u + 60u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039AA20u); st8((c.r[29].w[0] + 111u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x0039AA20u) [[unlikely]] return; }
L_0039AA20:
    c.r[4].d[0] = ld16((c.r[2].w[0] + 266u));
    set32(c.r[3], c.r[4].w[0] - 10000u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_0039AA4C; } }
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_0039AA40; } }
    breakpoint(c, 0x0039AA3Cu);
    c.budget -= 1;
L_0039AA40:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039AA50; } }
L_0039AA4C:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0039AA50:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[3].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_0039AA60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[2].w[0] + 86u);  if (t) { goto L_0039AA74; } }
L_0039AA60:
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_0039AA70; } }
    breakpoint(c, 0x0039AA6Cu);
    c.budget -= 1;
L_0039AA70:
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 1;
L_0039AA74:
    set32(c.r[2], c.r[29].w[0] + 108u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039AA88u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x0039AA88u) [[unlikely]] return; }
L_0039AA88:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039AA94u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x0039AA94u) [[unlikely]] return; }
L_0039AA94:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039AAA4u); set32(c.r[4], c.r[4].w[0] - 18566u);  if (depth < kMaxDepth) unit_00A6(c, 298u, depth + 1u); else { c.pc = 0x0039AD00u; return; } if (c.pc != 0x0039AAA4u) [[unlikely]] return; }
L_0039AAA4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0039AAA8:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0039AAAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0039AAD0:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 176u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], 0u + 12u);
    c.budget -= 9;
L_0039AAF4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 2u)));
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] + 4u);
    st16((c.r[6].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039AAF4u | kUnwind; return; } goto L_0039AAF4; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 222u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0039AC1C; } }
L_0039AB20:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[8], c.r[18].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 46u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[6], c.r[29].w[0] + 128u);  if (t) { goto L_0039AC18; } }
    set32(c.r[5], 0u + 11u);
    c.r[7].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 2;
L_0039AB44:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 1u)));
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[7], c.r[7].w[0] + 2u);
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[6], c.r[6].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039AB44u | kUnwind; return; } goto L_0039AB44; } }
    set32(c.r[3], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[6], c.r[29].w[0] + 150u);
    set32(c.r[7], c.r[3].w[0] + 22u);
    set32(c.r[5], 0u + 11u);
    c.budget -= 4;
L_0039AB74:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 1u)));
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[7], c.r[7].w[0] + 2u);
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[6], c.r[6].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039AB74u | kUnwind; return; } goto L_0039AB74; } }
    set32(c.r[4], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[6], c.r[29].w[0] + 176u);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 44u));
    set32(c.r[5], 0u + 11u);
    st16((c.r[29].w[0] + 172u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 46u)));
    st8((c.r[29].w[0] + 174u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_0039ABB0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[6], c.r[6].w[0] + 2u);
    st8((c.r[8].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[8], c.r[8].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039ABB0u | kUnwind; return; } goto L_0039ABB0; } }
    set32(c.r[3], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[7], c.r[29].w[0] + 198u);
    set32(c.r[6], c.r[3].w[0] + 22u);
    set32(c.r[5], 0u + 11u);
    c.budget -= 4;
L_0039ABE0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 1u)));
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[7], c.r[7].w[0] + 2u);
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[6], c.r[6].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039ABE0u | kUnwind; return; } goto L_0039ABE0; } }
    set32(c.r[3], c.r[2].w[0] + c.r[18].w[0]);
    c.r[2].d[0] = ld16((c.r[29].w[0] + 220u));
    st16((c.r[3].w[0] + 44u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 222u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 46u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0039AC28; } }
L_0039AC18:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0039AC1C:
    c.r[2].d[0] = c.r[17].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039AB20u | kUnwind; return; } goto L_0039AB20; } }
L_0039AC28:
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 9u);  if (t) { goto L_0039AC3C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 255u);  if (t) { goto L_0039ACE4; } }
L_0039AC3C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[16], c.r[17].w[0] + 1u);  if (t) { goto L_0039AC4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0039ACE4; } }
L_0039AC4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].sd[0] < 10ll ? 1ull : 0ull;  if (t) { goto L_0039ACD8; } }
L_0039AC54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[16].d[0]; set32(c.r[2], c.r[16].w[0] << 1);  if (t) { goto L_0039AC94; } }
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[6], 0u + 48u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[19], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039AC7Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0039AC7Cu) [[unlikely]] return; }
L_0039AC7C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039AC8Cu); set32(c.r[6], 0u + 48u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0039AC8Cu) [[unlikely]] return; }
L_0039AC8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_0039ACD4; } }
L_0039AC94:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[6], 0u + 48u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[19], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039ACB0u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0039ACB0u) [[unlikely]] return; }
L_0039ACB0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039ACC0u); set32(c.r[6], 0u + 48u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0039ACC0u) [[unlikely]] return; }
L_0039ACC0:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039ACD0u); set32(c.r[6], 0u + 48u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0039ACD0u) [[unlikely]] return; }
L_0039ACD0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0039ACD4:
    c.r[2].d[0] = c.r[16].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 1;
L_0039ACD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039AC54u | kUnwind; return; } goto L_0039AC54; } }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0039ACE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_0039AD00:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 176u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], 0u + 12u);
    c.budget -= 9;
L_0039AD24:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 2u)));
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] + 4u);
    st16((c.r[6].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039AD24u | kUnwind; return; } goto L_0039AD24; } }
    c.r[3].d[0] = ld8((c.r[29].w[0] + 222u));
    c.r[17].d[0] = 0ull + 0ull;
    c.r[4].d[0] = ld8((c.r[29].w[0] + 223u));
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[4].w[0] + c.r[2].w[0]);  if (t) { goto L_0039AE88; } }
L_0039AD64:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[18].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = ld8((c.r[3].w[0] + 46u));
    c.r[6].d[0] = ld8((c.r[3].w[0] + 47u));
    set32(c.r[4], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0039AE84; } }
    set32(c.r[7], c.r[29].w[0] + 128u);
    set32(c.r[6], 0u + 11u);
    c.r[8].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
L_0039ADA0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 1u)));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[8], c.r[8].w[0] + 2u);
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 8;
    { const bool t = c.r[6].sd[0] > 0; set32(c.r[7], c.r[7].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039ADA0u | kUnwind; return; } goto L_0039ADA0; } }
    set32(c.r[4], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[7], c.r[29].w[0] + 150u);
    set32(c.r[8], c.r[4].w[0] + 22u);
    set32(c.r[6], 0u + 11u);
    c.budget -= 4;
L_0039ADD0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 1u)));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[8], c.r[8].w[0] + 2u);
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 8;
    { const bool t = c.r[6].sd[0] > 0; set32(c.r[7], c.r[7].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039ADD0u | kUnwind; return; } goto L_0039ADD0; } }
    set32(c.r[5], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[7], c.r[29].w[0] + 176u);
    c.r[4].d[0] = ld16((c.r[5].w[0] + 44u));
    set32(c.r[6], 0u + 11u);
    st16((c.r[29].w[0] + 172u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 46u));
    st8((c.r[29].w[0] + 174u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 47u));
    st8((c.r[29].w[0] + 175u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 9;
L_0039AE14:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 1u)));
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[7], c.r[7].w[0] + 2u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 8;
    { const bool t = c.r[6].sd[0] > 0; set32(c.r[3], c.r[3].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039AE14u | kUnwind; return; } goto L_0039AE14; } }
    set32(c.r[3], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[7], c.r[29].w[0] + 198u);
    set32(c.r[6], c.r[3].w[0] + 22u);
    set32(c.r[5], 0u + 11u);
    c.budget -= 4;
L_0039AE44:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 1u)));
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[7], c.r[7].w[0] + 2u);
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[6], c.r[6].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039AE44u | kUnwind; return; } goto L_0039AE44; } }
    set32(c.r[3], c.r[2].w[0] + c.r[18].w[0]);
    c.r[2].d[0] = ld16((c.r[29].w[0] + 220u));
    st16((c.r[3].w[0] + 44u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 222u));
    st8((c.r[3].w[0] + 46u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 223u));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 47u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0039AE94; } }
L_0039AE84:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0039AE88:
    c.r[2].d[0] = c.r[17].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039AD64u | kUnwind; return; } goto L_0039AD64; } }
L_0039AE94:
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 9u);  if (t) { goto L_0039AEA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 255u);  if (t) { goto L_0039AF50; } }
L_0039AEA8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[16], c.r[17].w[0] + 1u);  if (t) { goto L_0039AEB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0039AF50; } }
L_0039AEB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].sd[0] < 10ll ? 1ull : 0ull;  if (t) { goto L_0039AF44; } }
L_0039AEC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[16].d[0]; set32(c.r[2], c.r[16].w[0] << 1);  if (t) { goto L_0039AF00; } }
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[6], 0u + 48u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[19], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039AEE8u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0039AEE8u) [[unlikely]] return; }
L_0039AEE8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039AEF8u); set32(c.r[6], 0u + 48u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0039AEF8u) [[unlikely]] return; }
L_0039AEF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_0039AF40; } }
L_0039AF00:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[6], 0u + 48u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[19], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039AF1Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0039AF1Cu) [[unlikely]] return; }
L_0039AF1C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039AF2Cu); set32(c.r[6], 0u + 48u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0039AF2Cu) [[unlikely]] return; }
L_0039AF2C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039AF3Cu); set32(c.r[6], 0u + 48u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0039AF3Cu) [[unlikely]] return; }
L_0039AF3C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0039AF40:
    c.r[2].d[0] = c.r[16].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 1;
L_0039AF44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039AEC0u | kUnwind; return; } goto L_0039AEC0; } }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0039AF50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_0039AF70:
    set32(c.r[29], c.r[29].w[0] - 176u);
    set32(c.r[5], 0u + 10u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039AF88u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 29u, depth + 1u); else { c.pc = 0x00140690u; return; } if (c.pc != 0x0039AF88u) [[unlikely]] return; }
L_0039AF88:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], 0u + 255u);
    set32(c.r[3], c.r[3].w[0] - 28592u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[5], 0u + 144u);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039AFB4u); st8((c.r[16].w[0] + 56u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x0039AFB4u) [[unlikely]] return; }
L_0039AFB4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[16].w[0] + 28u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039AFC4u); set32(c.r[5], c.r[5].w[0] + 3512u);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x0039AFC4u) [[unlikely]] return; }
L_0039AFC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039AFCCu);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x0039AFCCu) [[unlikely]] return; }
L_0039AFCC:
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], 0u + 60u);
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0039B014; } }
    set32(c.r[2], 0u + 59u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 62u);  if (t) { goto L_0039B00C; } }
    set32(c.r[2], 0u + 58u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 32u);  if (t) { goto L_0039B004; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_0039B020; } }
L_0039B004:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_0039B01C; } }
L_0039B00C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_0039B01C; } }
L_0039B014:
    set32(c.r[2], 0u + 63u);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 2;
L_0039B01C:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 1;
L_0039B020:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B028u); set32(c.r[5], c.r[16].w[0] + 56u);  if (depth < kMaxDepth) unit_00A6(c, 265u, depth + 1u); else { c.pc = 0x0039A7A0u; return; } if (c.pc != 0x0039B028u) [[unlikely]] return; }
L_0039B028:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B030u); st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_004F(c, 117u, depth + 1u); else { c.pc = 0x0023DCD0u; return; } if (c.pc != 0x0039B030u) [[unlikely]] return; }
L_0039B030:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0039B050:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0039B0C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 28592u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0039B09C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0039B09C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B09Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039B09Cu) [[unlikely]] return; }
L_0039B09C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B0ACu); st32((c.r[17].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_0010(c, 31u, depth + 1u); else { c.pc = 0x00140700u; return; } if (c.pc != 0x0039B0ACu) [[unlikely]] return; }
L_0039B0AC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0039B0C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B0C4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0039B0C4u) [[unlikely]] return; }
L_0039B0C4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0039B0C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0039B0E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0039B0F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0039B100:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0039B1F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B124u);  if (depth < kMaxDepth) unit_002A(c, 135u, depth + 1u); else { c.pc = 0x001A9560u; return; } if (c.pc != 0x0039B124u) [[unlikely]] return; }
L_0039B124:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0039B448; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 56u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0039B160; } }
    set32(c.r[4], 0u + 560u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B144u); st32((c.r[16].w[0] + 16u), 0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0039B144u) [[unlikely]] return; }
L_0039B144:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0039B158; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B158u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00AA(c, 124u, depth + 1u); else { c.pc = 0x003A94E0u; return; } if (c.pc != 0x0039B158u) [[unlikely]] return; }
L_0039B158:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_0039B1E4; } }
L_0039B160:
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.r[1].d[0] = c.r[2].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0039B1B8; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], 0u + 1000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B180u); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0039B180u) [[unlikely]] return; }
L_0039B180:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0039B1AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B194u); set32(c.r[4], 0u + 561u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x0039B194u) [[unlikely]] return; }
L_0039B194:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B1A8u); set32(c.r[7], c.r[16].w[0] + 28u);  if (depth < kMaxDepth) unit_006B(c, 215u, depth + 1u); else { c.pc = 0x002AF670u; return; } if (c.pc != 0x0039B1A8u) [[unlikely]] return; }
L_0039B1A8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0039B1AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[17].w[0]);  if (t) { goto L_0039B1E4; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_0039B1B8:
    set32(c.r[4], 0u + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B1C4u); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0039B1C4u) [[unlikely]] return; }
L_0039B1C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0039B1E0; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B1E0u); set32(c.r[5], 0u + 44u);  if (depth < kMaxDepth) unit_00A6(c, 57u, depth + 1u); else { c.pc = 0x00398A10u; return; } if (c.pc != 0x0039B1E0u) [[unlikely]] return; }
L_0039B1E0:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 1;
L_0039B1E4:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B1F8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039B1F8u) [[unlikely]] return; }
L_0039B1F8:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B20Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039B20Cu) [[unlikely]] return; }
L_0039B20C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0039B448; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0039B238; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0039B238; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B238u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039B238u) [[unlikely]] return; }
L_0039B238:
    st32((c.r[16].w[0] + 12u), 0u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0039B408; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0039B300; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0039B268; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0039B44C; } }
L_0039B268:
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.r[1].d[0] = c.r[2].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0039B2B8; } }
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B284u); set32(c.r[4], 0u + 1000u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0039B284u) [[unlikely]] return; }
L_0039B284:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0039B2B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B298u); set32(c.r[4], 0u + 561u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x0039B298u) [[unlikely]] return; }
L_0039B298:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B2ACu); set32(c.r[7], c.r[16].w[0] + 28u);  if (depth < kMaxDepth) unit_006B(c, 215u, depth + 1u); else { c.pc = 0x002AF670u; return; } if (c.pc != 0x0039B2ACu) [[unlikely]] return; }
L_0039B2AC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0039B2B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[17].w[0]);  if (t) { goto L_0039B2E4; } }
L_0039B2B8:
    st32((c.r[16].w[0] + 16u), c.r[4].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B2C4u); set32(c.r[4], 0u + 176u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0039B2C4u) [[unlikely]] return; }
L_0039B2C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0039B2E0; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B2E0u); set32(c.r[5], 0u + 44u);  if (depth < kMaxDepth) unit_00A6(c, 57u, depth + 1u); else { c.pc = 0x00398A10u; return; } if (c.pc != 0x0039B2E0u) [[unlikely]] return; }
L_0039B2E0:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 1;
L_0039B2E4:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B2F8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039B2F8u) [[unlikely]] return; }
L_0039B2F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039B448; } }
L_0039B300:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], 0u + 60u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0039B388; } }
    set32(c.r[2], 0u + 59u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0039B35C; } }
    set32(c.r[2], 0u + 58u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0039B330; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[16].w[0] + 28u);  if (t) { goto L_0039B3B4; } }
L_0039B330:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[2], c.r[2].w[0] + 25680u);
    c.r[1].d[0] = c.r[1].d[0] | 20352ull;
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[2].w[0] + c.r[1].w[0]);  if (t) { goto L_0039B3B0; } }
L_0039B35C:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[2], c.r[2].w[0] + 25680u);
    c.r[1].d[0] = c.r[1].d[0] | 20832ull;
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[2].w[0] + c.r[1].w[0]);  if (t) { goto L_0039B3B0; } }
L_0039B388:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[2], c.r[2].w[0] + 25680u);
    c.r[1].d[0] = c.r[1].d[0] | 21312ull;
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 10;
L_0039B3B0:
    set32(c.r[5], c.r[16].w[0] + 28u);
    c.budget -= 1;
L_0039B3B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B3BCu);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x0039B3BCu) [[unlikely]] return; }
L_0039B3BC:
    set32(c.r[2], 0u + 2u);
    set32(c.r[4], 0u + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B3CCu); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0039B3CCu) [[unlikely]] return; }
L_0039B3CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0039B3E8; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B3E8u); set32(c.r[5], 0u + 44u);  if (depth < kMaxDepth) unit_00A6(c, 57u, depth + 1u); else { c.pc = 0x00398A10u; return; } if (c.pc != 0x0039B3E8u) [[unlikely]] return; }
L_0039B3E8:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B400u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039B400u) [[unlikely]] return; }
L_0039B400:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039B448; } }
L_0039B408:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[4], 0u + 16u);  if (t) { goto L_0039B428; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B424u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039B424u) [[unlikely]] return; }
L_0039B424:
    set32(c.r[4], 0u + 16u);
    c.budget -= 1;
L_0039B428:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B430u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0039B430u) [[unlikely]] return; }
L_0039B430:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0039B440; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B440u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 4u, depth + 1u); else { c.pc = 0x00138030u; return; } if (c.pc != 0x0039B440u) [[unlikely]] return; }
L_0039B440:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B448u);  if (depth < kMaxDepth) unit_0051(c, 4u, depth + 1u); else { c.pc = 0x00244030u; return; } if (c.pc != 0x0039B448u) [[unlikely]] return; }
L_0039B448:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0039B44C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0039B460:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00399D10u | kUnwind; return; } goto L_00399D10; }
L_0039B470:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00398B60u | kUnwind; return; } goto L_00398B60; }
L_0039B480:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], c.r[5].w[0] << 2);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 100u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 10u));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_0039B4AC; } }
    breakpoint(c, 0x0039B4A8u);
    c.budget -= 1;
L_0039B4AC:
    c.r[16].d[0] = c.lo.d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B4B8u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0039B4B8u) [[unlikely]] return; }
L_0039B4B8:
    c.r[1].d[0] = c.r[16].sd[0] < 86ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] - 100u);  if (t) { goto L_0039B4E8; } }
    set32(c.r[3], c.r[16].w[0] << 1);
    c.r[1].d[0] = 0ull | 43780ull;
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[1].w[0]);  if (t) { goto L_0039B504; } }
L_0039B4E8:
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 16u);
    c.budget -= 7;
L_0039B504:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039B520:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B534u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 39u, depth + 1u); else { c.pc = 0x001486F0u; return; } if (c.pc != 0x0039B534u) [[unlikely]] return; }
L_0039B534:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] - 28304u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B550u); set32(c.r[6], 0u + 320u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0039B550u) [[unlikely]] return; }
L_0039B550:
    set32(c.r[4], c.r[16].w[0] + 352u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B560u); set32(c.r[6], 0u + 320u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0039B560u) [[unlikely]] return; }
L_0039B560:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 3600u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B574u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 45u, depth + 1u); else { c.pc = 0x001487B0u; return; } if (c.pc != 0x0039B574u) [[unlikely]] return; }
L_0039B574:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039B590:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0039B5D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 28304u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B5C0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 42u, depth + 1u); else { c.pc = 0x00148750u; return; } if (c.pc != 0x0039B5C0u) [[unlikely]] return; }
L_0039B5C0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0039B5DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B5D8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0039B5D8u) [[unlikely]] return; }
L_0039B5D8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0039B5DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0039B5F0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B614u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x0039B614u) [[unlikely]] return; }
L_0039B614:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B628u); st32((c.r[29].w[0] + 124u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0039B628u) [[unlikely]] return; }
L_0039B628:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B63Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 125u, depth + 1u); else { c.pc = 0x0015D850u; return; } if (c.pc != 0x0039B63Cu) [[unlikely]] return; }
L_0039B63C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B644u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_00A7(c, 22u, depth + 1u); else { c.pc = 0x0039C620u; return; } if (c.pc != 0x0039B644u) [[unlikely]] return; }
L_0039B644:
    set32(c.r[16], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B654u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 352u, depth + 1u); else { c.pc = 0x0039B480u; return; } if (c.pc != 0x0039B654u) [[unlikely]] return; }
L_0039B654:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 358u));
    set32(c.r[2], 0u + 255u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0039B778; } }
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B670u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 352u, depth + 1u); else { c.pc = 0x0039B480u; return; } if (c.pc != 0x0039B670u) [[unlikely]] return; }
L_0039B670:
    set32(c.r[5], c.r[16].w[0] + 4u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B680u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x0039B680u) [[unlikely]] return; }
L_0039B680:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 346u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0039B694; } }
    set32(c.r[5], c.r[5].w[0] + 2u);
    c.budget -= 1;
L_0039B694:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 354u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], c.r[5].w[0] << 2);  if (t) { goto L_0039B6AC; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[5].w[0] << 2);
    c.budget -= 2;
L_0039B6AC:
    set32(c.r[6], c.r[17].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[8], c.r[3].w[0] << 6);
    set32(c.r[5], 0u + 25u);
    set32(c.r[7], c.r[2].w[0] + c.r[8].w[0]);
    c.budget -= 5;
L_0039B6C0:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 2u)));
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[7], c.r[7].w[0] + 4u);
    st16((c.r[6].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039B6C0u | kUnwind; return; } goto L_0039B6C0; } }
    set32(c.r[3], c.r[8].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[17].w[0] + 132u);
    set32(c.r[7], c.r[3].w[0] + 100u);
    set32(c.r[5], 0u + 25u);
    c.budget -= 4;
L_0039B6F0:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 2u)));
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[7], c.r[7].w[0] + 4u);
    st16((c.r[6].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039B6F0u | kUnwind; return; } goto L_0039B6F0; } }
    set32(c.r[3], c.r[8].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[17].w[0] + 232u);
    set32(c.r[7], c.r[3].w[0] + 200u);
    set32(c.r[5], 0u + 5u);
    c.budget -= 4;
L_0039B720:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 2u)));
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[7], c.r[7].w[0] + 4u);
    st16((c.r[6].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039B720u | kUnwind; return; } goto L_0039B720; } }
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[17].w[0] + 252u);
    set32(c.r[6], c.r[2].w[0] + 220u);
    set32(c.r[4], 0u + 25u);
    c.budget -= 4;
L_0039B750:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2u)));
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 4u);
    st16((c.r[5].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039B750u | kUnwind; return; } goto L_0039B750; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039B854; } }
L_0039B778:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B780u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x0039B780u) [[unlikely]] return; }
L_0039B780:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B790u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 352u, depth + 1u); else { c.pc = 0x0039B480u; return; } if (c.pc != 0x0039B790u) [[unlikely]] return; }
L_0039B790:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 358u));
    set32(c.r[5], c.r[17].w[0] + 32u);
    set32(c.r[4], 0u + 25u);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[7], c.r[16].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 8;
L_0039B7B0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2u)));
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 4u);
    st16((c.r[5].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039B7B0u | kUnwind; return; } goto L_0039B7B0; } }
    set32(c.r[6], c.r[7].w[0] + 100u);
    set32(c.r[5], c.r[17].w[0] + 132u);
    set32(c.r[4], 0u + 25u);
    c.budget -= 3;
L_0039B7DC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2u)));
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 4u);
    st16((c.r[5].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039B7DCu | kUnwind; return; } goto L_0039B7DC; } }
    set32(c.r[6], c.r[7].w[0] + 200u);
    set32(c.r[5], c.r[17].w[0] + 232u);
    set32(c.r[4], 0u + 5u);
    c.budget -= 3;
L_0039B808:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2u)));
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 4u);
    st16((c.r[5].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039B808u | kUnwind; return; } goto L_0039B808; } }
    set32(c.r[6], c.r[7].w[0] + 220u);
    set32(c.r[5], c.r[17].w[0] + 252u);
    set32(c.r[4], 0u + 25u);
    c.budget -= 3;
L_0039B834:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2u)));
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 4u);
    st16((c.r[5].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039B834u | kUnwind; return; } goto L_0039B834; } }
L_0039B854:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 25657u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], c.r[17].w[0] + 32u);  if (t) { goto L_0039B92C; } }
    set32(c.r[5], c.r[17].w[0] + 352u);
    set32(c.r[4], 0u + 25u);
    c.budget -= 2;
L_0039B86C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2u)));
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 4u);
    st16((c.r[5].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039B86Cu | kUnwind; return; } goto L_0039B86C; } }
    set32(c.r[6], c.r[17].w[0] + 132u);
    set32(c.r[5], c.r[17].w[0] + 452u);
    set32(c.r[4], 0u + 25u);
    c.budget -= 3;
L_0039B898:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2u)));
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 4u);
    st16((c.r[5].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039B898u | kUnwind; return; } goto L_0039B898; } }
    set32(c.r[6], c.r[17].w[0] + 232u);
    set32(c.r[5], c.r[17].w[0] + 552u);
    set32(c.r[4], 0u + 5u);
    c.budget -= 3;
L_0039B8C4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2u)));
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 4u);
    st16((c.r[5].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039B8C4u | kUnwind; return; } goto L_0039B8C4; } }
    set32(c.r[6], c.r[17].w[0] + 252u);
    set32(c.r[5], c.r[17].w[0] + 572u);
    set32(c.r[4], 0u + 25u);
    c.budget -= 3;
L_0039B8F0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2u)));
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 4u);
    st16((c.r[5].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039B8F0u | kUnwind; return; } goto L_0039B8F0; } }
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B91Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x0039B91Cu) [[unlikely]] return; }
L_0039B91C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B924u); set32(c.r[4], ld32((c.r[29].w[0] + 124u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0039B924u) [[unlikely]] return; }
L_0039B924:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0039BB54; } }
L_0039B92C:
    set32(c.r[16], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B93Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A6(c, 352u, depth + 1u); else { c.pc = 0x0039B480u; return; } if (c.pc != 0x0039B93Cu) [[unlikely]] return; }
L_0039B93C:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 358u));
    set32(c.r[2], 0u + 255u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0039BA60; } }
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B958u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A6(c, 352u, depth + 1u); else { c.pc = 0x0039B480u; return; } if (c.pc != 0x0039B958u) [[unlikely]] return; }
L_0039B958:
    set32(c.r[5], c.r[16].w[0] + 4u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039B968u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x0039B968u) [[unlikely]] return; }
L_0039B968:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 346u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0039B97C; } }
    set32(c.r[5], c.r[5].w[0] + 2u);
    c.budget -= 1;
L_0039B97C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 354u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], c.r[5].w[0] << 2);  if (t) { goto L_0039B994; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[5].w[0] << 2);
    c.budget -= 2;
L_0039B994:
    set32(c.r[6], c.r[17].w[0] + 352u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[8], c.r[3].w[0] << 6);
    set32(c.r[5], 0u + 25u);
    set32(c.r[7], c.r[2].w[0] + c.r[8].w[0]);
    c.budget -= 5;
L_0039B9A8:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 2u)));
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[7], c.r[7].w[0] + 4u);
    st16((c.r[6].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039B9A8u | kUnwind; return; } goto L_0039B9A8; } }
    set32(c.r[3], c.r[8].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[17].w[0] + 452u);
    set32(c.r[7], c.r[3].w[0] + 100u);
    set32(c.r[5], 0u + 25u);
    c.budget -= 4;
L_0039B9D8:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 2u)));
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[7], c.r[7].w[0] + 4u);
    st16((c.r[6].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039B9D8u | kUnwind; return; } goto L_0039B9D8; } }
    set32(c.r[3], c.r[8].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[17].w[0] + 552u);
    set32(c.r[7], c.r[3].w[0] + 200u);
    set32(c.r[5], 0u + 5u);
    c.budget -= 4;
L_0039BA08:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 2u)));
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[7], c.r[7].w[0] + 4u);
    st16((c.r[6].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039BA08u | kUnwind; return; } goto L_0039BA08; } }
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[17].w[0] + 572u);
    set32(c.r[6], c.r[2].w[0] + 220u);
    set32(c.r[4], 0u + 25u);
    c.budget -= 4;
L_0039BA38:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2u)));
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 4u);
    st16((c.r[5].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039BA38u | kUnwind; return; } goto L_0039BA38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 112u);  if (t) { goto L_0039BB40; } }
L_0039BA60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039BA68u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x0039BA68u) [[unlikely]] return; }
L_0039BA68:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039BA78u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A6(c, 352u, depth + 1u); else { c.pc = 0x0039B480u; return; } if (c.pc != 0x0039BA78u) [[unlikely]] return; }
L_0039BA78:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 358u));
    set32(c.r[5], c.r[17].w[0] + 352u);
    set32(c.r[4], 0u + 25u);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[7], c.r[16].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 8;
L_0039BA98:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2u)));
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 4u);
    st16((c.r[5].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039BA98u | kUnwind; return; } goto L_0039BA98; } }
    set32(c.r[6], c.r[7].w[0] + 100u);
    set32(c.r[5], c.r[17].w[0] + 452u);
    set32(c.r[4], 0u + 25u);
    c.budget -= 3;
L_0039BAC4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2u)));
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 4u);
    st16((c.r[5].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039BAC4u | kUnwind; return; } goto L_0039BAC4; } }
    set32(c.r[6], c.r[7].w[0] + 200u);
    set32(c.r[5], c.r[17].w[0] + 552u);
    set32(c.r[4], 0u + 5u);
    c.budget -= 3;
L_0039BAF0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2u)));
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 4u);
    st16((c.r[5].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039BAF0u | kUnwind; return; } goto L_0039BAF0; } }
    set32(c.r[6], c.r[7].w[0] + 220u);
    set32(c.r[5], c.r[17].w[0] + 572u);
    set32(c.r[4], 0u + 25u);
    c.budget -= 3;
L_0039BB1C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2u)));
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 4u);
    st16((c.r[5].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039BB1Cu | kUnwind; return; } goto L_0039BB1C; } }
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 1;
L_0039BB40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039BB48u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x0039BB48u) [[unlikely]] return; }
L_0039BB48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039BB50u); set32(c.r[4], ld32((c.r[29].w[0] + 124u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0039BB50u) [[unlikely]] return; }
L_0039BB50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0039BB54:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0039BB70:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    c.r[6].d[0] = 0ull + 0ull;
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 25500u);
    c.budget -= 6;
L_0039BB88:
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[2].w[0] + 4u), c.r[5].w[0]);
    c.r[2].d[0] = c.r[6].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[3].w[0] + 48u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039BB88u | kUnwind; return; } goto L_0039BB88; } }
    st32((c.r[4].w[0] + 36u), c.r[5].w[0]);
    set32(c.r[3], 0u + 255u);
    st8((c.r[4].w[0] + 40u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 44u), 0u);
    st32((c.r[4].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 60u), c.r[3].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 64u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_0039BBD0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[5], 0u + 56u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039BBF0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0010(c, 29u, depth + 1u); else { c.pc = 0x00140690u; return; } if (c.pc != 0x0039BBF0u) [[unlikely]] return; }
L_0039BBF0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], 0u + 7u);
    set32(c.r[3], c.r[3].w[0] - 28352u);
    set32(c.r[4], 0u + 672u);
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039BC14u); st32((c.r[1].w[0] - 13080u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0039BC14u) [[unlikely]] return; }
L_0039BC14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0039BC24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039BC24u);  if (depth < kMaxDepth) unit_00A6(c, 354u, depth + 1u); else { c.pc = 0x0039B520u; return; } if (c.pc != 0x0039BC24u) [[unlikely]] return; }
L_0039BC24:
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039BC34u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 22u, depth + 1u); else { c.pc = 0x0039C620u; return; } if (c.pc != 0x0039BC34u) [[unlikely]] return; }
L_0039BC34:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 25657u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_0039BC5C; } }
    set32(c.r[3], ld32((c.r[1].w[0] - 13056u)));
    c.r[2].d[0] = c.r[3].sd[0] < 7220ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0039BCC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0039BCC0; } }
L_0039BC5C:
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[29].w[0] + 64u);  if (t) { goto L_0039BCC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039BC74u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 352u, depth + 1u); else { c.pc = 0x0039B480u; return; } if (c.pc != 0x0039BC74u) [[unlikely]] return; }
L_0039BC74:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 234u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].sd[0] < 7220ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 7229ll ? 1ull : 0ull;  if (t) { goto L_0039BCC0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0039BCC0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 13072u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0039BCC0; } }
    set32(c.r[5], c.r[29].w[0] + 108u);
    set32(c.r[6], c.r[29].w[0] + 104u);
    set32(c.r[7], c.r[29].w[0] + 100u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039BCB4u); set32(c.r[8], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_00A7(c, 37u, depth + 1u); else { c.pc = 0x0039CC50u; return; } if (c.pc != 0x0039BCB4u) [[unlikely]] return; }
L_0039BCB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0039BCC0; } }
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 234u)));
    c.budget -= 1;
L_0039BCC0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0039BCD8; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039BCD4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_009D(c, 391u, depth + 1u); else { c.pc = 0x00377BB0u; return; } if (c.pc != 0x0039BCD4u) [[unlikely]] return; }
L_0039BCD4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0039BCD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0039BCF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0039BD64; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 28352u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0039BD3C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0039BD3C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039BD3Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039BD3Cu) [[unlikely]] return; }
L_0039BD3C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039BD4Cu); st32((c.r[17].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_0010(c, 31u, depth + 1u); else { c.pc = 0x00140700u; return; } if (c.pc != 0x0039BD4Cu) [[unlikely]] return; }
L_0039BD4C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0039BD68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039BD64u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0039BD64u) [[unlikely]] return; }
L_0039BD64:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0039BD68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0039BD80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[1].w[0] - 13080u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x004B0000u);  if (t) { goto L_0039BDF4; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 25657u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0039BDB8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], 0u + 255u);
    st32((c.r[1].w[0] - 13072u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st8((c.r[1].w[0] + 8901u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_0039BDB8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039BDCCu); st32((c.r[29].w[0] + 28u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0039BDCCu) [[unlikely]] return; }
L_0039BDCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039BDD4u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0039BDD4u) [[unlikely]] return; }
L_0039BDD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0039BDE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039BDE4u);  if (depth < kMaxDepth) unit_00A6(c, 403u, depth + 1u); else { c.pc = 0x0039BBD0u; return; } if (c.pc != 0x0039BDE4u) [[unlikely]] return; }
L_0039BDE4:
    set32(c.r[4], ld32((c.r[29].w[0] + 28u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039BDF4u); st32((c.r[1].w[0] - 13080u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0039BDF4u) [[unlikely]] return; }
L_0039BDF4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039BE00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[1].w[0] - 13080u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0039BE30; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0039BE30; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039BE30u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039BE30u) [[unlikely]] return; }
L_0039BE30:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[1].w[0] - 13080u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0039BE50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039BE70u); set32(c.r[4], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_0011(c, 177u, depth + 1u); else { c.pc = 0x00146C10u; return; } if (c.pc != 0x0039BE70u) [[unlikely]] return; }
L_0039BE70:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 8u);  if (t) { goto L_0039BE88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039BE84u);  if (depth < kMaxDepth) unit_0011(c, 182u, depth + 1u); else { c.pc = 0x00146C90u; return; } if (c.pc != 0x0039BE84u) [[unlikely]] return; }
L_0039BE84:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0039BE88:
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0039BEAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039BE9Cu);  if (depth < kMaxDepth) unit_009E(c, 76u, depth + 1u); else { c.pc = 0x00378BC0u; return; } if (c.pc != 0x0039BE9Cu) [[unlikely]] return; }
L_0039BE9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0039BEAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039BEACu);  if (depth < kMaxDepth) unit_00A6(c, 427u, depth + 1u); else { c.pc = 0x0039BEC0u; return; } if (c.pc != 0x0039BEACu) [[unlikely]] return; }
L_0039BEAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0039BEC0:
    set32(c.r[29], c.r[29].w[0] - 432u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[29].w[0] + 384u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039BEE4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00A7(c, 22u, depth + 1u); else { c.pc = 0x0039C620u; return; } if (c.pc != 0x0039BEE4u) [[unlikely]] return; }
L_0039BEE4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039BEF0u); set32(c.r[5], c.r[29].w[0] + 384u);  if (depth < kMaxDepth) unit_00A7(c, 50u, depth + 1u); else { c.pc = 0x0039D090u; return; } if (c.pc != 0x0039BEF0u) [[unlikely]] return; }
L_0039BEF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039BEF8u); set32(c.r[16], 0u + 3u);  if (depth < kMaxDepth) unit_00A7(c, 21u, depth + 1u); else { c.pc = 0x0039C480u; return; } if (c.pc != 0x0039BEF8u) [[unlikely]] return; }
L_0039BEF8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 25657u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0039BF10; } }
    set32(c.r[18], 0u + 1u);
    c.budget -= 1;
L_0039BF10:
    set32(c.r[2], 0u + 2u);
    st32((c.r[29].w[0] + 428u), 0u);
    st32((c.r[29].w[0] + 424u), 0u);
    c.budget -= 5;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; st32((c.r[29].w[0] + 420u), 0u);  if (t) { goto L_0039BF94; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 428u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039BF34u); set32(c.r[6], c.r[29].w[0] + 384u);  if (depth < kMaxDepth) unit_00A7(c, 30u, depth + 1u); else { c.pc = 0x0039C9F0u; return; } if (c.pc != 0x0039BF34u) [[unlikely]] return; }
L_0039BF34:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0039BF70; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039BF4Cu); set32(c.r[5], c.r[29].w[0] + 384u);  if (depth < kMaxDepth) unit_00A7(c, 28u, depth + 1u); else { c.pc = 0x0039C980u; return; } if (c.pc != 0x0039BF4Cu) [[unlikely]] return; }
L_0039BF4C:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0039BF64; } }
    set32(c.r[2], 0u + 6346u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 424u), c.r[2].w[0]);  if (t) { goto L_0039BF7C; } }
L_0039BF64:
    set32(c.r[2], 0u + 6291u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 424u), c.r[2].w[0]);  if (t) { goto L_0039BF7C; } }
L_0039BF70:
    set32(c.r[5], c.r[29].w[0] + 424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039BF7Cu); set32(c.r[6], c.r[29].w[0] + 384u);  if (depth < kMaxDepth) unit_00A7(c, 43u, depth + 1u); else { c.pc = 0x0039CF00u; return; } if (c.pc != 0x0039BF7Cu) [[unlikely]] return; }
L_0039BF7C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 420u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039BF8Cu); set32(c.r[6], c.r[29].w[0] + 384u);  if (depth < kMaxDepth) unit_00A7(c, 33u, depth + 1u); else { c.pc = 0x0039CAC0u; return; } if (c.pc != 0x0039BF8Cu) [[unlikely]] return; }
L_0039BF8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0039BFE8; } }
L_0039BF94:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0039BFD4; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 428u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039BFACu); set32(c.r[6], c.r[29].w[0] + 384u);  if (depth < kMaxDepth) unit_00A7(c, 30u, depth + 1u); else { c.pc = 0x0039C9F0u; return; } if (c.pc != 0x0039BFACu) [[unlikely]] return; }
L_0039BFAC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 420u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039BFBCu); set32(c.r[6], c.r[29].w[0] + 384u);  if (depth < kMaxDepth) unit_00A7(c, 33u, depth + 1u); else { c.pc = 0x0039CAC0u; return; } if (c.pc != 0x0039BFBCu) [[unlikely]] return; }
L_0039BFBC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 424u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039BFCCu); set32(c.r[6], c.r[29].w[0] + 384u);  if (depth < kMaxDepth) unit_00A7(c, 43u, depth + 1u); else { c.pc = 0x0039CF00u; return; } if (c.pc != 0x0039BFCCu) [[unlikely]] return; }
L_0039BFCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039BFE4; } }
L_0039BFD4:
    set32(c.r[5], c.r[29].w[0] + 424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039BFE0u); set32(c.r[6], c.r[29].w[0] + 384u);  if (depth < kMaxDepth) unit_00A7(c, 43u, depth + 1u); else { c.pc = 0x0039CF00u; return; } if (c.pc != 0x0039BFE0u) [[unlikely]] return; }
L_0039BFE0:
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_0039BFE4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0039BFE8:
    set32(c.r[5], c.r[29].w[0] + 428u);
    set32(c.r[6], c.r[29].w[0] + 420u);
    set32(c.r[7], c.r[29].w[0] + 424u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039BFFCu); set32(c.r[8], c.r[29].w[0] + 384u);  if (depth < kMaxDepth) unit_00A7(c, 37u, depth + 1u); else { c.pc = 0x0039CC50u; return; } if (c.pc != 0x0039BFFCu) [[unlikely]] return; }
L_0039BFFC:
    st32((c.r[29].w[0] + 80u), c.r[16].w[0]);
    c.budget -= 1;
    [[clang::musttail]] return unit_00A7(c, 1u, depth);
}

}
